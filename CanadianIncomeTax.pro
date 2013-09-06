APP_NAME = CanadianIncomeTax

CONFIG += qt warn_on cascades10

include(config.pri)
QT += core

INCLUDEPATH += ../src ${QNX_TARGET}/usr/include/qt4/QtCore

DEPENDPATH += ../src ${QNX_TARGET}/usr/include/qt4/QtCore

LIBS += -lbbcascades