// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <zlib.h>
#undef zError
static const char *(*funcptr) (int ) = 0;

extern int __lsb_check_params;
const char * zError (int arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "zError");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "zError()");
		validate_NULL_TYPETYPE(  arg0, "zError - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

