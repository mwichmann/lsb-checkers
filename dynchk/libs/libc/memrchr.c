// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <string.h>
#undef memrchr
static void *(*funcptr) (const void * , int , size_t ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void * memrchr (const void * arg0 , int arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "memrchr");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "memrchr()");
	validate_Rdaddress( arg0, "memrchr - arg0");
		validate_NULL_TYPETYPE(  arg0, "memrchr - arg0");
		validate_NULL_TYPETYPE(  arg1, "memrchr - arg1");
		validate_NULL_TYPETYPE(  arg2, "memrchr - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

