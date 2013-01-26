// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#undef g_object_bind_property_full
static GBinding *(*funcptr) (gpointer , const gchar * , gpointer , const gchar * , GBindingFlags , GBindingTransformFunc , GBindingTransformFunc , gpointer , GDestroyNotify ) = 0;

extern int __lsb_check_params;
GBinding * g_object_bind_property_full (gpointer arg0 , const gchar * arg1 , gpointer arg2 , const gchar * arg3 , GBindingFlags arg4 , GBindingTransformFunc arg5 , GBindingTransformFunc arg6 , gpointer arg7 , GDestroyNotify arg8 )
{
	int reset_flag = __lsb_check_params;
	GBinding * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_object_bind_property_full()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_object_bind_property_full");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_object_bind_property_full. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_object_bind_property_full() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_object_bind_property_full - arg0 (source)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_object_bind_property_full - arg1 (source_property)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_object_bind_property_full - arg1 (source_property)");
		validate_NULL_TYPETYPE(  arg2, "g_object_bind_property_full - arg2 (target)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "g_object_bind_property_full - arg3 (target_property)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_object_bind_property_full - arg3 (target_property)");
		validate_NULL_TYPETYPE(  arg4, "g_object_bind_property_full - arg4 (flags)");
		validate_NULL_TYPETYPE(  arg5, "g_object_bind_property_full - arg5 (transform_to)");
		validate_NULL_TYPETYPE(  arg6, "g_object_bind_property_full - arg6 (transform_from)");
		validate_NULL_TYPETYPE(  arg7, "g_object_bind_property_full - arg7 (user_data)");
		validate_NULL_TYPETYPE(  arg8, "g_object_bind_property_full - arg8 (notify)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
	return ret_value;
}
