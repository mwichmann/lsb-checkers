LSBLIBCHK_VERSION=unofficial

include libs.mk

OBJS = libchk.o libs.o classchk.o lsb_ver.o $(LIBOBJS)

CFLAGS=-g -I../elfchk -I../tetj -DUSE_CXXABI_DEMANGLE -DLSBVERSION=\"$$LSBVERSION\" -DLSBLIBCHK_VERSION=\"$(LSBLIBCHK_VERSION)\" -Wall

GENSRCS=libs.h libs.c lsb_ver.c

all: libchk dummy_link

include ../Makefile.common

libchk: $(OBJS) ../elfchk/libelfchk.a ../tetj/libtetj.a
	$(CXX) $(CFLAGS) -o libchk $(OBJS) -L../elfchk -L ../tetj -lelfchk -ltetj -lstdc++ -ldl

gensrc: $(GENSRCS)

libs.c libs.h lsb_ver.c:
	./mkfunclist -v `cat LSB_VERSION`

LSB_LINKER=`./lsb_linker`

LIB64=$(shell case `arch` in (ppc64 | s390x | x86_64) echo 64 ;; esac)

# add /opt/lsb/lib or /opt/lsb/lib64
LSBLIBPATHS=-L/opt/lsb/lib$(LIB64)

# extracted from link line, but getting error-prone
# should do a sql script to build this
LSBLIBRARIES= -lGL -lGLU -lICE -lQtCore -lQtGui -lQtNetwork -lQtOpenGL \
        -lQtSql -lQtSvg -lQtXml -lSM -lX11 -lXext -lXft -lXi -lXrender \
        -lXt -lXtst -latk-1.0 -lc -lcrypt -lcups -lcupsimage -ldl \
        -lfontconfig -lfreetype -lgcc_s -lgdk-x11-2.0 -lgdk_pixbuf-2.0 \
        -lgdk_pixbuf_xlib-2.0 -lglib-2.0 -lgmodule-2.0 -lgobject-2.0 \
        -lgthread-2.0 -lgtk-x11-2.0 -ljpeg -lm -lncurses -lpam -lpango-1.0 \
        -lpangoft2-1.0 -lpangoxft-1.0 -lpng12 -lpng -lpthread -lqt-mt \
        -lrt -lutil -lxml2 -lz -lstdc++ -lasound -lcairo -lpangocairo-1.0 \
	-lnss3 -lssl3

# If you want to just link against the normal system libs instead of the
# lsb-dev libs (like for testing against newer libstdcxx) use this instead
#LSBLIBPATHS=-L/usr/X11R6/lib
dummy_link: dummy_link.o makefile
	$(CXX) -nostdlib -Wl,--dynamic-linker=$(LSB_LINKER) $(LSBLIBPATHS) dummy_link.o $(LSBLIBRARIES) -o $@
	@echo "IGNORE message: \"cannot find entry symbol _start\" WARNING, dummy_link is not executable"

dummy_link.o: dummy_link.c
	$(CC) $(CFLAGS) -fno-builtin-acos -c -o $@ dummy_link.c

install:
	install -d $(INSTALL_ROOT)/$(BINDIR)
	install libchk lsblibchk dummy_link $(INSTALL_ROOT)/$(BINDIR)/
	install -d $(INSTALL_ROOT)/$(MANDIR)/man1/
	install lsblibchk.1 $(INSTALL_ROOT)/$(MANDIR)/man1/lsblibchk.1

test: libchk dummy_link
	./test_libchk

dumpints: dumpints.o libstdcxx_so_5.o

# Distclean means will need database to rebuild
distclean: clean
	rm -f $(GENSRCS)

clean:
	rm -f $(OBJS) libchk dummy_link dummy_link.o

.PHONY: clean distclean install test

