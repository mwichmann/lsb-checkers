// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <libpng12/png.h>

int validate_struct_png_sPLT_entry_struct(struct png_sPLT_entry_struct  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> red,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> green,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> blue,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> alpha,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> frequency,name ))
		failure = 1;
return failure;
}
