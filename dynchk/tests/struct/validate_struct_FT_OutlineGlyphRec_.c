// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <freetype/ftglyph.h>

int validate_struct_FT_OutlineGlyphRec_(struct FT_OutlineGlyphRec_  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> root,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> outline,name ))
		failure = 1;
return failure;
}

