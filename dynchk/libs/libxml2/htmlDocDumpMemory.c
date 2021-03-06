// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/HTMLtree.h>
#undef htmlDocDumpMemory
static void(*funcptr) (xmlDocPtr , xmlChar * * , int * ) = 0;

extern int __lsb_check_params;
void htmlDocDumpMemory (xmlDocPtr arg0 , xmlChar * * arg1 , int * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for htmlDocDumpMemory()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "htmlDocDumpMemory", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load htmlDocDumpMemory. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "htmlDocDumpMemory() - validating");
		validate_NULL_TYPETYPE(  arg0, "htmlDocDumpMemory - arg0 (cur)");
		if( arg1 ) {
		validate_RWaddress( arg1, "htmlDocDumpMemory - arg1 (mem)");
		}
		validate_NULL_TYPETYPE(  arg1, "htmlDocDumpMemory - arg1 (mem)");
		if( arg2 ) {
		validate_RWaddress( arg2, "htmlDocDumpMemory - arg2 (size)");
		}
		validate_NULL_TYPETYPE(  arg2, "htmlDocDumpMemory - arg2 (size)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

