// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <wchar.h>
#undef btowc
static wint_t(*funcptr) (int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
wint_t btowc (int arg0 )
{
	int reset_flag = __lsb_check_params;
	wint_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "btowc");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "btowc()");
		validate_NULL_TYPETYPE(  arg0, "btowc - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

