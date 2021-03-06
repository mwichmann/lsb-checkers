// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/cups.h>
#include <cups/ipp.h>
#undef cupsDoFileRequest
static ipp_t *(*funcptr) (http_t * , ipp_t * , const char * , const char * ) = 0;

extern int __lsb_check_params;
ipp_t * cupsDoFileRequest (http_t * arg0 , ipp_t * arg1 , const char * arg2 , const char * arg3 )
{
	int reset_flag = __lsb_check_params;
	ipp_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for cupsDoFileRequest()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cupsDoFileRequest");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cupsDoFileRequest. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cupsDoFileRequest() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cupsDoFileRequest - arg0 (http)");
		}
		validate_NULL_TYPETYPE(  arg0, "cupsDoFileRequest - arg0 (http)");
		if( arg1 ) {
		validate_RWaddress( arg1, "cupsDoFileRequest - arg1 (request)");
		}
		validate_NULL_TYPETYPE(  arg1, "cupsDoFileRequest - arg1 (request)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "cupsDoFileRequest - arg2 (resource)");
		}
		validate_NULL_TYPETYPE(  arg2, "cupsDoFileRequest - arg2 (resource)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "cupsDoFileRequest - arg3 (filename)");
		}
		validate_NULL_TYPETYPE(  arg3, "cupsDoFileRequest - arg3 (filename)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

