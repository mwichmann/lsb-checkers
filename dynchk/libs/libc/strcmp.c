// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <string.h>
#undef strcmp
static int(*funcptr) (const char * , const char * ) = 0;

extern int __lsb_check_params;
int strcmp (const char * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strcmp");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "strcmp()");
		validate_RWaddress( arg0, "strcmp - arg0");
		validate_NULL_TYPETYPE(  arg0, "strcmp - arg0");
		validate_RWaddress( arg1, "strcmp - arg1");
		validate_NULL_TYPETYPE(  arg1, "strcmp - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

