// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XRemoveFromSaveSet
static int(*funcptr) (Display * , Window ) = 0;

extern int __lsb_check_params;
int XRemoveFromSaveSet (Display * arg0 , Window arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XRemoveFromSaveSet ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XRemoveFromSaveSet()");
		validate_RWaddress( arg0, "XRemoveFromSaveSet - arg0");
		validate_NULL_TYPETYPE(  arg0, "XRemoveFromSaveSet - arg0");
		validate_NULL_TYPETYPE(  arg1, "XRemoveFromSaveSet - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

