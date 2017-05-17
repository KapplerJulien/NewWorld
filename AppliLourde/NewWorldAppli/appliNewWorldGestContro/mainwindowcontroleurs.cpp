#include "mainwindowcontroleurs.h"
#include "ui_mainwindowcontroleurs.h"

MainWindowControleurs::MainWindowControleurs(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowControleurs)
{
    ui->setupUi(this);
}

MainWindowControleurs::~MainWindowControleurs()
{
    delete ui;
}
