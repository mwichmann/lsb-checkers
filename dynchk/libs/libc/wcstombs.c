// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <stdlib.h>
#undef wcstombs
static size_t(*funcptr) (char * , const wchar_t * , size_t ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
size_t wcstombs (char * arg0 , const wchar_t * arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcstombs");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "wcstombs()");
	validate_Rdaddress( arg0, "wcstombs - arg0");
		validate_NULL_TYPETYPE(  arg0, "wcstombs - arg0");
	validate_Rdaddress( arg1, "wcstombs - arg1");
		validate_NULL_TYPETYPE(  arg1, "wcstombs - arg1");
		validate_NULL_TYPETYPE(  arg2, "wcstombs - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

