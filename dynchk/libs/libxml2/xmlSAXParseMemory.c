// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/parser.h>
#undef xmlSAXParseMemory
static xmlDocPtr(*funcptr) (xmlSAXHandlerPtr , const char * , int , int ) = 0;

extern int __lsb_check_params;
xmlDocPtr xmlSAXParseMemory (xmlSAXHandlerPtr arg0 , const char * arg1 , int arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	xmlDocPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlSAXParseMemory()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSAXParseMemory", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSAXParseMemory. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSAXParseMemory() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlSAXParseMemory - arg0 (sax)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlSAXParseMemory - arg1 (buffer)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlSAXParseMemory - arg1 (buffer)");
		validate_NULL_TYPETYPE(  arg2, "xmlSAXParseMemory - arg2 (size)");
		validate_NULL_TYPETYPE(  arg3, "xmlSAXParseMemory - arg3 (recovery)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

