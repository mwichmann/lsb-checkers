// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xutil.h>
#undef XGetPixel
static unsigned long(*funcptr) () = 0;

extern int __lsb_check_params;
unsigned long XGetPixel ()
{
	int reset_flag = __lsb_check_params;
	unsigned long ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XGetPixel ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XGetPixel()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

