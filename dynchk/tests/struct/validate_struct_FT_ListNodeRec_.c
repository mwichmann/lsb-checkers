// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <freetype/fttypes.h>

int validate_struct_FT_ListNodeRec_(struct FT_ListNodeRec_  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> prev,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> next,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> data,name ))
		failure = 1;
return failure;
}

