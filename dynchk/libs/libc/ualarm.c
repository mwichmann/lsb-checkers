// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <unistd.h>
#undef ualarm
static unsigned int(*funcptr) (useconds_t , useconds_t ) = 0;

extern int __lsb_check_params;
unsigned int ualarm (useconds_t arg0 , useconds_t arg1 )
{
	int reset_flag = __lsb_check_params;
	unsigned int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ualarm");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "ualarm()");
		validate_NULL_TYPETYPE(  arg0, "ualarm - arg0");
		validate_NULL_TYPETYPE(  arg1, "ualarm - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

