#include <stdlib.h>
#include "elfchk.h"
struct versym libutil_so_1[] = {
#if defined __s390x__
	{"forkpty","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"login","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"login_tty","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"logout","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"logwtmp","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"openpty","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{0,0}};

struct classinfo *libutil_so_1_classinfo[] = {

	NULL	};
