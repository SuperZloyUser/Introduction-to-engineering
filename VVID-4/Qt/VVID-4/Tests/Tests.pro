QT += testlib
QT -= gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++11

SOURCES +=  tst_laba2tests.cpp \
    main.cpp

SOURCES += ../caesaralg.cpp \
    ../okrugnk.cpp \
    ../palindrom.cpp \
    ../countglas.cpp \
    ../countletters.cpp \
    ../countsogl.cpp \
    ../countoflettera.cpp \
    ../countofletterz.cpp


HEADERS += ../funcs.h \
    tst_laba2tests.h
