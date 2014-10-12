#-------------------------------------------------
#
# Project created by QtCreator 2011-06-02T10:08:15
#
#-------------------------------------------------

QT       += core gui

TARGET = test
TEMPLATE = app


SOURCES += main.cpp \
    mainwindow.cpp

HEADERS  += \
    mainwindow.h \
    label.h

FORMS    += \
    mainwindow.ui

RESOURCES += \
    grafika.qrc \
    ikony.qrc

    win32:RC_FILE = ikona.rc
