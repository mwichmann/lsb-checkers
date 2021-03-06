// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_text_view_scroll_mark_onscreen
static void(*funcptr) (GtkTextView * , GtkTextMark * ) = 0;

extern int __lsb_check_params;
void gtk_text_view_scroll_mark_onscreen (GtkTextView * arg0 , GtkTextMark * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_text_view_scroll_mark_onscreen()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_view_scroll_mark_onscreen");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_view_scroll_mark_onscreen. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_view_scroll_mark_onscreen() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_text_view_scroll_mark_onscreen - arg0 (text_view)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_text_view_scroll_mark_onscreen - arg0 (text_view)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_text_view_scroll_mark_onscreen - arg1 (mark)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_text_view_scroll_mark_onscreen - arg1 (mark)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

