// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xlib.h>
#undef XDisplayPlanes
static int(*funcptr) (Display * , int ) = 0;

extern int __lsb_check_params;
int XDisplayPlanes (Display * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XDisplayPlanes");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XDisplayPlanes()");
		validate_RWaddress( arg0, "XDisplayPlanes - arg0");
		validate_NULL_TYPETYPE(  arg0, "XDisplayPlanes - arg0");
		validate_NULL_TYPETYPE(  arg1, "XDisplayPlanes - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

