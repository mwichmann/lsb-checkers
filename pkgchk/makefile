LSBPKGCHK_VERSION=unofficial
CFLAGS=-g -DLSBPKGCHK_VERSION=\"$(LSBPKGCHK_VERSION)\" -Wall -Werror -I../rpmchk -I../elfchk

OBJS=pkgchk.o ../lsb_version.o
LIB=../rpmchk/librpmchk.a ../appchk/libappchk.a ../elfchk/libelfchk.a ../tetj/libtetj.a ../fhschk/libfhschk.a

all: pkgchk pkgchk-lsb

include ../Makefile.common

pkgchk: $(OBJS) $(LIB)
	/opt/lsb/bin/lsbcc --lsb-use-default-linker $(CFLAGS) -o pkgchk $(OBJS) $(LIB) -lz

pkgchk-lsb: $(OBJS) $(LIB)
	/opt/lsb/bin/lsbcc $(CFLAGS) -o pkgchk-lsb $(OBJS) $(LIB) -lz

install:
	install -d $(INSTALL_ROOT)/$(BINDIR)
	install pkgchk $(INSTALL_ROOT)/$(BINDIR)/lsbpkgchk
	install pkgchk-lsb $(INSTALL_ROOT)/$(BINDIR)/lsbpkgchk-lsb
	install -d $(INSTALL_ROOT)/$(MANDIR)/man1
	install lsbpkgchk.1 $(INSTALL_ROOT)/$(MANDIR)/man1/lsbpkgchk.1

clean:
	rm -f $(OBJS) pkgchk pkgchk-lsb

distclean: clean

test_journal: test_journal.o tetj.o
	$(CC) $(CFLAGS) -o test_journal test_journal.o tetj.o
