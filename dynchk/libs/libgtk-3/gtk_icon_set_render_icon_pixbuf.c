// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_icon_set_render_icon_pixbuf
static GdkPixbuf *(*funcptr) (GtkIconSet * , GtkStyleContext * , GtkIconSize ) = 0;

extern int __lsb_check_params;
GdkPixbuf * gtk_icon_set_render_icon_pixbuf (GtkIconSet * arg0 , GtkStyleContext * arg1 , GtkIconSize arg2 )
{
	int reset_flag = __lsb_check_params;
	GdkPixbuf * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_icon_set_render_icon_pixbuf()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_icon_set_render_icon_pixbuf");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_icon_set_render_icon_pixbuf. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_icon_set_render_icon_pixbuf() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_icon_set_render_icon_pixbuf - arg0 (icon_set)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_icon_set_render_icon_pixbuf - arg0 (icon_set)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_icon_set_render_icon_pixbuf - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_icon_set_render_icon_pixbuf - arg1");
		validate_NULL_TYPETYPE(  arg2, "gtk_icon_set_render_icon_pixbuf - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

