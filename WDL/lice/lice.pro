#-------------------------------------------------
#
# Project created by QtCreator 2015-11-16T09:26:22
#
#-------------------------------------------------

QT       -= core gui

TARGET = lice
TEMPLATE = app

LIBS += -bundle

# clang++ -arch x86_64 -bundle
# -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.11.sdk
# -L/Users/manuel/code/misc/plugin-development/wdl-ol/IPlugExamples/MyFirstPlugin/build-mac
# -F/Users/manuel/code/misc/plugin-development/wdl-ol/IPlugExamples/MyFirstPlugin/build-mac
# -filelist /Users/manuel/code/misc/plugin-development/wdl-ol/IPlugExamples/MyFirstPlugin/build-mac/MyFirstPlugin.build/Debug/VST2.build/Objects-normal/x86_64/MyFirstPlugin.LinkFileList
# -mmacosx-version-min=10.9 /Users/manuel/code/misc/plugin-development/wdl-ol/WDL/lice/build-mac/Debug/lice.a -framework Cocoa -framework Carbon
#  -Xlinker -dependency_info -Xlinker
#  /Users/manuel/code/misc/plugin-development/wdl-ol/IPlugExamples/MyFirstPlugin/build-mac/MyFirstPlugin.build/Debug/VST2.build/Objects-normal/x86_64/MyFirstPlugin_dependency_info.dat
# -o /Users/manuel/Library/Audio/Plug-Ins/VST/MyFirstPlugin.vst/Contents/MacOS/MyFirstPlugin

LIBS += -framework Cocoa -framework Carbon

INCLUDEPATH += ../../WDL/IPlug ../../IPlugExamples/MyFirstPlugin

DEFINES += VST_API

SOURCES += lice.cpp \
    lice_arc.cpp \
    lice_bmp.cpp \
    lice_colorspace.cpp \
    lice_image.cpp \
    lice_line.cpp \
    lice_palette.cpp \
    lice_png.cpp \
    lice_texgen.cpp \
    lice_textnew.cpp \
    ../libpng/png.c \
    ../libpng/pngerror.c \
    ../libpng/pngget.c \
    ../libpng/pngmem.c \
    ../libpng/pngpread.c \
    ../libpng/pngread.c \
    ../libpng/pngrio.c \
    ../libpng/pngrtran.c \
    ../libpng/pngrutil.c \
    ../libpng/pngset.c \
    ../libpng/pngtrans.c \
    ../libpng/pngwio.c \
    ../libpng/pngwrite.c \
    ../libpng/pngwtran.c \
    ../libpng/pngwutil.c \
    ../zlib/crc32.c \
    ../zlib/gzclose.c \
    ../zlib/gzlib.c \
    ../zlib/gzread.c \
    ../zlib/gzwrite.c \
    ../zlib/infback.c \
    ../zlib/inffast.c \
    ../zlib/adler32.c \
    ../zlib/compress.c \
    ../zlib/deflate.c \
    ../zlib/inflate.c \
    ../zlib/inftrees.c \
    ../zlib/ioapi.c \
    ../zlib/trees.c \
    ../zlib/uncompr.c \
    ../zlib/zip.c \
    ../zlib/zutil.c \
    ../zlib/unzip.c \
    ../IPlug/Hosts.cpp \
    ../IPlug/IBitmapMonoText.cpp \
    ../IPlug/IControl.cpp \
    ../IPlug/IGraphics.cpp \
    ../IPlug/IGraphicsCarbon.cpp \
    ../IPlug/IParam.cpp \
    ../IPlug/IPlugBase.cpp \
    ../IPlug/IPlugStructs.cpp \
    ../IPlug/IPlugVST.cpp \
    ../IPlug/Log.cpp \
    ../IPlug/IPopupMenu.cpp \
    ../../IPlugExamples/MyFirstPlugin/MyFirstPlugin.cpp

HEADERS += lice.h \
    lice_bezier.h \
    lice_combine.h \
    lice_extended.h \
    lice_text.h \
    ../libpng/png.h \
    ../libpng/pngconf.h \
    ../libpng/pngdebug.h \
    ../libpng/pnginfo.h \
    ../libpng/pnglibconf.h \
    ../libpng/pngpriv.h \
    ../libpng/pngstruct.h \
    ../zlib/crc32.h \
    ../zlib/deflate.h \
    ../zlib/gzguts.h \
    ../zlib/inffast.h \
    ../zlib/inffixed.h \
    ../zlib/inflate.h \
    ../zlib/inftrees.h \
    ../zlib/ioapi.h \
    ../zlib/trees.h \
    ../zlib/unzip.h \
    ../zlib/zconf.h \
    ../zlib/zip.h \
    ../zlib/zlib.h \
    ../zlib/zutil.h \
    ../../IPlugExamples/MyFirstPlugin/resource.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

DISTFILES += \
    ../zlib/README

OBJECTIVE_SOURCES += \
    ../swell/swell-gdi.mm \
    ../IPlug/IGraphicsCocoa.mm \
    ../IPlug/IGraphicsMac.mm

RESOURCES += \
   ../../IPlugExamples/MyFirstPlugin/resources/img/knob.png

Resources.files = $$RESOURCES
Resources.path = Contents/Resources

QMAKE_BUNDLE_DATA += \
   Resources

# XXX the bundle ID needs to match the Info.plist ID

target.path=$$[QT_INSTALL_BINS]
INSTALLS += target
