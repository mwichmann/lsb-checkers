// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#include <gtk-3.0/gdk/gdk.h>
#undef gtk_color_chooser_add_palette
static void(*funcptr) (GtkColorChooser * , GtkOrientation , gint , gint , GdkRGBA * ) = 0;

extern int __lsb_check_params;
void gtk_color_chooser_add_palette (GtkColorChooser * arg0 , GtkOrientation arg1 , gint arg2 , gint arg3 , GdkRGBA * arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_color_chooser_add_palette()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_color_chooser_add_palette");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_color_chooser_add_palette. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_color_chooser_add_palette() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_color_chooser_add_palette - arg0 (chooser)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_color_chooser_add_palette - arg0 (chooser)");
		validate_NULL_TYPETYPE(  arg1, "gtk_color_chooser_add_palette - arg1");
		validate_NULL_TYPETYPE(  arg2, "gtk_color_chooser_add_palette - arg2");
		validate_NULL_TYPETYPE(  arg3, "gtk_color_chooser_add_palette - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "gtk_color_chooser_add_palette - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "gtk_color_chooser_add_palette - arg4");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

