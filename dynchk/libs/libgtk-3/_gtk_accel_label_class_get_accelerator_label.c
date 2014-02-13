// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk/gdk.h>
#undef _gtk_accel_label_class_get_accelerator_label
static gchar *(*funcptr) (GtkAccelLabelClass * , guint , GdkModifierType ) = 0;

extern int __lsb_check_params;
gchar * _gtk_accel_label_class_get_accelerator_label (GtkAccelLabelClass * arg0 , guint arg1 , GdkModifierType arg2 )
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for _gtk_accel_label_class_get_accelerator_label()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_gtk_accel_label_class_get_accelerator_label");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load _gtk_accel_label_class_get_accelerator_label. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "_gtk_accel_label_class_get_accelerator_label() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "_gtk_accel_label_class_get_accelerator_label - arg0 (klass)");
		}
		validate_NULL_TYPETYPE(  arg0, "_gtk_accel_label_class_get_accelerator_label - arg0 (klass)");
		validate_NULL_TYPETYPE(  arg1, "_gtk_accel_label_class_get_accelerator_label - arg1");
		validate_NULL_TYPETYPE(  arg2, "_gtk_accel_label_class_get_accelerator_label - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
