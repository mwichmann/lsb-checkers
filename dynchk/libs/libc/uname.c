// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/utsname.h>
#undef uname
static int(*funcptr) (struct utsname * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int uname (struct utsname * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "uname");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "uname()");
	validate_Rdaddress( arg0, "uname - arg0");
		validate_NULL_TYPETYPE(  arg0, "uname - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

