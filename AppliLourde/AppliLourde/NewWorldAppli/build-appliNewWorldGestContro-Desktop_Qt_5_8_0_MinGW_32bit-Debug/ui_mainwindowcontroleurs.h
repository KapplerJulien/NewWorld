/********************************************************************************
** Form generated from reading UI file 'mainwindowcontroleurs.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWCONTROLEURS_H
#define UI_MAINWINDOWCONTROLEURS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowControleurs
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *tableWidgetProducteur;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditDateVisite;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditDescription;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonValide;
    QRadioButton *radioButtonInvalide;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowControleurs)
    {
        if (MainWindowControleurs->objectName().isEmpty())
            MainWindowControleurs->setObjectName(QStringLiteral("MainWindowControleurs"));
        MainWindowControleurs->resize(658, 265);
        centralwidget = new QWidget(MainWindowControleurs);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tableWidgetProducteur = new QTableWidget(centralwidget);
        if (tableWidgetProducteur->columnCount() < 3)
            tableWidgetProducteur->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetProducteur->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetProducteur->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetProducteur->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidgetProducteur->setObjectName(QStringLiteral("tableWidgetProducteur"));

        horizontalLayout_3->addWidget(tableWidgetProducteur);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEditDateVisite = new QLineEdit(centralwidget);
        lineEditDateVisite->setObjectName(QStringLiteral("lineEditDateVisite"));

        horizontalLayout->addWidget(lineEditDateVisite);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditDescription = new QLineEdit(centralwidget);
        lineEditDescription->setObjectName(QStringLiteral("lineEditDescription"));

        horizontalLayout_2->addWidget(lineEditDescription);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioButtonValide = new QRadioButton(centralwidget);
        radioButtonValide->setObjectName(QStringLiteral("radioButtonValide"));

        verticalLayout->addWidget(radioButtonValide);

        radioButtonInvalide = new QRadioButton(centralwidget);
        radioButtonInvalide->setObjectName(QStringLiteral("radioButtonInvalide"));

        verticalLayout->addWidget(radioButtonInvalide);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        MainWindowControleurs->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowControleurs);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 658, 27));
        MainWindowControleurs->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowControleurs);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowControleurs->setStatusBar(statusbar);

        retranslateUi(MainWindowControleurs);

        QMetaObject::connectSlotsByName(MainWindowControleurs);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowControleurs)
    {
        MainWindowControleurs->setWindowTitle(QApplication::translate("MainWindowControleurs", "Controleur", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetProducteur->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindowControleurs", "Nom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetProducteur->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindowControleurs", "Prenom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetProducteur->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindowControleurs", "Date de visite", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindowControleurs", "Modifier visite", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindowControleurs", "Date de visite : ", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindowControleurs", "Description :", Q_NULLPTR));
        radioButtonValide->setText(QApplication::translate("MainWindowControleurs", "Valide", Q_NULLPTR));
        radioButtonInvalide->setText(QApplication::translate("MainWindowControleurs", "Invalide", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowControleurs: public Ui_MainWindowControleurs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWCONTROLEURS_H
