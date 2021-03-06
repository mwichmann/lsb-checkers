// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/sync.h>
#undef XSyncSetCounter
static int(*funcptr) (Display * , XSyncCounter , XSyncValue ) = 0;

extern int __lsb_check_params;
int XSyncSetCounter (Display * arg0 , XSyncCounter arg1 , XSyncValue arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XSyncSetCounter()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSyncSetCounter");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XSyncSetCounter. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XSyncSetCounter() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XSyncSetCounter - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XSyncSetCounter - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSyncSetCounter - arg1");
		validate_NULL_TYPETYPE(  arg2, "XSyncSetCounter - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

