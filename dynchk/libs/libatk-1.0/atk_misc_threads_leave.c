// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#undef atk_misc_threads_leave
static void(*funcptr) (AtkMisc * ) = 0;

extern int __lsb_check_params;
void atk_misc_threads_leave (AtkMisc * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for atk_misc_threads_leave()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_misc_threads_leave");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_misc_threads_leave. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_misc_threads_leave() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "atk_misc_threads_leave - arg0 (misc)");
		}
		validate_NULL_TYPETYPE(  arg0, "atk_misc_threads_leave - arg0 (misc)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

