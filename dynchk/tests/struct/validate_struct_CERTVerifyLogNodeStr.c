// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <nss3/certt.h>

int validate_struct_CERTVerifyLogNodeStr(struct CERTVerifyLogNodeStr  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> cert,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> error,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> depth,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> arg,name ))
		failure = 1;
	if(validate_struct_CERTVerifyLogNodeStr(input-> next,name ))
		failure = 1;
	if(validate_struct_CERTVerifyLogNodeStr(input-> prev,name ))
		failure = 1;
return failure;
}

