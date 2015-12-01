#-------------------------------------------------
#
# Project created by QtCreator 2015-11-16T09:26:22
#
#-------------------------------------------------

QT       -= core gui

TARGET = lice
TEMPLATE = lib
CONFIG += staticlib

SOURCES += lice.cpp

HEADERS += lice.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
