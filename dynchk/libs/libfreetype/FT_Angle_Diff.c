// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/fttrigon.h>
#undef FT_Angle_Diff
static FT_Angle(*funcptr) (FT_Angle , FT_Angle ) = 0;

extern int __lsb_check_params;
FT_Angle FT_Angle_Diff (FT_Angle arg0 , FT_Angle arg1 )
{
	int reset_flag = __lsb_check_params;
	FT_Angle ret_value  ;
	__lsb_output(4, "Invoking wrapper for FT_Angle_Diff()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Angle_Diff");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Angle_Diff. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Angle_Diff() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_Angle_Diff - arg0");
		validate_NULL_TYPETYPE(  arg1, "FT_Angle_Diff - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

