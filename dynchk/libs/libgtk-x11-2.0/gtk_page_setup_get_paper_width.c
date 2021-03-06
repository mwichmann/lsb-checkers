// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gtk/gtkenums.h>
#undef gtk_page_setup_get_paper_width
static gdouble(*funcptr) (GtkPageSetup * , GtkUnit ) = 0;

extern int __lsb_check_params;
gdouble gtk_page_setup_get_paper_width (GtkPageSetup * arg0 , GtkUnit arg1 )
{
	int reset_flag = __lsb_check_params;
	gdouble ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_page_setup_get_paper_width()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_page_setup_get_paper_width");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_page_setup_get_paper_width. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_page_setup_get_paper_width() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_page_setup_get_paper_width - arg0 (setup)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_page_setup_get_paper_width - arg0 (setup)");
		validate_NULL_TYPETYPE(  arg1, "gtk_page_setup_get_paper_width - arg1 (unit)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

