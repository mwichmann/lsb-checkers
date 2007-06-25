#include <stdlib.h>
#include "elfchk.h"
struct versym libcrypt_so_1[] = {
#if defined ___i386__
	{"crypt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"crypt","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"crypt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"crypt","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"crypt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"crypt","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"crypt","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined ___i386__
	{"encrypt","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"encrypt","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"encrypt","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"encrypt","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"encrypt","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"encrypt","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"encrypt","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined ___i386__
	{"setkey","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"setkey","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setkey","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"setkey","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setkey","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"setkey","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"setkey","GLIBC_2.2",0,LSB_Core,1,1},
#endif
	{0,0}};

struct classinfo *libcrypt_so_1_classinfo[] = {

	NULL	};
