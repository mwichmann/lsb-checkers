LSBAPPCHK_VERSION=unofficial
CFLAGS=-g -DLSBAPPCHK_VERSION=\"$(LSBAPPCHK_VERSION)\" -Wall -Werror -I../elfchk

OBJS=libraries.o symbols.o check_file.o output.o ../lsb_version.o
LIBS=../rpmchk/librpmchk.a ../elfchk/libelfchk_appchk.a ../elfchk/libelfchk.a \
	../tetj/libtetj.a
LIB=libappchk.a

all: $(LIB) appchk appchk-lsb

include ../Makefile.common

$(LIB): $(OBJS)
	rm -f $(LIB); ar clq $(LIB) $(OBJS)

appchk-lsb: appchk.c $(OBJS) $(LIBS)
	/opt/lsb/bin/lsbcc $(CFLAGS) -o appchk appchk.c $(OBJS) $(LIBS)

appchk: appchk.c $(OBJS) $(LIBS)
	/opt/lsb/bin/lsbcc $(CFLAGS) --lsb-use-default-linker -o appchk appchk.c $(OBJS) $(LIBS)

install:
	install -d $(INSTALL_ROOT)/$(BINDIR)
	install appchk $(INSTALL_ROOT)/$(BINDIR)/lsbappchk
	install appchk-lsb $(INSTALL_ROOT)/$(BINDIR)/lsbappchk-lsb
	install -d $(INSTALL_ROOT)/$(MANDIR)/man1
	install lsbappchk.1 $(INSTALL_ROOT)/$(MANDIR)/man1/lsbappchk.1

test: appchk
	./test_appchk

clean:
	rm -f $(OBJS) appchk appchk-lsb $(LIB)

distclean: clean

test_journal: test_journal.o tetj.o
	$(CC) $(CFLAGS) -o test_journal test_journal.o tetj.o
