// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <pwd.h>
#include <stddef.h>
#undef getpwuid_r
static int(*funcptr) (uid_t , struct passwd * , char * , size_t , struct passwd * * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int getpwuid_r (uid_t arg0 , struct passwd * arg1 , char * arg2 , size_t arg3 , struct passwd * * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getpwuid_r");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "getpwuid_r()");
		validate_NULL_TYPETYPE(  arg0, "getpwuid_r - arg0");
	validate_RWaddress( arg1, "getpwuid_r - arg1");
		validate_NULL_TYPETYPE(  arg1, "getpwuid_r - arg1");
	validate_RWaddress( arg2, "getpwuid_r - arg2");
		validate_NULL_TYPETYPE(  arg2, "getpwuid_r - arg2");
		validate_NULL_TYPETYPE(  arg3, "getpwuid_r - arg3");
	validate_RWaddress( arg4, "getpwuid_r - arg4");
		validate_NULL_TYPETYPE(  arg4, "getpwuid_r - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

