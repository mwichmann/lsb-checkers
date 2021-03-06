// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_icon_view_get_dest_item_at_pos
static gboolean(*funcptr) (GtkIconView * , gint , gint , GtkTreePath * * , GtkIconViewDropPosition * ) = 0;

extern int __lsb_check_params;
gboolean gtk_icon_view_get_dest_item_at_pos (GtkIconView * arg0 , gint arg1 , gint arg2 , GtkTreePath * * arg3 , GtkIconViewDropPosition * arg4 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_icon_view_get_dest_item_at_pos()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_icon_view_get_dest_item_at_pos");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_icon_view_get_dest_item_at_pos. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_icon_view_get_dest_item_at_pos() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_icon_view_get_dest_item_at_pos - arg0 (icon_view)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_icon_view_get_dest_item_at_pos - arg0 (icon_view)");
		validate_NULL_TYPETYPE(  arg1, "gtk_icon_view_get_dest_item_at_pos - arg1 (drag_x)");
		validate_NULL_TYPETYPE(  arg2, "gtk_icon_view_get_dest_item_at_pos - arg2 (drag_y)");
		if( arg3 ) {
		validate_RWaddress( arg3, "gtk_icon_view_get_dest_item_at_pos - arg3 (path)");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_icon_view_get_dest_item_at_pos - arg3 (path)");
		if( arg4 ) {
		validate_RWaddress( arg4, "gtk_icon_view_get_dest_item_at_pos - arg4 (pos)");
		}
		validate_NULL_TYPETYPE(  arg4, "gtk_icon_view_get_dest_item_at_pos - arg4 (pos)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

