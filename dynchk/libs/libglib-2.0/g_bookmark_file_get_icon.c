// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_bookmark_file_get_icon
static gboolean(*funcptr) (GBookmarkFile * , const char * , gchar * * , gchar * * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean g_bookmark_file_get_icon (GBookmarkFile * arg0 , const char * arg1 , gchar * * arg2 , gchar * * arg3 , GError * * arg4 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_bookmark_file_get_icon()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_bookmark_file_get_icon");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_bookmark_file_get_icon. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_bookmark_file_get_icon() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_bookmark_file_get_icon - arg0 (bookmark)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_bookmark_file_get_icon - arg0 (bookmark)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_bookmark_file_get_icon - arg1 (uri)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_bookmark_file_get_icon - arg1 (uri)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_bookmark_file_get_icon - arg2 (href)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_bookmark_file_get_icon - arg2 (href)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_bookmark_file_get_icon - arg3 (mime_type)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_bookmark_file_get_icon - arg3 (mime_type)");
		if( arg4 ) {
		validate_RWaddress( arg4, "g_bookmark_file_get_icon - arg4 (error)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_bookmark_file_get_icon - arg4 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

