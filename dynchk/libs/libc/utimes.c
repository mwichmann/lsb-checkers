// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <sys/time.h>
#undef utimes
static int(*funcptr) (const char * , const struct timeval * ) = 0;

extern int __lsb_check_params;
int utimes (const char * arg0 , const struct timeval * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "utimes", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "utimes()");
		validate_Rdaddress( arg0, "utimes - arg0");
		validate_NULL_TYPETYPE(  arg0, "utimes - arg0");
		validate_Rdaddress( arg1, "utimes - arg1");
		validate_NULL_TYPETYPE(  arg1, "utimes - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

