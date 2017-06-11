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
    dbContact.setDatabaseName("dbNewWorldUp");
    dbContact.setUserName("root");
    dbContact.setPassword("");
    if(dbContact.open())
    {
        DialogConnexion test;
        if(test.exec()==DialogConnexion::Accepted){
            QString id = test.getId();
            if(test.getType() == "2"){
                MainWindowGestionnaires w(id);
                w.show();
                return a.exec();
            } else if(test.getType() == "1"){
                MainWindowControleurs w(id);
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
