// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_context_list_families
static void(*funcptr) (PangoContext * , PangoFontFamily * * * , int * ) = 0;

extern int __lsb_check_params;
void pango_context_list_families (PangoContext * arg0 , PangoFontFamily * * * arg1 , int * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_context_list_families()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_context_list_families");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_context_list_families. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_context_list_families() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_context_list_families - arg0 (context)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_context_list_families - arg0 (context)");
		if( arg1 ) {
		validate_RWaddress( arg1, "pango_context_list_families - arg1 (families)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_context_list_families - arg1 (families)");
		if( arg2 ) {
		validate_RWaddress( arg2, "pango_context_list_families - arg2 (n_families)");
		}
		validate_NULL_TYPETYPE(  arg2, "pango_context_list_families - arg2 (n_families)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

