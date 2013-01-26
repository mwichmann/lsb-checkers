// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcPatternReference
static void(*funcptr) (FcPattern * ) = 0;

extern int __lsb_check_params;
void FcPatternReference (FcPattern * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for FcPatternReference()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcPatternReference");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcPatternReference. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcPatternReference() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FcPatternReference - arg0 (p)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcPatternReference - arg0 (p)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}
