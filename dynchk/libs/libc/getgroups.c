// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <unistd.h>
#undef getgroups
static int(*funcptr) (int , gid_t []) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int getgroups (int arg0 , gid_t arg1 [])
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getgroups");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "getgroups()");
		validate_NULL_TYPETYPE(  arg0, "getgroups - arg0");
		validate_NULL_TYPETYPE(  arg1, "getgroups - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

