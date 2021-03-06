// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/SM/SMlib.h>
#undef SmFreeProperty
static void(*funcptr) (SmProp * ) = 0;

extern int __lsb_check_params;
void SmFreeProperty (SmProp * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for SmFreeProperty()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmFreeProperty");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load SmFreeProperty. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "SmFreeProperty() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "SmFreeProperty - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "SmFreeProperty - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

