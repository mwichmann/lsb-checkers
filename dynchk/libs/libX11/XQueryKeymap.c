// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XQueryKeymap
static int(*funcptr) (Display * , char [32]) = 0;

extern int __lsb_check_params;
int XQueryKeymap (Display * arg0 , char arg1 [32])
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XQueryKeymap()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XQueryKeymap");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XQueryKeymap. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XQueryKeymap() - validating");
		validate_RWaddress( arg0, "XQueryKeymap - arg0");
		validate_NULL_TYPETYPE(  arg0, "XQueryKeymap - arg0");
		validate_NULL_TYPETYPE(  arg1, "XQueryKeymap - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

