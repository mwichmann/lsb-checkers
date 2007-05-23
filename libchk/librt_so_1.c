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
	{"clock_getcpuclockid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if __s390__ && !__s390x__
	{"clock_getcpuclockid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __x86_64__
	{"clock_getcpuclockid","GLIBC_2.2.5",0,LSB_Core,4,1},
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
	{"clock_getres","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if __s390__ && !__s390x__
	{"clock_getres","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __x86_64__
	{"clock_getres","GLIBC_2.2.5",0,LSB_Core,4,1},
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
	{"clock_gettime","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if __s390__ && !__s390x__
	{"clock_gettime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __x86_64__
	{"clock_gettime","GLIBC_2.2.5",0,LSB_Core,4,1},
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
	{"clock_nanosleep","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if __s390__ && !__s390x__
	{"clock_nanosleep","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __x86_64__
	{"clock_nanosleep","GLIBC_2.2.5",0,LSB_Core,4,1},
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
	{"clock_settime","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if __s390__ && !__s390x__
	{"clock_settime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __x86_64__
	{"clock_settime","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if __s390x__
	{"clock_settime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{"mq_close","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"mq_getattr","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"mq_notify","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"mq_open","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"mq_receive","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"mq_send","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"mq_setattr","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"mq_timedreceive","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"mq_timedsend","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"mq_unlink","GLIBC_2.3.4",0,LSB_Core,0,1},
#if __i386__
	{"shm_open","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __ia64__
	{"shm_open","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"shm_open","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __powerpc64__
	{"shm_open","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if __s390__ && !__s390x__
	{"shm_open","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __x86_64__
	{"shm_open","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if __s390x__
	{"shm_open","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __i386__
	{"shm_unlink","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __ia64__
	{"shm_unlink","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"shm_unlink","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __powerpc64__
	{"shm_unlink","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if __s390__ && !__s390x__
	{"shm_unlink","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __x86_64__
	{"shm_unlink","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if __s390x__
	{"shm_unlink","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __i386__
	{"timer_create","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __ia64__
	{"timer_create","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"timer_create","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __powerpc64__
	{"timer_create","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if __s390__ && !__s390x__
	{"timer_create","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __x86_64__
	{"timer_create","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if __s390x__
	{"timer_create","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if __i386__
	{"timer_delete","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __ia64__
	{"timer_delete","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"timer_delete","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __powerpc64__
	{"timer_delete","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if __s390__ && !__s390x__
	{"timer_delete","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __x86_64__
	{"timer_delete","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if __s390x__
	{"timer_delete","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if __i386__
	{"timer_getoverrun","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __ia64__
	{"timer_getoverrun","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"timer_getoverrun","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __powerpc64__
	{"timer_getoverrun","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if __s390__ && !__s390x__
	{"timer_getoverrun","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __x86_64__
	{"timer_getoverrun","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if __s390x__
	{"timer_getoverrun","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if __i386__
	{"timer_gettime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __ia64__
	{"timer_gettime","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"timer_gettime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __powerpc64__
	{"timer_gettime","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if __s390__ && !__s390x__
	{"timer_gettime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __x86_64__
	{"timer_gettime","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if __s390x__
	{"timer_gettime","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if __i386__
	{"timer_settime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __ia64__
	{"timer_settime","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"timer_settime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __powerpc64__
	{"timer_settime","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if __s390__ && !__s390x__
	{"timer_settime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if __x86_64__
	{"timer_settime","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if __s390x__
	{"timer_settime","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
	{0,0}};

struct classinfo *librt_so_1_classinfo[] = {

	NULL	};
