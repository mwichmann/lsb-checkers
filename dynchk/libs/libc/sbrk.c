// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <unistd.h>
#undef sbrk
static void *(*funcptr) (ptrdiff_t ) = 0;

extern int __lsb_check_params;
void * sbrk (ptrdiff_t arg0 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sbrk");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "sbrk - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

