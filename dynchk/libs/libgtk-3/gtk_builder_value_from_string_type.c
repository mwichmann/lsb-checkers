// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/glib.h>
#undef gtk_builder_value_from_string_type
static gboolean(*funcptr) (GtkBuilder * , GType , const char * , GValue * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean gtk_builder_value_from_string_type (GtkBuilder * arg0 , GType arg1 , const char * arg2 , GValue * arg3 , GError * * arg4 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_builder_value_from_string_type()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_builder_value_from_string_type");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_builder_value_from_string_type. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_builder_value_from_string_type() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_builder_value_from_string_type - arg0 (builder)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_builder_value_from_string_type - arg0 (builder)");
		validate_NULL_TYPETYPE(  arg1, "gtk_builder_value_from_string_type - arg1");
		if( arg2 ) {
		validate_Rdaddress( arg2, "gtk_builder_value_from_string_type - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_builder_value_from_string_type - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "gtk_builder_value_from_string_type - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_builder_value_from_string_type - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "gtk_builder_value_from_string_type - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "gtk_builder_value_from_string_type - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}
