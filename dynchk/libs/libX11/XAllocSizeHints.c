// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xutil.h>
#undef XAllocSizeHints
static XSizeHints *(*funcptr) () = 0;

extern int __lsb_check_params;
XSizeHints * XAllocSizeHints ()
{
	int reset_flag = __lsb_check_params;
	XSizeHints * ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XAllocSizeHints");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XAllocSizeHints()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

