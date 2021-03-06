// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gfileattribute.h>
#undef g_file_attribute_info_list_dup
static GFileAttributeInfoList *(*funcptr) (GFileAttributeInfoList * ) = 0;

extern int __lsb_check_params;
GFileAttributeInfoList * g_file_attribute_info_list_dup (GFileAttributeInfoList * arg0 )
{
	int reset_flag = __lsb_check_params;
	GFileAttributeInfoList * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_file_attribute_info_list_dup()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_file_attribute_info_list_dup");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_file_attribute_info_list_dup. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_file_attribute_info_list_dup() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_file_attribute_info_list_dup - arg0 (list)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_file_attribute_info_list_dup - arg0 (list)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

