/********************************************************************************
** Form generated from reading UI file 'mainwindowgestionnaires.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWGESTIONNAIRES_H
#define UI_MAINWINDOWGESTIONNAIRES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
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
    QVBoxLayout *verticalLayout_10;
    QTabWidget *tabWidgetGestionnaire;
    QWidget *tab_4;
    QGraphicsView *graphicsView;
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
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_21;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_10;
    QPushButton *pushButtonSupprimerRayons;
    QListWidget *listWidgetRayons;
    QHBoxLayout *horizontalLayout_16;
    QLineEdit *lineEditRayons;
    QPushButton *pushButtonAjouterRayons;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_11;
    QPushButton *pushButtonSupprimerCategories;
    QListWidget *listWidgetCategories;
    QHBoxLayout *horizontalLayout_17;
    QLineEdit *lineEditCategories;
    QPushButton *pushButtonAjouterCategories;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_12;
    QPushButton *pushButtonSupprimerProduits;
    QListWidget *listWidgetProduits;
    QHBoxLayout *horizontalLayout_18;
    QLineEdit *lineEditProduits;
    QPushButton *pushButtonAjouterProduits;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_20;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_14;
    QListWidget *listWidgetProduitsDemandes;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButtonAjouterProduitsDemandes;
    QPushButton *pushButtonRefuserProduitsDemandes;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_24;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_15;
    QTableWidget *tableWidgetProducteurVisite;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonAjoutVisite;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_16;
    QTableWidget *tableWidgetProducteurPremVisite;
    QHBoxLayout *horizontalLayout_23;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonAjoutPremVisite;
    QHBoxLayout *horizontalLayout_25;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_17;
    QTableWidget *tableWidgetControleurVisite;
    QSpacerItem *horizontalSpacer_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowGestionnaires)
    {
        if (MainWindowGestionnaires->objectName().isEmpty())
            MainWindowGestionnaires->setObjectName(QStringLiteral("MainWindowGestionnaires"));
        MainWindowGestionnaires->resize(837, 634);
        centralwidget = new QWidget(MainWindowGestionnaires);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_10 = new QVBoxLayout(centralwidget);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        tabWidgetGestionnaire = new QTabWidget(centralwidget);
        tabWidgetGestionnaire->setObjectName(QStringLiteral("tabWidgetGestionnaire"));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        graphicsView = new QGraphicsView(tab_4);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(180, 310, 256, 192));
        tabWidgetGestionnaire->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout_12 = new QHBoxLayout(tab);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableWidgetEmploye = new QTableWidget(tab);
        if (tableWidgetEmploye->columnCount() < 7)
            tableWidgetEmploye->setColumnCount(7);
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
        verticalLayout_9 = new QVBoxLayout(tab_3);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_13->addWidget(label_10);

        pushButtonSupprimerRayons = new QPushButton(tab_3);
        pushButtonSupprimerRayons->setObjectName(QStringLiteral("pushButtonSupprimerRayons"));

        horizontalLayout_13->addWidget(pushButtonSupprimerRayons);


        verticalLayout_6->addLayout(horizontalLayout_13);

        listWidgetRayons = new QListWidget(tab_3);
        listWidgetRayons->setObjectName(QStringLiteral("listWidgetRayons"));

        verticalLayout_6->addWidget(listWidgetRayons);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        lineEditRayons = new QLineEdit(tab_3);
        lineEditRayons->setObjectName(QStringLiteral("lineEditRayons"));

        horizontalLayout_16->addWidget(lineEditRayons);

        pushButtonAjouterRayons = new QPushButton(tab_3);
        pushButtonAjouterRayons->setObjectName(QStringLiteral("pushButtonAjouterRayons"));
        pushButtonAjouterRayons->setEnabled(false);

        horizontalLayout_16->addWidget(pushButtonAjouterRayons);


        verticalLayout_6->addLayout(horizontalLayout_16);


        horizontalLayout_21->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_15->addWidget(label_11);

        pushButtonSupprimerCategories = new QPushButton(tab_3);
        pushButtonSupprimerCategories->setObjectName(QStringLiteral("pushButtonSupprimerCategories"));

        horizontalLayout_15->addWidget(pushButtonSupprimerCategories);


        verticalLayout_5->addLayout(horizontalLayout_15);

        listWidgetCategories = new QListWidget(tab_3);
        listWidgetCategories->setObjectName(QStringLiteral("listWidgetCategories"));

        verticalLayout_5->addWidget(listWidgetCategories);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        lineEditCategories = new QLineEdit(tab_3);
        lineEditCategories->setObjectName(QStringLiteral("lineEditCategories"));
        lineEditCategories->setEnabled(false);

        horizontalLayout_17->addWidget(lineEditCategories);

        pushButtonAjouterCategories = new QPushButton(tab_3);
        pushButtonAjouterCategories->setObjectName(QStringLiteral("pushButtonAjouterCategories"));
        pushButtonAjouterCategories->setEnabled(false);

        horizontalLayout_17->addWidget(pushButtonAjouterCategories);


        verticalLayout_5->addLayout(horizontalLayout_17);


        horizontalLayout_21->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_14->addWidget(label_12);

        pushButtonSupprimerProduits = new QPushButton(tab_3);
        pushButtonSupprimerProduits->setObjectName(QStringLiteral("pushButtonSupprimerProduits"));

        horizontalLayout_14->addWidget(pushButtonSupprimerProduits);


        verticalLayout_4->addLayout(horizontalLayout_14);

        listWidgetProduits = new QListWidget(tab_3);
        listWidgetProduits->setObjectName(QStringLiteral("listWidgetProduits"));

        verticalLayout_4->addWidget(listWidgetProduits);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        lineEditProduits = new QLineEdit(tab_3);
        lineEditProduits->setObjectName(QStringLiteral("lineEditProduits"));
        lineEditProduits->setEnabled(false);

        horizontalLayout_18->addWidget(lineEditProduits);

        pushButtonAjouterProduits = new QPushButton(tab_3);
        pushButtonAjouterProduits->setObjectName(QStringLiteral("pushButtonAjouterProduits"));
        pushButtonAjouterProduits->setEnabled(false);

        horizontalLayout_18->addWidget(pushButtonAjouterProduits);


        verticalLayout_4->addLayout(horizontalLayout_18);


        horizontalLayout_21->addLayout(verticalLayout_4);


        verticalLayout_9->addLayout(horizontalLayout_21);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_8->addWidget(label_13);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_19->addWidget(label_14);

        listWidgetProduitsDemandes = new QListWidget(tab_3);
        listWidgetProduitsDemandes->setObjectName(QStringLiteral("listWidgetProduitsDemandes"));

        horizontalLayout_19->addWidget(listWidgetProduitsDemandes);


        horizontalLayout_20->addLayout(horizontalLayout_19);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        pushButtonAjouterProduitsDemandes = new QPushButton(tab_3);
        pushButtonAjouterProduitsDemandes->setObjectName(QStringLiteral("pushButtonAjouterProduitsDemandes"));
        pushButtonAjouterProduitsDemandes->setEnabled(false);

        verticalLayout_7->addWidget(pushButtonAjouterProduitsDemandes);

        pushButtonRefuserProduitsDemandes = new QPushButton(tab_3);
        pushButtonRefuserProduitsDemandes->setObjectName(QStringLiteral("pushButtonRefuserProduitsDemandes"));
        pushButtonRefuserProduitsDemandes->setEnabled(false);

        verticalLayout_7->addWidget(pushButtonRefuserProduitsDemandes);


        horizontalLayout_20->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(horizontalLayout_20);


        verticalLayout_9->addLayout(verticalLayout_8);

        tabWidgetGestionnaire->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_15 = new QVBoxLayout(tab_2);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_11->addWidget(label_15);

        tableWidgetProducteurVisite = new QTableWidget(tab_2);
        if (tableWidgetProducteurVisite->columnCount() < 4)
            tableWidgetProducteurVisite->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetProducteurVisite->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetProducteurVisite->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetProducteurVisite->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetProducteurVisite->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        tableWidgetProducteurVisite->setObjectName(QStringLiteral("tableWidgetProducteurVisite"));
        tableWidgetProducteurVisite->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_11->addWidget(tableWidgetProducteurVisite);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_4);

        pushButtonAjoutVisite = new QPushButton(tab_2);
        pushButtonAjoutVisite->setObjectName(QStringLiteral("pushButtonAjoutVisite"));
        pushButtonAjoutVisite->setEnabled(false);

        horizontalLayout_22->addWidget(pushButtonAjoutVisite);


        verticalLayout_11->addLayout(horizontalLayout_22);


        horizontalLayout_24->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_12->addWidget(label_16);

        tableWidgetProducteurPremVisite = new QTableWidget(tab_2);
        if (tableWidgetProducteurPremVisite->columnCount() < 3)
            tableWidgetProducteurPremVisite->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetProducteurPremVisite->setHorizontalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetProducteurPremVisite->setHorizontalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetProducteurPremVisite->setHorizontalHeaderItem(2, __qtablewidgetitem13);
        tableWidgetProducteurPremVisite->setObjectName(QStringLiteral("tableWidgetProducteurPremVisite"));
        tableWidgetProducteurPremVisite->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_12->addWidget(tableWidgetProducteurPremVisite);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_5);

        pushButtonAjoutPremVisite = new QPushButton(tab_2);
        pushButtonAjoutPremVisite->setObjectName(QStringLiteral("pushButtonAjoutPremVisite"));
        pushButtonAjoutPremVisite->setEnabled(false);

        horizontalLayout_23->addWidget(pushButtonAjoutPremVisite);


        verticalLayout_12->addLayout(horizontalLayout_23);


        horizontalLayout_24->addLayout(verticalLayout_12);


        verticalLayout_14->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_6);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        verticalLayout_13->addWidget(label_17);

        tableWidgetControleurVisite = new QTableWidget(tab_2);
        if (tableWidgetControleurVisite->columnCount() < 3)
            tableWidgetControleurVisite->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidgetControleurVisite->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidgetControleurVisite->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidgetControleurVisite->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        tableWidgetControleurVisite->setObjectName(QStringLiteral("tableWidgetControleurVisite"));
        tableWidgetControleurVisite->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_13->addWidget(tableWidgetControleurVisite);


        horizontalLayout_25->addLayout(verticalLayout_13);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_7);


        verticalLayout_14->addLayout(horizontalLayout_25);


        verticalLayout_15->addLayout(verticalLayout_14);

        tabWidgetGestionnaire->addTab(tab_2, QString());

        verticalLayout_10->addWidget(tabWidgetGestionnaire);

        MainWindowGestionnaires->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowGestionnaires);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 837, 27));
        MainWindowGestionnaires->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowGestionnaires);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowGestionnaires->setStatusBar(statusbar);

        retranslateUi(MainWindowGestionnaires);

        tabWidgetGestionnaire->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindowGestionnaires);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowGestionnaires)
    {
        MainWindowGestionnaires->setWindowTitle(QApplication::translate("MainWindowGestionnaires", "Gestionnaire", Q_NULLPTR));
        tabWidgetGestionnaire->setTabText(tabWidgetGestionnaire->indexOf(tab_4), QApplication::translate("MainWindowGestionnaires", "Statisitques", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetEmploye->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindowGestionnaires", "Nom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetEmploye->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindowGestionnaires", "Prenom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetEmploye->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindowGestionnaires", "rue", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetEmploye->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindowGestionnaires", "code postal", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetEmploye->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindowGestionnaires", "Ville", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetEmploye->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindowGestionnaires", "T\303\251l\303\251phone", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetEmploye->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindowGestionnaires", "Type", Q_NULLPTR));
        pushButtonModifEmploye->setText(QApplication::translate("MainWindowGestionnaires", "Modifier la selection", Q_NULLPTR));
        pushButtonSupprimer->setText(QApplication::translate("MainWindowGestionnaires", "Supprimer la selection", Q_NULLPTR));
        labelEmploye->setText(QApplication::translate("MainWindowGestionnaires", "Ajout d'un employ\303\251.", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindowGestionnaires", "Nom : ", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindowGestionnaires", "Prenom :", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindowGestionnaires", "Pseudo :", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindowGestionnaires", "rue :", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindowGestionnaires", "Code postal :", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindowGestionnaires", "Ville :", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindowGestionnaires", "Tel :", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindowGestionnaires", "Type :", Q_NULLPTR));
        radioButtonGestionnaire->setText(QApplication::translate("MainWindowGestionnaires", "Gestionnaire", Q_NULLPTR));
        radioButtonControleur->setText(QApplication::translate("MainWindowGestionnaires", "Controleur", Q_NULLPTR));
        pushButtonAnnuler->setText(QApplication::translate("MainWindowGestionnaires", "Annuler", Q_NULLPTR));
        pushButtonValider->setText(QApplication::translate("MainWindowGestionnaires", "Valider", Q_NULLPTR));
        tabWidgetGestionnaire->setTabText(tabWidgetGestionnaire->indexOf(tab), QApplication::translate("MainWindowGestionnaires", "Personnel", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindowGestionnaires", "Rayons ", Q_NULLPTR));
        pushButtonSupprimerRayons->setText(QApplication::translate("MainWindowGestionnaires", "Supprimer", Q_NULLPTR));
        pushButtonAjouterRayons->setText(QApplication::translate("MainWindowGestionnaires", "Ajouter", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindowGestionnaires", "Cat\303\251gories", Q_NULLPTR));
        pushButtonSupprimerCategories->setText(QApplication::translate("MainWindowGestionnaires", "Supprimer", Q_NULLPTR));
        pushButtonAjouterCategories->setText(QApplication::translate("MainWindowGestionnaires", "Ajouter", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindowGestionnaires", "Produits", Q_NULLPTR));
        pushButtonSupprimerProduits->setText(QApplication::translate("MainWindowGestionnaires", "Supprimer", Q_NULLPTR));
        pushButtonAjouterProduits->setText(QApplication::translate("MainWindowGestionnaires", "Ajouter", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindowGestionnaires", "Ajout de produit : ", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindowGestionnaires", "Produits demand\303\251s :", Q_NULLPTR));
        pushButtonAjouterProduitsDemandes->setText(QApplication::translate("MainWindowGestionnaires", "Ajouter", Q_NULLPTR));
        pushButtonRefuserProduitsDemandes->setText(QApplication::translate("MainWindowGestionnaires", "Refuser", Q_NULLPTR));
        tabWidgetGestionnaire->setTabText(tabWidgetGestionnaire->indexOf(tab_3), QApplication::translate("MainWindowGestionnaires", "Rayon/Type produit", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindowGestionnaires", "Producteur : ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetProducteurVisite->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindowGestionnaires", "Nom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetProducteurVisite->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindowGestionnaires", "Pr\303\251nom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetProducteurVisite->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindowGestionnaires", "Ville", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetProducteurVisite->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindowGestionnaires", "Date visite", Q_NULLPTR));
        pushButtonAjoutVisite->setText(QApplication::translate("MainWindowGestionnaires", "Ajouter Visite", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindowGestionnaires", "Producteur o\303\271 la premi\303\250re visite doit \303\252tre fait : ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetProducteurPremVisite->horizontalHeaderItem(0);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindowGestionnaires", "Nom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetProducteurPremVisite->horizontalHeaderItem(1);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindowGestionnaires", "Pr\303\251nom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetProducteurPremVisite->horizontalHeaderItem(2);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindowGestionnaires", "Ville", Q_NULLPTR));
        pushButtonAjoutPremVisite->setText(QApplication::translate("MainWindowGestionnaires", "Ajouter Visite", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindowGestionnaires", "Contr\303\264leur (cliquez dessus pour voir ses visites) : ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetControleurVisite->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindowGestionnaires", "Nom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidgetControleurVisite->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindowGestionnaires", "Pr\303\251nom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidgetControleurVisite->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindowGestionnaires", "Ville", Q_NULLPTR));
        tabWidgetGestionnaire->setTabText(tabWidgetGestionnaire->indexOf(tab_2), QApplication::translate("MainWindowGestionnaires", "Visites", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowGestionnaires: public Ui_MainWindowGestionnaires {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWGESTIONNAIRES_H
