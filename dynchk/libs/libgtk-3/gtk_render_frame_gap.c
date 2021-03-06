// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <cairo/cairo.h>
#include <glib-2.0/glib.h>
#undef gtk_render_frame_gap
static void(*funcptr) (GtkStyleContext * , cairo_t * , gdouble , gdouble , gdouble , gdouble , GtkPositionType , gdouble , gdouble ) = 0;

extern int __lsb_check_params;
void gtk_render_frame_gap (GtkStyleContext * arg0 , cairo_t * arg1 , gdouble arg2 , gdouble arg3 , gdouble arg4 , gdouble arg5 , GtkPositionType arg6 , gdouble arg7 , gdouble arg8 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_render_frame_gap()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_render_frame_gap");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_render_frame_gap. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_render_frame_gap() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_render_frame_gap - arg0 (context)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_render_frame_gap - arg0 (context)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_render_frame_gap - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_render_frame_gap - arg1");
		validate_NULL_TYPETYPE(  arg2, "gtk_render_frame_gap - arg2");
		validate_NULL_TYPETYPE(  arg3, "gtk_render_frame_gap - arg3");
		validate_NULL_TYPETYPE(  arg4, "gtk_render_frame_gap - arg4");
		validate_NULL_TYPETYPE(  arg5, "gtk_render_frame_gap - arg5");
		validate_NULL_TYPETYPE(  arg6, "gtk_render_frame_gap - arg6");
		validate_NULL_TYPETYPE(  arg7, "gtk_render_frame_gap - arg7");
		validate_NULL_TYPETYPE(  arg8, "gtk_render_frame_gap - arg8");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
}

