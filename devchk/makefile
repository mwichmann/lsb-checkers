OBJS = hdrchk.o \
	GL_gl_h.o \
	GL_glx_h.o \
	X11_ICE_ICElib_h.o \
	X11_ICE_ICEutil_h.o \
	X11_SM_SMlib_h.o \
	X11_Xcms_h.o \
	X11_Xlib_h.o \
	aio_h.o \
	ctype_h.o \
	dirent_h.o \
	ftw_h.o \
	glob_h.o \
	grp_h.o \
	iconv_h.o \
	inttypes_h.o \
	langinfo_h.o \
	locale_h.o \
	malloc_h.o \
	math_h.o \
	nl_types_h.o \
	pthread_h.o \
	pwd_h.o \
	regex_h.o \
	search_h.o \
	semaphore_h.o \
	setjmp_h.o \
	signal_h.o \
	stdio_h.o \
	stdlib_h.o \
	sys_msg_h.o \
	sys_sem_h.o \
	sys_socket_h.o \
	sys_times_h.o \
	sys_types_h.o \
	sys_utsname_h.o \
	sys_wait_h.o \
	time_h.o \
	ulimit_h.o \
	unistd_h.o \
	utime_h.o \
	wchar_h.o \
	wctype_h.o \
	wordexp_h.o 

hdrchk: $(OBJS)
	cc -o hdrchk $(OBJS)

hdrchk.o: hdrchk.c
	cc -g -c hdrchk.c


clean:
	rm $(OBJS)
