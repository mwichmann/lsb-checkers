// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/parser.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/xmlIO.h>
#undef xmlParseBalancedChunkMemory
static int(*funcptr) (xmlDocPtr , xmlSAXHandlerPtr , void * , int , const xmlChar * , xmlNodePtr * ) = 0;

extern int __lsb_check_params;
int xmlParseBalancedChunkMemory (xmlDocPtr arg0 , xmlSAXHandlerPtr arg1 , void * arg2 , int arg3 , const xmlChar * arg4 , xmlNodePtr * arg5 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlParseBalancedChunkMemory()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlParseBalancedChunkMemory", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlParseBalancedChunkMemory. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlParseBalancedChunkMemory() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlParseBalancedChunkMemory - arg0 (doc)");
		validate_NULL_TYPETYPE(  arg1, "xmlParseBalancedChunkMemory - arg1 (sax)");
		if( arg2 ) {
		validate_RWaddress( arg2, "xmlParseBalancedChunkMemory - arg2 (user_data)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlParseBalancedChunkMemory - arg2 (user_data)");
		validate_NULL_TYPETYPE(  arg3, "xmlParseBalancedChunkMemory - arg3 (depth)");
		if( arg4 ) {
		validate_Rdaddress( arg4, "xmlParseBalancedChunkMemory - arg4 (string)");
		}
		validate_NULL_TYPETYPE(  arg4, "xmlParseBalancedChunkMemory - arg4 (string)");
		if( arg5 ) {
		validate_RWaddress( arg5, "xmlParseBalancedChunkMemory - arg5 (lst)");
		}
		validate_NULL_TYPETYPE(  arg5, "xmlParseBalancedChunkMemory - arg5 (lst)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}
