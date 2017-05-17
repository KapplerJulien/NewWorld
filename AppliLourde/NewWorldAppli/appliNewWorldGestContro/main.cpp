#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>
#include "mainwindowgestionnaires.h"
#include "dialogconnexion.h"
#include "mainwindowcontroleurs.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase dbContact=QSqlDatabase::addDatabase("QMYSQL");
    dbContact.setDatabaseName("dbNewWorld");
    dbContact.setUserName("adminDBNewWorld");
    dbContact.setPassword("Pa$$w0rd");
    if(dbContact.open())
    {
        DialogConnexion test;
        if(test.exec()==DialogConnexion::Accepted){
            if(test.getType() == "Gestionnaire"){
                MainWindowGestionnaires w;
                w.show();
                return a.exec();
            } else if(test.getType() == "Controleur"){
                MainWindowControleurs w;
                w.show();
                return a.exec();
            } else {
                qDebug() << "Cette identifiant et/ou ce mot de passe ne correspondent à aucun utilisateur";
            }
        }
    }
    else
    {
        qDebug() << "erreur de connexion à la base de donnée" << endl;
        return -125;
    }
}
