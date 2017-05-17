/********************************************************************************
** Form generated from reading UI file 'mainwindowgestionnaires.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWGESTIONNAIRES_H
#define UI_MAINWINDOWGESTIONNAIRES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

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
    QHBoxLayout *horizontalLayout_17;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_10;
    QListWidget *listWidgetRayons;
    QHBoxLayout *horizontalLayout_14;
    QLineEdit *lineEditRayons;
    QPushButton *pushButtonAjouterRayons;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_11;
    QListWidget *listWidgetCategories;
    QHBoxLayout *horizontalLayout_15;
    QLineEdit *lineEditCategories;
    QPushButton *pushButtonAjouterCategories;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_12;
    QListWidget *listWidgetProduits;
    QHBoxLayout *horizontalLayout_16;
    QLineEdit *lineEditProduits;
    QPushButton *pushButtonAjouterProduits;
    QWidget *tab_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowGestionnaires)
    {
        if (MainWindowGestionnaires->objectName().isEmpty())
            MainWindowGestionnaires->setObjectName(QStringLiteral("MainWindowGestionnaires"));
        MainWindowGestionnaires->resize(837, 585);
        centralwidget = new QWidget(MainWindowGestionnaires);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_13 = new QHBoxLayout(centralwidget);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        tabWidgetGestionnaire = new QTabWidget(centralwidget);
        tabWidgetGestionnaire->setObjectName(QStringLiteral("tabWidgetGestionnaire"));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidgetGestionnaire->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout_12 = new QHBoxLayout(tab);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableWidgetEmploye = new QTableWidget(tab);
        if (tableWidgetEmploye->columnCount() < 8)
            tableWidgetEmploye->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetEmploye->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetEmploye->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetEmploye->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetEmploye->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetEmploye->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetEmploye->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetEmploye->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetEmploye->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidgetEmploye->setObjectName(QStringLiteral("tableWidgetEmploye"));
        tableWidgetEmploye->setMinimumSize(QSize(500, 250));
        tableWidgetEmploye->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetEmploye->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_3->addWidget(tableWidgetEmploye);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        pushButtonModifEmploye = new QPushButton(tab);
        pushButtonModifEmploye->setObjectName(QStringLiteral("pushButtonModifEmploye"));

        horizontalLayout_10->addWidget(pushButtonModifEmploye);

        pushButtonSupprimer = new QPushButton(tab);
        pushButtonSupprimer->setObjectName(QStringLiteral("pushButtonSupprimer"));

        horizontalLayout_10->addWidget(pushButtonSupprimer);


        verticalLayout_3->addLayout(horizontalLayout_10);


        horizontalLayout_12->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelEmploye = new QLabel(tab);
        labelEmploye->setObjectName(QStringLiteral("labelEmploye"));

        verticalLayout_2->addWidget(labelEmploye);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_8->addWidget(label);

        lineEditNom = new QLineEdit(tab);
        lineEditNom->setObjectName(QStringLiteral("lineEditNom"));

        horizontalLayout_8->addWidget(lineEditNom);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_7->addWidget(label_2);

        lineEditPrenom = new QLineEdit(tab);
        lineEditPrenom->setObjectName(QStringLiteral("lineEditPrenom"));

        horizontalLayout_7->addWidget(lineEditPrenom);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_11->addWidget(label_9);

        lineEditPseudo = new QLineEdit(tab);
        lineEditPseudo->setObjectName(QStringLiteral("lineEditPseudo"));

        horizontalLayout_11->addWidget(lineEditPseudo);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_6->addWidget(label_3);

        lineEditRue = new QLineEdit(tab);
        lineEditRue->setObjectName(QStringLiteral("lineEditRue"));

        horizontalLayout_6->addWidget(lineEditRue);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEditCodePostal = new QLineEdit(tab);
        lineEditCodePostal->setObjectName(QStringLiteral("lineEditCodePostal"));

        horizontalLayout_5->addWidget(lineEditCodePostal);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEditVille = new QLineEdit(tab);
        lineEditVille->setObjectName(QStringLiteral("lineEditVille"));

        horizontalLayout_4->addWidget(lineEditVille);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        lineEditTel = new QLineEdit(tab);
        lineEditTel->setObjectName(QStringLiteral("lineEditTel"));

        horizontalLayout_3->addWidget(lineEditTel);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);

        lineEditTelFix = new QLineEdit(tab);
        lineEditTelFix->setObjectName(QStringLiteral("lineEditTelFix"));

        horizontalLayout_2->addWidget(lineEditTelFix);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout->addWidget(label_8);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioButtonGestionnaire = new QRadioButton(tab);
        radioButtonGestionnaire->setObjectName(QStringLiteral("radioButtonGestionnaire"));
        radioButtonGestionnaire->setEnabled(true);

        verticalLayout->addWidget(radioButtonGestionnaire);

        radioButtonControleur = new QRadioButton(tab);
        radioButtonControleur->setObjectName(QStringLiteral("radioButtonControleur"));

        verticalLayout->addWidget(radioButtonControleur);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        pushButtonAnnuler = new QPushButton(tab);
        pushButtonAnnuler->setObjectName(QStringLiteral("pushButtonAnnuler"));

        horizontalLayout_9->addWidget(pushButtonAnnuler);

        pushButtonValider = new QPushButton(tab);
        pushButtonValider->setObjectName(QStringLiteral("pushButtonValider"));

        horizontalLayout_9->addWidget(pushButtonValider);


        verticalLayout_2->addLayout(horizontalLayout_9);


        horizontalLayout_12->addLayout(verticalLayout_2);

        tabWidgetGestionnaire->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        horizontalLayout_17 = new QHBoxLayout(tab_3);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_4->addWidget(label_10);

        listWidgetRayons = new QListWidget(tab_3);
        listWidgetRayons->setObjectName(QStringLiteral("listWidgetRayons"));

        verticalLayout_4->addWidget(listWidgetRayons);


        verticalLayout_7->addLayout(verticalLayout_4);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        lineEditRayons = new QLineEdit(tab_3);
        lineEditRayons->setObjectName(QStringLiteral("lineEditRayons"));

        horizontalLayout_14->addWidget(lineEditRayons);

        pushButtonAjouterRayons = new QPushButton(tab_3);
        pushButtonAjouterRayons->setObjectName(QStringLiteral("pushButtonAjouterRayons"));
        pushButtonAjouterRayons->setEnabled(false);

        horizontalLayout_14->addWidget(pushButtonAjouterRayons);


        verticalLayout_7->addLayout(horizontalLayout_14);


        horizontalLayout_17->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_5->addWidget(label_11);

        listWidgetCategories = new QListWidget(tab_3);
        listWidgetCategories->setObjectName(QStringLiteral("listWidgetCategories"));

        verticalLayout_5->addWidget(listWidgetCategories);


        verticalLayout_8->addLayout(verticalLayout_5);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        lineEditCategories = new QLineEdit(tab_3);
        lineEditCategories->setObjectName(QStringLiteral("lineEditCategories"));
        lineEditCategories->setEnabled(false);

        horizontalLayout_15->addWidget(lineEditCategories);

        pushButtonAjouterCategories = new QPushButton(tab_3);
        pushButtonAjouterCategories->setObjectName(QStringLiteral("pushButtonAjouterCategories"));
        pushButtonAjouterCategories->setEnabled(false);

        horizontalLayout_15->addWidget(pushButtonAjouterCategories);


        verticalLayout_8->addLayout(horizontalLayout_15);


        horizontalLayout_17->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_6->addWidget(label_12);

        listWidgetProduits = new QListWidget(tab_3);
        listWidgetProduits->setObjectName(QStringLiteral("listWidgetProduits"));

        verticalLayout_6->addWidget(listWidgetProduits);


        verticalLayout_9->addLayout(verticalLayout_6);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        lineEditProduits = new QLineEdit(tab_3);
        lineEditProduits->setObjectName(QStringLiteral("lineEditProduits"));
        lineEditProduits->setEnabled(false);

        horizontalLayout_16->addWidget(lineEditProduits);

        pushButtonAjouterProduits = new QPushButton(tab_3);
        pushButtonAjouterProduits->setObjectName(QStringLiteral("pushButtonAjouterProduits"));
        pushButtonAjouterProduits->setEnabled(false);

        horizontalLayout_16->addWidget(pushButtonAjouterProduits);


        verticalLayout_9->addLayout(horizontalLayout_16);


        horizontalLayout_17->addLayout(verticalLayout_9);

        tabWidgetGestionnaire->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidgetGestionnaire->addTab(tab_2, QString());

        horizontalLayout_13->addWidget(tabWidgetGestionnaire);

        MainWindowGestionnaires->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowGestionnaires);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 837, 27));
        MainWindowGestionnaires->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowGestionnaires);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowGestionnaires->setStatusBar(statusbar);

        retranslateUi(MainWindowGestionnaires);

        tabWidgetGestionnaire->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindowGestionnaires);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowGestionnaires)
    {
        MainWindowGestionnaires->setWindowTitle(QApplication::translate("MainWindowGestionnaires", "Gestionnaire", 0));
        tabWidgetGestionnaire->setTabText(tabWidgetGestionnaire->indexOf(tab_4), QApplication::translate("MainWindowGestionnaires", "Statisitques", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetEmploye->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindowGestionnaires", "Nom", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetEmploye->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindowGestionnaires", "Prenom", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetEmploye->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindowGestionnaires", "rue", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetEmploye->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindowGestionnaires", "code postal", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetEmploye->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindowGestionnaires", "Ville", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetEmploye->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindowGestionnaires", "T\303\251l\303\251phone", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetEmploye->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindowGestionnaires", "T\303\251l\303\251phone fix", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetEmploye->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindowGestionnaires", "Type", 0));
        pushButtonModifEmploye->setText(QApplication::translate("MainWindowGestionnaires", "Modifier la selection", 0));
        pushButtonSupprimer->setText(QApplication::translate("MainWindowGestionnaires", "Supprimer la selection", 0));
        labelEmploye->setText(QApplication::translate("MainWindowGestionnaires", "Ajout d'un employ\303\251.", 0));
        label->setText(QApplication::translate("MainWindowGestionnaires", "Nom : ", 0));
        label_2->setText(QApplication::translate("MainWindowGestionnaires", "Prenom :", 0));
        label_9->setText(QApplication::translate("MainWindowGestionnaires", "Pseudo :", 0));
        label_3->setText(QApplication::translate("MainWindowGestionnaires", "rue :", 0));
        label_4->setText(QApplication::translate("MainWindowGestionnaires", "Code postal :", 0));
        label_5->setText(QApplication::translate("MainWindowGestionnaires", "Ville :", 0));
        label_6->setText(QApplication::translate("MainWindowGestionnaires", "Tel :", 0));
        label_7->setText(QApplication::translate("MainWindowGestionnaires", "Tel fix :", 0));
        label_8->setText(QApplication::translate("MainWindowGestionnaires", "Type :", 0));
        radioButtonGestionnaire->setText(QApplication::translate("MainWindowGestionnaires", "Gestionnaire", 0));
        radioButtonControleur->setText(QApplication::translate("MainWindowGestionnaires", "Controleur", 0));
        pushButtonAnnuler->setText(QApplication::translate("MainWindowGestionnaires", "Annuler", 0));
        pushButtonValider->setText(QApplication::translate("MainWindowGestionnaires", "Valider", 0));
        tabWidgetGestionnaire->setTabText(tabWidgetGestionnaire->indexOf(tab), QApplication::translate("MainWindowGestionnaires", "Personnel", 0));
        label_10->setText(QApplication::translate("MainWindowGestionnaires", "Rayons ", 0));
        pushButtonAjouterRayons->setText(QApplication::translate("MainWindowGestionnaires", "Ajouter", 0));
        label_11->setText(QApplication::translate("MainWindowGestionnaires", "Cat\303\251gories", 0));
        pushButtonAjouterCategories->setText(QApplication::translate("MainWindowGestionnaires", "Ajouter", 0));
        label_12->setText(QApplication::translate("MainWindowGestionnaires", "Produits", 0));
        pushButtonAjouterProduits->setText(QApplication::translate("MainWindowGestionnaires", "Ajouter", 0));
        tabWidgetGestionnaire->setTabText(tabWidgetGestionnaire->indexOf(tab_3), QApplication::translate("MainWindowGestionnaires", "Rayon/Type produit", 0));
        tabWidgetGestionnaire->setTabText(tabWidgetGestionnaire->indexOf(tab_2), QApplication::translate("MainWindowGestionnaires", "Visites", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowGestionnaires: public Ui_MainWindowGestionnaires {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWGESTIONNAIRES_H
