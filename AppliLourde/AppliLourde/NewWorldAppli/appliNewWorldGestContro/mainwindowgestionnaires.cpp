#include "mainwindowgestionnaires.h"
#include "ui_mainwindowgestionnaires.h"
#include <QTime>
#include <QDateTime>
#include <QMessageBox>
#include <QListWidget>
#include <QListWidgetItem>
#include <QGraphicsView>
#include <QGraphicsLineItem>
#include <QGraphicsTextItem>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include "dialogajoutvisite.h"
#include "dialogvisitecontroleur.h"

MainWindowGestionnaires::MainWindowGestionnaires(QString id,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowGestionnaires)
{
    ui->setupUi(this);
    remplissageTableau();
    ui->labelEmploye->setText("Ajouter un employe");
    chargementListRayon();
    chargementListProduitsDemandes();
    chargementProducteur();
    idSession = id;
}

MainWindowGestionnaires::~MainWindowGestionnaires()
{
    delete ui;
}

QString MainWindowGestionnaires::maxIdRayon(){
    QSqlQuery idRayon("Select IFNULL(max(idRay), 0)+1 from rayon");
    QString id;
    if(idRayon.next()){
        id = idRayon.value(0).toString();
        qDebug() << id;
    }
    return id;
}

QString MainWindowGestionnaires::maxIdCategorie(){
    QSqlQuery idCategorie("Select ifnull(max(idCat), 0)+1 from categorie");
    QString id;
    if(idCategorie.next()){
        id = idCategorie.value(0).toString();
    }
    return id;
}

QString MainWindowGestionnaires::maxIdProduit(){
    QSqlQuery idProduit("Select ifnull(max(idProd), 0)+1 from produit");
    QString id;
    if(idProduit.next()){
        id = idProduit.value(0).toString();
        qDebug() << id;
    }
    return id;
}

        // PARTIE PERSONNEL //

void MainWindowGestionnaires::on_pushButtonValider_clicked()
{
    if(ui->labelEmploye->text() == "Ajouter un employe"){
        // DialogConnexion test;
        // qDebug() << " Nom : " + test.getNom();
        nom = ui->lineEditNom->text();
        prenom = ui->lineEditPrenom->text();
        pseudo = ui->lineEditPseudo->text();
        rue = ui->lineEditRue->text();
        codePostale = ui->lineEditCodePostal->text();
        ville = ui->lineEditVille->text();
        // tel = ui->lineEditTel->text();
        // telFix = ui->lineEditTelFix->text();
        if(ui->radioButtonControleur->isChecked()){
            type = "1";
        } else {
            type = "2";
        }
        idMaxUtilisateur = idMaxEmploye("personnel");
        mdpInitial = randomMdp(7);
        qDebug() << mdpInitial;
        QString dateAjd = QDate::currentDate().toString("yyyy-MM-dd");
        qDebug() << dateAjd;
        // Requête d'ajout des infos Utilisateur
        QString requeteAjoutUtilisateur = "insert into personnel(idPers, nomPers, prenomPers,loginPers,adressePers,codePostalPers,villePers,idTypeP,motDePassePers,dateEmbauchePers,supprimePers) values (";
        qDebug() << idMaxUtilisateur;
        requeteAjoutUtilisateur += QString::number(idMaxUtilisateur);
        rue = rue.replace("'", "\\'");
        requeteAjoutUtilisateur +=",'" + nom + "','" + prenom + "','" + pseudo + "','" + rue + "'," + codePostale + ",'" + ville + "'," + "," + type + ",'" + mdpInitial + "','"+ dateAjd +"',0);";
        qDebug() << requeteAjoutUtilisateur;
        // Requête d'ajout du nom et prénom dans Gestionnaire
        // QString requeteAjoutGestionnaire = "insert into Gestionnaire(id,nom,prenom,idUtilisateur) values (";
        // requeteAjoutGestionnaire += QString::number(idMaxGestionnaire) + ",'" + nom + "','" + prenom + "'," + QString::number(idMaxUtilisateur) + ");";
        // qDebug() << requeteAjoutGestionnaire;

        QSqlQuery ajoutUtilisateurBdd(requeteAjoutUtilisateur);
        // QSqlQuery ajoutGestionnaireBdd(requeteAjoutGestionnaire);

        /*if(ajoutUtilisateurBdd.next()){
            qDebug() << "Utilisateur enregistré";
        }*/
        remplissageTableau();
    } else {
        QString nomChange = ui->lineEditNom->text();
        QString prenomChange = ui->lineEditPrenom->text();
        QString rueChange = ui->lineEditRue->text();
        QString cpChange = ui->lineEditCodePostal->text();
        QString villeChange = ui->lineEditVille->text();
        // QString telChange = ui->lineEditTel->text();
        // QString telFChange = ui->lineEditTelFix->text();
        QString typeChange;
        if(ui->radioButtonControleur->isChecked()){
            typeChange = "1";
        } else {
            typeChange = "2";
        }
        qDebug() << nom;
        if(nom != nomChange){
            QSqlQuery modifBdd("update personnel set nomPers ='"+ nomChange + "' where idPers =" + id + ";" );
            // qDebug() << nomChange + id;
            modifBdd.exec();
        }
        if(prenom != prenomChange){
            QSqlQuery modifBdd("update personnel set prenomPers='"+ prenomChange + "' where idPers="+ id +";");
            modifBdd.exec();
        }
        if(rue != rueChange){
            QSqlQuery modifBdd("update personnel set adressePers='"+ rueChange + "' where idPers="+ id +";");
            modifBdd.exec();
        }
        if(codePostale != cpChange){
            QSqlQuery modifBdd("update personnel set codePostalPers="+ cpChange + " where idPers="+ id +";");
            modifBdd.exec();
        }
        if(ville != villeChange){
            QSqlQuery modifBdd("update personnel set villePers='"+ villeChange + "' where idPers="+ id +";");
            modifBdd.exec();
        }
        /*if(tel != telChange){
            QSqlQuery modifBdd("update personnel set telPers="+ telChange + " where idPers="+ id +";");
            modifBdd.exec();
        }*/
        /*if(telFix != telFChange){
            QSqlQuery modifBdd("update Utilisateur set telFix="+ telFChange + " where id="+ id +";");
            modifBdd.exec();
        }*/
        if(type != typeChange){
            QSqlQuery modifBdd("update personnel set idTypeP='"+ typeChange + "' where idPers="+ id +";");
            modifBdd.exec();
        }
        remplissageTableau();
    }
}

int MainWindowGestionnaires::idMaxEmploye(QString table)
{
    int idMax;
    QSqlQuery rechercheIdMax("Select ifnull(max(idPers),0)+1 from " + table + ";");
    qDebug() << "ID : Select ifnull(max(idPers),0)+1 from " + table + ";";
    if(rechercheIdMax.next()){
        idMax = rechercheIdMax.value(0).toInt();
    }
    return idMax;
}


// CHANGER PAR PERSONNEL
void MainWindowGestionnaires::remplissageTableau()
{
    qDebug() << "void MainWindowGestionnaires::remplissageTableau()";
    // Requête de récupération des infos Utilisateur
    QSqlQuery rechercheUtilisateur("Select idPers, nomPers, prenomPers, adressePers, codePostalPers, villePers, idTypeP from personnel where supprimePers = 0;");
    // Requête de récupération du nom et prénom
    // QSqlQuery rechercheGestionnaire("Select nom, prenom from Gestionnaire;");
    int row = 0;
    ui->tableWidgetEmploye->setRowCount(rechercheUtilisateur.size());
    while(rechercheUtilisateur.next()){
        QString nomGest = rechercheUtilisateur.value("nomPers").toString();
        qDebug() << nomGest;
        QString prenomGest = rechercheUtilisateur.value("prenomPers").toString();
        qDebug() << prenomGest;
        QTableWidgetItem * nomGestItem = new QTableWidgetItem(nomGest);
        QTableWidgetItem * prenomGestItem = new QTableWidgetItem(prenomGest);

        ui->tableWidgetEmploye->setItem(row, 0, nomGestItem);
        ui->tableWidgetEmploye->setItem(row, 1, prenomGestItem);

        QString infosRue = rechercheUtilisateur.value("adressePers").toString();
        qDebug() << infosRue;
        QTableWidgetItem * infosRueItem = new QTableWidgetItem(infosRue);
        ui->tableWidgetEmploye->setItem(row, 2, infosRueItem);

        QString infosCp = rechercheUtilisateur.value("codePostalPers").toString();
        qDebug() << infosCp;
        QTableWidgetItem * infosCpItem = new QTableWidgetItem(infosCp);
        ui->tableWidgetEmploye->setItem(row, 3, infosCpItem);

        QString infosVille = rechercheUtilisateur.value("villePers").toString();
        qDebug() << infosVille;
        QTableWidgetItem * infosVilleItem = new QTableWidgetItem(infosVille);
        ui->tableWidgetEmploye->setItem(row, 4, infosVilleItem);

        /*QString infosTel = rechercheUtilisateur.value("telPers").toString();
        qDebug() << infosTel;
        QTableWidgetItem * infosTelItem = new QTableWidgetItem(infosTel);
        ui->tableWidgetEmploye->setItem(row, 5, infosTelItem);
        */

        /*QString infosTelFix = rechercheUtilisateur.value("telFix").toString();
        qDebug() << infosTelFix;
        QTableWidgetItem * infosTelFixItem = new QTableWidgetItem(infosTelFix);
        ui->tableWidgetEmploye->setItem(row, 6, infosTelFixItem);*/

        QString infosType = rechercheUtilisateur.value("idTypeP").toString();
        qDebug() << infosType;
        QTableWidgetItem * infosTypeItem = new QTableWidgetItem(infosType);
        ui->tableWidgetEmploye->setItem(row, 6, infosTypeItem);

        ui->tableWidgetEmploye->item(row,0)->setData(32,rechercheUtilisateur.value("idPers").toString());

        qDebug() << row;

        row ++;
    }
}


void MainWindowGestionnaires::on_pushButtonModifEmploye_clicked()
{
    ui->labelEmploye->setText("Modification d'un employé.");
    QList<QTableWidgetItem*> listeItemSelectionne = ui->tableWidgetEmploye->selectedItems();
    int row;
    for(int i = 0; i < listeItemSelectionne.count(); i++){
        // qDebug() << listeItemSelectionne[i]->text();
        row = listeItemSelectionne[i]->row();
        // qDebug() << listeItemSelectionne[i]->row();
    }
    id = ui->tableWidgetEmploye->item(row,0)->data(32).toString();
    qDebug() << id;
    // Récupération des données Utilisateur
    QSqlQuery recupUtilisateur("select nomPers, prenomPers, adressePers,codePostalPers,villePers, idTypeP from personnel where idPers=" + id + ";");
    if(recupUtilisateur.next()){
        rue = recupUtilisateur.value("adressePers").toString();
        codePostale = recupUtilisateur.value("codePostalPers").toString();
        ville = recupUtilisateur.value("villePers").toString();
        // tel = recupUtilisateur.value("telPers").toString();
        // telFix = recupUtilisateur.value("telFix").toString;()
        type = recupUtilisateur.value("idTypeP").toString();
        nom = recupUtilisateur.value("nomPers").toString();
        prenom = recupUtilisateur.value("prenomPers").toString();
    }
    // Récupération des données Gestionnaire/Controleur
    /*QSqlQuery recupGest("select nom, prenom from Gestionnaire where idUtilisateur=" + id + ";");
    if(recupGest.next()){
        nom = recupGest.value("nom").toString();
        prenom = recupGest.value("prenom").toString();
    }*/
    ui->lineEditNom->setText(nom);
    ui->lineEditPrenom->setText(prenom);
    ui->lineEditRue->setText(rue);
    ui->lineEditCodePostal->setText(codePostale);
    ui->lineEditVille->setText(ville);
    ui->lineEditTel->setText(tel);
    // ui->lineEditTelFix->setText(telFix);
    if(type == "1"){
        ui->radioButtonGestionnaire->setChecked(true);
        ui->radioButtonControleur->setChecked(false);
    } else {
        ui->radioButtonGestionnaire->setChecked(false);
        ui->radioButtonControleur->setChecked(true);
    }
}


void MainWindowGestionnaires::on_pushButtonAnnuler_clicked()
{
    ui->labelEmploye->setText("Ajout d'un employé.");
    ui->lineEditCodePostal->clear();
    ui->lineEditNom->clear();
    ui->lineEditPrenom->clear();
    ui->lineEditPseudo->clear();
    ui->lineEditRue->clear();
    ui->lineEditTel->clear();
    // ui->lineEditTelFix->clear();
    ui->lineEditVille->clear();
}

QString MainWindowGestionnaires::randomMdp(int nbreMot){
    const QString possibleChar="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789&é#'([-|^_ç@à])°=+}$*%!?><";
    QString randomString;
    QTime time;
    qsrand(time.currentTime().msec());
    for(int i=0; i<nbreMot; i++){
        int index = qrand() % possibleChar.length();
        QChar nextChar = possibleChar.at(index);
        randomString.append(nextChar);
    }
    return randomString;
}

void MainWindowGestionnaires::on_pushButtonSupprimer_clicked()
{
    qDebug() << "void MainWindowGestionnaires::on_pushButtonSupprimer_clicked()";
    QMessageBox::StandardButton reply;
     reply = QMessageBox::question(this, "Test", "Voulez vous vraiment supprimer la séléction?",
                                   QMessageBox::Yes|QMessageBox::No);
     if (reply == QMessageBox::Yes) {
        QList<QTableWidgetItem*> listeItemSelectionne = ui->tableWidgetEmploye->selectedItems();
        int row;
        for(int i = 0; i < listeItemSelectionne.count(); i++){
            // qDebug() << listeItemSelectionne[i]->text();
            row = listeItemSelectionne[i]->row();
            // qDebug() << listeItemSelectionne[i]->row();
        }
        id = ui->tableWidgetEmploye->item(row,0)->data(32).toString();
        // qDebug() << id;
        QSqlQuery supprimeEmploye("update personnel set supprimePers = 1 where idPers="+ id +";");
        // qDebug() << "update Utilisateur set supprime = 1 where id="+ id +";";
        supprimeEmploye.exec();
        remplissageTableau();
     }
}


            // PARTIE RAYON/TYPE PRODUIT // 


void MainWindowGestionnaires::chargementListRayon(){
    QSqlQuery chargementRayon("Select idRay, libelleRay from rayon where supprimeRay = 0;");
    ui->listWidgetRayons->clear();
    QString id;
    QString libelle;
    while(chargementRayon.next()){
        id = chargementRayon.value("idRay").toString();
        libelle = chargementRayon.value("libelleRay").toString();
        QListWidgetItem* unLibelle = new QListWidgetItem(libelle);
        unLibelle->setData(32,id);
        ui->listWidgetRayons->addItem(unLibelle);
    }
}

void MainWindowGestionnaires::chargementListProduitsDemandes(){
    QSqlQuery chargementProduitsDemandes("Select idProd,libelleProd from produit where etatProd='ATT';");
    ui->listWidgetProduitsDemandes->clear();
    QString id;
    QString libelle;
    while(chargementProduitsDemandes.next()){
        id = chargementProduitsDemandes.value("idprod").toString();
        libelle = chargementProduitsDemandes.value("libelleProd").toString();
        QListWidgetItem* unLibelle = new QListWidgetItem(libelle);
        unLibelle->setData(32, id);
        ui->listWidgetProduitsDemandes->addItem(unLibelle);
    }
}

void MainWindowGestionnaires::chargementListCategorie(QString idRayon){
    QSqlQuery chargementCategorie("Select idCat, libelleCat from categorie where idRay="+ idRayon +" and supprimeCat = 0;");
    ui->listWidgetCategories->clear();
    ui->listWidgetProduits->clear();
    QString id;
    QString libelle;
    while(chargementCategorie.next()){
        id = chargementCategorie.value("idCat").toString();
        libelle = chargementCategorie.value("libelleCat").toString();
        QListWidgetItem* unLibelle = new QListWidgetItem(libelle);
        unLibelle->setData(32,id);
        ui->listWidgetCategories->addItem(unLibelle);
    }
}

void MainWindowGestionnaires::chargementListProduit(QString idCategorie){
    QSqlQuery chargementProduit("Select idProd, libelleProd from produit where idCat="+ idCategorie +" and supprimeProd = 0;");
    ui->listWidgetProduits->clear();
    QString id;
    QString libelle;
    while(chargementProduit.next()){
        id = chargementProduit.value("idProd").toString();
        libelle = chargementProduit.value("libelleProd").toString();
        QListWidgetItem* unLibelle = new QListWidgetItem(libelle);
        unLibelle->setData(32,id);
        ui->listWidgetProduits->addItem(unLibelle);
    }
}

void MainWindowGestionnaires::on_pushButtonAjouterRayons_clicked()
{
    qDebug() << "void MainWindowGestionnaires::on_pushButtonAjouterRayons_clicked()";
    QString id;
    id = maxIdRayon();
    // qDebug() << id;
    QString rayon = ui->lineEditRayons->text();
    QSqlQuery ajoutRayon("insert into rayon(idRay, libelleRay) values("+ id +",'"+ rayon +"');");
    // qDebug() << "insert into Rayon(no, libelle) values("+ id +",'"+ rayon +"');";
    ajoutRayon.exec();
    chargementListRayon();

}

void MainWindowGestionnaires::on_listWidgetRayons_clicked(const QModelIndex &index)
{
    ui->lineEditCategories->setEnabled(true);
    idRayon = ui->listWidgetRayons->currentItem()->data(32).toString();
    chargementListCategorie(idRayon);
}

void MainWindowGestionnaires::on_pushButtonAjouterCategories_clicked()
{
    qDebug() << "void MainWindowGestionnaires::on_pushButtonAjouterCategories_clicked()";
    QString id;
    id = maxIdCategorie();
    idRayon = ui->listWidgetRayons->currentItem()->data(32).toString();
    QString categorie = ui->lineEditCategories->text();
    QSqlQuery ajoutCategorie("insert into categorie(idCat,libelleCat,idRay) values("+ id +",'"+ categorie +"',"+ idRayon +");");
    // qDebug() << "insert into Categorie(numero,libelle,no) values("+ id +",'"+ categorie +"',"+ idRayon +");";
    ajoutCategorie.exec();
    chargementListCategorie(idRayon);
}

void MainWindowGestionnaires::on_listWidgetCategories_clicked(const QModelIndex &index)
{
    ui->lineEditProduits->setEnabled(true);
    idCategorie = ui->listWidgetCategories->currentItem()->data(32).toString();
    chargementListProduit(idCategorie);

}

void MainWindowGestionnaires::on_pushButtonAjouterProduits_clicked()
{
    QString id;
    id = maxIdProduit();
    idCategorie = ui->listWidgetCategories->currentItem()->data(32).toString();
    QString produit = ui->lineEditProduits->text();
    QSqlQuery ajoutProduit("insert into produit(idProd, libelleProd, idCat, supprimeProd) values("+ id +",'"+ produit +"',"+ idCategorie +",0);");
    ajoutProduit.exec();
    chargementListProduit(idCategorie);
}

void MainWindowGestionnaires::on_lineEditProduits_textChanged(const QString &arg1)
{
    if(arg1.isEmpty()){
        ui->pushButtonAjouterProduits->setEnabled(false);
    } else {
        ui->pushButtonAjouterProduits->setEnabled(true);
    }
}

void MainWindowGestionnaires::on_lineEditRayons_textChanged(const QString &arg1)
{
    if(arg1.isEmpty()){
        ui->pushButtonAjouterRayons->setEnabled(false);
    } else {
        ui->pushButtonAjouterRayons->setEnabled(true);
    }
}

void MainWindowGestionnaires::on_lineEditCategories_textChanged(const QString &arg1)
{
    if(arg1.isEmpty()){
        ui->pushButtonAjouterCategories->setEnabled(false);
    } else {
        ui->pushButtonAjouterCategories->setEnabled(true);
    }
}

void MainWindowGestionnaires::on_pushButtonSupprimerRayons_clicked()
{
    if(ui->listWidgetCategories->count() == 0){
        QSqlQuery supprRayon("update  rayon set supprimeRay = 1 where idRay = "+ idRayon + ";");
        supprRayon.exec();
        chargementListRayon();
    } else {
        QMessageBox msgBox;
        msgBox.setText("Vous ne pouvez pas supprimer ce rayon car il reste des catégories.");
        msgBox.exec();
    }
}

void MainWindowGestionnaires::on_pushButtonSupprimerCategories_clicked()
{
    if(ui->listWidgetProduits->count() == 0){
        QSqlQuery supprCategorie("update  categorie set supprimeCat = 1 where idCat = "+ idCategorie + ";");
        supprCategorie.exec();
        chargementListCategorie(idRayon);
    } else {
        QMessageBox msgBox;
        msgBox.setText("Vous ne pouvez pas supprimer cette catégorie car il reste des produits.");
        msgBox.exec();
    }
}

void MainWindowGestionnaires::on_pushButtonSupprimerProduits_clicked()
{
    idProduit = ui->listWidgetProduits->currentItem()->data(32).toString();
    QSqlQuery supprProduit("update  produit set supprimeProd = 1 where idProd = "+ idProduit +";");
    supprProduit.exec();
    chargementListProduit(idCategorie);
}

void MainWindowGestionnaires::on_listWidgetCategories_itemSelectionChanged()
{
    ui->pushButtonAjouterProduitsDemandes->setEnabled(ui->listWidgetCategories->selectedItems().count()!=0 && ui->listWidgetProduitsDemandes->selectedItems().count()!=0);
  /*//s'il n'y a rien de selectionne je desactive la zone du dessous
    if(ui->listWidgetCategories->selectedItems().count()==0){
        ui->pushButtonAjouterProduitsDemandes->setDisabled(true);
    } else {
    //sinon je l'active
        ui->pushButtonAjouterProduitsDemandes->setEnabled(true);
    }*/
}

void MainWindowGestionnaires::on_listWidgetProduitsDemandes_itemSelectionChanged()
{
    ui->pushButtonAjouterProduitsDemandes->setEnabled(ui->listWidgetCategories->selectedItems().count()!=0 && ui->listWidgetProduitsDemandes->selectedItems().count()!=0);
    ui->pushButtonRefuserProduitsDemandes->setEnabled(ui->listWidgetProduitsDemandes->selectedItems().count()!=0);
}

void MainWindowGestionnaires::on_pushButtonAjouterProduitsDemandes_clicked()
{
    QString produitDemande = ui->listWidgetProduitsDemandes->currentItem()->text();
    QString categorie = ui->listWidgetCategories->currentItem()->data(32).toString();
    QString idNveauProduit = maxIdProduit();
    QSqlQuery ajoutProduit("insert into produit(idProd,libelleProd,idCat) values("+idNveauProduit+",'"+produitDemande+"',"+categorie+");");
    ajoutProduit.exec();
    QSqlQuery modifProduitDemande("update  produit set etatProd = 'VAL' where libelleProd='"+produitDemande+"';");
    modifProduitDemande.exec();
    chargementListProduitsDemandes();
    chargementListProduit(categorie);
}

void MainWindowGestionnaires::on_pushButtonRefuserProduitsDemandes_clicked()
{
    QString produitDemande = ui->listWidgetProduitsDemandes->currentItem()->text();
    QString idProduitDemande = ui->listWidgetProduitsDemandes->currentItem()->data(32).toString();
    qDebug() << idProduitDemande;
    QSqlQuery refusProduit("update produit set etatProd='REF' where idProd="+idProduitDemande+";");
    refusProduit.exec();
    chargementListProduitsDemandes();
}


        // PARTIE VISITE //

void MainWindowGestionnaires::chargementProducteur()
{
    // Tableau des producteurs qui ne sont pas à leur première visite

    QSqlQuery rechercheProducteur("select u.idU, u.prenomU, u.nomU, u.villeU from utilisateur u where u.idU in(select cp.idU from ControleProducteur cp where cp.idVisite in (select v.idVisite from visite v));");
    int row = 0;
    QString dateVisite;
    ui->tableWidgetProducteurVisite->setRowCount(rechercheProducteur.size());
    while(rechercheProducteur.next()){
        QString idProducteur = rechercheProducteur.value("idU").toString();
        QString prenomProducteur = rechercheProducteur.value("prenomU").toString();
        QString nomProducteur = rechercheProducteur.value("nomU").toString();
        QString villeProducteur = rechercheProducteur.value("villeU").toString();
        QSqlQuery dateVisiteProducteur("select max(dateVisite) as dateVisite from visite v inner join ControleProducteur cp on v.idVisite = cp.idVisite inner join utilisateur u on cp.idU = u.idU where u.idU="+idProducteur+";");
        // qDebug() << "select max(dateVisite) as dateVisite from visite v inner join ControleProducteur cp on v.idVisite = cp.idVisite inner join utilisateur u on cp.idU = u.idU where u.idU="+idProducteur+";";
        if(dateVisiteProducteur.next()){
            // qDebug() << "test";
            dateVisite = dateVisiteProducteur.value("dateVisite").toString();
            // qDebug() << dateVisite;
        }
        // qDebug() << "test";
        QTableWidgetItem * nomProdItem = new QTableWidgetItem(nomProducteur);
        QTableWidgetItem * prenomProdItem = new QTableWidgetItem(prenomProducteur);
        QTableWidgetItem * villeProdItem = new QTableWidgetItem(villeProducteur);
        QTableWidgetItem * dateVisiteItem = new QTableWidgetItem(dateVisite);

        ui->tableWidgetProducteurVisite->setItem(row, 0, nomProdItem);
        ui->tableWidgetProducteurVisite->setItem(row, 1, prenomProdItem);
        ui->tableWidgetProducteurVisite->setItem(row, 2, villeProdItem);
        ui->tableWidgetProducteurVisite->setItem(row, 3, dateVisiteItem);
        ui->tableWidgetProducteurVisite->item(row,0)->setData(32,idProducteur);
        row++;
    }

    // Tableau des producteurs qui doivent avoir leur première visite

    QSqlQuery rechercheProducteurPremVisite("select u.idU, u.prenomU, u.nomU, u.villeU from utilisateur u where etatU ='A-VI';");
    row = 0;
    ui->tableWidgetProducteurPremVisite->setRowCount(rechercheProducteurPremVisite.size());
    while(rechercheProducteurPremVisite.next()){
        qDebug() << "test";
        QString idProducteur = rechercheProducteurPremVisite.value("idU").toString();
        QString prenomProducteur = rechercheProducteurPremVisite.value("prenomU").toString();
        QString nomProducteur = rechercheProducteurPremVisite.value("nomU").toString();
        QString villeProducteur = rechercheProducteurPremVisite.value("villeU").toString();

        QTableWidgetItem * nomProdItem = new QTableWidgetItem(nomProducteur);
        QTableWidgetItem * prenomProdItem = new QTableWidgetItem(prenomProducteur);
        QTableWidgetItem * villeProdItem = new QTableWidgetItem(villeProducteur);

        ui->tableWidgetProducteurPremVisite->setItem(row, 0, nomProdItem);
        ui->tableWidgetProducteurPremVisite->setItem(row, 1, prenomProdItem);
        ui->tableWidgetProducteurPremVisite->setItem(row, 2, villeProdItem);
        ui->tableWidgetProducteurPremVisite->item(row,0)->setData(32,idProducteur);
        row++;
    }

    QSqlQuery rechercheControleur("select idPers, nomPers, prenomPers, villePers from personnel where idTypeP = 1;");
    row = 0;
    ui->tableWidgetControleurVisite->setRowCount(rechercheControleur.size());
    while(rechercheControleur.next()){
        QString idControleur = rechercheControleur.value("idPers").toString();
        QString nomControleur = rechercheControleur.value("nomPers").toString();
        QString prenomControleur = rechercheControleur.value("prenomPers").toString();
        QString villeControleur = rechercheControleur.value("villePers").toString();

        QTableWidgetItem * nomControleurItem = new QTableWidgetItem(nomControleur);
        QTableWidgetItem * prenomControleurItem = new QTableWidgetItem(prenomControleur);
        QTableWidgetItem * villeControleurItem = new QTableWidgetItem(villeControleur);

        ui->tableWidgetControleurVisite->setItem(row,0,nomControleurItem);
        ui->tableWidgetControleurVisite->setItem(row,1,prenomControleurItem);
        ui->tableWidgetControleurVisite->setItem(row,2,villeControleurItem);
        ui->tableWidgetControleurVisite->item(row,0)->setData(32,idControleur);
        row++;
    }
}

void MainWindowGestionnaires::on_tableWidgetProducteurVisite_clicked(const QModelIndex &index)
{
    ui->pushButtonAjoutVisite->setEnabled(true);
}

void MainWindowGestionnaires::on_tableWidgetProducteurPremVisite_clicked(const QModelIndex &index)
{
    ui->pushButtonAjoutPremVisite->setEnabled(true);
}


void MainWindowGestionnaires::on_pushButtonAjoutVisite_clicked()
{
    QSqlQuery recupIdVisite("select ifnull(max(idVisite),0)+1 as maxId from visite;");
    if(recupIdVisite.next()){
        idMaxVisite = recupIdVisite.value("maxId").toString();
    }
    QList<QTableWidgetItem*> itemSelectionne = ui->tableWidgetProducteurVisite->selectedItems();
    int row = itemSelectionne[0]->row();
    QString idUtilisateur = ui->tableWidgetProducteurVisite->item(row,0)->data(32).toString();
    DialogAjoutVisite ajoutVisite;
    if(ajoutVisite.exec()==DialogAjoutVisite::Accepted){
        QString dateVisite = ajoutVisite.getDateVisite();
        QString idControleur = ajoutVisite.getIdControleur();
        qDebug() << dateVisite;
        // demandé le libelle
        QSqlQuery ajoutVisite("insert into visite(idVisite,libelleVisite,dateVisite,gestionnaire,controleur) values("+idMaxVisite+",'','"+dateVisite+"',"+idSession+","+idUtilisateur+");");
<<<<<<< HEAD
        qDebug() << "insert into visite(idVisite,libelleVisite,dateVisite,gestionnaire,controleur) values("+idMaxVisite+",'','"+dateVisite+"',"+idSession+","+idUtilisateur+");";
        ajoutVisite.exec();
        QSqlQuery ajoutControleProducteur("insert into ControleProducteur(idVisite, idU) values("+idMaxVisite+","+idUtilisateur+"); ");
        qDebug() << "insert into ControleProducteur(idVisite, idU) values("+idMaxVisite+","+idUtilisateur+");";
=======
        ajoutVisite.exec();
        QSqlQuery ajoutControleProducteur("insert into controleProducteur(idVisite, idU) values("+idMaxVisite+","+idUtilisateur+"); ");
>>>>>>> aa0f5a2d402394b5de48895083fc1af8b205d890
        ajoutControleProducteur.exec();
    }
}

void MainWindowGestionnaires::on_pushButtonAjoutPremVisite_clicked()
{
    QSqlQuery recupIdVisite("select ifnull(max(idVisite),0)+1 as maxId from visite;");
    if(recupIdVisite.next()){
<<<<<<< HEAD
        idMaxVisite = recupIdVisite.value("maxId").toString();
    }
    QList<QTableWidgetItem*> itemSelectionne = ui->tableWidgetProducteurPremVisite->selectedItems();
    int row = itemSelectionne[0]->row();
    QString idUtilisateur = ui->tableWidgetProducteurPremVisite->item(row,0)->data(32).toString();
=======
        idMaxVisite = recupIdVisite.value("maxId").toInt();
    }
    QList<QTableWidgetItem*> itemSelectionne = ui->tableWidgetProducteurVisite->selectedItems();
    int row = itemSelectionne[0]->row();
    QString idUtilisateur = ui->tableWidgetProducteurVisite->item(row,0)->data(32).toString();
>>>>>>> aa0f5a2d402394b5de48895083fc1af8b205d890
    DialogAjoutVisite ajoutVisite;
    if(ajoutVisite.exec()==DialogAjoutVisite::Accepted){
        QString dateVisite = ajoutVisite.getDateVisite();
        QString idControleur = ajoutVisite.getIdControleur();
<<<<<<< HEAD
        qDebug() << "blabla" << dateVisite;
        qDebug() << "blabla" << idControleur;
        QSqlQuery ajoutVisite("insert into visite(idVisite,libelleVisite,dateVisite,gestionnaire,controleur) values("+idMaxVisite+",'Première visite','"+dateVisite+"',"+idSession+","+idControleur+");");
        qDebug() << "insert into visite(idVisite,libelleVisite,dateVisite,gestionnaire,controleur) values("+idMaxVisite+",'Première visite','"+dateVisite+"',"+idSession+","+idControleur+");";
        ajoutVisite.exec();
        QSqlQuery ajoutControleProducteur("insert into ControleProducteur(idVisite, idU) values("+idMaxVisite+","+idUtilisateur+"); ");
        qDebug() << "insert into controleProducteur(idVisite, idU) values("+idMaxVisite+","+idUtilisateur+");";
        ajoutControleProducteur.exec();
        QSqlQuery recupIdU("select u.idU from utilisateur u inner join ControleProducteur cp on u.idU=cp.idU inner join visite v on cp.idVisite = v.idVisite where v.controleur="+idControleur+" and v.dateVisite='"+dateVisite+"'; ");
        qDebug() << "select u.idU from utilisateur u inner join ControleProducteur cp on u.idU=cp.idU inner join visite v on cp.idVisite = v.idVisite where v.controleur="+idControleur+" and v.dateVisite='"+dateVisite+"'; ";
        if(recupIdU.next()){
            QString idU = recupIdU.value("idU").toString();
            QSqlQuery modifEtatU("update utilisateur set etatU='AVAL' where idU="+idU+" ;");
            qDebug() << "update utilisateur set etatU='AVAL' where idU="+idU+" ;";
            modifEtatU.exec();
        }
        chargementProducteur();
=======
        qDebug() << dateVisite;
        // demandé le libelle
        QSqlQuery ajoutVisite("insert into visite(idVisite,libelleVisite,dateVisite,gestionnaire,controleur) values("+idMaxVisite+",'Première visite','"+dateVisite+"',"+idSession+","+idUtilisateur+");");
        ajoutVisite.exec();
        QSqlQuery ajoutControleProducteur("insert into controleProducteur(idVisite, idU) values("+idMaxVisite+","+idUtilisateur+"); ");
        ajoutControleProducteur.exec();
>>>>>>> aa0f5a2d402394b5de48895083fc1af8b205d890
    }
}

void MainWindowGestionnaires::on_tableWidgetControleurVisite_clicked(const QModelIndex &index)
{
    QList<QTableWidgetItem*> itemSelectionne = ui->tableWidgetControleurVisite->selectedItems();
    int row = itemSelectionne[0]->row();
    QString idControleur = ui->tableWidgetControleurVisite->item(row,0)->data(32).toString();
    DialogVisiteControleur visiteControleur(idControleur);
    visiteControleur.exec();
}
