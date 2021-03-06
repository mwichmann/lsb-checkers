// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_notebook_set_tab_reorderable
static void(*funcptr) (GtkNotebook * , GtkWidget * , gboolean ) = 0;

extern int __lsb_check_params;
void gtk_notebook_set_tab_reorderable (GtkNotebook * arg0 , GtkWidget * arg1 , gboolean arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_notebook_set_tab_reorderable()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_notebook_set_tab_reorderable");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_notebook_set_tab_reorderable. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_notebook_set_tab_reorderable() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_notebook_set_tab_reorderable - arg0 (notebook)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_notebook_set_tab_reorderable - arg0 (notebook)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_notebook_set_tab_reorderable - arg1 (child)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_notebook_set_tab_reorderable - arg1 (child)");
		validate_NULL_TYPETYPE(  arg2, "gtk_notebook_set_tab_reorderable - arg2 (reorderable)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

