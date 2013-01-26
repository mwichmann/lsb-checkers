// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/ftglyph.h>
#include <freetype/fttypes.h>
#include <freetype/ftimage.h>
#undef FT_Glyph_Transform
static FT_Error(*funcptr) (FT_Glyph , FT_Matrix * , FT_Vector * ) = 0;

extern int __lsb_check_params;
FT_Error FT_Glyph_Transform (FT_Glyph arg0 , FT_Matrix * arg1 , FT_Vector * arg2 )
{
	int reset_flag = __lsb_check_params;
	FT_Error ret_value  ;
	__lsb_output(4, "Invoking wrapper for FT_Glyph_Transform()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Glyph_Transform");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Glyph_Transform. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Glyph_Transform() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_Glyph_Transform - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "FT_Glyph_Transform - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "FT_Glyph_Transform - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "FT_Glyph_Transform - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "FT_Glyph_Transform - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
