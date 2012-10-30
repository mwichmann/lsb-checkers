LSBAPPCHK_VERSION=unofficial
CFLAGS=-g -DLSBAPPCHK_VERSION=\"$(LSBAPPCHK_VERSION)\" -Wall -Werror -I../elfchk

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

standalone: appchk.c $(OBJS) $(LIBS)
	/opt/lsb/bin/lsbcc $(CFLAGS) --lsb-use-default-linker -o appchk appchk.c $(OBJS) $(LIBS)

install:
	install -d $(DESTDIR)$(INSTALL_ROOT)/$(BINDIR)
	install appchk $(DESTDIR)$(INSTALL_ROOT)/$(BINDIR)/lsbappchk
	install -d $(DESTDIR)$(INSTALL_ROOT)/$(MANDIR)/man1
	install lsbappchk.1 $(DESTDIR)$(INSTALL_ROOT)/$(MANDIR)/man1/lsbappchk.1

test: appchk
	./test_appchk

gensrc:

clean:
	rm -f $(OBJS) appchk $(LIB)

distclean: clean

test_journal: test_journal.o tetj.o
	$(CC) $(CFLAGS) -o test_journal test_journal.o tetj.o
