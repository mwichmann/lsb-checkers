// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#undef XGetClassHint
static int(*funcptr) (Display * , Window , XClassHint * ) = 0;

extern int __lsb_check_params;
int XGetClassHint (Display * arg0 , Window arg1 , XClassHint * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XGetClassHint ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XGetClassHint()");
		validate_RWaddress( arg0, "XGetClassHint - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetClassHint - arg0");
		validate_NULL_TYPETYPE(  arg1, "XGetClassHint - arg1");
		validate_RWaddress( arg2, "XGetClassHint - arg2");
		validate_NULL_TYPETYPE(  arg2, "XGetClassHint - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

