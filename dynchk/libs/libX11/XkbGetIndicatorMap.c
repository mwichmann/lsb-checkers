// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/XKBlib.h>
#undef XkbGetIndicatorMap
static int(*funcptr) (Display * , unsigned long , ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XkbGetIndicatorMap (Display * arg0 , unsigned long arg1 ,  arg2)
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbGetIndicatorMap");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XkbGetIndicatorMap()");
	validate_RWaddress( arg0, "XkbGetIndicatorMap - arg0");
		validate_NULL_TYPETYPE(  arg0, "XkbGetIndicatorMap - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbGetIndicatorMap - arg1");
		validate_NULL_TYPETYPE(  arg2, "XkbGetIndicatorMap - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

