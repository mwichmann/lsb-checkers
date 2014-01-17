// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_about_dialog_add_credit_section
static void(*funcptr) (GtkAboutDialog * , const char * , const char * * ) = 0;

extern int __lsb_check_params;
void gtk_about_dialog_add_credit_section (GtkAboutDialog * arg0 , const char * arg1 , const char * * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_about_dialog_add_credit_section()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_about_dialog_add_credit_section");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_about_dialog_add_credit_section. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_about_dialog_add_credit_section() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_about_dialog_add_credit_section - arg0 (about)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_about_dialog_add_credit_section - arg0 (about)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_about_dialog_add_credit_section - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_about_dialog_add_credit_section - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_about_dialog_add_credit_section - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_about_dialog_add_credit_section - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

