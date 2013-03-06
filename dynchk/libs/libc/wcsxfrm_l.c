// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <locale.h>
#include <wchar.h>
#undef wcsxfrm_l
static size_t(*funcptr) (const wchar_t * , const wchar_t * , size_t , locale_t ) = 0;

extern int __lsb_check_params;
size_t wcsxfrm_l (const wchar_t * arg0 , const wchar_t * arg1 , size_t arg2 , locale_t arg3 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for wcsxfrm_l()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "wcsxfrm_l", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load wcsxfrm_l. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wcsxfrm_l() - validating");
		validate_Rdaddress( arg0, "wcsxfrm_l - arg0 (ws1)");
		validate_NULL_TYPETYPE(  arg0, "wcsxfrm_l - arg0 (ws1)");
		validate_Rdaddress( arg1, "wcsxfrm_l - arg1 (ws2)");
		validate_NULL_TYPETYPE(  arg1, "wcsxfrm_l - arg1 (ws2)");
		validate_NULL_TYPETYPE(  arg2, "wcsxfrm_l - arg2 (n)");
		validate_NULL_TYPETYPE(  arg3, "wcsxfrm_l - arg3 (locale)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

