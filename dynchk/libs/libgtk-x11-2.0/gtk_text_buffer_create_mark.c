// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_text_buffer_create_mark
static GtkTextMark *(*funcptr) (GtkTextBuffer * , const gchar * , const GtkTextIter * , gboolean ) = 0;

extern int __lsb_check_params;
GtkTextMark * gtk_text_buffer_create_mark (GtkTextBuffer * arg0 , const gchar * arg1 , const GtkTextIter * arg2 , gboolean arg3 )
{
	int reset_flag = __lsb_check_params;
	GtkTextMark * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_text_buffer_create_mark()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_buffer_create_mark");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_buffer_create_mark. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_buffer_create_mark() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_text_buffer_create_mark - arg0 (buffer)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_text_buffer_create_mark - arg0 (buffer)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_text_buffer_create_mark - arg1 (mark_name)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_text_buffer_create_mark - arg1 (mark_name)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "gtk_text_buffer_create_mark - arg2 (where)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_text_buffer_create_mark - arg2 (where)");
		validate_NULL_TYPETYPE(  arg3, "gtk_text_buffer_create_mark - arg3 (left_gravity)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

