#-------------------------------------------------
#
# Project created by QtCreator 2023-04-04T13:32:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MainReview
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    readfile.cpp

HEADERS  += mainwindow.h \
    readfile.h

FORMS    += mainwindow.ui

DISTFILES += \
    README.md
