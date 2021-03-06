// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/cups.h>
#undef cupsParseOptions
static int(*funcptr) (const char * , int , cups_option_t * * ) = 0;

extern int __lsb_check_params;
int cupsParseOptions (const char * arg0 , int arg1 , cups_option_t * * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for cupsParseOptions()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cupsParseOptions");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cupsParseOptions. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cupsParseOptions() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "cupsParseOptions - arg0 (arg)");
		}
		validate_NULL_TYPETYPE(  arg0, "cupsParseOptions - arg0 (arg)");
		validate_NULL_TYPETYPE(  arg1, "cupsParseOptions - arg1 (num_options)");
		if( arg2 ) {
		validate_RWaddress( arg2, "cupsParseOptions - arg2 (options)");
		}
		validate_NULL_TYPETYPE(  arg2, "cupsParseOptions - arg2 (options)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

