OBJS = hdrchk.o \
	assert_h.o \
	cpio_h.o \
	ctype_h.o \
	elf_h.o \
	errno_h.o \
	fcntl_h.o \
	float_h.o \
	fnmatch_h.o \
	ftw_h.o \
	glob_h.o \
	langinfo_h.o \
	limits_h.o \
	locale_h.o \
	math_h.o \
	nl_types_h.o \
	signal_h.o \
	sys_ipc_h.o \
	sys_mman_h.o \
	sys_msg_h.o \
	sys_resource_h.o \
	sys_sem_h.o \
	sys_shm_h.o \
	sys_wait_h.o \
	tar_h.o \
	termios_h.o \
	time_h.o \
	ulimit_h.o \
	wchar_h.o 

all: hdrchk

hdrchk: $(OBJS)
	cc -o hdrchk $(OBJS)

hdrchk.o: hdrchk.c
	cc -g -c hdrchk.c


clean:
	rm $(OBJS) hdrchk
