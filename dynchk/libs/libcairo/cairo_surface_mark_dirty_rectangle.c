// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_surface_mark_dirty_rectangle
static void(*funcptr) (cairo_surface_t * , int , int , int , int ) = 0;

extern int __lsb_check_params;
void cairo_surface_mark_dirty_rectangle (cairo_surface_t * arg0 , int arg1 , int arg2 , int arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_surface_mark_dirty_rectangle()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_surface_mark_dirty_rectangle");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_surface_mark_dirty_rectangle. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_surface_mark_dirty_rectangle() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_surface_mark_dirty_rectangle - arg0 (surface)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_surface_mark_dirty_rectangle - arg0 (surface)");
		validate_NULL_TYPETYPE(  arg1, "cairo_surface_mark_dirty_rectangle - arg1 (x)");
		validate_NULL_TYPETYPE(  arg2, "cairo_surface_mark_dirty_rectangle - arg2 (y)");
		validate_NULL_TYPETYPE(  arg3, "cairo_surface_mark_dirty_rectangle - arg3 (width)");
		validate_NULL_TYPETYPE(  arg4, "cairo_surface_mark_dirty_rectangle - arg4 (height)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}
