// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_size_group_get_ignore_hidden
static gboolean(*funcptr) (GtkSizeGroup * ) = 0;

extern int __lsb_check_params;
gboolean gtk_size_group_get_ignore_hidden (GtkSizeGroup * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_size_group_get_ignore_hidden()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_size_group_get_ignore_hidden");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_size_group_get_ignore_hidden. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_size_group_get_ignore_hidden() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_size_group_get_ignore_hidden - arg0 (size_group)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_size_group_get_ignore_hidden - arg0 (size_group)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

