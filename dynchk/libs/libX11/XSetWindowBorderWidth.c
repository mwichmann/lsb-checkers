// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XSetWindowBorderWidth
static int(*funcptr) (Display * , Window , unsigned int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XSetWindowBorderWidth (Display * arg0 , Window arg1 , unsigned int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetWindowBorderWidth");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XSetWindowBorderWidth()");
	validate_RWaddress( arg0, "XSetWindowBorderWidth - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetWindowBorderWidth - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSetWindowBorderWidth - arg1");
		validate_NULL_TYPETYPE(  arg2, "XSetWindowBorderWidth - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

