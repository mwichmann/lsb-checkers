LSBCMDCHK_VERSION=unofficial

OBJS = cmdchk.o 

CFLAGS=-g -I../elfchk -DLSBVERSION=\"$$LSBVERSION\" -DLSBCMDCHK_VERSION=\"$(LSBCMDCHK_VERSION)\" -Wall -Werror

all:: cmdchk cmdlist

include ../Makefile.common

cmdchk: $(OBJS) ../tetj/libtetj.a
	$(CC) $(CFLAGS) -o cmdchk $(OBJS) ../tetj/libtetj.a

cmds.h:
	./mkcmdlist -v `cat LSB_VERSION`

cmdchk.o: cmds.h

cmdlist:
	./mkcmdlist2 -v `cat LSB_VERSION`

install:
	install -d $(INSTALL_ROOT)/$(BINDIR)
	install cmdchk $(INSTALL_ROOT)$(BINDIR)/lsbcmdchk
	install -d $(INSTALL_ROOT)/$(MANDIR)/man1
	install lsbcmdchk.1 $(INSTALL_ROOT)/$(MANDIR)/man1/lsbcmdchk.1

# Distclean means will need database to rebuild
distclean: clean
	rm -f cmds.h cmdlist

clean:
	rm -f $(OBJS) cmdchk

.PHONY: clean distclean

