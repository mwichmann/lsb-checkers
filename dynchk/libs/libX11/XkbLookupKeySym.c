// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/XKBlib.h>
#undef XkbLookupKeySym
static int(*funcptr) (Display * , KeyCode , unsigned int , unsigned int * , KeySym * ) = 0;

extern int __lsb_check_params;
int XkbLookupKeySym (Display * arg0 , KeyCode arg1 , unsigned int arg2 , unsigned int * arg3 , KeySym * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XkbLookupKeySym ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XkbLookupKeySym()");
		validate_RWaddress( arg0, "XkbLookupKeySym - arg0");
		validate_NULL_TYPETYPE(  arg0, "XkbLookupKeySym - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbLookupKeySym - arg1");
		validate_NULL_TYPETYPE(  arg2, "XkbLookupKeySym - arg2");
		validate_RWaddress( arg3, "XkbLookupKeySym - arg3");
		validate_NULL_TYPETYPE(  arg3, "XkbLookupKeySym - arg3");
		validate_RWaddress( arg4, "XkbLookupKeySym - arg4");
		validate_NULL_TYPETYPE(  arg4, "XkbLookupKeySym - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

