// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef wcswcs
static wchar_t *(*funcptr) (const wchar_t * , const wchar_t * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
wchar_t * wcswcs (const wchar_t * arg0 , const wchar_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	wchar_t * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcswcs");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "wcswcs()");
	validate_Rdaddress( arg0, "wcswcs - arg0");
		validate_NULL_TYPETYPE(  arg0, "wcswcs - arg0");
	validate_Rdaddress( arg1, "wcswcs - arg1");
		validate_NULL_TYPETYPE(  arg1, "wcswcs - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

