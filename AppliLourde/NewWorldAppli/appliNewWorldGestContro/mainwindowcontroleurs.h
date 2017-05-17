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
    explicit MainWindowControleurs(QWidget *parent = 0);
    ~MainWindowControleurs();
    
private:
    Ui::MainWindowControleurs *ui;
};

#endif // MAINWINDOWCONTROLEURS_H
