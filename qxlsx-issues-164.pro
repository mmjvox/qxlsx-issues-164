QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

DEFINES += SOURCE_PATH=\\\"$$PWD\\\"

include($$PWD/QXlsx/QXlsx.pri)

SOURCES += \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
