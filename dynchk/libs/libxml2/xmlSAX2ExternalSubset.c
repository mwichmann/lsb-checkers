// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/SAX2.h>
#undef xmlSAX2ExternalSubset
static void(*funcptr) (void * , const xmlChar * , const xmlChar * , const xmlChar * ) = 0;

extern int __lsb_check_params;
void xmlSAX2ExternalSubset (void * arg0 , const xmlChar * arg1 , const xmlChar * arg2 , const xmlChar * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlSAX2ExternalSubset()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSAX2ExternalSubset", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSAX2ExternalSubset. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSAX2ExternalSubset() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xmlSAX2ExternalSubset - arg0 (ctx)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlSAX2ExternalSubset - arg0 (ctx)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlSAX2ExternalSubset - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlSAX2ExternalSubset - arg1 (name)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "xmlSAX2ExternalSubset - arg2 (ExternalID)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlSAX2ExternalSubset - arg2 (ExternalID)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "xmlSAX2ExternalSubset - arg3 (SystemID)");
		}
		validate_NULL_TYPETYPE(  arg3, "xmlSAX2ExternalSubset - arg3 (SystemID)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

