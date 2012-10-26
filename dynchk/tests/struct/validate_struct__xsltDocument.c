// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <libxslt/xsltInternals.h>

int validate_struct__xsltDocument(struct _xsltDocument  * input, char *name)
{
int failure = 0;
	if(validate_struct__xsltDocument(input-> next,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> main,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> doc,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> keys,name ))
		failure = 1;
	if(validate_struct__xsltDocument(input-> includes,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> preproc,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> nbKeysComputed,name ))
		failure = 1;
return failure;
}

