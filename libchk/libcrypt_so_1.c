#include <stdlib.h>
#include "elfchk.h"
struct versym libcrypt_so_1[] = {
#if __i386__
	{"crypt","GLIBC_2.0",0,"GLIBC_2.0",4,1},
#endif
#if __ia64__
	{"crypt","GLIBC_2.0",0,"GLIBC_2.0",8,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"crypt","GLIBC_2.0",0,"GLIBC_2.0",4,1},
#endif
#if __powerpc64__
	{"crypt","GLIBC_2.3",0,"GLIBC_2.3",8,1},
#endif
#if __s390__ && !__s390x__
	{"crypt","GLIBC_2.0",0,"GLIBC_2.0",4,1},
#endif
#if __x86_64__
	{"crypt","GLIBC_2.2.5",0,"GLIBC_2.2.5",8,1},
#endif
#if __s390x__
	{"crypt","GLIBC_2.2",0,"GLIBC_2.2",8,1},
#endif
#if __i386__
	{"encrypt","GLIBC_2.0",0,"GLIBC_2.0",1,1},
#endif
#if __ia64__
	{"encrypt","GLIBC_2.0",0,"GLIBC_2.0",1,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"encrypt","GLIBC_2.0",0,"GLIBC_2.0",1,1},
#endif
#if __powerpc64__
	{"encrypt","GLIBC_2.3",0,"GLIBC_2.3",1,1},
#endif
#if __s390__ && !__s390x__
	{"encrypt","GLIBC_2.0",0,"GLIBC_2.0",1,1},
#endif
#if __x86_64__
	{"encrypt","GLIBC_2.2.5",0,"GLIBC_2.2.5",1,1},
#endif
#if __s390x__
	{"encrypt","GLIBC_2.2",0,"GLIBC_2.2",1,1},
#endif
#if __i386__
	{"setkey","GLIBC_2.0",0,"GLIBC_2.0",1,1},
#endif
#if __ia64__
	{"setkey","GLIBC_2.0",0,"GLIBC_2.0",1,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"setkey","GLIBC_2.0",0,"GLIBC_2.0",1,1},
#endif
#if __powerpc64__
	{"setkey","GLIBC_2.3",0,"GLIBC_2.3",1,1},
#endif
#if __s390__ && !__s390x__
	{"setkey","GLIBC_2.0",0,"GLIBC_2.0",1,1},
#endif
#if __x86_64__
	{"setkey","GLIBC_2.2.5",0,"GLIBC_2.2.5",1,1},
#endif
#if __s390x__
	{"setkey","GLIBC_2.2",0,"GLIBC_2.2",1,1},
#endif
	{0,0}};

struct classinfo *libcrypt_so_1_classinfo[] = {

	NULL	};
