/********************************************************************************
** Form generated from reading UI file 'dialogvisitecontroleur.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGVISITECONTROLEUR_H
#define UI_DIALOGVISITECONTROLEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogVisiteControleur
{
public:
    QDialogButtonBox *buttonBox;
    QTableWidget *tableWidgetProducteur;

    void setupUi(QDialog *DialogVisiteControleur)
    {
        if (DialogVisiteControleur->objectName().isEmpty())
            DialogVisiteControleur->setObjectName(QStringLiteral("DialogVisiteControleur"));
        DialogVisiteControleur->resize(619, 487);
        buttonBox = new QDialogButtonBox(DialogVisiteControleur);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(270, 430, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tableWidgetProducteur = new QTableWidget(DialogVisiteControleur);
        if (tableWidgetProducteur->columnCount() < 3)
            tableWidgetProducteur->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetProducteur->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetProducteur->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetProducteur->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidgetProducteur->setObjectName(QStringLiteral("tableWidgetProducteur"));
        tableWidgetProducteur->setGeometry(QRect(30, 20, 371, 291));

        retranslateUi(DialogVisiteControleur);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogVisiteControleur, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogVisiteControleur, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogVisiteControleur);
    } // setupUi

    void retranslateUi(QDialog *DialogVisiteControleur)
    {
        DialogVisiteControleur->setWindowTitle(QApplication::translate("DialogVisiteControleur", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetProducteur->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogVisiteControleur", "Nom", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetProducteur->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogVisiteControleur", "Prenom", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetProducteur->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogVisiteControleur", "DateVisite", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogVisiteControleur: public Ui_DialogVisiteControleur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGVISITECONTROLEUR_H
