// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcObjectSetDestroy
static void(*funcptr) (FcObjectSet * ) = 0;

extern int __lsb_check_params;
void FcObjectSetDestroy (FcObjectSet * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for FcObjectSetDestroy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcObjectSetDestroy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcObjectSetDestroy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcObjectSetDestroy() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FcObjectSetDestroy - arg0 (os)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcObjectSetDestroy - arg0 (os)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

