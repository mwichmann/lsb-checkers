// Maintained by hand (Matt Elder, Stuart Anderson)

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#undef realloc
static void *(*funcptr)(void *, size_t) = 0;

void * __libc_realloc(void *, size_t);
extern int __lsb_check_params;

void * realloc(void * arg0, size_t arg1)
{
	int reset_flag = __lsb_check_params;
	void * ret_value;

	if(!funcptr)
		funcptr = __libc_realloc;
	if(__lsb_check_params)
	{
		__lsb_check_params=0;	
		validate_NULL_TYPETYPE(arg0, "realloc");
		validate_NULL_TYPETYPE(arg1, "realloc");
	}
	
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


