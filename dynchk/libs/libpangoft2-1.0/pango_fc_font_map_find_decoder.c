// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pangofc-fontmap.h>
#include <fontconfig/fontconfig.h>
#undef pango_fc_font_map_find_decoder
static PangoFcDecoder *(*funcptr) (PangoFcFontMap * , FcPattern * ) = 0;

extern int __lsb_check_params;
PangoFcDecoder * pango_fc_font_map_find_decoder (PangoFcFontMap * arg0 , FcPattern * arg1 )
{
	int reset_flag = __lsb_check_params;
	PangoFcDecoder * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_fc_font_map_find_decoder()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_fc_font_map_find_decoder");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_fc_font_map_find_decoder. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_fc_font_map_find_decoder() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_fc_font_map_find_decoder - arg0 (fcfontmap)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_fc_font_map_find_decoder - arg0 (fcfontmap)");
		if( arg1 ) {
		validate_RWaddress( arg1, "pango_fc_font_map_find_decoder - arg1 (pattern)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_fc_font_map_find_decoder - arg1 (pattern)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

