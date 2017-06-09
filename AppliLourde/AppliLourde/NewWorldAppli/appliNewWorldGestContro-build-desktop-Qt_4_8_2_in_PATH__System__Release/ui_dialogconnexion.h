/********************************************************************************
** Form generated from reading UI file 'dialogconnexion.ui'
**
** Created: Fri Mar 3 17:01:20 2017
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONNEXION_H
#define UI_DIALOGCONNEXION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

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
            DialogConnexion->setObjectName(QString::fromUtf8("DialogConnexion"));
        DialogConnexion->resize(336, 129);
        verticalLayout = new QVBoxLayout(DialogConnexion);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label = new QLabel(DialogConnexion);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        lineEditLogin = new QLineEdit(DialogConnexion);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));

        horizontalLayout_3->addWidget(lineEditLogin);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        label_2 = new QLabel(DialogConnexion);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditMotDePasse = new QLineEdit(DialogConnexion);
        lineEditMotDePasse->setObjectName(QString::fromUtf8("lineEditMotDePasse"));
        lineEditMotDePasse->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEditMotDePasse);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButtonQuitter = new QPushButton(DialogConnexion);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));

        horizontalLayout->addWidget(pushButtonQuitter);

        pushButtonConnection = new QPushButton(DialogConnexion);
        pushButtonConnection->setObjectName(QString::fromUtf8("pushButtonConnection"));

        horizontalLayout->addWidget(pushButtonConnection);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogConnexion);

        QMetaObject::connectSlotsByName(DialogConnexion);
    } // setupUi

    void retranslateUi(QDialog *DialogConnexion)
    {
        DialogConnexion->setWindowTitle(QApplication::translate("DialogConnexion", "Connection", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogConnexion", "Login :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogConnexion", "Password :", 0, QApplication::UnicodeUTF8));
        pushButtonQuitter->setText(QApplication::translate("DialogConnexion", "&Quit", 0, QApplication::UnicodeUTF8));
        pushButtonConnection->setText(QApplication::translate("DialogConnexion", "&Connection", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogConnexion: public Ui_DialogConnexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONNEXION_H
