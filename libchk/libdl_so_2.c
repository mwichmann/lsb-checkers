#include <stdlib.h>
#include "elfchk.h"
struct versym libdl_so_2[] = {
#if defined __s390x__
	{"dladdr","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"dlclose","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"dlerror","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"dlopen","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"dlsym","GLIBC_2.2",0,LSB_Core,0,1},
#endif
	{0,0}};

struct classinfo *libdl_so_2_classinfo[] = {

	NULL	};
