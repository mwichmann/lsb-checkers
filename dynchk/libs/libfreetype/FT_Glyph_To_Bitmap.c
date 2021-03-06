// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/ftglyph.h>
#include <freetype/freetype.h>
#include <freetype/ftimage.h>
#include <freetype/fttypes.h>
#undef FT_Glyph_To_Bitmap
static FT_Error(*funcptr) (FT_Glyph * , FT_Render_Mode , FT_Vector * , FT_Bool ) = 0;

extern int __lsb_check_params;
FT_Error FT_Glyph_To_Bitmap (FT_Glyph * arg0 , FT_Render_Mode arg1 , FT_Vector * arg2 , FT_Bool arg3 )
{
	int reset_flag = __lsb_check_params;
	FT_Error ret_value  ;
	__lsb_output(4, "Invoking wrapper for FT_Glyph_To_Bitmap()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Glyph_To_Bitmap");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Glyph_To_Bitmap. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Glyph_To_Bitmap() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FT_Glyph_To_Bitmap - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "FT_Glyph_To_Bitmap - arg0");
		validate_NULL_TYPETYPE(  arg1, "FT_Glyph_To_Bitmap - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "FT_Glyph_To_Bitmap - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "FT_Glyph_To_Bitmap - arg2");
		validate_NULL_TYPETYPE(  arg3, "FT_Glyph_To_Bitmap - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

