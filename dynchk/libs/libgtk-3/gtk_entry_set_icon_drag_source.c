// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <gtk-3.0/gdk/gdk.h>
#undef gtk_entry_set_icon_drag_source
static void(*funcptr) (GtkEntry * , GtkEntryIconPosition , GtkTargetList * , GdkDragAction ) = 0;

extern int __lsb_check_params;
void gtk_entry_set_icon_drag_source (GtkEntry * arg0 , GtkEntryIconPosition arg1 , GtkTargetList * arg2 , GdkDragAction arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_entry_set_icon_drag_source()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_entry_set_icon_drag_source");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_entry_set_icon_drag_source. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_entry_set_icon_drag_source() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_entry_set_icon_drag_source - arg0 (entry)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_entry_set_icon_drag_source - arg0 (entry)");
		validate_NULL_TYPETYPE(  arg1, "gtk_entry_set_icon_drag_source - arg1 (icon_pos)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_entry_set_icon_drag_source - arg2 (target_list)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_entry_set_icon_drag_source - arg2 (target_list)");
		validate_NULL_TYPETYPE(  arg3, "gtk_entry_set_icon_drag_source - arg3 (actions)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

