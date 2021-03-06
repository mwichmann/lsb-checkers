// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/freetype.h>
#undef FT_Render_Glyph
static FT_Error(*funcptr) (FT_GlyphSlot , FT_Render_Mode ) = 0;

extern int __lsb_check_params;
FT_Error FT_Render_Glyph (FT_GlyphSlot arg0 , FT_Render_Mode arg1 )
{
	int reset_flag = __lsb_check_params;
	FT_Error ret_value  ;
	__lsb_output(4, "Invoking wrapper for FT_Render_Glyph()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Render_Glyph");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Render_Glyph. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Render_Glyph() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_Render_Glyph - arg0");
		validate_NULL_TYPETYPE(  arg1, "FT_Render_Glyph - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

