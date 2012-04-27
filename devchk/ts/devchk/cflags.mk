ifdef LSB_PRODUCT
CFLAGS=$(LSB_VERSION_FLAG) \
    -DLSBCC_MODE \
    -D_ISOC99_SOURCE \
    -D_XOPEN_SOURCE=600 \
    -D_XOPEN_SOURCE_EXTENDED \
    -D_LARGEFILE_SOURCE \
    -D_LARGEFILE64_SOURCE \
    -D_BSD_SOURCE \
    -D_SVID_SOURCE \
    -D_GNU_SOURCE \
    -DXLIB_ILLEGAL_ACCESS \
    -Wno-write-strings \
    -I/opt/lsb/include/glib-2.0 \
    -I/opt/lsb/include/atk-1.0 \
    -I/opt/lsb/include/pango-1.0 \
    -I/opt/lsb/include/gtk-2.0 \
    -I/opt/lsb/include/gtk-unix-print-2.0 \
    -I/opt/lsb/include/libxml2 \
    -I/opt/lsb/include/fontconfig
else
CFLAGS=$(LDBL_FLAG) \
    -O \
    -DQT_THREAD_SUPPORT \
    -D_ISOC99_SOURCE \
    -D_XOPEN_SOURCE=600 \
    -D_XOPEN_SOURCE_EXTENDED \
    -D_LARGEFILE_SOURCE \
    -D_LARGEFILE64_SOURCE \
    -D_BSD_SOURCE \
    -D_SVID_SOURCE \
    -D_GNU_SOURCE \
    -DXLIB_ILLEGAL_ACCESS \
    -Wno-write-strings \
    -I. \
    -I/usr/X11R6/include \
    -I/usr/include/glib-2.0 \
    -I/usr/lib/i386-linux-gnu/glib-2.0/include \
    -I/usr/lib/i386-linux-gnu/gtk-2.0/include \
    -I/usr/lib/x86_64-linux-gnu/glib-2.0/include \
    -I/usr/lib/x86_64-linux-gnu/gtk-2.0/include \
    -I/usr/include/atk-1.0 \
    -I/usr/include/pango-1.0 \
    -I/usr/include/gtk-2.0 \
    -I/usr/include/freetype2 \
    -I/usr/lib64/gtk-2.0/include \
    -I/usr/lib/gtk-2.0/include \
    -I/usr/include/gtk-unix-print-2.0 \
    -I/usr/include/gdk-pixbuf-2.0 \
    -I/usr/lib64/glib-2.0/include \
    -I/usr/lib/glib-2.0/include \
    -I/usr/include/libxml2 \
    -I/usr/include/fontconfig \
    -I/usr/include/cairo \
    -I/usr/lib64/qt3/include \
    -I/usr/lib/qt3/include \
    -I/usr/lib/qt4/include \
    -I/usr/include/qt4 \
    -I/usr/include/qt3 \
    -I/usr/lib/qt4/include/QtCore \
    -I/usr/include/QtCore \
    -I/usr/lib64/qt-3.3/include \
    -I/usr/lib/qt-3.3/include \
    -I/opt/gnome/include \
    -I/opt/gnome/include/atk-1.0 \
    -I/opt/gnome/include/glib-2.0 \
    -I/opt/gnome/include/gtk-2.0 \
    -I/opt/gnome/include/pango-1.0 \
    -I/opt/gnome/lib64/glib-2.0/include \
    -I/opt/gnome/lib/glib-2.0/include \
    -I/opt/gnome/lib64/gtk-2.0/include \
    -I/opt/gnome/lib/gtk-2.0/include \
    -I/usr/include/nss3 \
    -I/usr/include/nspr4 \
    -I/usr/include/nss \
    -I/usr/include/nspr \
    -idirafter ./missing_headers

endif

CXXFLAGS = $(CFLAGS)

ifdef TET_ROOT
CFLAGS += -DTET_TEST -I$(INCDIR)
endif
