// Maintained by hand (Matt Elder)

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#undef wprintf
static int(*funcptr) (const wchar_t * , const wchar_t * ) = 0;

int wprintf (const wchar_t * arg0 , const wchar_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wprintf");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(arg0, "wprintf");
		validate_NULL_TYPETYPE(arg1, "wprintf");
	}

	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
