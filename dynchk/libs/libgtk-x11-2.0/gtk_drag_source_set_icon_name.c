// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_drag_source_set_icon_name
static void(*funcptr) (GtkWidget * , const gchar * ) = 0;

extern int __lsb_check_params;
void gtk_drag_source_set_icon_name (GtkWidget * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_drag_source_set_icon_name()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_drag_source_set_icon_name");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_drag_source_set_icon_name. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_drag_source_set_icon_name() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_drag_source_set_icon_name - arg0 (widget)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_drag_source_set_icon_name - arg0 (widget)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_drag_source_set_icon_name - arg1 (icon_name)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_drag_source_set_icon_name - arg1 (icon_name)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

