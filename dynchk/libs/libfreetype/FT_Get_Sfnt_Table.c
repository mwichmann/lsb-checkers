// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/freetype.h>
#include <freetype/tttables.h>
#undef FT_Get_Sfnt_Table
static void *(*funcptr) (FT_Face , FT_Sfnt_Tag ) = 0;

extern int __lsb_check_params;
void * FT_Get_Sfnt_Table (FT_Face arg0 , FT_Sfnt_Tag arg1 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	__lsb_output(4, "Invoking wrapper for FT_Get_Sfnt_Table()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Get_Sfnt_Table");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Get_Sfnt_Table. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Get_Sfnt_Table() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_Get_Sfnt_Table - arg0");
		validate_NULL_TYPETYPE(  arg1, "FT_Get_Sfnt_Table - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

