// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/IntrinsicP.h>
#undef XtProcessLock
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void XtProcessLock ()
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtProcessLock()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtProcessLock");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtProcessLock. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtProcessLock() - validating");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

