// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_glyph_item_apply_attrs
static GSList *(*funcptr) (PangoGlyphItem * , const char * , PangoAttrList * ) = 0;

extern int __lsb_check_params;
GSList * pango_glyph_item_apply_attrs (PangoGlyphItem * arg0 , const char * arg1 , PangoAttrList * arg2 )
{
	int reset_flag = __lsb_check_params;
	GSList * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_glyph_item_apply_attrs()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_glyph_item_apply_attrs");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_glyph_item_apply_attrs. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_glyph_item_apply_attrs() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_glyph_item_apply_attrs - arg0 (glyph_item)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_glyph_item_apply_attrs - arg0 (glyph_item)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "pango_glyph_item_apply_attrs - arg1 (text)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_glyph_item_apply_attrs - arg1 (text)");
		if( arg2 ) {
		validate_RWaddress( arg2, "pango_glyph_item_apply_attrs - arg2 (list)");
		}
		validate_NULL_TYPETYPE(  arg2, "pango_glyph_item_apply_attrs - arg2 (list)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

