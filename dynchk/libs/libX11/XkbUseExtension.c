// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/XKBlib.h>
#undef XkbUseExtension
static int(*funcptr) (Display * , int * , int * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XkbUseExtension (Display * arg0 , int * arg1 , int * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbUseExtension");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XkbUseExtension()");
	validate_RWaddress( arg0, "XkbUseExtension - arg0");
		validate_NULL_TYPETYPE(  arg0, "XkbUseExtension - arg0");
	validate_RWaddress( arg1, "XkbUseExtension - arg1");
		validate_NULL_TYPETYPE(  arg1, "XkbUseExtension - arg1");
	validate_RWaddress( arg2, "XkbUseExtension - arg2");
		validate_NULL_TYPETYPE(  arg2, "XkbUseExtension - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

