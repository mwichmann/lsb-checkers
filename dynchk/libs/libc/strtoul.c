// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <stdlib.h>
#undef strtoul
static unsigned long(*funcptr) (const char * , char * * , int ) = 0;

extern int __lsb_check_params;
unsigned long strtoul (const char * arg0 , char * * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	unsigned long ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "strtoul", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "strtoul()");
		validate_Rdaddress( arg0, "strtoul - arg0");
		validate_NULL_TYPETYPE(  arg0, "strtoul - arg0");
		validate_RWaddress( arg1, "strtoul - arg1");
		validate_NULL_TYPETYPE(  arg1, "strtoul - arg1");
		validate_NULL_TYPETYPE(  arg2, "strtoul - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

