// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#include <cairo/cairo-ps.h>
#undef cairo_ps_surface_dsc_comment
static void(*funcptr) (cairo_surface_t * , const char * ) = 0;

extern int __lsb_check_params;
void cairo_ps_surface_dsc_comment (cairo_surface_t * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_ps_surface_dsc_comment()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_ps_surface_dsc_comment");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_ps_surface_dsc_comment. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_ps_surface_dsc_comment() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_ps_surface_dsc_comment - arg0 (surface)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_ps_surface_dsc_comment - arg0 (surface)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "cairo_ps_surface_dsc_comment - arg1 (comment)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_ps_surface_dsc_comment - arg1 (comment)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

