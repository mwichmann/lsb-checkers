// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtkrecentmanager.h>
#undef gtk_recent_manager_add_full
static gboolean(*funcptr) (GtkRecentManager * , const char * , const GtkRecentData * ) = 0;

extern int __lsb_check_params;
gboolean gtk_recent_manager_add_full (GtkRecentManager * arg0 , const char * arg1 , const GtkRecentData * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_recent_manager_add_full()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_recent_manager_add_full");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_recent_manager_add_full. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_recent_manager_add_full() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_recent_manager_add_full - arg0 (manager)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_recent_manager_add_full - arg0 (manager)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_recent_manager_add_full - arg1 (uri)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_recent_manager_add_full - arg1 (uri)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "gtk_recent_manager_add_full - arg2 (recent_data)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_recent_manager_add_full - arg2 (recent_data)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

