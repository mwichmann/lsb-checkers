// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <inttypes.h>
#undef imaxdiv
static imaxdiv_t(*funcptr) (intmax_t , intmax_t ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
imaxdiv_t imaxdiv (intmax_t arg0 , intmax_t arg1 )
{
	int reset_flag = __lsb_check_params;
	imaxdiv_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "imaxdiv");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "imaxdiv()");
		validate_NULL_TYPETYPE(  arg0, "imaxdiv - arg0");
		validate_NULL_TYPETYPE(  arg1, "imaxdiv - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

