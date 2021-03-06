// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <wchar.h>
#undef __wcpncpy_chk
static wchar_t *(*funcptr) (wchar_t * , const wchar_t * , size_t , size_t ) = 0;

extern int __lsb_check_params;
wchar_t * __wcpncpy_chk (wchar_t * arg0 , const wchar_t * arg1 , size_t arg2 , size_t arg3 )
{
	int reset_flag = __lsb_check_params;
	wchar_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for __wcpncpy_chk()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "__wcpncpy_chk", "GLIBC_2.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load __wcpncpy_chk. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "__wcpncpy_chk() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "__wcpncpy_chk - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "__wcpncpy_chk - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "__wcpncpy_chk - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "__wcpncpy_chk - arg1");
		validate_NULL_TYPETYPE(  arg2, "__wcpncpy_chk - arg2");
		validate_NULL_TYPETYPE(  arg3, "__wcpncpy_chk - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

