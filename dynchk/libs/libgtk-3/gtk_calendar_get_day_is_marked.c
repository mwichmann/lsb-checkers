// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_calendar_get_day_is_marked
static gboolean(*funcptr) (GtkCalendar * , guint ) = 0;

extern int __lsb_check_params;
gboolean gtk_calendar_get_day_is_marked (GtkCalendar * arg0 , guint arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_calendar_get_day_is_marked()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_calendar_get_day_is_marked");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_calendar_get_day_is_marked. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_calendar_get_day_is_marked() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_calendar_get_day_is_marked - arg0 (calendar)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_calendar_get_day_is_marked - arg0 (calendar)");
		validate_NULL_TYPETYPE(  arg1, "gtk_calendar_get_day_is_marked - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

