#ifndef MAINWINDOWCONTROLEURS_H
#define MAINWINDOWCONTROLEURS_H

#include <QMainWindow>

namespace Ui {
class MainWindowControleurs;
}

class MainWindowControleurs : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindowControleurs(QString id,QWidget *parent = 0);
    ~MainWindowControleurs();
    
private slots:
    void chargementVisite();
    void on_tableWidgetProducteur_clicked(const QModelIndex &index);

    void on_pushButtonModifierVisite_clicked();

    void on_pushButtonModifier_clicked();

private:
    Ui::MainWindowControleurs *ui;
    QString idControleur;
    QString visiteConcluante;
    QString date;
    QString motifRejet;
    QString idProducteur;
};

#endif // MAINWINDOWCONTROLEURS_H
