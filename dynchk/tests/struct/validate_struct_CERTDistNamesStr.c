// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <nss3/certt.h>

int validate_struct_CERTDistNamesStr(struct CERTDistNamesStr  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> arena,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> nnames,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> names,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> head,name ))
		failure = 1;
return failure;
}

