// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <sys/stat.h>
#undef __lxstat64
static int(*funcptr) (int , const char * , struct stat64 * ) = 0;

extern int __lsb_check_params;
int __lxstat64 (int arg0 , const char * arg1 , struct stat64 * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "__lxstat64", "GLIBC_2.2");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "__lxstat64()");
		validate_NULL_TYPETYPE(  arg0, "__lxstat64 - arg0");
		validate_Rdaddress( arg1, "__lxstat64 - arg1");
		validate_NULL_TYPETYPE(  arg1, "__lxstat64 - arg1");
		validate_RWaddress( arg2, "__lxstat64 - arg2");
		validate_NULL_TYPETYPE(  arg2, "__lxstat64 - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

