// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/encoding.h>
#include <libxml2/libxml/xmlIO.h>
#undef xmlParserInputBufferCreateMem
static xmlParserInputBufferPtr(*funcptr) (const char * , int , xmlCharEncoding ) = 0;

extern int __lsb_check_params;
xmlParserInputBufferPtr xmlParserInputBufferCreateMem (const char * arg0 , int arg1 , xmlCharEncoding arg2 )
{
	int reset_flag = __lsb_check_params;
	xmlParserInputBufferPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlParserInputBufferCreateMem()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlParserInputBufferCreateMem", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlParserInputBufferCreateMem. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlParserInputBufferCreateMem() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xmlParserInputBufferCreateMem - arg0 (mem)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlParserInputBufferCreateMem - arg0 (mem)");
		validate_NULL_TYPETYPE(  arg1, "xmlParserInputBufferCreateMem - arg1 (size)");
		validate_NULL_TYPETYPE(  arg2, "xmlParserInputBufferCreateMem - arg2 (enc)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

