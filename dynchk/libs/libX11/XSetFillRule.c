// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xlib.h>
#undef XSetFillRule
static int(*funcptr) (Display * , GC , int ) = 0;

extern int __lsb_check_params;
int XSetFillRule (Display * arg0 , GC arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XSetFillRule");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XSetFillRule()");
		validate_RWaddress( arg0, "XSetFillRule - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetFillRule - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSetFillRule - arg1");
		validate_NULL_TYPETYPE(  arg2, "XSetFillRule - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

