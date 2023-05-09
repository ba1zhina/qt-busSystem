QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addad.cpp \
    addautomobiles.cpp \
    adddriver.cpp \
    additinerary.cpp \
    addroutes.cpp \
    connectiondialog.cpp \
    dbquery.cpp \
    main.cpp \
    mainwindow.cpp \
    query.cpp \
    updatead.cpp \
    updateautomobiles.cpp \
    updatedrivers.cpp \
    updateitinerary.cpp \
    updateroutes.cpp

HEADERS += \
    addad.h \
    addautomobiles.h \
    adddriver.h \
    additinerary.h \
    addroutes.h \
    connectiondialog.h \
    dbquery.h \
    mainwindow.h \
    query.h \
    updatead.h \
    updateautomobiles.h \
    updatedrivers.h \
    updateitinerary.h \
    updateroutes.h

FORMS += \
    addad.ui \
    addautomobiles.ui \
    adddriver.ui \
    additinerary.ui \
    addroutes.ui \
    connectiondialog.ui \
    mainwindow.ui \
    query.ui \
    updatead.ui \
    updateautomobiles.ui \
    updatedrivers.ui \
    updateitinerary.ui \
    updateroutes.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
