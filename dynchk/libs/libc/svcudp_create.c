// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <rpc/svc.h>
#undef svcudp_create
static SVCXPRT *(*funcptr) (int ) = 0;

extern int __lsb_check_params;
SVCXPRT * svcudp_create (int arg0 )
{
	int reset_flag = __lsb_check_params;
	SVCXPRT * ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "svcudp_create", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "svcudp_create()");
		validate_NULL_TYPETYPE(  arg0, "svcudp_create - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

