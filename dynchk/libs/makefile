COMMALIBS=$(shell cat ../lib_list  | tr '\n' ',' | sed 's/,$$//')
LIBS=$(shell echo $(COMMALIBS) | sed s\/,\/\ \/g)

CDEFINES = -D_ISOC99_SOURCE -D_XOPEN_SOURCE=500 -D_XOPEN_SOURCE_EXTENDED \
	-D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_BSD_SOURCE \
	-D_SVID_SOURCE -D_GNU_SOURCE -DXLIB_ILLEGAL_ACCESS

ifdef NATIVE_COMPILER
INCFLAGS=-I/usr/X11R6/include \
    -I/usr/include/glib-2.0 \
    -I/usr/include/gdk-pixbuf-2.0 \
    -I/usr/include/atk-1.0 \
    -I/usr/include/pango-1.0 \
    -I/usr/include/gtk-2.0 \
    -I/usr/include/freetype2 \
    -I/usr/lib64/gtk-2.0/include \
    -I/usr/lib/gtk-2.0/include \
    -I/usr/lib64/glib-2.0/include \
    -I/usr/lib/glib-2.0/include \
    -I/usr/include/libxml2 \
    -I/usr/include/fontconfig \
    -I/usr/include/cairo \
    -I/usr/lib64/qt3/include \
    -I/usr/lib/qt3/include \
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
    -I/usr/include/nspr4 \
    -I/usr/include/nspr \
    -I/usr/include/nss3 \
    -I/usr/include/nss
else
INCFLAGS=-I/opt/lsb/include/glib-2.0 \
	-I/opt/lsb/include/atk-1.0 \
	-I/opt/lsb/include/pango-1.0 \
	-I/opt/lsb/include/gtk-2.0 \
	-I/opt/lsb/include/libxml2 \
	-I/opt/lsb/include/fontconfig
endif

DEBUG="-g"

CFLAGS= $(CDEFINES) $(INCFLAGS) -fPIC -Wall -Wno-unused $(DEBUG)

all: ../lib_list
	for d in $(LIBS);do (cd $$d && $(MAKE) all CFLAGS="$(CFLAGS)" );done

../lib_list:
	cd .. && ./mkliblist -v `cat LSB_VERSION`

gensrc: ../lib_list
	./gen_lib.pl -v `cat ../LSB_VERSION` -l $(COMMALIBS) -q -a $(shell uname -m)
	./build_version.sh

clean:
	for d in $(LIBS);do (cd $$d && $(MAKE) clean);done

distclean: clean
	for d in $(LIBS);do (cd $$d && rm -f *.c *.o gen.mk makefile);done
