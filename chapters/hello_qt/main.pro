# Files
SOURCES += \
  main.cpp \
  dialog.cpp

HEADERS += \
  dialog.h

FORMS += \
  dialog.ui

RESOURCES += \
  correct_cpp_hello_qt.qrc

# High warning levels
# -Weffc++ goes bad with Qt
QMAKE_CXXFLAGS += -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -Werror

# C++11
CONFIG += c++11
QMAKE_CXXFLAGS += -std=c++11

# Allow debug and release mode
CONFIG += debug_and_release

# In debug mode, turn on gcov, memcache and UBSAN
CONFIG(debug, debug|release) {

  # gcov
  QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
  LIBS += -lgcov

  # helgrind, for helgrind and memcheck
  QMAKE_LFLAGS += -pthread -Wl,--no-as-needed

  # UBSAN
  QMAKE_CXXFLAGS += -fsanitize=undefined
  QMAKE_LFLAGS += -fsanitize=undefined
  LIBS += -lubsan
}

# In release mode, turn on profiling
CONFIG(release, debug|release) {

  DEFINES += NDEBUG

  # gprof
  QMAKE_CXXFLAGS += -pg
  QMAKE_LFLAGS += -pg
}

QT += core gui widgets

TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
