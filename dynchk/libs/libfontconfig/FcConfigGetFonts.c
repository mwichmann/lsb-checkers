// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcConfigGetFonts
static FcFontSet *(*funcptr) (FcConfig * , FcSetName ) = 0;

extern int __lsb_check_params;
FcFontSet * FcConfigGetFonts (FcConfig * arg0 , FcSetName arg1 )
{
	int reset_flag = __lsb_check_params;
	FcFontSet * ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcConfigGetFonts()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcConfigGetFonts");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcConfigGetFonts. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcConfigGetFonts() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FcConfigGetFonts - arg0 (config)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcConfigGetFonts - arg0 (config)");
		validate_NULL_TYPETYPE(  arg1, "FcConfigGetFonts - arg1 (set)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

