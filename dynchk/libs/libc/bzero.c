// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stddef.h>
#include <string.h>
#undef bzero
static void(*funcptr) (void * , size_t ) = 0;

extern int __lsb_check_params;
void bzero (void * arg0 , size_t arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "bzero");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "bzero()");
		validate_RWaddress( arg0, "bzero - arg0");
		validate_NULL_TYPETYPE(  arg0, "bzero - arg0");
		validate_NULL_TYPETYPE(  arg1, "bzero - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

