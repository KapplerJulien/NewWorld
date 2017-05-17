/********************************************************************************
** Form generated from reading UI file 'mainwindowgestionnaires.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWGESTIONNAIRES_H
#define UI_MAINWINDOWGESTIONNAIRES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowGestionnaires
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_13;
    QTabWidget *tabWidgetGestionnaire;
    QWidget *tab_4;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidgetEmploye;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonModifEmploye;
    QPushButton *pushButtonSupprimer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelEmploye;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QLineEdit *lineEditNom;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLineEdit *lineEditPrenom;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QLineEdit *lineEditPseudo;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *lineEditRue;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEditCodePostal;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEditVille;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *lineEditTel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *lineEditTelFix;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonGestionnaire;
    QRadioButton *radioButtonControleur;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButtonAnnuler;
    QPushButton *pushButtonValider;
    QWidget *tab_3;
    QWidget *tab_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowGestionnaires)
    {
        if (MainWindowGestionnaires->objectName().isEmpty())
            MainWindowGestionnaires->setObjectName(QString::fromUtf8("MainWindowGestionnaires"));
        MainWindowGestionnaires->resize(844, 571);
        centralwidget = new QWidget(MainWindowGestionnaires);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_13 = new QHBoxLayout(centralwidget);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        tabWidgetGestionnaire = new QTabWidget(centralwidget);
        tabWidgetGestionnaire->setObjectName(QString::fromUtf8("tabWidgetGestionnaire"));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidgetGestionnaire->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout_12 = new QHBoxLayout(tab);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tableWidgetEmploye = new QTableWidget(tab);
        tableWidgetEmploye->setObjectName(QString::fromUtf8("tableWidgetEmploye"));
        tableWidgetEmploye->setMinimumSize(QSize(500, 250));

        verticalLayout_3->addWidget(tableWidgetEmploye);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        pushButtonModifEmploye = new QPushButton(tab);
        pushButtonModifEmploye->setObjectName(QString::fromUtf8("pushButtonModifEmploye"));

        horizontalLayout_10->addWidget(pushButtonModifEmploye);

        pushButtonSupprimer = new QPushButton(tab);
        pushButtonSupprimer->setObjectName(QString::fromUtf8("pushButtonSupprimer"));

        horizontalLayout_10->addWidget(pushButtonSupprimer);


        verticalLayout_3->addLayout(horizontalLayout_10);


        horizontalLayout_12->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelEmploye = new QLabel(tab);
        labelEmploye->setObjectName(QString::fromUtf8("labelEmploye"));

        verticalLayout_2->addWidget(labelEmploye);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_8->addWidget(label);

        lineEditNom = new QLineEdit(tab);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));

        horizontalLayout_8->addWidget(lineEditNom);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_7->addWidget(label_2);

        lineEditPrenom = new QLineEdit(tab);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));

        horizontalLayout_7->addWidget(lineEditPrenom);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_11->addWidget(label_9);

        lineEditPseudo = new QLineEdit(tab);
        lineEditPseudo->setObjectName(QString::fromUtf8("lineEditPseudo"));

        horizontalLayout_11->addWidget(lineEditPseudo);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);

        lineEditRue = new QLineEdit(tab);
        lineEditRue->setObjectName(QString::fromUtf8("lineEditRue"));

        horizontalLayout_6->addWidget(lineEditRue);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEditCodePostal = new QLineEdit(tab);
        lineEditCodePostal->setObjectName(QString::fromUtf8("lineEditCodePostal"));

        horizontalLayout_5->addWidget(lineEditCodePostal);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEditVille = new QLineEdit(tab);
        lineEditVille->setObjectName(QString::fromUtf8("lineEditVille"));

        horizontalLayout_4->addWidget(lineEditVille);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        lineEditTel = new QLineEdit(tab);
        lineEditTel->setObjectName(QString::fromUtf8("lineEditTel"));

        horizontalLayout_3->addWidget(lineEditTel);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        lineEditTelFix = new QLineEdit(tab);
        lineEditTelFix->setObjectName(QString::fromUtf8("lineEditTelFix"));

        horizontalLayout_2->addWidget(lineEditTelFix);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButtonGestionnaire = new QRadioButton(tab);
        radioButtonGestionnaire->setObjectName(QString::fromUtf8("radioButtonGestionnaire"));
        radioButtonGestionnaire->setEnabled(true);

        verticalLayout->addWidget(radioButtonGestionnaire);

        radioButtonControleur = new QRadioButton(tab);
        radioButtonControleur->setObjectName(QString::fromUtf8("radioButtonControleur"));

        verticalLayout->addWidget(radioButtonControleur);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        pushButtonAnnuler = new QPushButton(tab);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));

        horizontalLayout_9->addWidget(pushButtonAnnuler);

        pushButtonValider = new QPushButton(tab);
        pushButtonValider->setObjectName(QString::fromUtf8("pushButtonValider"));

        horizontalLayout_9->addWidget(pushButtonValider);


        verticalLayout_2->addLayout(horizontalLayout_9);


        horizontalLayout_12->addLayout(verticalLayout_2);

        tabWidgetGestionnaire->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidgetGestionnaire->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidgetGestionnaire->addTab(tab_2, QString());

        horizontalLayout_13->addWidget(tabWidgetGestionnaire);

        MainWindowGestionnaires->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowGestionnaires);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 844, 29));
        MainWindowGestionnaires->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowGestionnaires);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowGestionnaires->setStatusBar(statusbar);

        retranslateUi(MainWindowGestionnaires);

        tabWidgetGestionnaire->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindowGestionnaires);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowGestionnaires)
    {
        MainWindowGestionnaires->setWindowTitle(QApplication::translate("MainWindowGestionnaires", "Gestionnaire", 0, QApplication::UnicodeUTF8));
        tabWidgetGestionnaire->setTabText(tabWidgetGestionnaire->indexOf(tab_4), QApplication::translate("MainWindowGestionnaires", "Statisitques", 0, QApplication::UnicodeUTF8));
        pushButtonModifEmploye->setText(QApplication::translate("MainWindowGestionnaires", "Modifier la selection", 0, QApplication::UnicodeUTF8));
        pushButtonSupprimer->setText(QApplication::translate("MainWindowGestionnaires", "Supprimer la selection", 0, QApplication::UnicodeUTF8));
        labelEmploye->setText(QString());
        label->setText(QApplication::translate("MainWindowGestionnaires", "Nom : ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindowGestionnaires", "Prenom :", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindowGestionnaires", "Pseudo :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindowGestionnaires", "rue :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindowGestionnaires", "Code postal :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindowGestionnaires", "Ville :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindowGestionnaires", "Tel :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindowGestionnaires", "Tel fix :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindowGestionnaires", "Type :", 0, QApplication::UnicodeUTF8));
        radioButtonGestionnaire->setText(QApplication::translate("MainWindowGestionnaires", "Gestionnaire", 0, QApplication::UnicodeUTF8));
        radioButtonControleur->setText(QApplication::translate("MainWindowGestionnaires", "Controleur", 0, QApplication::UnicodeUTF8));
        pushButtonAnnuler->setText(QApplication::translate("MainWindowGestionnaires", "Annuler", 0, QApplication::UnicodeUTF8));
        pushButtonValider->setText(QApplication::translate("MainWindowGestionnaires", "Valider", 0, QApplication::UnicodeUTF8));
        tabWidgetGestionnaire->setTabText(tabWidgetGestionnaire->indexOf(tab), QApplication::translate("MainWindowGestionnaires", "Personnel", 0, QApplication::UnicodeUTF8));
        tabWidgetGestionnaire->setTabText(tabWidgetGestionnaire->indexOf(tab_3), QApplication::translate("MainWindowGestionnaires", "Rayon/Type produit", 0, QApplication::UnicodeUTF8));
        tabWidgetGestionnaire->setTabText(tabWidgetGestionnaire->indexOf(tab_2), QApplication::translate("MainWindowGestionnaires", "Visites", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowGestionnaires: public Ui_MainWindowGestionnaires {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWGESTIONNAIRES_H
