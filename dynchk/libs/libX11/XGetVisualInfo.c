// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#undef XGetVisualInfo
static XVisualInfo *(*funcptr) (Display * , long , XVisualInfo * , int * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
XVisualInfo * XGetVisualInfo (Display * arg0 , long arg1 , XVisualInfo * arg2 , int * arg3 )
{
	int reset_flag = __lsb_check_params;
	XVisualInfo * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetVisualInfo");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XGetVisualInfo()");
	validate_RWaddress( arg0, "XGetVisualInfo - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetVisualInfo - arg0");
		validate_NULL_TYPETYPE(  arg1, "XGetVisualInfo - arg1");
	validate_RWaddress( arg2, "XGetVisualInfo - arg2");
		validate_NULL_TYPETYPE(  arg2, "XGetVisualInfo - arg2");
	validate_RWaddress( arg3, "XGetVisualInfo - arg3");
		validate_NULL_TYPETYPE(  arg3, "XGetVisualInfo - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

