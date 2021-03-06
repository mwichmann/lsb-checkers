// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/freetype.h>
#undef FT_Select_Charmap
static FT_Error(*funcptr) (FT_Face , FT_Encoding ) = 0;

extern int __lsb_check_params;
FT_Error FT_Select_Charmap (FT_Face arg0 , FT_Encoding arg1 )
{
	int reset_flag = __lsb_check_params;
	FT_Error ret_value  ;
	__lsb_output(4, "Invoking wrapper for FT_Select_Charmap()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Select_Charmap");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Select_Charmap. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Select_Charmap() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_Select_Charmap - arg0");
		validate_NULL_TYPETYPE(  arg1, "FT_Select_Charmap - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

