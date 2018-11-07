TEMPLATE = lib

CONFIG += qt

QT = qml

TARGET = utilsplugin

SOURCES += \
    utilsplugin.cpp \
    process.cpp

HEADERS += \
    utilsplugin.hpp \
    process.hpp

target.path = $$[QT_INSTALL_QML]/OSSystems/Utils

pluginfiles.files += $$PWD/qmldir
pluginfiles.path = $$[QT_INSTALL_QML]/OSSystems/Utils

INSTALLS += target pluginfiles
