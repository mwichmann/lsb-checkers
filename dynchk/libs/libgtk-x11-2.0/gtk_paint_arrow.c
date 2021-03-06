// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gdk/gdk.h>
#include <gtk-2.0/gtk/gtkenums.h>
#include <glib-2.0/glib.h>
#undef gtk_paint_arrow
static void(*funcptr) (GtkStyle * , GdkWindow * , GtkStateType , GtkShadowType , const GdkRectangle * , GtkWidget * , const gchar * , GtkArrowType , gboolean , gint , gint , gint , gint ) = 0;

extern int __lsb_check_params;
void gtk_paint_arrow (GtkStyle * arg0 , GdkWindow * arg1 , GtkStateType arg2 , GtkShadowType arg3 , const GdkRectangle * arg4 , GtkWidget * arg5 , const gchar * arg6 , GtkArrowType arg7 , gboolean arg8 , gint arg9 , gint arg10 , gint arg11 , gint arg12 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_paint_arrow()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_paint_arrow");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_paint_arrow. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_paint_arrow() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_paint_arrow - arg0 (style)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_paint_arrow - arg0 (style)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_paint_arrow - arg1 (window)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_paint_arrow - arg1 (window)");
		validate_NULL_TYPETYPE(  arg2, "gtk_paint_arrow - arg2 (state_type)");
		validate_NULL_TYPETYPE(  arg3, "gtk_paint_arrow - arg3 (shadow_type)");
		if( arg4 ) {
		validate_Rdaddress( arg4, "gtk_paint_arrow - arg4 (area)");
		}
		validate_NULL_TYPETYPE(  arg4, "gtk_paint_arrow - arg4 (area)");
		if( arg5 ) {
		validate_RWaddress( arg5, "gtk_paint_arrow - arg5 (widget)");
		}
		validate_NULL_TYPETYPE(  arg5, "gtk_paint_arrow - arg5 (widget)");
		if( arg6 ) {
		validate_Rdaddress( arg6, "gtk_paint_arrow - arg6 (detail)");
		}
		validate_NULL_TYPETYPE(  arg6, "gtk_paint_arrow - arg6 (detail)");
		validate_NULL_TYPETYPE(  arg7, "gtk_paint_arrow - arg7 (arrow_type)");
		validate_NULL_TYPETYPE(  arg8, "gtk_paint_arrow - arg8 (fill)");
		validate_NULL_TYPETYPE(  arg9, "gtk_paint_arrow - arg9 (x)");
		validate_NULL_TYPETYPE(  arg10, "gtk_paint_arrow - arg10 (y)");
		validate_NULL_TYPETYPE(  arg11, "gtk_paint_arrow - arg11 (width)");
		validate_NULL_TYPETYPE(  arg12, "gtk_paint_arrow - arg12 (height)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
	__lsb_check_params = reset_flag;
}

