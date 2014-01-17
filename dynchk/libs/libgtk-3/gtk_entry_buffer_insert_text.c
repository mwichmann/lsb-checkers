// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_entry_buffer_insert_text
static guint(*funcptr) (GtkEntryBuffer * , guint , const char * , gint ) = 0;

extern int __lsb_check_params;
guint gtk_entry_buffer_insert_text (GtkEntryBuffer * arg0 , guint arg1 , const char * arg2 , gint arg3 )
{
	int reset_flag = __lsb_check_params;
	guint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_entry_buffer_insert_text()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_entry_buffer_insert_text");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_entry_buffer_insert_text. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_entry_buffer_insert_text() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_entry_buffer_insert_text - arg0 (buffer)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_entry_buffer_insert_text - arg0 (buffer)");
		validate_NULL_TYPETYPE(  arg1, "gtk_entry_buffer_insert_text - arg1");
		if( arg2 ) {
		validate_Rdaddress( arg2, "gtk_entry_buffer_insert_text - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_entry_buffer_insert_text - arg2");
		validate_NULL_TYPETYPE(  arg3, "gtk_entry_buffer_insert_text - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

