LSBAPPCHK_VERSION=unofficial
CFLAGS=-g -DLSBVERSION=\"$$LSBVERSION\" -DLSBAPPCHK_VERSION=\"$(LSBAPPCHK_VERSION)\" -Wall

OBJS=archk.o libraries.o symbols.o check_archive.o
LIB=../elfchk/libelfchk.a ../tetj/libtetj.a

all: archk

archk: $(OBJS) $(LIB)
	$(CC) $(CFLAGS) -o archk $(OBJS) $(LIB)

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
