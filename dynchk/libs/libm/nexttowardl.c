// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <math.h>
#undef nexttowardl
static long double(*funcptr) (long double , long double ) = 0;

extern int __lsb_check_params;
long double nexttowardl (long double arg0 , long double arg1 )
{
	int reset_flag = __lsb_check_params;
	long double ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "nexttowardl", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "nexttowardl()");
		validate_NULL_TYPETYPE(  arg0, "nexttowardl - arg0");
		validate_NULL_TYPETYPE(  arg1, "nexttowardl - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

