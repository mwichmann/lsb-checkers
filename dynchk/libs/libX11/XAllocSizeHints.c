// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xutil.h>
#undef XAllocSizeHints
static XSizeHints *(*funcptr) () = 0;

extern int __lsb_check_params;
XSizeHints * XAllocSizeHints ()
{
	int reset_flag = __lsb_check_params;
	XSizeHints * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XAllocSizeHints()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XAllocSizeHints");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XAllocSizeHints. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XAllocSizeHints() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

