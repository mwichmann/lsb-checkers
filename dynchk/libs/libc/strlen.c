// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <string.h>
#undef strlen
static size_t(*funcptr) (const char * ) = 0;

extern int __lsb_check_params;
size_t strlen (const char * arg0 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "strlen", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "strlen()");
		validate_RWaddress( arg0, "strlen - arg0");
		validate_NULL_TYPETYPE(  arg0, "strlen - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

