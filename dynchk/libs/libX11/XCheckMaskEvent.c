// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XCheckMaskEvent
static int(*funcptr) (Display * , long , XEvent * ) = 0;

extern int __lsb_check_params;
int XCheckMaskEvent (Display * arg0 , long arg1 , XEvent * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XCheckMaskEvent ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XCheckMaskEvent()");
		validate_RWaddress( arg0, "XCheckMaskEvent - arg0");
		validate_NULL_TYPETYPE(  arg0, "XCheckMaskEvent - arg0");
		validate_NULL_TYPETYPE(  arg1, "XCheckMaskEvent - arg1");
		validate_RWaddress( arg2, "XCheckMaskEvent - arg2");
		validate_NULL_TYPETYPE(  arg2, "XCheckMaskEvent - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

