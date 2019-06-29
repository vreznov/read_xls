#-------------------------------------------------
#
# Project created by QtCreator 2018-03-08T21:49:26
#
#-------------------------------------------------

QT  += core gui
QT  += axcontainer

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tst_xls1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mrd_xls.cpp

HEADERS  += mainwindow.h \
    mrd_xls.h

FORMS    += mainwindow.ui

DISTFILES += \
    a1.xlsx
