// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/ICE/ICElib.h>
#undef IcePing
static int(*funcptr) (IceConn , IcePingReplyProc , IcePointer ) = 0;

extern int __lsb_check_params;
int IcePing (IceConn arg0 , IcePingReplyProc arg1 , IcePointer arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for IcePing()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IcePing");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load IcePing. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "IcePing() - validating");
		validate_NULL_TYPETYPE(  arg0, "IcePing - arg0");
		validate_NULL_TYPETYPE(  arg1, "IcePing - arg1");
		validate_NULL_TYPETYPE(  arg2, "IcePing - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

