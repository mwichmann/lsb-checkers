// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <rpc/svc.h>
#undef svc_getreqset
static void(*funcptr) (fd_set * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void svc_getreqset (fd_set * arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "svc_getreqset");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "svc_getreqset()");
	validate_Rdaddress( arg0, "svc_getreqset - arg0");
		validate_NULL_TYPETYPE(  arg0, "svc_getreqset - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

