OBJS = hdrchk.o \
	GL_gl_h.o \
	GL_glx_h.o \
	X11_ICE_ICElib_h.o \
	X11_SM_SMlib_h.o \
	X11_Xcms_h.o \
	X11_Xlib_h.o \
	X11_Xutil_h.o \
	X11_extensions_security_h.o \
	X11_extensions_sync_h.o \
	curses_h.o \
	ftw_h.o \
	iconv_h.o \
	inttypes_h.o \
	nl_types_h.o \
	regex_h.o \
	search_h.o \
	setjmp_h.o \
	signal_h.o \
	stdlib_h.o \
	sys_socket_h.o \
	sys_wait_h.o \
	time_h.o \
	unistd_h.o \
	wctype_h.o \
	intrinsic.o 

CFLAGS=-D_ISOC99_SOURCE -D_XOPEN_SOURCE=500 -D_XOPEN_SOURCE_EXTENDED -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE

all: hdrchk

hdrchk: $(OBJS)
	cc -o hdrchk $(OBJS)

hdrchk.o: hdrchk.c
	cc -g -c hdrchk.c


install:


clean:
	rm -f $(OBJS)
