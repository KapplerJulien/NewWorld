/********************************************************************************
** Form generated from reading UI file 'mainwindowcontroleurs.ui'
**
** Created: Fri Mar 3 15:18:35 2017
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWCONTROLEURS_H
#define UI_MAINWINDOWCONTROLEURS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowControleurs
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowControleurs)
    {
        if (MainWindowControleurs->objectName().isEmpty())
            MainWindowControleurs->setObjectName(QString::fromUtf8("MainWindowControleurs"));
        MainWindowControleurs->resize(800, 600);
        centralwidget = new QWidget(MainWindowControleurs);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindowControleurs->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowControleurs);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 29));
        MainWindowControleurs->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowControleurs);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowControleurs->setStatusBar(statusbar);

        retranslateUi(MainWindowControleurs);

        QMetaObject::connectSlotsByName(MainWindowControleurs);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowControleurs)
    {
        MainWindowControleurs->setWindowTitle(QApplication::translate("MainWindowControleurs", "Controleur", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowControleurs: public Ui_MainWindowControleurs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWCONTROLEURS_H
