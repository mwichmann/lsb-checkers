#include <stdlib.h>
#include "elfchk.h"
struct versym libcrypt_so_1[] = {
#if defined __s390x__
	{"crypt","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"encrypt","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"setkey","GLIBC_2.2",0,LSB_Core,1,1},
#endif
	{0,0}};

struct classinfo *libcrypt_so_1_classinfo[] = {

	NULL	};
