// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#undef XSetWindowBorderPixmap
static int(*funcptr) (Display * , Window , Pixmap ) = 0;

extern int __lsb_check_params;
int XSetWindowBorderPixmap (Display * arg0 , Window arg1 , Pixmap arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XSetWindowBorderPixmap ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XSetWindowBorderPixmap()");
		validate_RWaddress( arg0, "XSetWindowBorderPixmap - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetWindowBorderPixmap - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSetWindowBorderPixmap - arg1");
		validate_NULL_TYPETYPE(  arg2, "XSetWindowBorderPixmap - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

