// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <wctype.h>
#undef towupper
static wint_t(*funcptr) (wint_t ) = 0;

extern int __lsb_check_params;
wint_t towupper (wint_t arg0 )
{
	int reset_flag = __lsb_check_params;
	wint_t ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "towupper", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "towupper()");
		validate_NULL_TYPETYPE(  arg0, "towupper - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

