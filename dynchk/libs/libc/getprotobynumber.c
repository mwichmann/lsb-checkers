// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <netdb.h>
#undef getprotobynumber
static struct protoent *(*funcptr) (int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
struct protoent * getprotobynumber (int arg0 )
{
	int reset_flag = __lsb_check_params;
	struct protoent * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getprotobynumber");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "getprotobynumber()");
		validate_NULL_TYPETYPE(  arg0, "getprotobynumber - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

