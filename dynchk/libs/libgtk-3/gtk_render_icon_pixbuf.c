// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_render_icon_pixbuf
static GdkPixbuf *(*funcptr) (GtkStyleContext * , const struct _GtkIconSource * , GtkIconSize ) = 0;

extern int __lsb_check_params;
GdkPixbuf * gtk_render_icon_pixbuf (GtkStyleContext * arg0 , const struct _GtkIconSource * arg1 , GtkIconSize arg2 )
{
	int reset_flag = __lsb_check_params;
	GdkPixbuf * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_render_icon_pixbuf()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_render_icon_pixbuf");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_render_icon_pixbuf. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_render_icon_pixbuf() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_render_icon_pixbuf - arg0 (context)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_render_icon_pixbuf - arg0 (context)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_render_icon_pixbuf - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_render_icon_pixbuf - arg1");
		validate_NULL_TYPETYPE(  arg2, "gtk_render_icon_pixbuf - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
