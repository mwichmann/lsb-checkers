// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <gdk-pixbuf-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gtk_icon_info_new_for_pixbuf
static GtkIconInfo *(*funcptr) (GtkIconTheme * , GdkPixbuf * ) = 0;

extern int __lsb_check_params;
GtkIconInfo * gtk_icon_info_new_for_pixbuf (GtkIconTheme * arg0 , GdkPixbuf * arg1 )
{
	int reset_flag = __lsb_check_params;
	GtkIconInfo * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_icon_info_new_for_pixbuf()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_icon_info_new_for_pixbuf");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_icon_info_new_for_pixbuf. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_icon_info_new_for_pixbuf() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_icon_info_new_for_pixbuf - arg0 (icon_theme)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_icon_info_new_for_pixbuf - arg0 (icon_theme)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_icon_info_new_for_pixbuf - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_icon_info_new_for_pixbuf - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

