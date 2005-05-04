LSBAPPCHK_VERSION=unofficial
CFLAGS=-g -DLSBVERSION=\"$$LSBVERSION\" -DLSBAPPCHK_VERSION=\"$(LSBAPPCHK_VERSION)\" -Wall

OBJS=appchk.o libraries.o symbols.o check_file.o
LIB=../rpmchk/librpmchk.a ../elfchk/libelfchk.a ../tetj/libtetj.a

all: appchk

appchk: $(OBJS) $(LIB)
	$(CC) $(CFLAGS) -o appchk $(OBJS) $(LIB)

install:
	install -d $(INSTALL_ROOT)/$(BINDIR)
	install appchk $(INSTALL_ROOT)/$(BINDIR)/lsbappchk
	install -d $(INSTALL_ROOT)/$(MANDIR)/man1
	install lsbappchk.1 $(INSTALL_ROOT)/$(MANDIR)/man1/lsbappchk.1

test: appchk
	./test_appchk

clean:
	rm -f $(OBJS) appchk

distclean: clean

test_journal: test_journal.o tetj.o
	$(CC) $(CFLAGS) -o test_journal test_journal.o tetj.o
