// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <zlib.h>
#undef gzerror
static const char *(*funcptr) (gzFile , int * ) = 0;

extern int __lsb_check_params;
const char * gzerror (gzFile arg0 , int * arg1 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gzerror");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gzerror()");
		validate_NULL_TYPETYPE(  arg0, "gzerror - arg0");
		validate_RWaddress( arg1, "gzerror - arg1");
		validate_NULL_TYPETYPE(  arg1, "gzerror - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

