#-------------------------------------------------
#
# Project created by QtCreator 2017-03-03T14:06:06
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = appliNewWorldGestContro
TEMPLATE = app


SOURCES += main.cpp\
    mainwindowgestionnaires.cpp \
    mainwindowcontroleurs.cpp \
    dialogconnexion.cpp \
    dialogajoutproduit.cpp

HEADERS  += \
    mainwindowgestionnaires.h \
    mainwindowcontroleurs.h \
    dialogconnexion.h \
    dialogajoutproduit.h

FORMS    += \
    mainwindowgestionnaires.ui \
    mainwindowcontroleurs.ui \
    dialogconnexion.ui \
    dialogajoutproduit.ui
