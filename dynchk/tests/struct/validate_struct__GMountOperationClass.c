// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <glib-2.0/gio/gmountoperation.h>

int validate_struct__GMountOperationClass(struct _GMountOperationClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ask_password,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ask_question,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> reply,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> aborted,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> show_processes,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> show_unmount_progress,name ))
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
	if(validate_NULL_TYPETYPE(input-> _g_reserved8,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _g_reserved9,name ))
		failure = 1;
return failure;
}

