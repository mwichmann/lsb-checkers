// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <search.h>
#undef hdestroy
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void hdestroy ()
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "hdestroy", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "hdestroy()");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

