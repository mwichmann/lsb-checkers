// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <zlib.h>
#undef gzseek
static z_off_t(*funcptr) (gzFile , z_off_t , int ) = 0;

extern int __lsb_check_params;
z_off_t gzseek (gzFile arg0 , z_off_t arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	z_off_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gzseek");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gzseek()");
		validate_NULL_TYPETYPE(  arg0, "gzseek - arg0");
		validate_NULL_TYPETYPE(  arg1, "gzseek - arg1");
		validate_NULL_TYPETYPE(  arg2, "gzseek - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

