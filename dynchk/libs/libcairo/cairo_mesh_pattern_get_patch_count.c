// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_mesh_pattern_get_patch_count
static cairo_status_t(*funcptr) (cairo_pattern_t * , unsigned int * ) = 0;

extern int __lsb_check_params;
cairo_status_t cairo_mesh_pattern_get_patch_count (cairo_pattern_t * arg0 , unsigned int * arg1 )
{
	int reset_flag = __lsb_check_params;
	cairo_status_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_mesh_pattern_get_patch_count()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_mesh_pattern_get_patch_count");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_mesh_pattern_get_patch_count. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_mesh_pattern_get_patch_count() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_mesh_pattern_get_patch_count - arg0 (pattern)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_mesh_pattern_get_patch_count - arg0 (pattern)");
		if( arg1 ) {
		validate_RWaddress( arg1, "cairo_mesh_pattern_get_patch_count - arg1 (count)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_mesh_pattern_get_patch_count - arg1 (count)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
