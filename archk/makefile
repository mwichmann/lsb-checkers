LSBARCHK_VERSION=unofficial
CFLAGS=-g -DLSBVERSION=\"$$LSBVERSION\" -DLSBARCHK_VERSION=\"$(LSBARCHK_VERSION)\" -Wall

OBJS=archk.o libraries.o symbols.o check_archive.o ../lsb_version.o
LIBS=../rpmchk/librpmchk.a ../appchk/libappchk.a ../elfchk/libelfchk.a ../tetj/libtetj.a

all: archk

include ../Makefile.common

archk: $(OBJS) $(LIBS)
	$(CC) $(CFLAGS) -o archk $(OBJS) $(LIBS)

install:
	install -d $(INSTALL_ROOT)/$(BINDIR)
	install archk $(INSTALL_ROOT)/$(BINDIR)/lsbarchk
	install -d $(INSTALL_ROOT)/$(MANDIR)/man1
	install lsbarchk.1 $(INSTALL_ROOT)/$(MANDIR)/man1/lsbarchk.1

test: archk
	./test_archk

clean:
	rm -f $(OBJS) archk

distclean: clean

test_journal: test_journal.o tetj.o
	$(CC) $(CFLAGS) -o test_journal test_journal.o tetj.o
