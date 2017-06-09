#include "dialogconnexion.h"
#include "ui_dialogconnexion.h"
#include "dialogajoutvisite.h"

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
    QSqlQuery rechercheUtilisateur("Select idPers, loginPers, motDePassePers, idTypeP from personnel ;");
    while(rechercheUtilisateur.next()){
        QString loginBdd = rechercheUtilisateur.value("loginPers").toString();
        qDebug() << loginBdd;
        QString motDePasseBdd = rechercheUtilisateur.value("motDePassePers").toString();
        qDebug() << motDePasseBdd;
        if(login == loginBdd && motDePasse == motDePasseBdd){
            id = rechercheUtilisateur.value("idPers").toString();
            type = rechercheUtilisateur.value("idTypeP").toString();
            // qDebug() << type;
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
QString DialogConnexion::getId() const
{
    return id;
}

void DialogConnexion::setId(const QString &value)
{
    id = value;
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
