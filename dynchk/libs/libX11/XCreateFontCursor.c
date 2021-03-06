// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XCreateFontCursor
static Cursor(*funcptr) (Display * , unsigned int ) = 0;

extern int __lsb_check_params;
Cursor XCreateFontCursor (Display * arg0 , unsigned int arg1 )
{
	int reset_flag = __lsb_check_params;
	Cursor ret_value  ;
	__lsb_output(4, "Invoking wrapper for XCreateFontCursor()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XCreateFontCursor");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XCreateFontCursor. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XCreateFontCursor() - validating");
		validate_RWaddress( arg0, "XCreateFontCursor - arg0");
		validate_NULL_TYPETYPE(  arg0, "XCreateFontCursor - arg0");
		validate_NULL_TYPETYPE(  arg1, "XCreateFontCursor - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

