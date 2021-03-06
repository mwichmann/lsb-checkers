// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_color_selection_palette_from_string
static gboolean(*funcptr) (const gchar * , GdkColor * * , gint * ) = 0;

extern int __lsb_check_params;
gboolean gtk_color_selection_palette_from_string (const gchar * arg0 , GdkColor * * arg1 , gint * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_color_selection_palette_from_string()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_color_selection_palette_from_string");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_color_selection_palette_from_string. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_color_selection_palette_from_string() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gtk_color_selection_palette_from_string - arg0 (str)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_color_selection_palette_from_string - arg0 (str)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_color_selection_palette_from_string - arg1 (colors)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_color_selection_palette_from_string - arg1 (colors)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_color_selection_palette_from_string - arg2 (n_colors)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_color_selection_palette_from_string - arg2 (n_colors)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

