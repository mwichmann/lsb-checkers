// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gtk/gtkenums.h>
#undef gtk_arrow_set
static void(*funcptr) (GtkArrow * , GtkArrowType , GtkShadowType ) = 0;

extern int __lsb_check_params;
void gtk_arrow_set (GtkArrow * arg0 , GtkArrowType arg1 , GtkShadowType arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_arrow_set()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_arrow_set");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_arrow_set. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_arrow_set() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_arrow_set - arg0 (arrow)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_arrow_set - arg0 (arrow)");
		validate_NULL_TYPETYPE(  arg1, "gtk_arrow_set - arg1 (arrow_type)");
		validate_NULL_TYPETYPE(  arg2, "gtk_arrow_set - arg2 (shadow_type)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

