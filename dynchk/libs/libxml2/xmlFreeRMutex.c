// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/threads.h>
#undef xmlFreeRMutex
static void(*funcptr) (xmlRMutexPtr ) = 0;

extern int __lsb_check_params;
void xmlFreeRMutex (xmlRMutexPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlFreeRMutex()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlFreeRMutex", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlFreeRMutex. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlFreeRMutex() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlFreeRMutex - arg0 (tok)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}
