LSBAPPCHK_VERSION=unofficial
CFLAGS=-g -DLSBVERSION=\"$$LSBVERSION\" -DLSBAPPCHK_VERSION=\"$(LSBAPPCHK_VERSION)\" -Wall -I../elfchk

OBJS=libraries.o symbols.o check_file.o output.o ../lsb_version.o
LIBS=../rpmchk/librpmchk.a ../elfchk/libelfchk_appchk.a ../elfchk/libelfchk.a \
	../tetj/libtetj.a
LIB=libappchk.a

all: $(LIB) appchk

include ../Makefile.common

$(LIB): $(OBJS)
	rm -f $(LIB); ar clq $(LIB) $(OBJS)

appchk: appchk.c $(OBJS) $(LIBS)
	$(CC) $(CFLAGS) -o appchk appchk.c $(OBJS) $(LIBS)

install:
	install -d $(INSTALL_ROOT)/$(BINDIR)
	install appchk $(INSTALL_ROOT)/$(BINDIR)/lsbappchk
	install -d $(INSTALL_ROOT)/$(MANDIR)/man1
	install lsbappchk.1 $(INSTALL_ROOT)/$(MANDIR)/man1/lsbappchk.1

test: appchk
	./test_appchk

clean:
	rm -f $(OBJS) appchk $(LIB)

distclean: clean

test_journal: test_journal.o tetj.o
	$(CC) $(CFLAGS) -o test_journal test_journal.o tetj.o
