// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <stddef.h>
#include <wchar.h>
#undef wcstoq
static long long(*funcptr) (const wchar_t * , wchar_t * * , int ) = 0;

extern int __lsb_check_params;
long long wcstoq (const wchar_t * arg0 , wchar_t * * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	long long ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "wcstoq", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wcstoq()");
		validate_Rdaddress( arg0, "wcstoq - arg0");
		validate_NULL_TYPETYPE(  arg0, "wcstoq - arg0");
		validate_RWaddress( arg1, "wcstoq - arg1");
		validate_NULL_TYPETYPE(  arg1, "wcstoq - arg1");
		validate_NULL_TYPETYPE(  arg2, "wcstoq - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

