// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef wcstold
static long double(*funcptr) (const wchar_t * , wchar_t * * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
long double wcstold (const wchar_t * arg0 , wchar_t * * arg1 )
{
	int reset_flag = __lsb_check_params;
	long double ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcstold");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "wcstold()");
	validate_Rdaddress( arg0, "wcstold - arg0");
		validate_NULL_TYPETYPE(  arg0, "wcstold - arg0");
	validate_Rdaddress( arg1, "wcstold - arg1");
	validate_Rdaddress(* arg1, "wcstold - arg1");
		validate_NULL_TYPETYPE(  arg1, "wcstold - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

