// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_style_context_set_junction_sides
static void(*funcptr) (GtkStyleContext * , GtkJunctionSides ) = 0;

extern int __lsb_check_params;
void gtk_style_context_set_junction_sides (GtkStyleContext * arg0 , GtkJunctionSides arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_style_context_set_junction_sides()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_style_context_set_junction_sides");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_style_context_set_junction_sides. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_style_context_set_junction_sides() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_style_context_set_junction_sides - arg0 (context)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_style_context_set_junction_sides - arg0 (context)");
		validate_NULL_TYPETYPE(  arg1, "gtk_style_context_set_junction_sides - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

