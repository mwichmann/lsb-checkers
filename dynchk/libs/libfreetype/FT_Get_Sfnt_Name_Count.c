// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/freetype.h>
#include <freetype/ftsnames.h>
#undef FT_Get_Sfnt_Name_Count
static FT_UInt(*funcptr) (FT_Face ) = 0;

extern int __lsb_check_params;
FT_UInt FT_Get_Sfnt_Name_Count (FT_Face arg0 )
{
	int reset_flag = __lsb_check_params;
	FT_UInt ret_value  ;
	__lsb_output(4, "Invoking wrapper for FT_Get_Sfnt_Name_Count()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Get_Sfnt_Name_Count");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Get_Sfnt_Name_Count. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Get_Sfnt_Name_Count() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_Get_Sfnt_Name_Count - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

