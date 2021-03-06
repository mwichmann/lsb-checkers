// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/ICE/ICElib.h>
#undef IceProtocolShutdown
static int(*funcptr) (IceConn , int ) = 0;

extern int __lsb_check_params;
int IceProtocolShutdown (IceConn arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for IceProtocolShutdown()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceProtocolShutdown");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load IceProtocolShutdown. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "IceProtocolShutdown() - validating");
		validate_NULL_TYPETYPE(  arg0, "IceProtocolShutdown - arg0");
		validate_NULL_TYPETYPE(  arg1, "IceProtocolShutdown - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

