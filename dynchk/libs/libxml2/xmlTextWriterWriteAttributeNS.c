// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlwriter.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlTextWriterWriteAttributeNS
static int(*funcptr) (xmlTextWriterPtr , const xmlChar * , const xmlChar * , const xmlChar * , const xmlChar * ) = 0;

extern int __lsb_check_params;
int xmlTextWriterWriteAttributeNS (xmlTextWriterPtr arg0 , const xmlChar * arg1 , const xmlChar * arg2 , const xmlChar * arg3 , const xmlChar * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlTextWriterWriteAttributeNS()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlTextWriterWriteAttributeNS", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlTextWriterWriteAttributeNS. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlTextWriterWriteAttributeNS() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlTextWriterWriteAttributeNS - arg0 (writer)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlTextWriterWriteAttributeNS - arg1 (prefix)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlTextWriterWriteAttributeNS - arg1 (prefix)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "xmlTextWriterWriteAttributeNS - arg2 (name)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlTextWriterWriteAttributeNS - arg2 (name)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "xmlTextWriterWriteAttributeNS - arg3 (namespaceURI)");
		}
		validate_NULL_TYPETYPE(  arg3, "xmlTextWriterWriteAttributeNS - arg3 (namespaceURI)");
		if( arg4 ) {
		validate_Rdaddress( arg4, "xmlTextWriterWriteAttributeNS - arg4 (content)");
		}
		validate_NULL_TYPETYPE(  arg4, "xmlTextWriterWriteAttributeNS - arg4 (content)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

