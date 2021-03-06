// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/HTMLtree.h>
#undef htmlNodeDumpFormatOutput
static void(*funcptr) (xmlOutputBufferPtr , xmlDocPtr , xmlNodePtr , const char * , int ) = 0;

extern int __lsb_check_params;
void htmlNodeDumpFormatOutput (xmlOutputBufferPtr arg0 , xmlDocPtr arg1 , xmlNodePtr arg2 , const char * arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for htmlNodeDumpFormatOutput()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "htmlNodeDumpFormatOutput", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load htmlNodeDumpFormatOutput. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "htmlNodeDumpFormatOutput() - validating");
		validate_NULL_TYPETYPE(  arg0, "htmlNodeDumpFormatOutput - arg0 (buf)");
		validate_NULL_TYPETYPE(  arg1, "htmlNodeDumpFormatOutput - arg1 (doc)");
		validate_NULL_TYPETYPE(  arg2, "htmlNodeDumpFormatOutput - arg2 (cur)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "htmlNodeDumpFormatOutput - arg3 (encoding)");
		}
		validate_NULL_TYPETYPE(  arg3, "htmlNodeDumpFormatOutput - arg3 (encoding)");
		validate_NULL_TYPETYPE(  arg4, "htmlNodeDumpFormatOutput - arg4 (format)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

