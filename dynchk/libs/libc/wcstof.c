// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef wcstof
static float(*funcptr) (const wchar_t * , wchar_t * * ) = 0;

extern int __lsb_check_params;
float wcstof (const wchar_t * arg0 , wchar_t * * arg1 )
{
	int reset_flag = __lsb_check_params;
	float ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcstof");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "wcstof()");
		validate_Rdaddress( arg0, "wcstof - arg0");
		validate_NULL_TYPETYPE(  arg0, "wcstof - arg0");
		validate_RWaddress( arg1, "wcstof - arg1");
		validate_NULL_TYPETYPE(  arg1, "wcstof - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

