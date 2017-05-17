#ifndef MAINWINDOWGESTIONNAIRES_H
#define MAINWINDOWGESTIONNAIRES_H

#include <QMainWindow>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <vector>

namespace Ui {
class MainWindowGestionnaires;
}

class MainWindowGestionnaires : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindowGestionnaires(QWidget *parent = 0);
    ~MainWindowGestionnaires();
    void remplissageTableau();
    
    QString randomMdp(int nbreMot);
private slots:
    void on_pushButtonValider_clicked();
    int idMaxEmploye(QString table);

    void on_pushButtonModifEmploye_clicked();

    void on_pushButtonAnnuler_clicked();

    void on_pushButtonSupprimer_clicked();

    void on_pushButtonAjouterRayons_clicked();

    void chargementListRayon();

    QString maxIdRayon();
    
    void on_listWidgetRayons_clicked(const QModelIndex &index);

    void on_pushButtonAjouterCategories_clicked();

    void chargementListCategorie(QString idRayon);
    QString maxIdCategorie();
    void on_pushButtonAjouterProduits_clicked();

    void on_listWidgetCategories_clicked(const QModelIndex &index);

    void chargementListProduit(QString idCategorie);
    QString maxIdProduit();

    void on_lineEditProduits_textChanged(const QString &arg1);

    void on_lineEditRayons_textChanged(const QString &arg1);

    void on_lineEditCategories_textChanged(const QString &arg1);

private:
    Ui::MainWindowGestionnaires *ui;
    int idMaxUtilisateur;
    int idMaxGestionnaire;
    QString id;
    QString nom;
    QString prenom;
    QString rue;
    QString codePostale;
    QString ville;
    QString tel;
    QString telFix;
    QString type;
    QString pseudo;
    QString mdpInitial;
    QVector<QString> lesGestionnaires;
};

#endif // MAINWINDOWGESTIONNAIRES_H