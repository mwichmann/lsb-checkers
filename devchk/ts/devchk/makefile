OBJS = hdrchk.o \
	GL_gl_h.o \
	GL_glx_h.o \
	X11_Composite_h.o \
	X11_CompositeP_h.o \
	X11_ConstrainP_h.o \
	X11_Constraint_h.o \
	X11_ICE_ICElib_h.o \
	X11_ICE_ICEutil_h.o \
	X11_Intrinsic_h.o \
	X11_ObjectP_h.o \
	X11_SM_SMlib_h.o \
	X11_X_h.o \
	X11_Xauth_h.o \
	X11_Xcms_h.o \
	X11_Xlib_h.o \
	X11_Xutil_h.o \
	X11_extensions_security_h.o \
	X11_extensions_sync_h.o \
	assert_h.o \
	cpio_h.o \
	ctype_h.o \
	curses_h.o \
	dirent_h.o \
	dlfcn_h.o \
	errno_h.o \
	fcntl_h.o \
	fmtmsg_h.o \
	fnmatch_h.o \
	ftw_h.o \
	getopt_h.o \
	glob_h.o \
	grp_h.o \
	iconv_h.o \
	inttypes_h.o \
	langinfo_h.o \
	limits_h.o \
	locale_h.o \
	math_h.o \
	net_if_h.o \
	netdb_h.o \
	netinet_in_h.o \
	netinet_tcp_h.o \
	netinet_udp_h.o \
	nl_types_h.o \
	pthread_h.o \
	pwd_h.o \
	regex_h.o \
	rpc_auth_h.o \
	rpc_clnt_h.o \
	rpc_rpc_msg_h.o \
	rpc_svc_h.o \
	rpc_types_h.o \
	rpc_xdr_h.o \
	sched_h.o \
	search_h.o \
	security_pam_appl_h.o \
	semaphore_h.o \
	setjmp_h.o \
	signal_h.o \
	stddef_h.o \
	stdio_h.o \
	stdlib_h.o \
	sys_file_h.o \
	sys_ioctl_h.o \
	sys_ipc_h.o \
	sys_mman_h.o \
	sys_msg_h.o \
	sys_param_h.o \
	sys_poll_h.o \
	sys_resource_h.o \
	sys_sem_h.o \
	sys_shm_h.o \
	sys_socket_h.o \
	sys_stat_h.o \
	sys_statvfs_h.o \
	sys_time_h.o \
	sys_timeb_h.o \
	sys_times_h.o \
	sys_types_h.o \
	sys_un_h.o \
	sys_utsname_h.o \
	sys_wait_h.o \
	syslog_h.o \
	tar_h.o \
	termios_h.o \
	time_h.o \
	ucontext_h.o \
	ulimit_h.o \
	unistd_h.o \
	utime_h.o \
	utmp_h.o \
	utmpx_h.o \
	wchar_h.o \
	wctype_h.o \
	wordexp_h.o \
	zlib_h.o \
	intrinsic.o 

ifdef TET_ROOT
LIBDIR = $(TET_ROOT)/lib/tet3
INCDIR = $(TET_ROOT)/inc/tet3
EXTRALIBS = $(LIBDIR)/tcm.o $(LIBDIR)/libapi.a
else
EXTRALIBS =
endif

CFLAGS=-D_ISOC99_SOURCE -D_XOPEN_SOURCE=500 -D_XOPEN_SOURCE_EXTENDED -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_BSD_SOURCE -D_SVID_SOURCE -D_GNU_SOURCE -DXLIB_ILLEGAL_ACCESS -I/usr/X11R6/include 

ifdef TET_ROOT
CFLAGS += -DTET_TEST -I$(INCDIR)
endif

all: hdrchk

hdrchk: $(OBJS)
	$(CC) -o hdrchk $(OBJS) $(EXTRALIBS) -L /usr/X11R6/lib64 -L/usr/X11R6/lib -lXt -lX11 

hdrchk.o: hdrchk.c
	$(CC) $(CFLAGS) -g -c hdrchk.c


hdrchk.c:
	./mktests


install:


clean:
	rm -f $(OBJS)

clobber:	clean
	rm -f *.c hdrchk_tet.h testdefs.h hdrchk


distclean:	clobber
