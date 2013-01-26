// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gdk_pixbuf_format_get_mime_types
static gchar * *(*funcptr) (GdkPixbufFormat * ) = 0;

extern int __lsb_check_params;
gchar * * gdk_pixbuf_format_get_mime_types (GdkPixbufFormat * arg0 )
{
	int reset_flag = __lsb_check_params;
	gchar * * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_pixbuf_format_get_mime_types()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixbuf_format_get_mime_types");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixbuf_format_get_mime_types. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixbuf_format_get_mime_types() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_pixbuf_format_get_mime_types - arg0 (format)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pixbuf_format_get_mime_types - arg0 (format)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
