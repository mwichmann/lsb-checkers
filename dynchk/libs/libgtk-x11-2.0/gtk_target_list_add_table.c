// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_target_list_add_table
static void(*funcptr) (GtkTargetList * , const GtkTargetEntry * , guint ) = 0;

extern int __lsb_check_params;
void gtk_target_list_add_table (GtkTargetList * arg0 , const GtkTargetEntry * arg1 , guint arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_target_list_add_table()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_target_list_add_table");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_target_list_add_table. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_target_list_add_table() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_target_list_add_table - arg0 (list)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_target_list_add_table - arg0 (list)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_target_list_add_table - arg1 (targets)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_target_list_add_table - arg1 (targets)");
		validate_NULL_TYPETYPE(  arg2, "gtk_target_list_add_table - arg2 (ntargets)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

