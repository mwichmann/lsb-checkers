// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <stddef.h>
#include <sys/msg.h>
#undef msgrcv
static int(*funcptr) (int , void * , size_t , long , int ) = 0;

extern int __lsb_check_params;
int msgrcv (int arg0 , void * arg1 , size_t arg2 , long arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "msgrcv", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "msgrcv()");
		validate_NULL_TYPETYPE(  arg0, "msgrcv - arg0");
		validate_RWaddress( arg1, "msgrcv - arg1");
		validate_NULL_TYPETYPE(  arg1, "msgrcv - arg1");
		validate_NULL_TYPETYPE(  arg2, "msgrcv - arg2");
		validate_NULL_TYPETYPE(  arg3, "msgrcv - arg3");
		validate_NULL_TYPETYPE(  arg4, "msgrcv - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

