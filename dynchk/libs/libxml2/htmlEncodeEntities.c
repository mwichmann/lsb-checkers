// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/HTMLparser.h>
#undef htmlEncodeEntities
static int(*funcptr) (unsigned char * , int * , const unsigned char * , int * , int ) = 0;

extern int __lsb_check_params;
int htmlEncodeEntities (unsigned char * arg0 , int * arg1 , const unsigned char * arg2 , int * arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for htmlEncodeEntities()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "htmlEncodeEntities", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load htmlEncodeEntities. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "htmlEncodeEntities() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "htmlEncodeEntities - arg0 (out)");
		}
		validate_NULL_TYPETYPE(  arg0, "htmlEncodeEntities - arg0 (out)");
		if( arg1 ) {
		validate_RWaddress( arg1, "htmlEncodeEntities - arg1 (outlen)");
		}
		validate_NULL_TYPETYPE(  arg1, "htmlEncodeEntities - arg1 (outlen)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "htmlEncodeEntities - arg2 (in)");
		}
		validate_NULL_TYPETYPE(  arg2, "htmlEncodeEntities - arg2 (in)");
		if( arg3 ) {
		validate_RWaddress( arg3, "htmlEncodeEntities - arg3 (inlen)");
		}
		validate_NULL_TYPETYPE(  arg3, "htmlEncodeEntities - arg3 (inlen)");
		validate_NULL_TYPETYPE(  arg4, "htmlEncodeEntities - arg4 (quoteChar)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

