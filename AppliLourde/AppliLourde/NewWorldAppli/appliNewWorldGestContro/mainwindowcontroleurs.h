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
private:
    Ui::MainWindowControleurs *ui;
    QString idControleur;
};

#endif // MAINWINDOWCONTROLEURS_H
