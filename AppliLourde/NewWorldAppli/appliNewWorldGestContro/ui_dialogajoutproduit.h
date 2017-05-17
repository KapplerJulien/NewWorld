/********************************************************************************
** Form generated from reading UI file 'dialogajoutproduit.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAJOUTPRODUIT_H
#define UI_DIALOGAJOUTPRODUIT_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogAjoutProduit
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEditPu;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEditQte;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogAjoutProduit)
    {
        if (DialogAjoutProduit->objectName().isEmpty())
            DialogAjoutProduit->setObjectName(QStringLiteral("DialogAjoutProduit"));
        DialogAjoutProduit->resize(264, 131);
        verticalLayout = new QVBoxLayout(DialogAjoutProduit);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(DialogAjoutProduit);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEditPu = new QLineEdit(DialogAjoutProduit);
        lineEditPu->setObjectName(QStringLiteral("lineEditPu"));

        horizontalLayout_2->addWidget(lineEditPu);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(DialogAjoutProduit);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEditQte = new QLineEdit(DialogAjoutProduit);
        lineEditQte->setObjectName(QStringLiteral("lineEditQte"));

        horizontalLayout->addWidget(lineEditQte);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(DialogAjoutProduit);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogAjoutProduit);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogAjoutProduit, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogAjoutProduit, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogAjoutProduit);
    } // setupUi

    void retranslateUi(QDialog *DialogAjoutProduit)
    {
        DialogAjoutProduit->setWindowTitle(QApplication::translate("DialogAjoutProduit", "Dialog", 0));
        label->setText(QApplication::translate("DialogAjoutProduit", "Prix unitaire : ", 0));
        label_2->setText(QApplication::translate("DialogAjoutProduit", "Quantit\303\251 :", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogAjoutProduit: public Ui_DialogAjoutProduit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAJOUTPRODUIT_H
