// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <netdb.h>
#undef gai_strerror
static const char *(*funcptr) (int ) = 0;

extern int __lsb_check_params;
const char * gai_strerror (int arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gai_strerror");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gai_strerror()");
		validate_NULL_TYPETYPE(  arg0, "gai_strerror - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

