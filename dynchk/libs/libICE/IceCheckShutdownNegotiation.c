// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/ICE/ICElib.h>
#undef IceCheckShutdownNegotiation
static int(*funcptr) (IceConn ) = 0;

extern int __lsb_check_params;
int IceCheckShutdownNegotiation (IceConn arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "IceCheckShutdownNegotiation");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "IceCheckShutdownNegotiation()");
		validate_NULL_TYPETYPE(  arg0, "IceCheckShutdownNegotiation - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

