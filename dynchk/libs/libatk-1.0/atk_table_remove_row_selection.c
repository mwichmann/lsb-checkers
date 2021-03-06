// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#include <glib-2.0/glib.h>
#undef atk_table_remove_row_selection
static gboolean(*funcptr) (AtkTable * , gint ) = 0;

extern int __lsb_check_params;
gboolean atk_table_remove_row_selection (AtkTable * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for atk_table_remove_row_selection()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_table_remove_row_selection");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_table_remove_row_selection. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_table_remove_row_selection() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "atk_table_remove_row_selection - arg0 (table)");
		}
		validate_NULL_TYPETYPE(  arg0, "atk_table_remove_row_selection - arg0 (table)");
		validate_NULL_TYPETYPE(  arg1, "atk_table_remove_row_selection - arg1 (row)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

