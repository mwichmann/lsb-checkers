#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <stddef.h>
static void *(*funcptr)(size_t, size_t) = 0;

extern void *__libc_calloc(size_t,size_t);
extern int __lsb_check_params;
void * calloc(size_t arg0, size_t arg1)
{
	int reset_flag = __lsb_check_params;
	void * ret_value;
	if(!funcptr)
		funcptr = __libc_calloc;
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(arg0, "calloc");
		validate_NULL_TYPETYPE(arg1, "calloc");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

