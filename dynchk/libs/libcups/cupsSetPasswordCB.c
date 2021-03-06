// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/cups.h>
#undef cupsSetPasswordCB
static void(*funcptr) (const char *(* )(const char *)) = 0;

extern int __lsb_check_params;
void cupsSetPasswordCB (const char *(* arg0 )(const char *))
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cupsSetPasswordCB()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cupsSetPasswordCB");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cupsSetPasswordCB. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cupsSetPasswordCB() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "cupsSetPasswordCB - arg0 (cb)");
		}
		validate_NULL_TYPETYPE(  arg0, "cupsSetPasswordCB - arg0 (cb)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

