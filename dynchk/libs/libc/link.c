// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <unistd.h>
#undef link
static int(*funcptr) (const char * , const char * ) = 0;

extern int __lsb_check_params;
int link (const char * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "link", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "link()");
		validate_Rdaddress( arg0, "link - arg0");
		validate_NULL_TYPETYPE(  arg0, "link - arg0");
		validate_Rdaddress( arg1, "link - arg1");
		validate_NULL_TYPETYPE(  arg1, "link - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

