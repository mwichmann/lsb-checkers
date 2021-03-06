// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <zlib.h>
#undef gzread
static int(*funcptr) (gzFile , voidp , unsigned int ) = 0;

extern int __lsb_check_params;
int gzread (gzFile arg0 , voidp arg1 , unsigned int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for gzread()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gzread");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gzread. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gzread() - validating");
		validate_NULL_TYPETYPE(  arg0, "gzread - arg0 (file)");
		validate_NULL_TYPETYPE(  arg1, "gzread - arg1 (buf)");
		validate_NULL_TYPETYPE(  arg2, "gzread - arg2 (len)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

