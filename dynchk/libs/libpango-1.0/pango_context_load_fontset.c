// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_context_load_fontset
static PangoFontset *(*funcptr) (PangoContext * , const PangoFontDescription * , PangoLanguage * ) = 0;

extern int __lsb_check_params;
PangoFontset * pango_context_load_fontset (PangoContext * arg0 , const PangoFontDescription * arg1 , PangoLanguage * arg2 )
{
	int reset_flag = __lsb_check_params;
	PangoFontset * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_context_load_fontset()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_context_load_fontset");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_context_load_fontset. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_context_load_fontset() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_context_load_fontset - arg0 (context)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_context_load_fontset - arg0 (context)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "pango_context_load_fontset - arg1 (desc)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_context_load_fontset - arg1 (desc)");
		if( arg2 ) {
		validate_RWaddress( arg2, "pango_context_load_fontset - arg2 (language)");
		}
		validate_NULL_TYPETYPE(  arg2, "pango_context_load_fontset - arg2 (language)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

