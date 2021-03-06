// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_glyph_item_split
static PangoGlyphItem *(*funcptr) (PangoGlyphItem * , const char * , int ) = 0;

extern int __lsb_check_params;
PangoGlyphItem * pango_glyph_item_split (PangoGlyphItem * arg0 , const char * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	PangoGlyphItem * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_glyph_item_split()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_glyph_item_split");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_glyph_item_split. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_glyph_item_split() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_glyph_item_split - arg0 (orig)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_glyph_item_split - arg0 (orig)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "pango_glyph_item_split - arg1 (text)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_glyph_item_split - arg1 (text)");
		validate_NULL_TYPETYPE(  arg2, "pango_glyph_item_split - arg2 (split_index)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

