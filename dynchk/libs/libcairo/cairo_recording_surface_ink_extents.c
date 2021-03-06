// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_recording_surface_ink_extents
static void(*funcptr) (cairo_surface_t * , double * , double * , double * , double * ) = 0;

extern int __lsb_check_params;
void cairo_recording_surface_ink_extents (cairo_surface_t * arg0 , double * arg1 , double * arg2 , double * arg3 , double * arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_recording_surface_ink_extents()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_recording_surface_ink_extents");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_recording_surface_ink_extents. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_recording_surface_ink_extents() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_recording_surface_ink_extents - arg0 (surface)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_recording_surface_ink_extents - arg0 (surface)");
		if( arg1 ) {
		validate_RWaddress( arg1, "cairo_recording_surface_ink_extents - arg1 (x0)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_recording_surface_ink_extents - arg1 (x0)");
		if( arg2 ) {
		validate_RWaddress( arg2, "cairo_recording_surface_ink_extents - arg2 (y0)");
		}
		validate_NULL_TYPETYPE(  arg2, "cairo_recording_surface_ink_extents - arg2 (y0)");
		if( arg3 ) {
		validate_RWaddress( arg3, "cairo_recording_surface_ink_extents - arg3 (width)");
		}
		validate_NULL_TYPETYPE(  arg3, "cairo_recording_surface_ink_extents - arg3 (width)");
		if( arg4 ) {
		validate_RWaddress( arg4, "cairo_recording_surface_ink_extents - arg4 (height)");
		}
		validate_NULL_TYPETYPE(  arg4, "cairo_recording_surface_ink_extents - arg4 (height)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

