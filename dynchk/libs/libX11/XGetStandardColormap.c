// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#undef XGetStandardColormap
static int(*funcptr) (Display * , Window , XStandardColormap * , Atom ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XGetStandardColormap (Display * arg0 , Window arg1 , XStandardColormap * arg2 , Atom arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetStandardColormap");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XGetStandardColormap()");
	validate_RWaddress( arg0, "XGetStandardColormap - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetStandardColormap - arg0");
		validate_NULL_TYPETYPE(  arg1, "XGetStandardColormap - arg1");
	validate_RWaddress( arg2, "XGetStandardColormap - arg2");
		validate_NULL_TYPETYPE(  arg2, "XGetStandardColormap - arg2");
		validate_NULL_TYPETYPE(  arg3, "XGetStandardColormap - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

