#-------------------------------------------------
#
# Project created by QtCreator 2019-08-19T08:30:51
#
#-------------------------------------------------

QT       += core gui
QT	 += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Bsafe_GUI
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    vnwindow.cpp \
    loginwindow.cpp \
    mainmenuwindow.cpp \
    adminmenu.cpp \
    maintmenu.cpp \
    meimaintenance.cpp \
    reportswindow.cpp \
    utdmaintwindow.cpp \
    lockmaintmenu.cpp

HEADERS += \
        mainwindow.h \
    vnwindow.h \
    loginwindow.h \
    mainmenuwindow.h \
    adminmenu.h \
    maintmenu.h \
    meimaintenance.h \
    reportswindow.h \
    utdmaintwindow.h \
    lockmaintmenu.h

FORMS += \
        mainwindow.ui \
    vnwindow.ui \
    loginwindow.ui \
    mainmenuwindow.ui \
    adminmenu.ui \
    maintmenu.ui \
    meimaintenance.ui \
    reportswindow.ui \
    utdmaintwindow.ui \
    lockmaintmenu.ui
