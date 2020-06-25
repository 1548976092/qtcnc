#-------------------------------------------------
#
# Project created by QtCreator 2020-06-24T06:31:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtcnc
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui



INCLUDEPATH += /home/pzx/linuxcnc/include          #声明头文件
INCLUDEPATH += /home/pzx/linuxcnc/src/emc/usr_intf #声明emc_nmlfile
INCLUDEPATH += /home/pzx/linuxcnc/src/emc/nml_intf #声明emcFormat


#LIBS += /home/pzx/linuxcnc/lib/liblinuxcnc.a       #调用封装后的nml接口库，假如调用linuxcnc.so则不需要了 
#LIBS += -L/home/pzx/linuxcnc/lib -lnml             #调用rcs库，假如调用linuxcnc.so则不需要了
LIBS += /home/pzx/linuxcnc/tcl/linuxcnc.so         #调用schom.cc函数




