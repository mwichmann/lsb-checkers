// Maintained by hand (Matt Elder)

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef ulimit
static long(*funcptr) (int , long ) = 0;

extern int __lsb_check_params;
long ulimit (int arg0 , long arg1 )
{
	int reset_flag = __lsb_check_params;
	long ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ulimit");
	if(__lsb_check_params)
	{
	validate_NULL_TYPETYPE(arg0, "ulimit");
	validate_NULL_TYPETYPE(arg1, "ulimit");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}



