// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <net/if.h>
#undef if_indextoname
static char *(*funcptr) () = 0;

extern int __lsb_check_params;
char * if_indextoname ()
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "if_indextoname");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "if_indextoname()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

