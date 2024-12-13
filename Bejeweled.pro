QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    game.cpp \
    gametimer.cpp \
    globalvalue.cpp \
    main.cpp \
    mainwindow.cpp \
    stonelabel.cpp

HEADERS += \
    game.h \
    gametimer.h \
    globalvalue.h \
    mainwindow.h \
    stonelabel.h

FORMS += \
    game.ui \
    mainwindow.ui

TRANSLATIONS += \
    Bejeweled_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    build/Gems/jewel.qrc

DISTFILES += \
    build/Fruits/Fruit1.png \
    build/Fruits/Fruit2.png \
    build/Fruits/Fruit3.png \
    build/Fruits/Fruit4.png \
    build/Fruits/Fruit5.png \
    build/Fruits/Fruit6.png \
    build/Fruits/Fruit7.png \
    build/Fruits/Fruit8.png \
    build/Fruits/Fruit9.png \
    build/Fruits/Grape.png
