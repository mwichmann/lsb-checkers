// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlIO.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/parserInternals.h>
#undef xmlParseAttribute
static const xmlChar *(*funcptr) (xmlParserCtxtPtr , xmlChar * * ) = 0;

extern int __lsb_check_params;
const xmlChar * xmlParseAttribute (xmlParserCtxtPtr arg0 , xmlChar * * arg1 )
{
	int reset_flag = __lsb_check_params;
	const xmlChar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlParseAttribute()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlParseAttribute", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlParseAttribute. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlParseAttribute() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlParseAttribute - arg0 (ctxt)");
		if( arg1 ) {
		validate_RWaddress( arg1, "xmlParseAttribute - arg1 (value)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlParseAttribute - arg1 (value)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

