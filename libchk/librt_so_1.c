#include <stdlib.h>
#include "elfchk.h"
struct versym librt_so_1[] = {
#if __i386__
	{"clock_getcpuclockid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __ia64__
	{"clock_getcpuclockid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"clock_getcpuclockid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __powerpc64__
	{"clock_getcpuclockid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __s390__ && !__s390x__
	{"clock_getcpuclockid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __x86_64__
	{"clock_getcpuclockid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __s390x__
	{"clock_getcpuclockid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __i386__
	{"clock_getres","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __ia64__
	{"clock_getres","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"clock_getres","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __powerpc64__
	{"clock_getres","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __s390__ && !__s390x__
	{"clock_getres","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __x86_64__
	{"clock_getres","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __s390x__
	{"clock_getres","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __i386__
	{"clock_gettime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __ia64__
	{"clock_gettime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"clock_gettime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __powerpc64__
	{"clock_gettime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __s390__ && !__s390x__
	{"clock_gettime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __x86_64__
	{"clock_gettime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __s390x__
	{"clock_gettime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __i386__
	{"clock_nanosleep","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __ia64__
	{"clock_nanosleep","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"clock_nanosleep","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __powerpc64__
	{"clock_nanosleep","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __s390__ && !__s390x__
	{"clock_nanosleep","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __x86_64__
	{"clock_nanosleep","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __s390x__
	{"clock_nanosleep","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __i386__
	{"clock_settime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __ia64__
	{"clock_settime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"clock_settime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __powerpc64__
	{"clock_settime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __s390__ && !__s390x__
	{"clock_settime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __x86_64__
	{"clock_settime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __s390x__
	{"clock_settime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{"shm_open","GLIBC_2.2",0,LSB_Core,0,1},
	{"shm_unlink","GLIBC_2.2",0,LSB_Core,0,1},
	{"timer_create","GLIBC_2.2",0,LSB_Core,0,1},
	{"timer_delete","GLIBC_2.2",0,LSB_Core,0,1},
	{"timer_getoverrun","GLIBC_2.2",0,LSB_Core,0,1},
	{"timer_gettime","GLIBC_2.2",0,LSB_Core,0,1},
	{"timer_settime","GLIBC_2.2",0,LSB_Core,0,1},
	{0,0}};

struct classinfo *librt_so_1_classinfo[] = {

	NULL	};
