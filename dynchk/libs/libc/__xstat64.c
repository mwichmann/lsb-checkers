// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <sys/stat.h>
#undef __xstat64
static int(*funcptr) (int , const char * , struct stat64 * ) = 0;

extern int __lsb_check_params;
int __xstat64 (int arg0 , const char * arg1 , struct stat64 * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "__xstat64", "GLIBC_2.2");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "__xstat64()");
		validate_NULL_TYPETYPE(  arg0, "__xstat64 - arg0");
		validate_Rdaddress( arg1, "__xstat64 - arg1");
		validate_pathname(  arg1, "__xstat64 - arg1");
		validate_RWaddress( arg2, "__xstat64 - arg2");
		validate_NULL_TYPETYPE(  arg2, "__xstat64 - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

