// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlwriter.h>
#include <libxml2/libxml/xmlstring.h>
#include <stdarg.h>
#undef xmlTextWriterWriteVFormatElementNS
static int(*funcptr) (xmlTextWriterPtr , const xmlChar * , const xmlChar * , const xmlChar * , const char * , va_list ) = 0;

extern int __lsb_check_params;
int xmlTextWriterWriteVFormatElementNS (xmlTextWriterPtr arg0 , const xmlChar * arg1 , const xmlChar * arg2 , const xmlChar * arg3 , const char * arg4 , va_list arg5 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlTextWriterWriteVFormatElementNS()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlTextWriterWriteVFormatElementNS", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlTextWriterWriteVFormatElementNS. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlTextWriterWriteVFormatElementNS() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlTextWriterWriteVFormatElementNS - arg0 (writer)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlTextWriterWriteVFormatElementNS - arg1 (prefix)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlTextWriterWriteVFormatElementNS - arg1 (prefix)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "xmlTextWriterWriteVFormatElementNS - arg2 (name)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlTextWriterWriteVFormatElementNS - arg2 (name)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "xmlTextWriterWriteVFormatElementNS - arg3 (namespaceURI)");
		}
		validate_NULL_TYPETYPE(  arg3, "xmlTextWriterWriteVFormatElementNS - arg3 (namespaceURI)");
		if( arg4 ) {
		validate_Rdaddress( arg4, "xmlTextWriterWriteVFormatElementNS - arg4 (format)");
		}
		validate_NULL_TYPETYPE(  arg4, "xmlTextWriterWriteVFormatElementNS - arg4 (format)");
		validate_NULL_TYPETYPE(  arg5, "xmlTextWriterWriteVFormatElementNS - arg5 (argptr)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

