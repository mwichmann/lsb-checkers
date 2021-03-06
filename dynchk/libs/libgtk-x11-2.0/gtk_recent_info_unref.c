// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtkrecentmanager.h>
#undef gtk_recent_info_unref
static void(*funcptr) (GtkRecentInfo * ) = 0;

extern int __lsb_check_params;
void gtk_recent_info_unref (GtkRecentInfo * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_recent_info_unref()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_recent_info_unref");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_recent_info_unref. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_recent_info_unref() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_recent_info_unref - arg0 (info)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_recent_info_unref - arg0 (info)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

