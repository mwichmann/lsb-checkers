// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/extensions/sync.h>
#undef XSyncSetPriority
static int(*funcptr) (Display * , XID , int ) = 0;

extern int __lsb_check_params;
int XSyncSetPriority (Display * arg0 , XID arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XSyncSetPriority()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSyncSetPriority");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XSyncSetPriority. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XSyncSetPriority() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XSyncSetPriority - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XSyncSetPriority - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSyncSetPriority - arg1");
		validate_NULL_TYPETYPE(  arg2, "XSyncSetPriority - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

