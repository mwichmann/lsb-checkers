// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/cups.h>
#include <cups/http.h>
#undef httpSetField
static void(*funcptr) (http_t * , http_field_t , const char * ) = 0;

extern int __lsb_check_params;
void httpSetField (http_t * arg0 , http_field_t arg1 , const char * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for httpSetField()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "httpSetField");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load httpSetField. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "httpSetField() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "httpSetField - arg0 (http)");
		}
		validate_NULL_TYPETYPE(  arg0, "httpSetField - arg0 (http)");
		validate_NULL_TYPETYPE(  arg1, "httpSetField - arg1 (field)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "httpSetField - arg2 (value)");
		}
		validate_NULL_TYPETYPE(  arg2, "httpSetField - arg2 (value)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

