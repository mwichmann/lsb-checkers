// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <wchar.h>
#undef vfwscanf
static int(*funcptr) (FILE * , const wchar_t * , va_list ) = 0;

extern int __lsb_check_params;
int vfwscanf (FILE * arg0 , const wchar_t * arg1 , va_list arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vfwscanf");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "vfwscanf()");
		validate_RWaddress( arg0, "vfwscanf - arg0");
		validate_NULL_TYPETYPE(  arg0, "vfwscanf - arg0");
		validate_Rdaddress( arg1, "vfwscanf - arg1");
		validate_NULL_TYPETYPE(  arg1, "vfwscanf - arg1");
		validate_NULL_TYPETYPE(  arg2, "vfwscanf - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

