// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <netdb.h>
#undef getservent
static struct servent *(*funcptr) () = 0;

extern int __lsb_check_params;
struct servent * getservent ()
{
	int reset_flag = __lsb_check_params;
	struct servent * ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "getservent", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "getservent()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

