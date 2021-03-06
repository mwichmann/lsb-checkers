// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XRebindKeysym
static int(*funcptr) (Display * , KeySym , KeySym * , int , const unsigned char * , int ) = 0;

extern int __lsb_check_params;
int XRebindKeysym (Display * arg0 , KeySym arg1 , KeySym * arg2 , int arg3 , const unsigned char * arg4 , int arg5 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XRebindKeysym()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XRebindKeysym");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XRebindKeysym. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XRebindKeysym() - validating");
		validate_RWaddress( arg0, "XRebindKeysym - arg0");
		validate_NULL_TYPETYPE(  arg0, "XRebindKeysym - arg0");
		validate_NULL_TYPETYPE(  arg1, "XRebindKeysym - arg1");
		validate_RWaddress( arg2, "XRebindKeysym - arg2");
		validate_NULL_TYPETYPE(  arg2, "XRebindKeysym - arg2");
		validate_NULL_TYPETYPE(  arg3, "XRebindKeysym - arg3");
		validate_Rdaddress( arg4, "XRebindKeysym - arg4");
		validate_NULL_TYPETYPE(  arg4, "XRebindKeysym - arg4");
		validate_NULL_TYPETYPE(  arg5, "XRebindKeysym - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

