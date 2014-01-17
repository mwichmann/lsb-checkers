// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_entry_buffer_emit_deleted_text
static void(*funcptr) (GtkEntryBuffer * , guint , guint ) = 0;

extern int __lsb_check_params;
void gtk_entry_buffer_emit_deleted_text (GtkEntryBuffer * arg0 , guint arg1 , guint arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_entry_buffer_emit_deleted_text()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_entry_buffer_emit_deleted_text");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_entry_buffer_emit_deleted_text. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_entry_buffer_emit_deleted_text() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_entry_buffer_emit_deleted_text - arg0 (buffer)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_entry_buffer_emit_deleted_text - arg0 (buffer)");
		validate_NULL_TYPETYPE(  arg1, "gtk_entry_buffer_emit_deleted_text - arg1");
		validate_NULL_TYPETYPE(  arg2, "gtk_entry_buffer_emit_deleted_text - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

