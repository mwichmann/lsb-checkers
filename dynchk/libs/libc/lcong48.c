// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef lcong48
static void(*funcptr) (unsigned short []) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void lcong48 (unsigned short arg0 [])
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lcong48");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "lcong48()");
		validate_NULL_TYPETYPE(  arg0, "lcong48 - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

