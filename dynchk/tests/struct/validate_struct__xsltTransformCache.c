// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <libxslt/xsltInternals.h>

int validate_struct__xsltTransformCache(struct _xsltTransformCache  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> RVT,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> nbRVT,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> stackItems,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> nbStackItems,name ))
		failure = 1;
return failure;
}

