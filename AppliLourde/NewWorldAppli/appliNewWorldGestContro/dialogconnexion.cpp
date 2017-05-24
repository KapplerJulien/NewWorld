#include "dialogconnexion.h"
#include "ui_dialogconnexion.h"

DialogConnexion::DialogConnexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogConnexion)
{
    ui->setupUi(this);
}

DialogConnexion::~DialogConnexion()
{
    delete ui;
}

void DialogConnexion::on_pushButtonConnection_clicked()
{
    QString login = ui->lineEditLogin->text();
    QString motDePasse = ui->lineEditMotDePasse->text();
    QSqlQuery rechercheUtilisateur("Select loginPers, motDePassePers, idTypeP from personnel ;");
    if(rechercheUtilisateur.next()){
        QString loginBdd = rechercheUtilisateur.value(0).toString();
        qDebug() << loginBdd;
        QString motDePasseBdd = rechercheUtilisateur.value(1).toString();
        qDebug() << motDePasseBdd;
        if(login == loginBdd && motDePasse == motDePasseBdd){
            type = rechercheUtilisateur.value(2).toString();
            accept();
        } else{
            qDebug() << "L'ouverture de la session à échoué";
        }
    }
}

void DialogConnexion::on_pushButtonQuitter_clicked()
{
    close();
}

QString DialogConnexion::getType()
{
    return type;
}

QString DialogConnexion::getNom()
{
    return nom;
}

QString DialogConnexion::getPrenom()
{
    return prenom;
}
