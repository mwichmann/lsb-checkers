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

LIB64=$(shell case `uname -m` in (ppc64 | s390x | x86_64) echo 64 ;; esac)

# add /opt/lsb/lib or /opt/lsb/lib64
LSBLIBPATHS=-L/opt/lsb/lib$(LIB64)

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

