#ifndef DIALOGCONNEXION_H
#define DIALOGCONNEXION_H

#include <QDialog>
#include <QSqlQuery>
#include <QDebug>
#include <QVector>

namespace Ui {
class DialogConnexion;
}

class DialogConnexion : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogConnexion(QWidget *parent = 0);
    ~DialogConnexion();
    QString getType();
    QString getNom();
    QString getPrenom();
    
private slots:
    void on_pushButtonConnection_clicked();

    void on_pushButtonQuitter_clicked();

private:
    Ui::DialogConnexion *ui;
    QString type;
    QString nom;
    QString prenom;
};

#endif // DIALOGCONNEXION_H
