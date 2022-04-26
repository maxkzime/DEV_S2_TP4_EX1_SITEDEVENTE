TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        address.cpp \
        client.cpp \
        line.cpp \
        main.cpp \
        order.cpp \
        product.cpp

HEADERS += \
    address.h \
    client.h \
    line.h \
    order.h \
    product.h
