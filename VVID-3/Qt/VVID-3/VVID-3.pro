QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VVID-3
TEMPLATE = app


DEFINES += QT_DEPRECATED_WARNINGS


CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
        caesaralg.cpp \
    palindrom.cpp \
    countglas.cpp \
    countsogl.cpp \
    countletters.cpp \
    okrugnk.cpp

HEADERS += \
        mainwindow.h \
    funcs.h

FORMS += \
        mainwindow.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
