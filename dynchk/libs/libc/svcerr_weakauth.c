// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/svc.h>
#undef svcerr_weakauth
static void(*funcptr) (SVCXPRT * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void svcerr_weakauth (SVCXPRT * arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "svcerr_weakauth");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "svcerr_weakauth()");
	validate_Rdaddress( arg0, "svcerr_weakauth - arg0");
		validate_NULL_TYPETYPE(  arg0, "svcerr_weakauth - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

