// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dirent.h>
#undef telldir
static long int(*funcptr) (DIR * ) = 0;

extern int __lsb_check_params;
long int telldir (DIR * arg0 )
{
	int reset_flag = __lsb_check_params;
	long int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "telldir", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "telldir()");
		validate_RWaddress( arg0, "telldir - arg0");
		validate_NULL_TYPETYPE(  arg0, "telldir - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

