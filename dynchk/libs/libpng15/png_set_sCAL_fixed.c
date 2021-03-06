// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng15/png.h>
#include <libpng15/pngconf.h>
#undef png_set_sCAL_fixed
static void(*funcptr) (png_structp , png_infop , int , png_fixed_point , png_fixed_point ) = 0;

extern int __lsb_check_params;
void png_set_sCAL_fixed (png_structp arg0 , png_infop arg1 , int arg2 , png_fixed_point arg3 , png_fixed_point arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for png_set_sCAL_fixed()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_set_sCAL_fixed", "PNG15_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_set_sCAL_fixed. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_set_sCAL_fixed() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_set_sCAL_fixed - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_set_sCAL_fixed - arg1 (info_ptr)");
		validate_NULL_TYPETYPE(  arg2, "png_set_sCAL_fixed - arg2 (unit)");
		validate_NULL_TYPETYPE(  arg3, "png_set_sCAL_fixed - arg3 (width)");
		validate_NULL_TYPETYPE(  arg4, "png_set_sCAL_fixed - arg4 (height)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

