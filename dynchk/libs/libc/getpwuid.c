// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <sys/types.h>
#include <pwd.h>
#undef getpwuid
static struct passwd *(*funcptr) (uid_t ) = 0;

extern int __lsb_check_params;
struct passwd * getpwuid (uid_t arg0 )
{
	int reset_flag = __lsb_check_params;
	struct passwd * ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "getpwuid", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "getpwuid()");
		validate_NULL_TYPETYPE(  arg0, "getpwuid - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

