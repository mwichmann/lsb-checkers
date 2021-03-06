// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_text_buffer_insert
static void(*funcptr) (GtkTextBuffer * , GtkTextIter * , const gchar * , gint ) = 0;

extern int __lsb_check_params;
void gtk_text_buffer_insert (GtkTextBuffer * arg0 , GtkTextIter * arg1 , const gchar * arg2 , gint arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_text_buffer_insert()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_buffer_insert");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_buffer_insert. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_buffer_insert() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_text_buffer_insert - arg0 (buffer)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_text_buffer_insert - arg0 (buffer)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_text_buffer_insert - arg1 (iter)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_text_buffer_insert - arg1 (iter)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "gtk_text_buffer_insert - arg2 (text)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_text_buffer_insert - arg2 (text)");
		validate_NULL_TYPETYPE(  arg3, "gtk_text_buffer_insert - arg3 (len)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

