// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <string.h>
#undef memmem
static void *(*funcptr) (const void * , size_t , const void * , size_t ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void * memmem (const void * arg0 , size_t arg1 , const void * arg2 , size_t arg3 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "memmem");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "memmem()");
	validate_Rdaddress( arg0, "memmem - arg0");
		validate_NULL_TYPETYPE(  arg0, "memmem - arg0");
		validate_NULL_TYPETYPE(  arg1, "memmem - arg1");
	validate_Rdaddress( arg2, "memmem - arg2");
		validate_NULL_TYPETYPE(  arg2, "memmem - arg2");
		validate_NULL_TYPETYPE(  arg3, "memmem - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

