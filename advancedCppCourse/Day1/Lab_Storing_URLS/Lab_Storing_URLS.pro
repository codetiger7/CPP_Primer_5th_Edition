TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11


SOURCES += main.cpp \
    urlhistory.cpp \
    url.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    urlhistory.h \
    url.h

