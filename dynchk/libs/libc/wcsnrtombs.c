// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wctype.h>
#include <wchar.h>
#undef wcsnrtombs
static size_t(*funcptr) (char * , const wchar_t * * , size_t , size_t , mbstate_t * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
size_t wcsnrtombs (char * arg0 , const wchar_t * * arg1 , size_t arg2 , size_t arg3 , mbstate_t * arg4 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsnrtombs");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "wcsnrtombs()");
	validate_Rdaddress( arg0, "wcsnrtombs - arg0");
		validate_NULL_TYPETYPE(  arg0, "wcsnrtombs - arg0");
	validate_Rdaddress( arg1, "wcsnrtombs - arg1");
		validate_NULL_TYPETYPE(  arg1, "wcsnrtombs - arg1");
		validate_NULL_TYPETYPE(  arg2, "wcsnrtombs - arg2");
		validate_NULL_TYPETYPE(  arg3, "wcsnrtombs - arg3");
	validate_Rdaddress( arg4, "wcsnrtombs - arg4");
		validate_NULL_TYPETYPE(  arg4, "wcsnrtombs - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

