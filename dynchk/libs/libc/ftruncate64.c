// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <unistd.h>
#undef ftruncate64
static int(*funcptr) (int , off64_t ) = 0;

extern int __lsb_check_params;
int ftruncate64 (int arg0 , off64_t arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "ftruncate64", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ftruncate64()");
		validate_NULL_TYPETYPE(  arg0, "ftruncate64 - arg0");
		validate_NULL_TYPETYPE(  arg1, "ftruncate64 - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

