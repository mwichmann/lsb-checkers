// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <rpc/svc.h>
#undef svctcp_create
static SVCXPRT *(*funcptr) (int , u_int , u_int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
SVCXPRT * svctcp_create (int arg0 , u_int arg1 , u_int arg2 )
{
	int reset_flag = __lsb_check_params;
	SVCXPRT * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "svctcp_create");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "svctcp_create()");
		validate_NULL_TYPETYPE(  arg0, "svctcp_create - arg0");
		validate_NULL_TYPETYPE(  arg1, "svctcp_create - arg1");
		validate_NULL_TYPETYPE(  arg2, "svctcp_create - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

