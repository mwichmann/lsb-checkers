// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <termios.h>
#undef tcsetattr
static int(*funcptr) (int , int , const struct termios * ) = 0;

extern int __lsb_check_params;
int tcsetattr (int arg0 , int arg1 , const struct termios * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "tcsetattr", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "tcsetattr()");
		validate_NULL_TYPETYPE(  arg0, "tcsetattr - arg0");
		validate_NULL_TYPETYPE(  arg1, "tcsetattr - arg1");
		validate_Rdaddress( arg2, "tcsetattr - arg2");
		validate_NULL_TYPETYPE(  arg2, "tcsetattr - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

