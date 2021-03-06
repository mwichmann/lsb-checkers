// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/freetype.h>
#include <fontconfig/fontconfig.h>
#include <fontconfig/fcfreetype.h>
#undef FcFreeTypeCharSet
static FcCharSet *(*funcptr) (FT_Face , FcBlanks * ) = 0;

extern int __lsb_check_params;
FcCharSet * FcFreeTypeCharSet (FT_Face arg0 , FcBlanks * arg1 )
{
	int reset_flag = __lsb_check_params;
	FcCharSet * ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcFreeTypeCharSet()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcFreeTypeCharSet");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcFreeTypeCharSet. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcFreeTypeCharSet() - validating");
		validate_NULL_TYPETYPE(  arg0, "FcFreeTypeCharSet - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "FcFreeTypeCharSet - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "FcFreeTypeCharSet - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

