// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <libpng12/png.h>

int validate_struct_png_time_struct(struct png_time_struct  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> year,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> month,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> day,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> hour,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> minute,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> second,name ))
		failure = 1;
return failure;
}

