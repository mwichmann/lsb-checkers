// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <wctype.h>
#undef iswprint
static int(*funcptr) (wint_t ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int iswprint (wint_t arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "iswprint");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "iswprint()");
		validate_NULL_TYPETYPE(  arg0, "iswprint - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

