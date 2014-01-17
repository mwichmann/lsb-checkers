// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef _gtk_text_tag_table_remove_buffer
static void(*funcptr) (GtkTextTagTable * , gpointer ) = 0;

extern int __lsb_check_params;
void _gtk_text_tag_table_remove_buffer (GtkTextTagTable * arg0 , gpointer arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for _gtk_text_tag_table_remove_buffer()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_gtk_text_tag_table_remove_buffer");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load _gtk_text_tag_table_remove_buffer. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "_gtk_text_tag_table_remove_buffer() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "_gtk_text_tag_table_remove_buffer - arg0 (table)");
		}
		validate_NULL_TYPETYPE(  arg0, "_gtk_text_tag_table_remove_buffer - arg0 (table)");
		validate_NULL_TYPETYPE(  arg1, "_gtk_text_tag_table_remove_buffer - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

