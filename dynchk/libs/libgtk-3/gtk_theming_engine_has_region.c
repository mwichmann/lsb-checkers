// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_theming_engine_has_region
static gboolean(*funcptr) (GtkThemingEngine * , const char * , GtkRegionFlags * ) = 0;

extern int __lsb_check_params;
gboolean gtk_theming_engine_has_region (GtkThemingEngine * arg0 , const char * arg1 , GtkRegionFlags * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_theming_engine_has_region()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_theming_engine_has_region");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_theming_engine_has_region. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_theming_engine_has_region() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_theming_engine_has_region - arg0 (engine)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_theming_engine_has_region - arg0 (engine)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_theming_engine_has_region - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_theming_engine_has_region - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_theming_engine_has_region - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_theming_engine_has_region - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

