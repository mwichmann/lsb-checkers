#include <stdlib.h>
#include "elfchk.h"
struct versym libm_so_6_1[] = {
#if defined __i386__
	{"__fpclassifyl","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__signbitl","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"exp2l","GLIBC_2.1",0,LSB_Core,12,1},
#endif
	{0,0}};

struct classinfo *libm_so_6_1_classinfo[] = {

	NULL	};
