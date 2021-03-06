// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/freetype.h>
#include <freetype/ftimage.h>
#include <freetype/ftrender.h>
#undef FT_Get_Renderer
static FT_Renderer(*funcptr) (FT_Library , FT_Glyph_Format ) = 0;

extern int __lsb_check_params;
FT_Renderer FT_Get_Renderer (FT_Library arg0 , FT_Glyph_Format arg1 )
{
	int reset_flag = __lsb_check_params;
	FT_Renderer ret_value  ;
	__lsb_output(4, "Invoking wrapper for FT_Get_Renderer()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Get_Renderer");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Get_Renderer. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Get_Renderer() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_Get_Renderer - arg0");
		validate_NULL_TYPETYPE(  arg1, "FT_Get_Renderer - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

