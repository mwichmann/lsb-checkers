// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xresource.h>
#undef XrmLocaleOfDatabase
static const char *(*funcptr) (XrmDatabase ) = 0;

extern int __lsb_check_params;
const char * XrmLocaleOfDatabase (XrmDatabase arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XrmLocaleOfDatabase ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XrmLocaleOfDatabase()");
		validate_NULL_TYPETYPE(  arg0, "XrmLocaleOfDatabase - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

