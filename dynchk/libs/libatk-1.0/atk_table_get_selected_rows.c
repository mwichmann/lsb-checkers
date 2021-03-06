// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#include <glib-2.0/glib.h>
#undef atk_table_get_selected_rows
static gint(*funcptr) (AtkTable * , gint * * ) = 0;

extern int __lsb_check_params;
gint atk_table_get_selected_rows (AtkTable * arg0 , gint * * arg1 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for atk_table_get_selected_rows()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_table_get_selected_rows");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_table_get_selected_rows. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_table_get_selected_rows() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "atk_table_get_selected_rows - arg0 (table)");
		}
		validate_NULL_TYPETYPE(  arg0, "atk_table_get_selected_rows - arg0 (table)");
		if( arg1 ) {
		validate_RWaddress( arg1, "atk_table_get_selected_rows - arg1 (selected)");
		}
		validate_NULL_TYPETYPE(  arg1, "atk_table_get_selected_rows - arg1 (selected)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

