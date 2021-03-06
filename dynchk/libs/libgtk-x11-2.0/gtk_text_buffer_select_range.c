// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_text_buffer_select_range
static void(*funcptr) (GtkTextBuffer * , const GtkTextIter * , const GtkTextIter * ) = 0;

extern int __lsb_check_params;
void gtk_text_buffer_select_range (GtkTextBuffer * arg0 , const GtkTextIter * arg1 , const GtkTextIter * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_text_buffer_select_range()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_buffer_select_range");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_buffer_select_range. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_buffer_select_range() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_text_buffer_select_range - arg0 (buffer)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_text_buffer_select_range - arg0 (buffer)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_text_buffer_select_range - arg1 (ins)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_text_buffer_select_range - arg1 (ins)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "gtk_text_buffer_select_range - arg2 (bound)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_text_buffer_select_range - arg2 (bound)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

