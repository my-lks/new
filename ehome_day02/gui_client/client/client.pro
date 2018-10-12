#-------------------------------------------------
#
# Project created by QtCreator 2016-11-28T00:11:23
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = client
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \

HEADERS  += mainwindow.h \
    ../../include/ehome.h

FORMS    += mainwindow.ui

RESOURCES += \
    images.qrc
