OBJS = hdrchk.o \
	GL_gl_h.o \
	GL_glx_h.o \
	X11_ICE_ICElib_h.o \
	X11_SM_SMlib_h.o \
	X11_X_h.o \
	X11_Xcms_h.o \
	X11_Xlib_h.o \
	X11_Xutil_h.o \
	X11_extensions_security_h.o \
	X11_extensions_sync_h.o \
	aio_h.o \
	assert_h.o \
	cpio_h.o \
	curses_h.o \
	dlfcn_h.o \
	errno_h.o \
	fcntl_h.o \
	fnmatch_h.o \
	ftw_h.o \
	glob_h.o \
	iconv_h.o \
	inttypes_h.o \
	limits_h.o \
	locale_h.o \
	math_h.o \
	netdb_h.o \
	netinet_in_h.o \
	nl_types_h.o \
	pthread_h.o \
	regex_h.o \
	search_h.o \
	semaphore_h.o \
	setjmp_h.o \
	signal_h.o \
	stddef_h.o \
	stdio_h.o \
	stdlib_h.o \
	sys_ioctl_h.o \
	sys_mman_h.o \
	sys_param_h.o \
	sys_resource_h.o \
	sys_select_h.o \
	sys_sem_h.o \
	sys_shm_h.o \
	sys_socket_h.o \
	sys_stat_h.o \
	sys_time_h.o \
	sys_types_h.o \
	sys_wait_h.o \
	tar_h.o \
	termios_h.o \
	time_h.o \
	ulimit_h.o \
	unistd_h.o \
	wchar_h.o \
	wctype_h.o \
	zlib_h.o \
	intrinsic.o 

ifdef TET_ROOT
LIBDIR = $(TET_ROOT)/lib/tet3
INCDIR = $(TET_ROOT)/inc/tet3
EXTRALIBS = $(LIBDIR)/tcm.o $(LIBDIR)/libapi.a
else
EXTRALIBS =
endif

CFLAGS=-D_ISOC99_SOURCE -D_XOPEN_SOURCE=500 -D_XOPEN_SOURCE_EXTENDED -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_BSD_SOURCE -I/usr/X11R6/include 

ifdef TET_ROOT
CFLAGS += -DTET_TEST -I$(INCDIR)
endif

all: hdrchk

hdrchk: $(OBJS)
	cc -o hdrchk $(OBJS) $(EXTRALIBS)

hdrchk.o: hdrchk.c
	cc $(CFLAGS) -g -c hdrchk.c


install:


clean:
	rm -f $(OBJS)

clobber:	clean
	rm -f *.c hdrchk_tet.h testdefs.h hdrchk
