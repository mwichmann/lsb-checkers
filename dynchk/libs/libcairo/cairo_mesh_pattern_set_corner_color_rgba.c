// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_mesh_pattern_set_corner_color_rgba
static void(*funcptr) (cairo_pattern_t * , unsigned int , double , double , double , double ) = 0;

extern int __lsb_check_params;
void cairo_mesh_pattern_set_corner_color_rgba (cairo_pattern_t * arg0 , unsigned int arg1 , double arg2 , double arg3 , double arg4 , double arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_mesh_pattern_set_corner_color_rgba()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_mesh_pattern_set_corner_color_rgba");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_mesh_pattern_set_corner_color_rgba. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_mesh_pattern_set_corner_color_rgba() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_mesh_pattern_set_corner_color_rgba - arg0 (pattern)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_mesh_pattern_set_corner_color_rgba - arg0 (pattern)");
		validate_NULL_TYPETYPE(  arg1, "cairo_mesh_pattern_set_corner_color_rgba - arg1 (corner_num)");
		validate_NULL_TYPETYPE(  arg2, "cairo_mesh_pattern_set_corner_color_rgba - arg2 (red)");
		validate_NULL_TYPETYPE(  arg3, "cairo_mesh_pattern_set_corner_color_rgba - arg3 (green)");
		validate_NULL_TYPETYPE(  arg4, "cairo_mesh_pattern_set_corner_color_rgba - arg4 (blue)");
		validate_NULL_TYPETYPE(  arg5, "cairo_mesh_pattern_set_corner_color_rgba - arg5 (alpha)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

