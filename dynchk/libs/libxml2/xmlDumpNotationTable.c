// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/valid.h>
#undef xmlDumpNotationTable
static void(*funcptr) (xmlBufferPtr , xmlNotationTablePtr ) = 0;

extern int __lsb_check_params;
void xmlDumpNotationTable (xmlBufferPtr arg0 , xmlNotationTablePtr arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlDumpNotationTable()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlDumpNotationTable", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlDumpNotationTable. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlDumpNotationTable() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlDumpNotationTable - arg0");
		validate_NULL_TYPETYPE(  arg1, "xmlDumpNotationTable - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
