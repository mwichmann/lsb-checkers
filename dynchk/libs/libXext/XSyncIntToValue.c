// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/extensions/sync.h>
#undef XSyncIntToValue
static void(*funcptr) (XSyncValue * , int ) = 0;

extern int __lsb_check_params;
void XSyncIntToValue (XSyncValue * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XSyncIntToValue ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XSyncIntToValue()");
		validate_RWaddress( arg0, "XSyncIntToValue - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSyncIntToValue - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSyncIntToValue - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

