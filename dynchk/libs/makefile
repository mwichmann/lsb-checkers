LIBS=libc libncurses libz libdl libpam libm libz #libpthread libgcc_s

CFLAGS = -D_ISOC99_SOURCE -D_XOPEN_SOURCE=500 -D_XOPEN_SOURCE_EXTENDED \
	-D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_BSD_SOURCE \
	-D_SVID_SOURCE -D_GNU_SOURCE -DXLIB_ILLEGAL_ACCESS -I/usr/X11R6/include \
	-fPIC -Wall

all:
	for d in $(LIBS);do (cd $$d && make all CFLAGS="$(CFLAGS)" );done

gensrc:
	for d in $(LIBS);do (./gen_lib.pl -l $$d );done

clean:
	for d in $(LIBS);do (cd $$d && make clean);done
