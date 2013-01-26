// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/ftstroke.h>
#include <freetype/fttypes.h>
#undef FT_Stroker_Set
static void(*funcptr) (FT_Stroker , FT_Fixed , FT_Stroker_LineCap , FT_Stroker_LineJoin , FT_Fixed ) = 0;

extern int __lsb_check_params;
void FT_Stroker_Set (FT_Stroker arg0 , FT_Fixed arg1 , FT_Stroker_LineCap arg2 , FT_Stroker_LineJoin arg3 , FT_Fixed arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for FT_Stroker_Set()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Stroker_Set");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Stroker_Set. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Stroker_Set() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_Stroker_Set - arg0");
		validate_NULL_TYPETYPE(  arg1, "FT_Stroker_Set - arg1");
		validate_NULL_TYPETYPE(  arg2, "FT_Stroker_Set - arg2");
		validate_NULL_TYPETYPE(  arg3, "FT_Stroker_Set - arg3");
		validate_NULL_TYPETYPE(  arg4, "FT_Stroker_Set - arg4");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}
