TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    statemachine.c \
    bignum.c \
    errors.c \
    test.c \
    parser.c

HEADERS += \
    statemachine.h \
    bignum.h \
    errors.h \
    test.h \
    parser.h

