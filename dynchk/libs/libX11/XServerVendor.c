// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XServerVendor
static char *(*funcptr) (Display * ) = 0;

extern int __lsb_check_params;
char * XServerVendor (Display * arg0 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XServerVendor ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XServerVendor()");
		validate_RWaddress( arg0, "XServerVendor - arg0");
		validate_NULL_TYPETYPE(  arg0, "XServerVendor - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

