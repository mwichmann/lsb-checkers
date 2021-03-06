// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/freetype.h>
#include <freetype/fttypes.h>
#include <freetype/ftrender.h>
#undef FT_Set_Renderer
static FT_Error(*funcptr) (FT_Library , FT_Renderer , FT_UInt , FT_Parameter * ) = 0;

extern int __lsb_check_params;
FT_Error FT_Set_Renderer (FT_Library arg0 , FT_Renderer arg1 , FT_UInt arg2 , FT_Parameter * arg3 )
{
	int reset_flag = __lsb_check_params;
	FT_Error ret_value  ;
	__lsb_output(4, "Invoking wrapper for FT_Set_Renderer()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Set_Renderer");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Set_Renderer. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Set_Renderer() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_Set_Renderer - arg0");
		validate_NULL_TYPETYPE(  arg1, "FT_Set_Renderer - arg1");
		validate_NULL_TYPETYPE(  arg2, "FT_Set_Renderer - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "FT_Set_Renderer - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "FT_Set_Renderer - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

