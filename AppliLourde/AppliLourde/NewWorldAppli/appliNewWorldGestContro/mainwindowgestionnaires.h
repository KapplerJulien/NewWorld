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
    explicit MainWindowGestionnaires(QString id, QWidget *parent = 0);
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

    // Partie ajout Produit/Rayon/Catégorie //
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

    void on_pushButtonSupprimerRayons_clicked();

    void on_pushButtonSupprimerCategories_clicked();

    void on_pushButtonSupprimerProduits_clicked();

    void on_listWidgetCategories_itemSelectionChanged();

    void on_listWidgetProduitsDemandes_itemSelectionChanged();

    void chargementListProduitsDemandes();

    void on_pushButtonAjouterProduitsDemandes_clicked();
    void on_pushButtonRefuserProduitsDemandes_clicked();

    // Partie Visite //
    void chargementProducteur();
    void on_tableWidgetProducteurVisite_clicked(const QModelIndex &index);

    void on_tableWidgetProducteurPremVisite_clicked(const QModelIndex &index);

    void on_pushButtonAjoutVisite_clicked();

    void on_pushButtonAjoutPremVisite_clicked();

private:
    Ui::MainWindowGestionnaires *ui;
    int idMaxUtilisateur;
    int idMaxGestionnaire;
    QString idMaxVisite;
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

    QString idCategorie;
    QString idRayon;
    QString idProduit;

    QString idSession;
};

#endif // MAINWINDOWGESTIONNAIRES_H
