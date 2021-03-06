// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XUngrabPointer
static int(*funcptr) (Display * , Time ) = 0;

extern int __lsb_check_params;
int XUngrabPointer (Display * arg0 , Time arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XUngrabPointer()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XUngrabPointer");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XUngrabPointer. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XUngrabPointer() - validating");
		validate_RWaddress( arg0, "XUngrabPointer - arg0");
		validate_NULL_TYPETYPE(  arg0, "XUngrabPointer - arg0");
		validate_NULL_TYPETYPE(  arg1, "XUngrabPointer - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

