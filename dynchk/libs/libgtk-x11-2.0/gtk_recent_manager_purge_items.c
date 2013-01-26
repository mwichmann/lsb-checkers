// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtkrecentmanager.h>
#include <glib-2.0/glib.h>
#undef gtk_recent_manager_purge_items
static gint(*funcptr) (GtkRecentManager * , GError * * ) = 0;

extern int __lsb_check_params;
gint gtk_recent_manager_purge_items (GtkRecentManager * arg0 , GError * * arg1 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_recent_manager_purge_items()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_recent_manager_purge_items");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_recent_manager_purge_items. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_recent_manager_purge_items() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_recent_manager_purge_items - arg0 (manager)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_recent_manager_purge_items - arg0 (manager)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_recent_manager_purge_items - arg1 (error)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_recent_manager_purge_items - arg1 (error)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
