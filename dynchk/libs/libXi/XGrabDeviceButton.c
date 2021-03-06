// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/XInput.h>
#include <X11/X.h>
#include <X11/extensions/XI.h>
#undef XGrabDeviceButton
static int(*funcptr) (Display * , XDevice * , unsigned int , unsigned int , XDevice * , Window , int , unsigned int , XEventClass * , int , int ) = 0;

extern int __lsb_check_params;
int XGrabDeviceButton (Display * arg0 , XDevice * arg1 , unsigned int arg2 , unsigned int arg3 , XDevice * arg4 , Window arg5 , int arg6 , unsigned int arg7 , XEventClass * arg8 , int arg9 , int arg10 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XGrabDeviceButton()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGrabDeviceButton");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XGrabDeviceButton. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XGrabDeviceButton() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XGrabDeviceButton - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XGrabDeviceButton - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XGrabDeviceButton - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XGrabDeviceButton - arg1");
		validate_NULL_TYPETYPE(  arg2, "XGrabDeviceButton - arg2");
		validate_NULL_TYPETYPE(  arg3, "XGrabDeviceButton - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "XGrabDeviceButton - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "XGrabDeviceButton - arg4");
		validate_NULL_TYPETYPE(  arg5, "XGrabDeviceButton - arg5");
		validate_NULL_TYPETYPE(  arg6, "XGrabDeviceButton - arg6");
		validate_NULL_TYPETYPE(  arg7, "XGrabDeviceButton - arg7");
		if( arg8 ) {
		validate_RWaddress( arg8, "XGrabDeviceButton - arg8");
		}
		validate_NULL_TYPETYPE(  arg8, "XGrabDeviceButton - arg8");
		validate_NULL_TYPETYPE(  arg9, "XGrabDeviceButton - arg9");
		validate_NULL_TYPETYPE(  arg10, "XGrabDeviceButton - arg10");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
	__lsb_check_params = reset_flag;
	return ret_value;
}

