// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XGetPointerMapping
static int(*funcptr) (Display * , unsigned char * , int ) = 0;

extern int __lsb_check_params;
int XGetPointerMapping (Display * arg0 , unsigned char * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XGetPointerMapping ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XGetPointerMapping()");
		validate_RWaddress( arg0, "XGetPointerMapping - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetPointerMapping - arg0");
		validate_RWaddress( arg1, "XGetPointerMapping - arg1");
		validate_NULL_TYPETYPE(  arg1, "XGetPointerMapping - arg1");
		validate_NULL_TYPETYPE(  arg2, "XGetPointerMapping - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

