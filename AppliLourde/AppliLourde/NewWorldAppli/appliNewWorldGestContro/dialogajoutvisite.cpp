#include "dialogajoutvisite.h"
#include "ui_dialogajoutvisite.h"
#include <QSqlQuery>
#include <QDebug>

DialogAjoutVisite::DialogAjoutVisite(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAjoutVisite)
{
    ui->setupUi(this);
    chargementControleur();
}

DialogAjoutVisite::~DialogAjoutVisite()
{
    delete ui;
}
QString DialogAjoutVisite::getDateVisite() const
{
    return ui->lineEditDateVisite->text();
}

void DialogAjoutVisite::setDateVisite(const QString &value)
{
    dateVisite = value;
}

void DialogAjoutVisite::chargementControleur(){
    QSqlQuery chercheControleur("select idPers, nomPers, prenomPers, villePers from personnel where idTypeP = 1;");
    int row = 0;
    ui->tableWidgetControleur->setRowCount(chercheControleur.size());
    while(chercheControleur.next()){
        QString idPers = chercheControleur.value("idPers").toString();
        // qDebug() << idPers;
        QString nomPers = chercheControleur.value("nomPers").toString();
        QString prenomPers = chercheControleur.value("prenomPers").toString();
        QString villePers = chercheControleur.value("villePers").toString();

        QTableWidgetItem * nomControleurItem = new QTableWidgetItem(nomPers);
        QTableWidgetItem * prenomControleurItem = new QTableWidgetItem(prenomPers);
        QTableWidgetItem * villeControleurItem = new QTableWidgetItem(villePers);

        ui->tableWidgetControleur->setItem(row,0,nomControleurItem);
        ui->tableWidgetControleur->setItem(row,1,prenomControleurItem);
        ui->tableWidgetControleur->setItem(row,2,villeControleurItem);
        ui->tableWidgetControleur->item(row,0)->setData(32,idPers);
        row++;
    }
}

QString DialogAjoutVisite::getIdControleur()
{
    QList<QTableWidgetItem*> itemSelectionne = ui->tableWidgetControleur->selectedItems();
    qDebug() << itemSelectionne.count();
    int row = itemSelectionne[0]->row();
    qDebug() << row;
    idControleur = ui->tableWidgetControleur->item(row,0)->data(32).toString();
    return idControleur;
}

void DialogAjoutVisite::setIdControleur(const QString &value)
{
    idControleur = value;
}




