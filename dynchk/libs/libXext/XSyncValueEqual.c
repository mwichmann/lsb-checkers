// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/extensions/sync.h>
#undef XSyncValueEqual
static int(*funcptr) (XSyncValue , XSyncValue ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XSyncValueEqual (XSyncValue arg0 , XSyncValue arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSyncValueEqual");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XSyncValueEqual()");
		validate_NULL_TYPETYPE(  arg0, "XSyncValueEqual - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSyncValueEqual - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

