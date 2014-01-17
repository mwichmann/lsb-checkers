// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk/gdk.h>
#undef gtk_accel_label_set_accel
static void(*funcptr) (GtkAccelLabel * , guint , GdkModifierType ) = 0;

extern int __lsb_check_params;
void gtk_accel_label_set_accel (GtkAccelLabel * arg0 , guint arg1 , GdkModifierType arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_accel_label_set_accel()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_accel_label_set_accel");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_accel_label_set_accel. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_accel_label_set_accel() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_accel_label_set_accel - arg0 (accel_label)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_accel_label_set_accel - arg0 (accel_label)");
		validate_NULL_TYPETYPE(  arg1, "gtk_accel_label_set_accel - arg1");
		validate_NULL_TYPETYPE(  arg2, "gtk_accel_label_set_accel - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

