// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <stdlib.h>
#undef lrand48
static long(*funcptr) () = 0;

extern int __lsb_check_params;
long lrand48 ()
{
	int reset_flag = __lsb_check_params;
	long ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "lrand48", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "lrand48()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

