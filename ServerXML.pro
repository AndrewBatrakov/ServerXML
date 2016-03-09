#-------------------------------------------------
#
# Project created by QtCreator 2013-12-18T09:26:54
#
#-------------------------------------------------

QT       += core gui\
            sql\
            xml\
            network\
            axcontainer\
            xmlpatterns\

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ServerEmployee

CONFIG += console\

TEMPLATE = app


SOURCES += main.cpp\

HEADERS  += \


include(Services.pri)

RESOURCES += \
    icons.qrc

RC_FILE = ServerXML.rc
