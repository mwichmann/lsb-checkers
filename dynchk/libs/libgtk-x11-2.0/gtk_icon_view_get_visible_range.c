// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_icon_view_get_visible_range
static gboolean(*funcptr) (GtkIconView * , GtkTreePath * * , GtkTreePath * * ) = 0;

extern int __lsb_check_params;
gboolean gtk_icon_view_get_visible_range (GtkIconView * arg0 , GtkTreePath * * arg1 , GtkTreePath * * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_icon_view_get_visible_range()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_icon_view_get_visible_range");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_icon_view_get_visible_range. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_icon_view_get_visible_range() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_icon_view_get_visible_range - arg0 (icon_view)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_icon_view_get_visible_range - arg0 (icon_view)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_icon_view_get_visible_range - arg1 (start_path)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_icon_view_get_visible_range - arg1 (start_path)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_icon_view_get_visible_range - arg2 (end_path)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_icon_view_get_visible_range - arg2 (end_path)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
