// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <gtk-2.0/gdk/gdk.h>
#undef gtk_entry_im_context_filter_keypress
static gboolean(*funcptr) (GtkEntry * , GdkEventKey * ) = 0;

extern int __lsb_check_params;
gboolean gtk_entry_im_context_filter_keypress (GtkEntry * arg0 , GdkEventKey * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_entry_im_context_filter_keypress()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_entry_im_context_filter_keypress");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_entry_im_context_filter_keypress. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_entry_im_context_filter_keypress() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_entry_im_context_filter_keypress - arg0 (entry)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_entry_im_context_filter_keypress - arg0 (entry)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_entry_im_context_filter_keypress - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_entry_im_context_filter_keypress - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

