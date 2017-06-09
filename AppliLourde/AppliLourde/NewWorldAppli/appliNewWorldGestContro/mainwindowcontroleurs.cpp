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
    QSqlQuery recupVisiteControleur("select u.idU,u.nomU,u.prenomU,v.dateVisite from utilisateur u inner join ControleProducteur cp on u.idU = cp.idU inner join visite v on cp.idVisite = v.idVisite inner join personnel p on v.controleur = p.idPers where p.idPers ="+idControleur+";");

    int row = 0;
    ui->tableWidgetProducteur->setRowCount(recupVisiteControleur.size());
    while(recupVisiteControleur.next()){
        QString id = recupVisiteControleur.value("idU").toString();
        QString nom = recupVisiteControleur.value("nomU").toString();
        QString prenom = recupVisiteControleur.value("prenomU").toString();
        QString dateVisite = recupVisiteControleur.value("dateVisite").toString();

        QTableWidgetItem * nomControleurItem = new QTableWidgetItem(nom);
        QTableWidgetItem * prenomControleurItem = new QTableWidgetItem(prenom);
        QTableWidgetItem * dateVisiteItem = new QTableWidgetItem(dateVisite);

        ui->tableWidgetProducteur->setItem(row,0,nomControleurItem);
        ui->tableWidgetProducteur->setItem(row,1,prenomControleurItem);
        ui->tableWidgetProducteur->setItem(row,2,dateVisiteItem);
        ui->tableWidgetProducteur->item(row,0)->setData(32,idControleur);
        row++;
    }
}
