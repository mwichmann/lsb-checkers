// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xlib.h>
#undef XDisplayOfOM
static Display *(*funcptr) (XOM ) = 0;

extern int __lsb_check_params;
Display * XDisplayOfOM (XOM arg0 )
{
	int reset_flag = __lsb_check_params;
	Display * ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XDisplayOfOM");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XDisplayOfOM()");
		validate_NULL_TYPETYPE(  arg0, "XDisplayOfOM - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

