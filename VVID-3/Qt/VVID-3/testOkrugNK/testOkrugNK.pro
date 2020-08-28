QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES +=  tst_laba2tests.cpp \
    main.cpp

SOURCES += ../caesaralg.cpp \
    ../palindrom.cpp \
    ../countglas.cpp \
    ../countsogl.cpp \
    ../countLetters.cpp \
    ../okrugnk.cpp

HEADERS += ../funcs.h

HEADERS += \
    tst_laba2tests.h
