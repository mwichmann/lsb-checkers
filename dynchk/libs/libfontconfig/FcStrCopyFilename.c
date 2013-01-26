// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcStrCopyFilename
static FcChar8 *(*funcptr) (const FcChar8 * ) = 0;

extern int __lsb_check_params;
FcChar8 * FcStrCopyFilename (const FcChar8 * arg0 )
{
	int reset_flag = __lsb_check_params;
	FcChar8 * ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcStrCopyFilename()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcStrCopyFilename");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcStrCopyFilename. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcStrCopyFilename() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "FcStrCopyFilename - arg0 (s)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcStrCopyFilename - arg0 (s)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
