// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtkstatusicon.h>
#include <gdk-pixbuf-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gtk_status_icon_set_from_pixbuf
static void(*funcptr) (GtkStatusIcon * , GdkPixbuf * ) = 0;

extern int __lsb_check_params;
void gtk_status_icon_set_from_pixbuf (GtkStatusIcon * arg0 , GdkPixbuf * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_status_icon_set_from_pixbuf()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_status_icon_set_from_pixbuf");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_status_icon_set_from_pixbuf. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_status_icon_set_from_pixbuf() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_status_icon_set_from_pixbuf - arg0 (status_icon)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_status_icon_set_from_pixbuf - arg0 (status_icon)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_status_icon_set_from_pixbuf - arg1 (pixbuf)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_status_icon_set_from_pixbuf - arg1 (pixbuf)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

