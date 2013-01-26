// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gtk/gtkenums.h>
#include <gtk-2.0/gdk/gdk.h>
#undef gtk_widget_modify_text
static void(*funcptr) (GtkWidget * , GtkStateType , const GdkColor * ) = 0;

extern int __lsb_check_params;
void gtk_widget_modify_text (GtkWidget * arg0 , GtkStateType arg1 , const GdkColor * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_widget_modify_text()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_widget_modify_text");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_widget_modify_text. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_widget_modify_text() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_widget_modify_text - arg0 (widget)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_widget_modify_text - arg0 (widget)");
		validate_NULL_TYPETYPE(  arg1, "gtk_widget_modify_text - arg1 (state)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "gtk_widget_modify_text - arg2 (color)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_widget_modify_text - arg2 (color)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}
