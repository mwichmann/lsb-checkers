// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_widget_set_scroll_adjustments
static gboolean(*funcptr) (GtkWidget * , GtkAdjustment * , GtkAdjustment * ) = 0;

extern int __lsb_check_params;
gboolean gtk_widget_set_scroll_adjustments (GtkWidget * arg0 , GtkAdjustment * arg1 , GtkAdjustment * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_widget_set_scroll_adjustments()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_widget_set_scroll_adjustments");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_widget_set_scroll_adjustments. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_widget_set_scroll_adjustments() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_widget_set_scroll_adjustments - arg0 (widget)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_widget_set_scroll_adjustments - arg0 (widget)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_widget_set_scroll_adjustments - arg1 (hadjustment)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_widget_set_scroll_adjustments - arg1 (hadjustment)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_widget_set_scroll_adjustments - arg2 (vadjustment)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_widget_set_scroll_adjustments - arg2 (vadjustment)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

