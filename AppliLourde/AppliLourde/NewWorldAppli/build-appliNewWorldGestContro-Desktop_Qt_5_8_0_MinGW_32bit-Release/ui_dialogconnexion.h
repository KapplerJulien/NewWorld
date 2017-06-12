/********************************************************************************
** Form generated from reading UI file 'dialogconnexion.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONNEXION_H
#define UI_DIALOGCONNEXION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogConnexion
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *lineEditLogin;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QLineEdit *lineEditMotDePasse;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonQuitter;
    QPushButton *pushButtonConnection;

    void setupUi(QDialog *DialogConnexion)
    {
        if (DialogConnexion->objectName().isEmpty())
            DialogConnexion->setObjectName(QStringLiteral("DialogConnexion"));
        DialogConnexion->resize(336, 129);
        verticalLayout = new QVBoxLayout(DialogConnexion);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label = new QLabel(DialogConnexion);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        lineEditLogin = new QLineEdit(DialogConnexion);
        lineEditLogin->setObjectName(QStringLiteral("lineEditLogin"));

        horizontalLayout_3->addWidget(lineEditLogin);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        label_2 = new QLabel(DialogConnexion);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditMotDePasse = new QLineEdit(DialogConnexion);
        lineEditMotDePasse->setObjectName(QStringLiteral("lineEditMotDePasse"));
        lineEditMotDePasse->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEditMotDePasse);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButtonQuitter = new QPushButton(DialogConnexion);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));

        horizontalLayout->addWidget(pushButtonQuitter);

        pushButtonConnection = new QPushButton(DialogConnexion);
        pushButtonConnection->setObjectName(QStringLiteral("pushButtonConnection"));

        horizontalLayout->addWidget(pushButtonConnection);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogConnexion);

        QMetaObject::connectSlotsByName(DialogConnexion);
    } // setupUi

    void retranslateUi(QDialog *DialogConnexion)
    {
        DialogConnexion->setWindowTitle(QApplication::translate("DialogConnexion", "Connection", Q_NULLPTR));
        label->setText(QApplication::translate("DialogConnexion", "Login :", Q_NULLPTR));
        label_2->setText(QApplication::translate("DialogConnexion", "Password :", Q_NULLPTR));
        pushButtonQuitter->setText(QApplication::translate("DialogConnexion", "&Quit", Q_NULLPTR));
        pushButtonConnection->setText(QApplication::translate("DialogConnexion", "&Connection", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogConnexion: public Ui_DialogConnexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONNEXION_H
