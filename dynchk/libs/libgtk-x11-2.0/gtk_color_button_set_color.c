// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gdk/gdk.h>
#undef gtk_color_button_set_color
static void(*funcptr) (GtkColorButton * , const GdkColor * ) = 0;

extern int __lsb_check_params;
void gtk_color_button_set_color (GtkColorButton * arg0 , const GdkColor * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_color_button_set_color()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_color_button_set_color");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_color_button_set_color. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_color_button_set_color() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_color_button_set_color - arg0 (color_button)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_color_button_set_color - arg0 (color_button)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_color_button_set_color - arg1 (color)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_color_button_set_color - arg1 (color)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

