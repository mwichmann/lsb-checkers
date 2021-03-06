// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_combo_box_text_append_text
static void(*funcptr) (GtkComboBoxText * , const char * ) = 0;

extern int __lsb_check_params;
void gtk_combo_box_text_append_text (GtkComboBoxText * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_combo_box_text_append_text()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_combo_box_text_append_text");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_combo_box_text_append_text. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_combo_box_text_append_text() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_combo_box_text_append_text - arg0 (combo_box)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_combo_box_text_append_text - arg0 (combo_box)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_combo_box_text_append_text - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_combo_box_text_append_text - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

