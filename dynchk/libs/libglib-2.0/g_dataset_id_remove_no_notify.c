// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_dataset_id_remove_no_notify
static gpointer(*funcptr) (gconstpointer , GQuark ) = 0;

extern int __lsb_check_params;
gpointer g_dataset_id_remove_no_notify (gconstpointer arg0 , GQuark arg1 )
{
	int reset_flag = __lsb_check_params;
	gpointer ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_dataset_id_remove_no_notify()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dataset_id_remove_no_notify");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dataset_id_remove_no_notify. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dataset_id_remove_no_notify() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_dataset_id_remove_no_notify - arg0 (dataset_location)");
		validate_NULL_TYPETYPE(  arg1, "g_dataset_id_remove_no_notify - arg1 (key_id)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
