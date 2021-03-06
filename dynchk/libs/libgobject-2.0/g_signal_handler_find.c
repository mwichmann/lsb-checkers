// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#undef g_signal_handler_find
static gulong(*funcptr) (gpointer , GSignalMatchType , guint , GQuark , GClosure * , gpointer , gpointer ) = 0;

extern int __lsb_check_params;
gulong g_signal_handler_find (gpointer arg0 , GSignalMatchType arg1 , guint arg2 , GQuark arg3 , GClosure * arg4 , gpointer arg5 , gpointer arg6 )
{
	int reset_flag = __lsb_check_params;
	gulong ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_signal_handler_find()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_signal_handler_find");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_signal_handler_find. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_signal_handler_find() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_signal_handler_find - arg0 (instance)");
		validate_NULL_TYPETYPE(  arg1, "g_signal_handler_find - arg1 (mask)");
		validate_NULL_TYPETYPE(  arg2, "g_signal_handler_find - arg2 (signal_id)");
		validate_NULL_TYPETYPE(  arg3, "g_signal_handler_find - arg3 (detail)");
		if( arg4 ) {
		validate_RWaddress( arg4, "g_signal_handler_find - arg4 (closure)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_signal_handler_find - arg4 (closure)");
		validate_NULL_TYPETYPE(  arg5, "g_signal_handler_find - arg5 (func)");
		validate_NULL_TYPETYPE(  arg6, "g_signal_handler_find - arg6 (data)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

