// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng15/png.h>
#include <libpng15/pngconf.h>
#undef png_set_user_transform_info
static void(*funcptr) (png_structp , png_voidp , int , int ) = 0;

extern int __lsb_check_params;
void png_set_user_transform_info (png_structp arg0 , png_voidp arg1 , int arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for png_set_user_transform_info()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_set_user_transform_info", "PNG15_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_set_user_transform_info. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_set_user_transform_info() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_set_user_transform_info - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_set_user_transform_info - arg1 (user_transform_ptr)");
		validate_NULL_TYPETYPE(  arg2, "png_set_user_transform_info - arg2 (user_transform_depth)");
		validate_NULL_TYPETYPE(  arg3, "png_set_user_transform_info - arg3 (user_transform_channels)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

