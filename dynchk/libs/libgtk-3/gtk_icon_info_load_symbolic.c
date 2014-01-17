// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <gtk-3.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gtk_icon_info_load_symbolic
static GdkPixbuf *(*funcptr) (GtkIconInfo * , const struct _GdkRGBA * , const struct _GdkRGBA * , const struct _GdkRGBA * , const struct _GdkRGBA * , gboolean * , GError * * ) = 0;

extern int __lsb_check_params;
GdkPixbuf * gtk_icon_info_load_symbolic (GtkIconInfo * arg0 , const struct _GdkRGBA * arg1 , const struct _GdkRGBA * arg2 , const struct _GdkRGBA * arg3 , const struct _GdkRGBA * arg4 , gboolean * arg5 , GError * * arg6 )
{
	int reset_flag = __lsb_check_params;
	GdkPixbuf * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_icon_info_load_symbolic()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_icon_info_load_symbolic");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_icon_info_load_symbolic. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_icon_info_load_symbolic() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_icon_info_load_symbolic - arg0 (icon_info)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_icon_info_load_symbolic - arg0 (icon_info)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_icon_info_load_symbolic - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_icon_info_load_symbolic - arg1");
		if( arg2 ) {
		validate_Rdaddress( arg2, "gtk_icon_info_load_symbolic - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_icon_info_load_symbolic - arg2");
		if( arg3 ) {
		validate_Rdaddress( arg3, "gtk_icon_info_load_symbolic - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_icon_info_load_symbolic - arg3");
		if( arg4 ) {
		validate_Rdaddress( arg4, "gtk_icon_info_load_symbolic - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "gtk_icon_info_load_symbolic - arg4");
		if( arg5 ) {
		validate_RWaddress( arg5, "gtk_icon_info_load_symbolic - arg5");
		}
		validate_NULL_TYPETYPE(  arg5, "gtk_icon_info_load_symbolic - arg5");
		if( arg6 ) {
		validate_RWaddress( arg6, "gtk_icon_info_load_symbolic - arg6");
		}
		validate_NULL_TYPETYPE(  arg6, "gtk_icon_info_load_symbolic - arg6");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

