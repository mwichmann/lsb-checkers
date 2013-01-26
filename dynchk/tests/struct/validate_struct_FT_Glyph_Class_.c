// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <freetype/ftglyph.h>

int validate_struct_FT_Glyph_Class_(struct FT_Glyph_Class_  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> glyph_size,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> glyph_format,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> glyph_init,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> glyph_done,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> glyph_copy,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> glyph_transform,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> glyph_bbox,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> glyph_prepare,name ))
		failure = 1;
return failure;
}
