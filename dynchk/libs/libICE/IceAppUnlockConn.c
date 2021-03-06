// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/ICE/ICElib.h>
#undef IceAppUnlockConn
static void(*funcptr) (IceConn ) = 0;

extern int __lsb_check_params;
void IceAppUnlockConn (IceConn arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for IceAppUnlockConn()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceAppUnlockConn");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load IceAppUnlockConn. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "IceAppUnlockConn() - validating");
		validate_NULL_TYPETYPE(  arg0, "IceAppUnlockConn - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

