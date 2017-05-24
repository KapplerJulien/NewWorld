#include "mainwindowgestionnaires.h"
#include "ui_mainwindowgestionnaires.h"
#include <QTime>
#include <QDateTime>
#include <QMessageBox>
#include <QListWidget>
#include <QListWidgetItem>

MainWindowGestionnaires::MainWindowGestionnaires(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowGestionnaires)
{
    ui->setupUi(this);
    remplissageTableau();
    ui->labelEmploye->setText("Ajouter un employe");
    chargementListRayon();
    chargementListProduitsDemandes();
}

MainWindowGestionnaires::~MainWindowGestionnaires()
{
    delete ui;
}

QString MainWindowGestionnaires::maxIdRayon(){
    QSqlQuery idRayon("Select IFNULL(max(no), 0)+1 from Rayon");
    QString id;
    if(idRayon.next()){
        id = idRayon.value(0).toString();
        qDebug() << id;
    }
    return id;
}

QString MainWindowGestionnaires::maxIdCategorie(){
    QSqlQuery idCategorie("Select ifnull(max(numero), 0)+1 from Categorie");
    QString id;
    if(idCategorie.next()){
        id = idCategorie.value(0).toString();
    }
    return id;
}

QString MainWindowGestionnaires::maxIdProduit(){
    QSqlQuery idProduit("Select ifnull(max(numeroPdt), 0)+1 from Produit");
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
        tel = ui->lineEditTel->text();
        telFix = ui->lineEditTelFix->text();
        if(ui->radioButtonControleur->isChecked()){
            type = "Controleur";
        } else {
            type = "Gestionnaire";
        }
        idMaxUtilisateur = idMaxEmploye("Utilisateur");
        idMaxGestionnaire = idMaxEmploye("Gestionnaire");
        mdpInitial = randomMdp(7);
        qDebug() << mdpInitial;
        QString dateAjd = QDate::currentDate().toString("yyyy-MM-dd");
        qDebug() << dateAjd;
        // Requête d'ajout des infos Utilisateur
        QString requeteAjoutUtilisateur = "insert into Utilisateur(id,login,rue,cp,ville,tel,telFix,type,motDePasse) values (";
        qDebug() << idMaxUtilisateur;
        requeteAjoutUtilisateur += QString::number(idMaxUtilisateur);
        rue = rue.replace("'", "\\'");
        requeteAjoutUtilisateur += ",'" + pseudo + "','" + rue + "'," + codePostale + ",'" + ville + "'," + tel + "," + telFix + ",'" + type + "','" + mdpInitial + "');";
        qDebug() << requeteAjoutUtilisateur;
        // Requête d'ajout du nom et prénom dans Gestionnaire
        QString requeteAjoutGestionnaire = "insert into Gestionnaire(id,nom,prenom,idUtilisateur) values (";
        requeteAjoutGestionnaire += QString::number(idMaxGestionnaire) + ",'" + nom + "','" + prenom + "'," + QString::number(idMaxUtilisateur) + ");";
        qDebug() << requeteAjoutGestionnaire;

        QSqlQuery ajoutUtilisateurBdd(requeteAjoutUtilisateur);
        QSqlQuery ajoutGestionnaireBdd(requeteAjoutGestionnaire);

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
        QString telChange = ui->lineEditTel->text();
        QString telFChange = ui->lineEditTelFix->text();
        QString typeChange;
        if(ui->radioButtonControleur->isChecked()){
            typeChange = "Controleur";
        } else {
            typeChange = "Gestionnaire";
        }
        if(nom != nomChange){
            QSqlQuery modifBdd("update Gestionnaire set nom ='"+ nomChange + "' where idUtilisateur =" + id + ";" );
            // qDebug() << nomChange + id;
            modifBdd.exec();
        }
        if(prenom != prenomChange){
            QSqlQuery modifBdd("update Gestionnaire set prenom='"+ prenomChange + "' where idUtilisateur="+ id +";");
            modifBdd.exec();
        }
        if(rue != rueChange){
            QSqlQuery modifBdd("update Utilisateur set rue='"+ rueChange + "' where id="+ id +";");
            modifBdd.exec();
        }
        if(codePostale != cpChange){
            QSqlQuery modifBdd("update Utilisateur set cp="+ cpChange + " where id="+ id +";");
            modifBdd.exec();
        }
        if(ville != villeChange){
            QSqlQuery modifBdd("update Utilisateur set ville='"+ villeChange + "' where id="+ id +";");
            modifBdd.exec();
        }
        if(tel != telChange){
            QSqlQuery modifBdd("update Utilisateur set tel="+ telChange + " where id="+ id +";");
            modifBdd.exec();
        }
        if(telFix != telFChange){
            QSqlQuery modifBdd("update Utilisateur set telFix="+ telFChange + " where id="+ id +";");
            modifBdd.exec();
        }
        if(type != typeChange){
            QSqlQuery modifBdd("update Utilisateur set type='"+ typeChange + "' where id="+ id +";");
            modifBdd.exec();
        }
    }
}

int MainWindowGestionnaires::idMaxEmploye(QString table)
{
    int idMax;
    QSqlQuery rechercheIdMax("Select max(id) from " + table + ";");
    if(rechercheIdMax.next()){
        idMax = rechercheIdMax.value(0).toInt();
    }
    idMax ++;
    return idMax;
}

void MainWindowGestionnaires::remplissageTableau()
{
    qDebug() << "void MainWindowGestionnaires::remplissageTableau()";
    // Requête de récupération des infos Utilisateur
    QSqlQuery rechercheUtilisateur("Select id, rue, cp, ville, tel, telFix, type from Utilisateur;");
    // Requête de récupération du nom et prénom
    QSqlQuery rechercheGestionnaire("Select nom, prenom from Gestionnaire;");
    int row = 0;
    ui->tableWidgetEmploye->setRowCount(rechercheGestionnaire.size());
    while(rechercheGestionnaire.next()){
        QString nomGest = rechercheGestionnaire.value("nom").toString();
        qDebug() << nomGest;
        QString prenomGest = rechercheGestionnaire.value("prenom").toString();
        qDebug() << prenomGest;
        QTableWidgetItem * nomGestItem = new QTableWidgetItem(nomGest);
        QTableWidgetItem * prenomGestItem = new QTableWidgetItem(prenomGest);

        qDebug() << row;
        ui->tableWidgetEmploye->setItem(row, 0, nomGestItem);
        ui->tableWidgetEmploye->setItem(row, 1, prenomGestItem);

        row ++;
    }
    row=0;
    while(rechercheUtilisateur.next()){
        qDebug() << ui->tableWidgetEmploye->columnCount();
        QString infosRue = rechercheUtilisateur.value("rue").toString();
        qDebug() << infosRue;
        QTableWidgetItem * infosRueItem = new QTableWidgetItem(infosRue);
        ui->tableWidgetEmploye->setItem(row, 2, infosRueItem);

        QString infosCp = rechercheUtilisateur.value("cp").toString();
        qDebug() << infosCp;
        QTableWidgetItem * infosCpItem = new QTableWidgetItem(infosCp);
        ui->tableWidgetEmploye->setItem(row, 3, infosCpItem);

        QString infosVille = rechercheUtilisateur.value("ville").toString();
        qDebug() << infosVille;
        QTableWidgetItem * infosVilleItem = new QTableWidgetItem(infosVille);
        ui->tableWidgetEmploye->setItem(row, 4, infosVilleItem);

        QString infosTel = rechercheUtilisateur.value("tel").toString();
        qDebug() << infosTel;
        QTableWidgetItem * infosTelItem = new QTableWidgetItem(infosTel);
        ui->tableWidgetEmploye->setItem(row, 5, infosTelItem);

        QString infosTelFix = rechercheUtilisateur.value("telFix").toString();
        qDebug() << infosTelFix;
        QTableWidgetItem * infosTelFixItem = new QTableWidgetItem(infosTelFix);
        ui->tableWidgetEmploye->setItem(row, 6, infosTelFixItem);

        QString infosType = rechercheUtilisateur.value("type").toString();
        qDebug() << infosType;
        QTableWidgetItem * infosTypeItem = new QTableWidgetItem(infosType);
        ui->tableWidgetEmploye->setItem(row, 7, infosTypeItem);

        ui->tableWidgetEmploye->item(row,0)->setData(32,rechercheUtilisateur.value("id").toString());
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
    QSqlQuery recupUtilisateur("select rue,cp,ville,tel,telFix, type from Utilisateur where id=" + id + ";");
    if(recupUtilisateur.next()){
        rue = recupUtilisateur.value("rue").toString();
        codePostale = recupUtilisateur.value("cp").toString();
        ville = recupUtilisateur.value("ville").toString();
        tel = recupUtilisateur.value("tel").toString();
        telFix = recupUtilisateur.value("telFix").toString();
        type = recupUtilisateur.value("type").toString();
    }
    // Récupération des données Gestionnaire/Controleur
    QSqlQuery recupGest("select nom, prenom from Gestionnaire where idUtilisateur=" + id + ";");
    if(recupGest.next()){
        nom = recupGest.value("nom").toString();
        prenom = recupGest.value("prenom").toString();
    }
    ui->lineEditNom->setText(nom);
    ui->lineEditPrenom->setText(prenom);
    ui->lineEditRue->setText(rue);
    ui->lineEditCodePostal->setText(codePostale);
    ui->lineEditVille->setText(ville);
    ui->lineEditTel->setText(tel);
    ui->lineEditTelFix->setText(telFix);
    if(type == "Gestionnaire"){
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
    ui->lineEditTelFix->clear();
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
        QSqlQuery supprimeEmploye("update Utilisateur set supprime = 1 where id="+ id +";");
        // qDebug() << "update Utilisateur set supprime = 1 where id="+ id +";";
        supprimeEmploye.exec();
        remplissageTableau();
     }
}


            // PARTIE RAYON/TYPE PRODUIT // 


void MainWindowGestionnaires::chargementListRayon(){
    QSqlQuery chargementRayon("Select no, libelle from Rayon;");
    ui->listWidgetRayons->clear();
    QString id;
    QString libelle;
    while(chargementRayon.next()){
        id = chargementRayon.value("no").toString();
        libelle = chargementRayon.value("libelle").toString();
        QListWidgetItem* unLibelle = new QListWidgetItem(libelle);
        unLibelle->setData(32,id);
        ui->listWidgetRayons->addItem(unLibelle);
    }
}

void MainWindowGestionnaires::chargementListProduitsDemandes(){
    QSqlQuery chargementProduitsDemandes("Select id,libelle from produitDemande where etat=0");
    ui->listWidgetProduitsDemandes->clear();
    QString id;
    QString libelle;
    while(chargementProduitsDemandes.next()){
        id = chargementProduitsDemandes.value("id").toString();
        libelle = chargementProduitsDemandes.value("libelle").toString();
        QListWidgetItem* unLibelle = new QListWidgetItem(libelle);
        unLibelle->setData(32, id);
        ui->listWidgetProduitsDemandes->addItem(unLibelle);
    }
}

void MainWindowGestionnaires::chargementListCategorie(QString idRayon){
    QSqlQuery chargementCategorie("Select numero, libelle from Categorie where no="+ idRayon +";");
    ui->listWidgetCategories->clear();
    ui->listWidgetProduits->clear();
    QString id;
    QString libelle;
    while(chargementCategorie.next()){
        id = chargementCategorie.value("numero").toString();
        libelle = chargementCategorie.value("libelle").toString();
        QListWidgetItem* unLibelle = new QListWidgetItem(libelle);
        unLibelle->setData(32,id);
        ui->listWidgetCategories->addItem(unLibelle);
    }
}

void MainWindowGestionnaires::chargementListProduit(QString idCategorie){
    QSqlQuery chargementProduit("Select numeroPdt, libelle from Produit where no="+ idCategorie +";");
    ui->listWidgetProduits->clear();
    QString id;
    QString libelle;
    while(chargementProduit.next()){
        id = chargementProduit.value("numeroPdt").toString();
        libelle = chargementProduit.value("libelle").toString();
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
    QSqlQuery ajoutRayon("insert into Rayon(no, libelle) values("+ id +",'"+ rayon +"');");
    qDebug() << "insert into Rayon(no, libelle) values("+ id +",'"+ rayon +"');";
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
    QSqlQuery ajoutCategorie("insert into Categorie(numero,libelle,no) values("+ id +",'"+ categorie +"',"+ idRayon +");");
    qDebug() << "insert into Categorie(numero,libelle,no) values("+ id +",'"+ categorie +"',"+ idRayon +");";
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
    QSqlQuery ajoutProduit("insert into Produit(numeroPdt, libelle, no) values("+ id +",'"+ produit +"',"+ idCategorie +");");
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
        QSqlQuery supprRayon("Delete from Rayon where no = "+ idRayon + ";");
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
        QSqlQuery supprCategorie("Delete from Categorie where numero = "+ idCategorie + ";");
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
    QSqlQuery supprProduit("Delete from Produit where numeroPdt = "+ idProduit +";");
    supprProduit.exec();
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
    QSqlQuery ajoutProduit("insert into Produit(numeroPdt,libelle,no) values("+idNveauProduit+",'"+produitDemande+"',"+categorie+");");
    ajoutProduit.exec();
    QSqlQuery modifProduitDemande("Delete from produitDemande where libelle='"+produitDemande+"';");
    modifProduitDemande.exec();
    chargementListProduitsDemandes();
    chargementListProduit(categorie);
}

void MainWindowGestionnaires::on_pushButtonRefuserProduitsDemandes_clicked()
{
    QString produitDemande = ui->listWidgetProduitsDemandes->currentItem()->text();
    QString idProduitDemande = ui->listWidgetProduitsDemandes->currentItem()->data(32).toString();
    QSqlQuery refusProduit("update produitDemande set etat=1 where id="+idProduitDemande+";");
    refusProduit.exec();
    chargementListProduitsDemandes();
}
