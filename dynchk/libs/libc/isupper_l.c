// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <locale.h>
#include <ctype.h>
#undef isupper_l
static int(*funcptr) (int , locale_t ) = 0;

extern int __lsb_check_params;
int isupper_l (int arg0 , locale_t arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for isupper_l()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "isupper_l", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load isupper_l. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "isupper_l() - validating");
		validate_NULL_TYPETYPE(  arg0, "isupper_l - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "isupper_l - arg1 (locale)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

