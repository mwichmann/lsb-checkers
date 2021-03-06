// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/ipp.h>
#undef ippDelete
static void(*funcptr) (ipp_t * ) = 0;

extern int __lsb_check_params;
void ippDelete (ipp_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for ippDelete()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ippDelete");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load ippDelete. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ippDelete() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "ippDelete - arg0 (ipp)");
		}
		validate_NULL_TYPETYPE(  arg0, "ippDelete - arg0 (ipp)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

