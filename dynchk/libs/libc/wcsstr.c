// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef wcsstr
static wchar_t *(*funcptr) (const wchar_t * , const wchar_t * ) = 0;

extern int __lsb_check_params;
wchar_t * wcsstr (const wchar_t * arg0 , const wchar_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	wchar_t * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsstr");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "wcsstr - arg0");
		validate_NULL_TYPETYPE(  arg0, "wcsstr - arg0");
	validate_Rdaddress( arg1, "wcsstr - arg1");
		validate_NULL_TYPETYPE(  arg1, "wcsstr - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

