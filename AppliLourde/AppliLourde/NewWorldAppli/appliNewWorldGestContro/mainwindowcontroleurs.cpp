#include "mainwindowcontroleurs.h"
#include "ui_mainwindowcontroleurs.h"
#include <QDebug>
#include <QSqlQuery>

MainWindowControleurs::MainWindowControleurs(QString id,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowControleurs)
{
    ui->setupUi(this);
    idControleur = id;
    qDebug() << id;
    chargementVisite();
}

MainWindowControleurs::~MainWindowControleurs()
{
    delete ui;
}

void MainWindowControleurs::chargementVisite(){
    QSqlQuery recupVisiteControleur("select u.idU,u.nomU,u.prenomU,v.dateVisite from utilisateur u inner join ControleProducteur cp on u.idU = cp.idU inner join visite v on cp.idVisite = v.idVisite inner join personnel p on v.controleur = p.idPers where p.idPers ="+idControleur+" and cp.visiteConcluante is not null;");

    int row = 0;
    ui->tableWidgetProducteur->setRowCount(recupVisiteControleur.size());
    while(recupVisiteControleur.next()){
        QString id = recupVisiteControleur.value("idU").toString();
        QString nom = recupVisiteControleur.value("nomU").toString();
        QString prenom = recupVisiteControleur.value("prenomU").toString();
        date = recupVisiteControleur.value("dateVisite").toString();

        QTableWidgetItem * nomControleurItem = new QTableWidgetItem(nom);
        QTableWidgetItem * prenomControleurItem = new QTableWidgetItem(prenom);
        QTableWidgetItem * dateVisiteItem = new QTableWidgetItem(date);

        ui->tableWidgetProducteur->setItem(row,0,nomControleurItem);
        ui->tableWidgetProducteur->setItem(row,1,prenomControleurItem);
        ui->tableWidgetProducteur->setItem(row,2,dateVisiteItem);
        ui->tableWidgetProducteur->item(row,0)->setData(32,id);
        row++;
    }
}

void MainWindowControleurs::on_tableWidgetProducteur_clicked(const QModelIndex &index)
{
    ui->pushButtonModifierVisite->setEnabled(true);
}

void MainWindowControleurs::on_pushButtonModifierVisite_clicked()
{
    QList<QTableWidgetItem*> itemSelectionne = ui->tableWidgetProducteur->selectedItems();
    qDebug() << itemSelectionne.count();
    int row = itemSelectionne[0]->row();
    qDebug() << row;
    idProducteur = ui->tableWidgetProducteur->item(row,0)->data(32).toString();
    date = ui->tableWidgetProducteur->item(row,2)->text();
    qDebug() << idProducteur;
    qDebug() << date;
    QSqlQuery recupInfosProducteur("select cp.visiteConcluante, cp.motifRejet from ControleProducteur cp inner join visite v on cp.idVisite = v.idVisite where v.dateVisite ='"+date+"' and cp.idU ="+idProducteur+"; ");
    if(recupInfosProducteur.next()){
        visiteConcluante = recupInfosProducteur.value("visiteConcluante").toString();
        motifRejet = recupInfosProducteur.value("motifRejet").toString();

        ui->lineEditDateVisite->setText(date);

        ui->plainTextEditDescription->setPlainText(motifRejet);

        if(visiteConcluante == "1"){
            ui->radioButtonValide->setChecked(true);
            ui->radioButtonInvalide->setChecked(false);
        } else {
            ui->radioButtonInvalide->setChecked(true);
            ui->radioButtonValide->setChecked(false);
        }
    }
}

void MainWindowControleurs::on_pushButtonModifier_clicked()
{
    QString dateModif = ui->lineEditDateVisite->text();
    QString motifRejetModif = ui->plainTextEditDescription->toPlainText();
    qDebug() << motifRejetModif;
    QString visiteConcluanteModif;
    if(ui->radioButtonValide->isChecked()){
        visiteConcluanteModif = "1";
    } else {
        visiteConcluanteModif = "0";
    }
    qDebug() << visiteConcluanteModif;

    QString idVisite;
    QSqlQuery recupIdVisite("select v.idVisite from ControleProducteur cp inner join visite v on cp.idVisite = v.idVisite where cp.idU = "+idProducteur+" and v.dateVisite = '"+date+"';");
    if(recupIdVisite.next()){
        idVisite = recupIdVisite.value("idVisite").toString();
    }
    if(dateModif != date){
        QSqlQuery modifDate("update visite set dateVisite = '"+dateModif+"' where idVisite="+idVisite+";");
        modifDate.exec();
    }
    if(visiteConcluanteModif != visiteConcluante){
        visiteConcluante = visiteConcluanteModif;
        QSqlQuery modifVisiteConcluante("update ControleProducteur set visiteConcluante = "+visiteConcluanteModif+" where idVisite="+idVisite+";");
        modifVisiteConcluante.exec();
    }
    qDebug() << motifRejet;
    if(motifRejetModif != motifRejet){
        motifRejet = motifRejetModif;
        QSqlQuery modifMotifRejet("update ControleProducteur set motifRejet='"+motifRejetModif+"' where idVisite="+idVisite+";");
        modifMotifRejet.exec();
    }
    chargementVisite();
}
