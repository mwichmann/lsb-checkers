// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <setjmp.h>
#undef __sigsetjmp
static int(*funcptr) (jmp_buf , int ) = 0;

extern int __lsb_check_params;
int __sigsetjmp (jmp_buf arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "__sigsetjmp", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "__sigsetjmp()");
		validate_NULL_TYPETYPE(  arg0, "__sigsetjmp - arg0");
		validate_NULL_TYPETYPE(  arg1, "__sigsetjmp - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

