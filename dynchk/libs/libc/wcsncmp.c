// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef wcsncmp
static int(*funcptr) (const wchar_t * , const wchar_t * , size_t ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int wcsncmp (const wchar_t * arg0 , const wchar_t * arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsncmp");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "wcsncmp()");
	validate_Rdaddress( arg0, "wcsncmp - arg0");
		validate_NULL_TYPETYPE(  arg0, "wcsncmp - arg0");
	validate_Rdaddress( arg1, "wcsncmp - arg1");
		validate_NULL_TYPETYPE(  arg1, "wcsncmp - arg1");
		validate_NULL_TYPETYPE(  arg2, "wcsncmp - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

