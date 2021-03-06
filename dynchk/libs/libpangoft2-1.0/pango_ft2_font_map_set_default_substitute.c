// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pangoft2.h>
#include <glib-2.0/glib.h>
#undef pango_ft2_font_map_set_default_substitute
static void(*funcptr) (PangoFT2FontMap * , PangoFT2SubstituteFunc , gpointer , GDestroyNotify ) = 0;

extern int __lsb_check_params;
void pango_ft2_font_map_set_default_substitute (PangoFT2FontMap * arg0 , PangoFT2SubstituteFunc arg1 , gpointer arg2 , GDestroyNotify arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_ft2_font_map_set_default_substitute()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_ft2_font_map_set_default_substitute");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_ft2_font_map_set_default_substitute. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_ft2_font_map_set_default_substitute() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_ft2_font_map_set_default_substitute - arg0 (fontmap)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_ft2_font_map_set_default_substitute - arg0 (fontmap)");
		validate_NULL_TYPETYPE(  arg1, "pango_ft2_font_map_set_default_substitute - arg1 (func)");
		validate_NULL_TYPETYPE(  arg2, "pango_ft2_font_map_set_default_substitute - arg2 (data)");
		validate_NULL_TYPETYPE(  arg3, "pango_ft2_font_map_set_default_substitute - arg3 (notify)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

