// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stddef.h>
#include <stdlib.h>
#undef wctomb
static int(*funcptr) (char * , wchar_t ) = 0;

extern int __lsb_check_params;
int wctomb (char * arg0 , wchar_t arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wctomb");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "wctomb()");
		validate_RWaddress( arg0, "wctomb - arg0");
		validate_NULL_TYPETYPE(  arg0, "wctomb - arg0");
		validate_NULL_TYPETYPE(  arg1, "wctomb - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

