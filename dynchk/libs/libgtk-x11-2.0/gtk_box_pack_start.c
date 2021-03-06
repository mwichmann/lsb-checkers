// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_box_pack_start
static void(*funcptr) (GtkBox * , GtkWidget * , gboolean , gboolean , guint ) = 0;

extern int __lsb_check_params;
void gtk_box_pack_start (GtkBox * arg0 , GtkWidget * arg1 , gboolean arg2 , gboolean arg3 , guint arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_box_pack_start()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_box_pack_start");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_box_pack_start. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_box_pack_start() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_box_pack_start - arg0 (box)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_box_pack_start - arg0 (box)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_box_pack_start - arg1 (child)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_box_pack_start - arg1 (child)");
		validate_NULL_TYPETYPE(  arg2, "gtk_box_pack_start - arg2 (expand)");
		validate_NULL_TYPETYPE(  arg3, "gtk_box_pack_start - arg3 (fill)");
		validate_NULL_TYPETYPE(  arg4, "gtk_box_pack_start - arg4 (padding)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

