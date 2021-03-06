// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlIO.h>
#undef xmlCleanupOutputCallbacks
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void xmlCleanupOutputCallbacks ()
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlCleanupOutputCallbacks()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlCleanupOutputCallbacks", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlCleanupOutputCallbacks. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlCleanupOutputCallbacks() - validating");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

