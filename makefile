SUBDIRS=tetj elfchk appchk rpmchk devchk/ts/devchk libchk cmdchk pkgchk


all:
	for d in $(SUBDIRS);do (cd $$d && make all LSBVERSION=$$LSBVERSION);done

install:
	for d in $(SUBDIRS);do (cd $$d && make install);done

clean:
	for d in $(SUBDIRS);do (cd $$d && make clean);done

distclean:
	for d in $(SUBDIRS);do (cd $$d && make distclean);done
