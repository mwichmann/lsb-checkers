SUBDIRS=tetj elfchk appchk rpmchk devchk/ts/devchk libchk cmdchk pkgchk


all:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) all LSBVERSION=$$LSBVERSION);done

install:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) install);done

clean:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) clean);done

distclean:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) distclean);done
