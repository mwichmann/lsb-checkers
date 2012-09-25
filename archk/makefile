LSBARCHK_VERSION=unofficial
CFLAGS=-g -DLSBARCHK_VERSION=\"$(LSBARCHK_VERSION)\" -Wall -Werror

OBJS=archk.o libraries.o symbols.o check_archive.o ../lsb_version.o
LIBS=../rpmchk/librpmchk.a ../appchk/libappchk.a ../elfchk/libelfchk.a ../tetj/libtetj.a

all: archk

include ../Makefile.common

archk: $(OBJS) $(LIBS)
	$(CC) $(CFLAGS) -o archk $(OBJS) $(LIBS)

install:
	install -d $(DESTDIR)$(INSTALL_ROOT)/$(BINDIR)
	install archk $(DESTDIR)$(INSTALL_ROOT)/$(BINDIR)/lsbarchk
	install -d $(DESTDIR)$(INSTALL_ROOT)/$(MANDIR)/man1
	install lsbarchk.1 $(DESTDIR)$(INSTALL_ROOT)/$(MANDIR)/man1/lsbarchk.1

test: archk
	./test_archk

clean:
	rm -f $(OBJS) archk

distclean: clean

test_journal: test_journal.o tetj.o
	$(CC) $(CFLAGS) -o test_journal test_journal.o tetj.o
