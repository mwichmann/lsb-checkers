// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <rpc/svc.h>
#undef svc_run
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void svc_run ()
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "svc_run", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "svc_run()");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

