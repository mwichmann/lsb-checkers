// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_label_set_text_with_mnemonic
static void(*funcptr) (GtkLabel * , const gchar * ) = 0;

extern int __lsb_check_params;
void gtk_label_set_text_with_mnemonic (GtkLabel * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_label_set_text_with_mnemonic()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_label_set_text_with_mnemonic");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_label_set_text_with_mnemonic. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_label_set_text_with_mnemonic() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_label_set_text_with_mnemonic - arg0 (label)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_label_set_text_with_mnemonic - arg0 (label)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_label_set_text_with_mnemonic - arg1 (str)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_label_set_text_with_mnemonic - arg1 (str)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
