// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <zlib.h>
#undef gzclose
static int(*funcptr) (gzFile ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int gzclose (gzFile arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gzclose");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "gzclose()");
		validate_NULL_TYPETYPE(  arg0, "gzclose - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

