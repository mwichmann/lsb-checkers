// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/ICE/ICElib.h>
#undef IceFreeListenObjs
static void(*funcptr) (int , IceListenObj * ) = 0;

extern int __lsb_check_params;
void IceFreeListenObjs (int arg0 , IceListenObj * arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " IceFreeListenObjs ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "IceFreeListenObjs()");
		validate_NULL_TYPETYPE(  arg0, "IceFreeListenObjs - arg0");
		validate_RWaddress( arg1, "IceFreeListenObjs - arg1");
		validate_NULL_TYPETYPE(  arg1, "IceFreeListenObjs - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

