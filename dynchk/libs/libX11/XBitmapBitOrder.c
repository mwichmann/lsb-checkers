// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XBitmapBitOrder
static int(*funcptr) (Display * ) = 0;

extern int __lsb_check_params;
int XBitmapBitOrder (Display * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XBitmapBitOrder ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XBitmapBitOrder()");
		validate_RWaddress( arg0, "XBitmapBitOrder - arg0");
		validate_NULL_TYPETYPE(  arg0, "XBitmapBitOrder - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

