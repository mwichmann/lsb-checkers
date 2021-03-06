// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlIO.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/parser.h>
#undef xmlCtxtReadIO
static xmlDocPtr(*funcptr) (xmlParserCtxtPtr , xmlInputReadCallback , xmlInputCloseCallback , void * , const char * , const char * , int ) = 0;

extern int __lsb_check_params;
xmlDocPtr xmlCtxtReadIO (xmlParserCtxtPtr arg0 , xmlInputReadCallback arg1 , xmlInputCloseCallback arg2 , void * arg3 , const char * arg4 , const char * arg5 , int arg6 )
{
	int reset_flag = __lsb_check_params;
	xmlDocPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlCtxtReadIO()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlCtxtReadIO", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlCtxtReadIO. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlCtxtReadIO() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlCtxtReadIO - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xmlCtxtReadIO - arg1 (ioread)");
		validate_NULL_TYPETYPE(  arg2, "xmlCtxtReadIO - arg2 (ioclose)");
		if( arg3 ) {
		validate_RWaddress( arg3, "xmlCtxtReadIO - arg3 (ioctx)");
		}
		validate_NULL_TYPETYPE(  arg3, "xmlCtxtReadIO - arg3 (ioctx)");
		if( arg4 ) {
		validate_Rdaddress( arg4, "xmlCtxtReadIO - arg4 (URL)");
		}
		validate_NULL_TYPETYPE(  arg4, "xmlCtxtReadIO - arg4 (URL)");
		if( arg5 ) {
		validate_Rdaddress( arg5, "xmlCtxtReadIO - arg5 (encoding)");
		}
		validate_NULL_TYPETYPE(  arg5, "xmlCtxtReadIO - arg5 (encoding)");
		validate_NULL_TYPETYPE(  arg6, "xmlCtxtReadIO - arg6 (options)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

