// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/extensions/extutil.h>
#include <X11/Xlib.h>
#undef XextFindDisplay
static XExtDisplayInfo *(*funcptr) (XExtensionInfo * , Display * ) = 0;

extern int __lsb_check_params;
XExtDisplayInfo * XextFindDisplay (XExtensionInfo * arg0 , Display * arg1 )
{
	int reset_flag = __lsb_check_params;
	XExtDisplayInfo * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XextFindDisplay()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XextFindDisplay");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XextFindDisplay. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XextFindDisplay() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XextFindDisplay - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XextFindDisplay - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XextFindDisplay - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XextFindDisplay - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

