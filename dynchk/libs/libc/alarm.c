// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <unistd.h>
#undef alarm
static unsigned int(*funcptr) (unsigned int ) = 0;

extern int __lsb_check_params;
unsigned int alarm (unsigned int arg0 )
{
	int reset_flag = __lsb_check_params;
	unsigned int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "alarm", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "alarm()");
		validate_NULL_TYPETYPE(  arg0, "alarm - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

