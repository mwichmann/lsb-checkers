// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef ldiv
static ldiv_t(*funcptr) (long , long ) = 0;

extern int __lsb_check_params;
ldiv_t ldiv (long arg0 , long arg1 )
{
	int reset_flag = __lsb_check_params;
	ldiv_t ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "ldiv", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ldiv()");
		validate_NULL_TYPETYPE(  arg0, "ldiv - arg0");
		validate_NULL_TYPETYPE(  arg1, "ldiv - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

