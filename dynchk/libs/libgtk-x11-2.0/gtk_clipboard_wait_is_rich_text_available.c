// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_clipboard_wait_is_rich_text_available
static gboolean(*funcptr) (GtkClipboard * , GtkTextBuffer * ) = 0;

extern int __lsb_check_params;
gboolean gtk_clipboard_wait_is_rich_text_available (GtkClipboard * arg0 , GtkTextBuffer * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_clipboard_wait_is_rich_text_available()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_clipboard_wait_is_rich_text_available");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_clipboard_wait_is_rich_text_available. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_clipboard_wait_is_rich_text_available() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_clipboard_wait_is_rich_text_available - arg0 (clipboard)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_clipboard_wait_is_rich_text_available - arg0 (clipboard)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_clipboard_wait_is_rich_text_available - arg1 (buffer)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_clipboard_wait_is_rich_text_available - arg1 (buffer)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

