// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <sys/statvfs.h>
#undef fstatvfs64
static int(*funcptr) (int , struct statvfs64 * ) = 0;

extern int __lsb_check_params;
int fstatvfs64 (int arg0 , struct statvfs64 * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "fstatvfs64", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "fstatvfs64()");
		validate_NULL_TYPETYPE(  arg0, "fstatvfs64 - arg0");
		validate_RWaddress( arg1, "fstatvfs64 - arg1");
		validate_NULL_TYPETYPE(  arg1, "fstatvfs64 - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

