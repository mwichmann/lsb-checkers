// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <atk-1.0/atk/atk.h>
#undef atk_no_op_object_new
static AtkObject *(*funcptr) (GObject * ) = 0;

extern int __lsb_check_params;
AtkObject * atk_no_op_object_new (GObject * arg0 )
{
	int reset_flag = __lsb_check_params;
	AtkObject * ret_value  ;
	__lsb_output(4, "Invoking wrapper for atk_no_op_object_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_no_op_object_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_no_op_object_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_no_op_object_new() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "atk_no_op_object_new - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "atk_no_op_object_new - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

