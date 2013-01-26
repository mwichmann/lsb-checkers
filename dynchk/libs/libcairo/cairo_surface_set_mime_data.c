// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_surface_set_mime_data
static cairo_status_t(*funcptr) (cairo_surface_t * , const char * , const unsigned char * , unsigned long int , cairo_destroy_func_t , void * ) = 0;

extern int __lsb_check_params;
cairo_status_t cairo_surface_set_mime_data (cairo_surface_t * arg0 , const char * arg1 , const unsigned char * arg2 , unsigned long int arg3 , cairo_destroy_func_t arg4 , void * arg5 )
{
	int reset_flag = __lsb_check_params;
	cairo_status_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_surface_set_mime_data()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_surface_set_mime_data");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_surface_set_mime_data. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_surface_set_mime_data() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_surface_set_mime_data - arg0 (surface)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_surface_set_mime_data - arg0 (surface)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "cairo_surface_set_mime_data - arg1 (mime_type)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_surface_set_mime_data - arg1 (mime_type)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "cairo_surface_set_mime_data - arg2 (data)");
		}
		validate_NULL_TYPETYPE(  arg2, "cairo_surface_set_mime_data - arg2 (data)");
		validate_NULL_TYPETYPE(  arg3, "cairo_surface_set_mime_data - arg3 (length)");
		validate_NULL_TYPETYPE(  arg4, "cairo_surface_set_mime_data - arg4 (destroy)");
		if( arg5 ) {
		validate_RWaddress( arg5, "cairo_surface_set_mime_data - arg5 (closure)");
		}
		validate_NULL_TYPETYPE(  arg5, "cairo_surface_set_mime_data - arg5 (closure)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

