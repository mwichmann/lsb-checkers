// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xlib.h>
#undef XESetCloseDisplay
static int *(*funcptr) () = 0;

extern int __lsb_check_params;
int * XESetCloseDisplay ()
{
	int reset_flag = __lsb_check_params;
	int * ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XESetCloseDisplay");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XESetCloseDisplay()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

