// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xlib.h>
#undef XAllPlanes
static unsigned long(*funcptr) () = 0;

extern int __lsb_check_params;
unsigned long XAllPlanes ()
{
	int reset_flag = __lsb_check_params;
	unsigned long ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XAllPlanes");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XAllPlanes()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

