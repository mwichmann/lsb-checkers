LIBS=libc libncurses libpam libm libz libpthread libSM #libXt libICE #libGL #libX11 #libgcc_s libdl 
COMMALIBS=libc,libncurses,libpam,libm,libz,libpthread,libSM
#I'm sure there's a way to constract COMMALIBS from LIBS and some makefile magic.
CDEFINES = -D_ISOC99_SOURCE -D_XOPEN_SOURCE=500 -D_XOPEN_SOURCE_EXTENDED \
	-D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_BSD_SOURCE \
	-D_SVID_SOURCE -D_GNU_SOURCE -DXLIB_ILLEGAL_ACCESS
CFLAGS= $(CDEFINES) -fPIC -Wall -Wno-unused -I/usr/X11R6/include -g 

all:
	for d in $(LIBS);do (cd $$d && make all CFLAGS="$(CFLAGS)" );done

gensrc:
	./gen_lib.pl -l $(COMMALIBS) -q 
	./build_version.sh

#  nothing uses this.
#header:
#	for d in $(LIBS);do (cd $$d;cproto $(CDEFINES) *.c )| grep 'lsb_' ;done > __lsb_funcs.h

clean:
	for d in $(LIBS);do (cd $$d && make clean);done
