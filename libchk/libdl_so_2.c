#include <stdlib.h>
#include "elfchk.h"
struct versym libdl_so_2[] = {
#if __i386__
	{"dladdr","GLIBC_2.0"},
#endif
#if __ia64__
	{"dladdr","GLIBC_2.2"},
#endif
#if __powerpc__ && !__powerpc64__
	{"dladdr","GLIBC_2.0"},
#endif
#if __powerpc64__
	{"dladdr","GLIBC_2.0"},
#endif
#if __s390__ && !__s390x__
	{"dladdr","GLIBC_2.0"},
#endif
#if __x86_64__
	{"dladdr","GLIBC_2.2.5"},
#endif
#if __s390x__
	{"dladdr","GLIBC_2.2"},
#endif
#if __i386__
	{"dlclose","GLIBC_2.0"},
#endif
#if __ia64__
	{"dlclose","GLIBC_2.2"},
#endif
#if __powerpc__ && !__powerpc64__
	{"dlclose","GLIBC_2.0"},
#endif
#if __powerpc64__
	{"dlclose","GLIBC_2.0"},
#endif
#if __s390__ && !__s390x__
	{"dlclose","GLIBC_2.0"},
#endif
#if __x86_64__
	{"dlclose","GLIBC_2.2.5"},
#endif
#if __s390x__
	{"dlclose","GLIBC_2.2"},
#endif
#if __i386__
	{"dlerror","GLIBC_2.0"},
#endif
#if __ia64__
	{"dlerror","GLIBC_2.2"},
#endif
#if __powerpc__ && !__powerpc64__
	{"dlerror","GLIBC_2.0"},
#endif
#if __powerpc64__
	{"dlerror","GLIBC_2.0"},
#endif
#if __s390__ && !__s390x__
	{"dlerror","GLIBC_2.0"},
#endif
#if __x86_64__
	{"dlerror","GLIBC_2.2.5"},
#endif
#if __s390x__
	{"dlerror","GLIBC_2.2"},
#endif
#if __i386__
	{"dlopen","GLIBC_2.1"},
#endif
#if __ia64__
	{"dlopen","GLIBC_2.2"},
#endif
#if __powerpc__ && !__powerpc64__
	{"dlopen","GLIBC_2.1"},
#endif
#if __powerpc64__
	{"dlopen","GLIBC_2.1"},
#endif
#if __s390__ && !__s390x__
	{"dlopen","GLIBC_2.1"},
#endif
#if __x86_64__
	{"dlopen","GLIBC_2.2.5"},
#endif
#if __s390x__
	{"dlopen","GLIBC_2.2"},
#endif
#if __i386__
	{"dlsym","GLIBC_2.0"},
#endif
#if __ia64__
	{"dlsym","GLIBC_2.2"},
#endif
#if __powerpc__ && !__powerpc64__
	{"dlsym","GLIBC_2.0"},
#endif
#if __powerpc64__
	{"dlsym","GLIBC_2.0"},
#endif
#if __s390__ && !__s390x__
	{"dlsym","GLIBC_2.0"},
#endif
#if __x86_64__
	{"dlsym","GLIBC_2.2.5"},
#endif
#if __s390x__
	{"dlsym","GLIBC_2.2"},
#endif
	{0,0}};

struct classinfo *libdl_so_2_classinfo[] = {

	NULL	};
