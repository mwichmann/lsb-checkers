// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gdk-pixbuf-2.0/gdk-pixbuf/gdk-pixbuf.h>
#include <glib-2.0/glib.h>
#undef gdk_pixbuf_savev
static gboolean(*funcptr) (GdkPixbuf * , const char * , const char * , char * * , char * * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean gdk_pixbuf_savev (GdkPixbuf * arg0 , const char * arg1 , const char * arg2 , char * * arg3 , char * * arg4 , GError * * arg5 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_pixbuf_savev()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixbuf_savev");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixbuf_savev. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixbuf_savev() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_pixbuf_savev - arg0 (pixbuf)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pixbuf_savev - arg0 (pixbuf)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gdk_pixbuf_savev - arg1 (filename)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_pixbuf_savev - arg1 (filename)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "gdk_pixbuf_savev - arg2 (type)");
		}
		validate_NULL_TYPETYPE(  arg2, "gdk_pixbuf_savev - arg2 (type)");
		if( arg3 ) {
		validate_RWaddress( arg3, "gdk_pixbuf_savev - arg3 (option_keys)");
		}
		validate_NULL_TYPETYPE(  arg3, "gdk_pixbuf_savev - arg3 (option_keys)");
		if( arg4 ) {
		validate_RWaddress( arg4, "gdk_pixbuf_savev - arg4 (option_values)");
		}
		validate_NULL_TYPETYPE(  arg4, "gdk_pixbuf_savev - arg4 (option_values)");
		if( arg5 ) {
		validate_RWaddress( arg5, "gdk_pixbuf_savev - arg5 (error)");
		}
		validate_NULL_TYPETYPE(  arg5, "gdk_pixbuf_savev - arg5 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

