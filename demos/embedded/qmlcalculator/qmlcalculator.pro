!symbian:!wince*:warning("DEPLOYMENT support required. This project only works on Symbian and WinCE.")

QT += declarative
SOURCES += $$PWD/qmlcalculator.cpp
include($$PWD/deployment.pri)

symbian {
    TARGET.UID3 = 0x$$qmlcalculator_uid3 # defined in deployment.pri
    include($$QT_SOURCE_TREE/demos/symbianpkgrules.pri)
    TARGET.EPOCHEAPSIZE = 0x20000 0x2000000
    LIBS += -lcone -leikcore -lavkon # Screen orientation
}
