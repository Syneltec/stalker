TEMPLATE = lib
CONFIG += plugin
MOC_DIR += build
OBJECTS_DIR += build
INCLUDEPATH += ../../src


HEADERS += AddIndicator.h
SOURCES += AddIndicator.cpp
HEADERS += ChartPage.h
SOURCES += ChartPage.cpp
HEADERS += ConfigureButton.h
SOURCES += ConfigureButton.cpp
HEADERS += EditIndicator.h
SOURCES += EditIndicator.cpp
HEADERS += GroupPage.h
SOURCES += GroupPage.cpp
HEADERS += IndicatorPlot.h
SOURCES += IndicatorPlot.cpp
HEADERS += IndicatorPlotObject.h
SOURCES += IndicatorPlotObject.cpp
HEADERS += IndicatorPlotWidget.h
SOURCES += IndicatorPlotWidget.cpp
HEADERS += IndicatorPlotDialog.h
SOURCES += IndicatorPlotDialog.cpp
HEADERS += RecentCharts.h
SOURCES += RecentCharts.cpp
HEADERS += SidePanel.h
SOURCES += SidePanel.cpp
HEADERS += TabBar.h
SOURCES += TabBar.cpp
HEADERS += TabWidget.h
SOURCES += TabWidget.cpp
HEADERS += ../../src/Object.h
HEADERS += ../../src/Util.h
HEADERS += ../../src/Plugin.h
HEADERS += ../../src/PluginCommand.h
HEADERS += ../../src/ObjectCommand.h
HEADERS += ../../src/Dialog.h
HEADERS += ../../src/Bars.h


OBJECTS += ../../src/build/Dialog.o
OBJECTS += ../../src/build/Object.o
OBJECTS += ../../src/build/ObjectCommand.o
OBJECTS += ../../src/build/Util.o
OBJECTS += ../../src/build/Bars.o


HOME=$$system(echo $HOME) 

# install the lib
target.path =  $${HOME}/OTA/lib
INSTALLS += target

# install the indicator example files
examples.path =  $${HOME}/OTA/IndicatorPlot/indicator
examples.files = examples/*
INSTALLS += examples

QT += core
QT += gui
QT += widgets

