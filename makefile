export BINDIR=/bin
export MANDIR=/man
export INSTALL_ROOT=/usr/local
export INCLUDEDIR=/include
export LIB64=$(shell case `uname -m` in (ppc64|s390x|x86_64) echo 64 ;; esac)
export LIBDIR=/lib$(LIB64)

SUBDIRS=tetj fhschk elfchk rpmchk appchk libchk cmdchk pkgchk #archk dynchk
RELEASEDIRS=libchk appchk cmdchk pkgchk #archk dynchk

all:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) all LSBVERSION=$$LSBVERSION);done

test:
	for d in $(RELEASEDIRS);do (cd $$d && $(MAKE) test);done

install:
	for d in $(RELEASEDIRS);do (cd $$d && $(MAKE) install);done

gensrc:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) gensrc);done

clean:
	for d in $(SUBDIRS) package;do (cd $$d && $(MAKE) clean);done

distclean:
	for d in $(SUBDIRS) package;do (cd $$d && $(MAKE) distclean);done
