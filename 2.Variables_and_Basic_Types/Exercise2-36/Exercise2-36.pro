TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11
CONFIG += rtti

SOURCES += main.cpp

include(deployment.pri)
qtcAddDeployment()

