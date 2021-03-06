// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_glyph_item_iter_init_end
static gboolean(*funcptr) (PangoGlyphItemIter * , PangoGlyphItem * , const char * ) = 0;

extern int __lsb_check_params;
gboolean pango_glyph_item_iter_init_end (PangoGlyphItemIter * arg0 , PangoGlyphItem * arg1 , const char * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_glyph_item_iter_init_end()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_glyph_item_iter_init_end");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_glyph_item_iter_init_end. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_glyph_item_iter_init_end() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_glyph_item_iter_init_end - arg0 (iter)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_glyph_item_iter_init_end - arg0 (iter)");
		if( arg1 ) {
		validate_RWaddress( arg1, "pango_glyph_item_iter_init_end - arg1 (glyph_item)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_glyph_item_iter_init_end - arg1 (glyph_item)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "pango_glyph_item_iter_init_end - arg2 (text)");
		}
		validate_NULL_TYPETYPE(  arg2, "pango_glyph_item_iter_init_end - arg2 (text)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

