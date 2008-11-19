#include <stdlib.h>
#include "elfchk.h"
struct versym libdl_so_2[] = {
#if defined __i386__
	{"dladdr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"dladdr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"dladdr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"dladdr","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"dladdr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"dladdr","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"dladdr","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"dlclose","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"dlclose","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"dlclose","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"dlclose","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"dlclose","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"dlclose","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"dlclose","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"dlerror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"dlerror","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"dlerror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"dlerror","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"dlerror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"dlerror","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"dlerror","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"dlopen","GLIBC_2.1",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"dlopen","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"dlopen","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"dlopen","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"dlopen","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"dlopen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"dlopen","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"dlsym","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"dlsym","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"dlsym","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"dlsym","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"dlsym","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"dlsym","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"dlsym","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
	{0,0}};

struct classinfo *libdl_so_2_classinfo[] = {

	NULL	};
