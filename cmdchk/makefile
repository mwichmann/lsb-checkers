LSBCMDCHK_VERSION=unofficial
LSB_SUPPORTED_VERSIONS=$(shell cat LSB_VERSION)
LSB_DEFAULT_VERSION=$(shell rev LSB_VERSION | cut -d\, -f1 |rev|sed s/\\.//)

OBJS = cmdchk.o 

CFLAGS=-g -I../elfchk -DLSB_SUPPORTED_VERSIONS=\"$(LSB_SUPPORTED_VERSIONS)\" -DLSBVERSION=\"$$LSBVERSION\" -DLSBCMDCHK_VERSION=\"$(LSBCMDCHK_VERSION)\" -Wall -Werror

GENSRCS=cmds.h cmdlist

all:: cmdchk

include ../Makefile.common

cmdchk: $(OBJS) ../tetj/libtetj.a
	$(CC) $(CFLAGS) -o cmdchk $(OBJS) ../tetj/libtetj.a

gensrc: $(GENSRCS)

cmds.h:
	./mkcmdlist -v `cat LSB_VERSION`

cmdchk.o: cmds.h

cmdlist:
	./mkcmdlist2

install:
	install -d $(INSTALL_ROOT)/$(BINDIR)
	install cmdchk $(INSTALL_ROOT)$(BINDIR)/lsbcmdchk
	install -d $(INSTALL_ROOT)/$(MANDIR)/man1
	install lsbcmdchk.1 $(INSTALL_ROOT)/$(MANDIR)/man1/lsbcmdchk.1

# Distclean means will need database to rebuild
distclean: clean
	rm -f $(GENSRCS)

clean:
	rm -f $(OBJS) cmdchk

.PHONY: clean distclean

