// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <string.h>
#undef strcspn
static size_t(*funcptr) (const char * , const char * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
size_t strcspn (const char * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strcspn");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "strcspn()");
	validate_Rdaddress( arg0, "strcspn - arg0");
		validate_NULL_TYPETYPE(  arg0, "strcspn - arg0");
	validate_Rdaddress( arg1, "strcspn - arg1");
		validate_NULL_TYPETYPE(  arg1, "strcspn - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

