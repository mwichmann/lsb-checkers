// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <cairo/cairo.h>
#include <glib-2.0/glib.h>
#include <pango-1.0/pango/pango.h>
#undef gtk_render_insertion_cursor
static void(*funcptr) (GtkStyleContext * , cairo_t * , gdouble , gdouble , PangoLayout * , int , PangoDirection ) = 0;

extern int __lsb_check_params;
void gtk_render_insertion_cursor (GtkStyleContext * arg0 , cairo_t * arg1 , gdouble arg2 , gdouble arg3 , PangoLayout * arg4 , int arg5 , PangoDirection arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_render_insertion_cursor()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_render_insertion_cursor");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_render_insertion_cursor. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_render_insertion_cursor() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_render_insertion_cursor - arg0 (context)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_render_insertion_cursor - arg0 (context)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_render_insertion_cursor - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_render_insertion_cursor - arg1");
		validate_NULL_TYPETYPE(  arg2, "gtk_render_insertion_cursor - arg2");
		validate_NULL_TYPETYPE(  arg3, "gtk_render_insertion_cursor - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "gtk_render_insertion_cursor - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "gtk_render_insertion_cursor - arg4");
		validate_NULL_TYPETYPE(  arg5, "gtk_render_insertion_cursor - arg5");
		validate_NULL_TYPETYPE(  arg6, "gtk_render_insertion_cursor - arg6");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}

