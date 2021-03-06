// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_text_buffer_get_slice
static gchar *(*funcptr) (GtkTextBuffer * , const GtkTextIter * , const GtkTextIter * , gboolean ) = 0;

extern int __lsb_check_params;
gchar * gtk_text_buffer_get_slice (GtkTextBuffer * arg0 , const GtkTextIter * arg1 , const GtkTextIter * arg2 , gboolean arg3 )
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_text_buffer_get_slice()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_buffer_get_slice");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_buffer_get_slice. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_buffer_get_slice() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_text_buffer_get_slice - arg0 (buffer)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_text_buffer_get_slice - arg0 (buffer)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_text_buffer_get_slice - arg1 (start)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_text_buffer_get_slice - arg1 (start)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "gtk_text_buffer_get_slice - arg2 (end)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_text_buffer_get_slice - arg2 (end)");
		validate_NULL_TYPETYPE(  arg3, "gtk_text_buffer_get_slice - arg3 (include_hidden_chars)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

