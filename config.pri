# Auto-generated by IDE. Any changes made by user will be lost!
BASEDIR =  $$quote($$_PRO_FILE_PWD_)

device {
    CONFIG(debug, debug|release) {
        INCLUDEPATH +=  $$quote(${QNX_TARGET}/usr/include/qt4/QtCore)

        DEPENDPATH +=  $$quote(${QNX_TARGET}/usr/include/qt4/QtCore)

        LIBS += -lbbcascades \
                -lQtCore

        SOURCES +=  $$quote($$BASEDIR/src/CanadianIncomeTax.cpp) \
                 $$quote($$BASEDIR/src/IncomeTaxObject.cpp) \
                 $$quote($$BASEDIR/src/main.cpp)

        HEADERS +=  $$quote($$BASEDIR/src/CanadianIncomeTax.hpp) \
                 $$quote($$BASEDIR/src/IncomeTaxObject.h)
    }

    CONFIG(release, debug|release) {
        INCLUDEPATH +=  $$quote(${QNX_TARGET}/usr/include/qt4/QtCore)

        DEPENDPATH +=  $$quote(${QNX_TARGET}/usr/include/qt4/QtCore)

        LIBS += -lbbcascades \
                -lQtCore

        SOURCES +=  $$quote($$BASEDIR/src/CanadianIncomeTax.cpp) \
                 $$quote($$BASEDIR/src/IncomeTaxObject.cpp) \
                 $$quote($$BASEDIR/src/main.cpp)

        HEADERS +=  $$quote($$BASEDIR/src/CanadianIncomeTax.hpp) \
                 $$quote($$BASEDIR/src/IncomeTaxObject.h)
    }
}

simulator {
    CONFIG(debug, debug|release) {
        INCLUDEPATH +=  $$quote(${QNX_TARGET}/usr/include/qt4/QtCore)

        DEPENDPATH +=  $$quote(${QNX_TARGET}/usr/include/qt4/QtCore)

        LIBS += -lbbcascades \
                -lQtCore

        SOURCES +=  $$quote($$BASEDIR/src/CanadianIncomeTax.cpp) \
                 $$quote($$BASEDIR/src/IncomeTaxObject.cpp) \
                 $$quote($$BASEDIR/src/main.cpp)

        HEADERS +=  $$quote($$BASEDIR/src/CanadianIncomeTax.hpp) \
                 $$quote($$BASEDIR/src/IncomeTaxObject.h)
    }
}

INCLUDEPATH +=  $$quote($$BASEDIR/src)

CONFIG += precompile_header

PRECOMPILED_HEADER =  $$quote($$BASEDIR/precompiled.h)

lupdate_inclusion {
    SOURCES +=  $$quote($$BASEDIR/../src/*.c) \
             $$quote($$BASEDIR/../src/*.c++) \
             $$quote($$BASEDIR/../src/*.cc) \
             $$quote($$BASEDIR/../src/*.cpp) \
             $$quote($$BASEDIR/../src/*.cxx) \
             $$quote($$BASEDIR/../assets/*.qml) \
             $$quote($$BASEDIR/../assets/*.js) \
             $$quote($$BASEDIR/../assets/*.qs)

    HEADERS +=  $$quote($$BASEDIR/../src/*.h) \
             $$quote($$BASEDIR/../src/*.h++) \
             $$quote($$BASEDIR/../src/*.hh) \
             $$quote($$BASEDIR/../src/*.hpp) \
             $$quote($$BASEDIR/../src/*.hxx)
}

TRANSLATIONS =  $$quote($${TARGET}.ts)
