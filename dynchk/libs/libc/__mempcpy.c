// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <stddef.h>
#include <string.h>
#undef __mempcpy
static void *(*funcptr) (void * , const void * , size_t ) = 0;

extern int __lsb_check_params;
void * __mempcpy (void * arg0 , const void * arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "__mempcpy", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "__mempcpy()");
		validate_RWaddress( arg0, "__mempcpy - arg0");
		validate_RWaddress(  arg0, "__mempcpy - arg0");
		validate_Rdaddress( arg1, "__mempcpy - arg1");
		validate_NULL_TYPETYPE(  arg1, "__mempcpy - arg1");
		validate_NULL_TYPETYPE(  arg2, "__mempcpy - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

