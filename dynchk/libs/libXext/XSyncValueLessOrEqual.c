// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/extensions/sync.h>
#undef XSyncValueLessOrEqual
static int(*funcptr) (XSyncValue , XSyncValue ) = 0;

extern int __lsb_check_params;
int XSyncValueLessOrEqual (XSyncValue arg0 , XSyncValue arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XSyncValueLessOrEqual ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XSyncValueLessOrEqual()");
		validate_NULL_TYPETYPE(  arg0, "XSyncValueLessOrEqual - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSyncValueLessOrEqual - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

