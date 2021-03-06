// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <glib-2.0/gio/gvfs.h>

int validate_struct__GVfsClass(struct _GVfsClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> is_active,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_file_for_path,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_file_for_uri,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_supported_uri_schemes,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> parse_name,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> local_file_add_info,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> add_writable_namespaces,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> local_file_set_attributes,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> local_file_removed,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> local_file_moved,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _g_reserved1,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _g_reserved2,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _g_reserved3,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _g_reserved4,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _g_reserved5,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _g_reserved6,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _g_reserved7,name ))
		failure = 1;
return failure;
}

