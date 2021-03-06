// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_color_selection_set_has_opacity_control
static void(*funcptr) (GtkColorSelection * , gboolean ) = 0;

extern int __lsb_check_params;
void gtk_color_selection_set_has_opacity_control (GtkColorSelection * arg0 , gboolean arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_color_selection_set_has_opacity_control()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_color_selection_set_has_opacity_control");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_color_selection_set_has_opacity_control. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_color_selection_set_has_opacity_control() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_color_selection_set_has_opacity_control - arg0 (colorsel)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_color_selection_set_has_opacity_control - arg0 (colorsel)");
		validate_NULL_TYPETYPE(  arg1, "gtk_color_selection_set_has_opacity_control - arg1 (has_opacity)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

