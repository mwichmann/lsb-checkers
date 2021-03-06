// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#include <freetype/freetype.h>
#include <fontconfig/fcfreetype.h>
#undef FcPatternGetFTFace
static FcResult(*funcptr) (const FcPattern * , const char * , int , FT_Face * ) = 0;

extern int __lsb_check_params;
FcResult FcPatternGetFTFace (const FcPattern * arg0 , const char * arg1 , int arg2 , FT_Face * arg3 )
{
	int reset_flag = __lsb_check_params;
	FcResult ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcPatternGetFTFace()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcPatternGetFTFace");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcPatternGetFTFace. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcPatternGetFTFace() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "FcPatternGetFTFace - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "FcPatternGetFTFace - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "FcPatternGetFTFace - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "FcPatternGetFTFace - arg1");
		validate_NULL_TYPETYPE(  arg2, "FcPatternGetFTFace - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "FcPatternGetFTFace - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "FcPatternGetFTFace - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

