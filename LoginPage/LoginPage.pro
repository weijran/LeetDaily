#-------------------------------------------------
#
# Project created by QtCreator 2024-03-12T19:56:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LoginPage
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
    pageb.cpp \
    pagec.cpp \
    pagea.cpp \
    diarylistwidget.cpp \
    destinationlistwidget.cpp \
    diarydialog.cpp \
    writenotewidget.cpp \
    mylineedit.cpp \
    showlinewidget.cpp \
    buildingbtn.cpp \
    api_for_ybc.cpp \
    api_for_djh.cpp \
    someassets.cpp \
    lineeditwithdelete.cpp

HEADERS  += \
    pageb.h \
    pagec.h \
    pagea.h \
    diarylistwidget.h \
    frontend_ds.h \
    destinationlistwidget.h \
    diarydialog.h \
    writenotewidget.h \
    mylineedit.h \
    showlinewidget.h \
    buildingbtn.h \
    api_for_ybc.h \
    api_for_djh.h \
    someassets.h \
    lineeditwithdelete.h

FORMS    += \
    pageb.ui \
    pagec.ui \
    pagea.ui \
    diarydialog.ui

RESOURCES += \
    pic/all.qrc

DISTFILES +=
