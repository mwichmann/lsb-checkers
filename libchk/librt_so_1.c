#include <stdlib.h>
#include "elfchk.h"
struct versym librt_so_1[] = {
	{"clock_getcpuclockid","GLIBC_2.2",0,LSB_Core,0,1},
	{"clock_getres","GLIBC_2.2",0,LSB_Core,0,1},
	{"clock_gettime","GLIBC_2.2",0,LSB_Core,0,1},
	{"clock_nanosleep","GLIBC_2.2",0,LSB_Core,0,1},
	{"clock_settime","GLIBC_2.2",0,LSB_Core,0,1},
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
