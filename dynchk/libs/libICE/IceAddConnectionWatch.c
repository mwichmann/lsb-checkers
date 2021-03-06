// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/ICE/ICElib.h>
#undef IceAddConnectionWatch
static int(*funcptr) (IceWatchProc , IcePointer ) = 0;

extern int __lsb_check_params;
int IceAddConnectionWatch (IceWatchProc arg0 , IcePointer arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for IceAddConnectionWatch()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceAddConnectionWatch");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load IceAddConnectionWatch. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "IceAddConnectionWatch() - validating");
		validate_NULL_TYPETYPE(  arg0, "IceAddConnectionWatch - arg0");
		validate_NULL_TYPETYPE(  arg1, "IceAddConnectionWatch - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

