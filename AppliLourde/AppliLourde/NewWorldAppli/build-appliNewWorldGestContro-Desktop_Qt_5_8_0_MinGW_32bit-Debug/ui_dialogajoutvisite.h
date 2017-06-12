/********************************************************************************
** Form generated from reading UI file 'dialogajoutvisite.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAJOUTVISITE_H
#define UI_DIALOGAJOUTVISITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogAjoutVisite
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTableWidget *tableWidgetControleur;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditDateVisite;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogAjoutVisite)
    {
        if (DialogAjoutVisite->objectName().isEmpty())
            DialogAjoutVisite->setObjectName(QStringLiteral("DialogAjoutVisite"));
        DialogAjoutVisite->resize(644, 278);
        verticalLayout_2 = new QVBoxLayout(DialogAjoutVisite);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(DialogAjoutVisite);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        tableWidgetControleur = new QTableWidget(DialogAjoutVisite);
        if (tableWidgetControleur->columnCount() < 3)
            tableWidgetControleur->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetControleur->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetControleur->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetControleur->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidgetControleur->setObjectName(QStringLiteral("tableWidgetControleur"));
        tableWidgetControleur->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableWidgetControleur);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(DialogAjoutVisite);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEditDateVisite = new QLineEdit(DialogAjoutVisite);
        lineEditDateVisite->setObjectName(QStringLiteral("lineEditDateVisite"));

        horizontalLayout->addWidget(lineEditDateVisite);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(DialogAjoutVisite);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(DialogAjoutVisite);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogAjoutVisite, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogAjoutVisite, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogAjoutVisite);
    } // setupUi

    void retranslateUi(QDialog *DialogAjoutVisite)
    {
        DialogAjoutVisite->setWindowTitle(QApplication::translate("DialogAjoutVisite", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("DialogAjoutVisite", "Contr\303\264leur \303\240 choisir :", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetControleur->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogAjoutVisite", "Nom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetControleur->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogAjoutVisite", "Prenom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetControleur->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogAjoutVisite", "Ville", Q_NULLPTR));
        label->setText(QApplication::translate("DialogAjoutVisite", "Date ( format : AAAA-MM-JJ) : ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogAjoutVisite: public Ui_DialogAjoutVisite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAJOUTVISITE_H
