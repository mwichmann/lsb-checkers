// Maintained by hand (Matt Elder, Stuart Anderson)

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stddef.h>
#include <sys/mman.h>
#undef munmap
static int(*funcptr) (void * , size_t ) = 0;

extern int __lsb_check_params;
int munmap (void * arg0 , size_t arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "munmap", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
        	__lsb_output(5-reset_flag, "munmap()");
		validate_Rdaddress( arg0, "munmap - arg0");
		validate_NULL_TYPETYPE(  arg0, "munmap - arg0");
		validate_NULL_TYPETYPE(  arg1, "munmap - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	load_memmap();
	__lsb_check_params = reset_flag;
	return ret_value;
}
