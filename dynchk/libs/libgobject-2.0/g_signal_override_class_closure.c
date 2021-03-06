// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#undef g_signal_override_class_closure
static void(*funcptr) (guint , GType , GClosure * ) = 0;

extern int __lsb_check_params;
void g_signal_override_class_closure (guint arg0 , GType arg1 , GClosure * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_signal_override_class_closure()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_signal_override_class_closure");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_signal_override_class_closure. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_signal_override_class_closure() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_signal_override_class_closure - arg0 (signal_id)");
		validate_NULL_TYPETYPE(  arg1, "g_signal_override_class_closure - arg1 (instance_type)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_signal_override_class_closure - arg2 (class_closure)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_signal_override_class_closure - arg2 (class_closure)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

