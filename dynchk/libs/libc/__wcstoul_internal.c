// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef __wcstoul_internal
static unsigned long(*funcptr) (const wchar_t * , wchar_t * * , int , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
unsigned long __wcstoul_internal (const wchar_t * arg0 , wchar_t * * arg1 , int arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	unsigned long ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__wcstoul_internal");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "__wcstoul_internal()");
	validate_Rdaddress( arg0, "__wcstoul_internal - arg0");
		validate_NULL_TYPETYPE(  arg0, "__wcstoul_internal - arg0");
	validate_Rdaddress( arg1, "__wcstoul_internal - arg1");
	validate_Rdaddress(* arg1, "__wcstoul_internal - arg1");
		validate_NULL_TYPETYPE(  arg1, "__wcstoul_internal - arg1");
		validate_NULL_TYPETYPE(  arg2, "__wcstoul_internal - arg2");
		validate_NULL_TYPETYPE(  arg3, "__wcstoul_internal - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

