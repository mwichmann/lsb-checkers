// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <sys/time.h>
#include <time.h>
#undef nanosleep
static int(*funcptr) (const struct timespec * , struct timespec * ) = 0;

extern int __lsb_check_params;
int nanosleep (const struct timespec * arg0 , struct timespec * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "nanosleep", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "nanosleep()");
		validate_Rdaddress( arg0, "nanosleep - arg0");
		validate_NULL_TYPETYPE(  arg0, "nanosleep - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "nanosleep - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "nanosleep - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

