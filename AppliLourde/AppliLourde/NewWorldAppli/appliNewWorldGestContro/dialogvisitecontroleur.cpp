#include "dialogvisitecontroleur.h"
#include "ui_dialogvisitecontroleur.h"
#include <QSqlQuery>
#include <QDebug>

DialogVisiteControleur::DialogVisiteControleur(QString id,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogVisiteControleur)
{
    ui->setupUi(this);
    idControleur = id;
    chargementTableau();
}

DialogVisiteControleur::~DialogVisiteControleur()
{
    delete ui;
}

void DialogVisiteControleur::chargementTableau(){
    QSqlQuery recupVisiteAFaire("Select u.idU, u.nomU,u.prenomU,v.dateVisite from utilisateur u inner join ControleProducteur cp on u.idU = cp.idU inner join visite v on cp.idVisite = v.idVisite where cp.visiteConcluante is null and v.controleur="+idControleur+";");
    qDebug() << "Select u.idU,u.nomU,u.prenomU,v.dateVisite from utilisateur u inner join ControleProducteur cp on u.idU = cp.idU inner join visite v on cp.idVisite = v.idVisite where cp.visiteConcluante is null and v.controleur="+idControleur+";";
    ui->tableWidgetProducteur->setRowCount(recupVisiteAFaire.size());
    qDebug() << recupVisiteAFaire.size();
    int row = 0;
    while(recupVisiteAFaire.next()){
        QString nomUtilisateur = recupVisiteAFaire.value("nomU").toString();
        QString prenomUtilisateur = recupVisiteAFaire.value("prenomU").toString();
        QString dateVisite = recupVisiteAFaire.value("dateVisite").toString();
        QString id = recupVisiteAFaire.value("idU").toString();

        QTableWidgetItem * nomControleurItem = new QTableWidgetItem(nomUtilisateur);
        QTableWidgetItem * prenomControleurItem = new QTableWidgetItem(prenomUtilisateur);
        QTableWidgetItem * dateVisiteItem = new QTableWidgetItem(dateVisite);

        ui->tableWidgetProducteur->setItem(row,0,nomControleurItem);
        ui->tableWidgetProducteur->setItem(row,1,prenomControleurItem);
        ui->tableWidgetProducteur->setItem(row,2,dateVisiteItem);
        ui->tableWidgetProducteur->item(row,0)->setData(32,id);
        row++;
    }
}
