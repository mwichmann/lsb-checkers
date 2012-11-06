COMMALIBS=$(shell cat lib_list | tr '\n' ',' | sed 's/,$$//')
LIBS=$(shell echo $(COMMALIBS) | sed s\/,\/\ \/g)
WRAPPED_LIBS = $(foreach lib, $(LIBS), libs/$(lib)/*.o)

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

CFLAGS += $(CDEFINES) $(INCFLAGS) -fPIC
TEST_LIB = tests/tests.a
FHS_LIB = fhs/fhs.a
LIB64=$(shell case `uname -a` in (ppc64 | s390x | x86_64) echo 64 ;; esac)
ARCH=$(shell uname -m)
REAL_LIBS = -L/opt/lsb/lib$(LIB64) -ldl

# Set to '-g' to build library with debug info,
# but note that the size will be significant
DEBUG="-g"

all: liblsbdynchk.so

build_libs:
	cd libs && $(MAKE) all

$(TEST_LIB)::
	cd tests && $(MAKE) all

$(FHS_LIB)::
	cd fhs && $(MAKE) all

liblsbdynchk.so: build_libs  $(FHS_LIB) $(TEST_LIB) misc/global_flag.o misc/lsb_output.o makefile
	$(CC) $(DEBUG) -shared -Wl,--version-script -Wl,liblsbdynchk.Version.$(ARCH) -Wl,-soname -Wl,liblsbdynchk.so.1 -o liblsbdynchk.so.1 $(REAL_LIBS) $(WRAPPED_LIBS) $(TEST_LIB) $(FHS_LIB) misc/lsb_output.o misc/global_flag.o

lsbdynchk: lsbdynchk.sed
	if [ -n "$(LIBDIR)" ] ; \
	then \
	   sed -e "s#@LIBDIR@#`echo $(INSTALL_ROOT)$(LIBDIR)`#" <lsbdynchk.sed >lsbdynchk; \
	else \
	   sed -e "s#@LIBDIR@#`pwd`#" <lsbdynchk.sed >lsbdynchk; \
	fi
	chmod a+x lsbdynchk

lib_list:
	./mkliblist -v `cat LSB_VERSION`

gensrc: lib_list lsbdynchk
	cd libs && $(MAKE) gensrc
	cd tests && $(MAKE) gensrc


test:

install:
	install -d $(DESTDIR)$(INSTALL_ROOT)/$(LIBDIR)
	install liblsbdynchk.so.1 $(DESTDIR)$(INSTALL_ROOT)/$(LIBDIR)/liblsbdynchk.so.1
	install -d $(DESTDIR)$(INSTALL_ROOT)/$(BINDIR)
	install lsbdynchk $(DESTDIR)$(INSTALL_ROOT)/$(BINDIR)/lsbdynchk
	install -d $(DESTDIR)$(INSTALL_ROOT)/$(MANDIR)/man1
	install lsbdynchk.1 $(DESTDIR)$(INSTALL_ROOT)/$(MANDIR)/man1/lsbdynchk.1


distclean: clean
	for d in libs tests;do (cd $$d && $(MAKE) distclean);done
	rm -f lsbdynchk
	rm lib_list

clean:
	for d in libs tests fhs;do (cd $$d && $(MAKE) clean);done
	rm -f *~ misc/global_flag.o misc/lsb_output.o liblsbdynchk.so.1

.PHONY: all install

misc/global_flag.o: misc/global_flag.c
misc/lsb_output.o: misc/lsb_output.c

