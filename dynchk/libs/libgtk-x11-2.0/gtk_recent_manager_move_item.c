// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtkrecentmanager.h>
#include <glib-2.0/glib.h>
#undef gtk_recent_manager_move_item
static gboolean(*funcptr) (GtkRecentManager * , const char * , const char * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean gtk_recent_manager_move_item (GtkRecentManager * arg0 , const char * arg1 , const char * arg2 , GError * * arg3 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_recent_manager_move_item()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_recent_manager_move_item");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_recent_manager_move_item. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_recent_manager_move_item() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_recent_manager_move_item - arg0 (manager)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_recent_manager_move_item - arg0 (manager)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_recent_manager_move_item - arg1 (uri)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_recent_manager_move_item - arg1 (uri)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "gtk_recent_manager_move_item - arg2 (new_uri)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_recent_manager_move_item - arg2 (new_uri)");
		if( arg3 ) {
		validate_RWaddress( arg3, "gtk_recent_manager_move_item - arg3 (error)");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_recent_manager_move_item - arg3 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

