// Maintained by hand (Matt Elder, Stuart Anderson)

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stddef.h>
static void *(*funcptr)(size_t) = 0;

extern void *__libc_malloc(size_t);
extern int __lsb_check_params;

void * malloc(size_t arg0)
{
	int reset_flag = __lsb_check_params;
	void * ret_value;
	if(!funcptr)
		funcptr = __libc_malloc;
	if(__lsb_check_params)
	{
		__lsb_check_params = 0;
        	__lsb_output(5-reset_flag, "malloc()");
		validate_NULL_TYPETYPE(arg0, "malloc");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


