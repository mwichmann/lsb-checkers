// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/freetype.h>
#include <freetype/t1tables.h>
#undef FT_Has_PS_Glyph_Names
static FT_Int(*funcptr) (FT_Face ) = 0;

extern int __lsb_check_params;
FT_Int FT_Has_PS_Glyph_Names (FT_Face arg0 )
{
	int reset_flag = __lsb_check_params;
	FT_Int ret_value  ;
	__lsb_output(4, "Invoking wrapper for FT_Has_PS_Glyph_Names()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Has_PS_Glyph_Names");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Has_PS_Glyph_Names. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Has_PS_Glyph_Names() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_Has_PS_Glyph_Names - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

