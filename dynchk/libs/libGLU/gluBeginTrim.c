// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/glu.h>
#undef gluBeginTrim
static void(*funcptr) (GLUnurbs * ) = 0;

extern int __lsb_check_params;
void gluBeginTrim (GLUnurbs * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gluBeginTrim()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gluBeginTrim");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gluBeginTrim. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gluBeginTrim() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gluBeginTrim - arg0 (nurb)");
		}
		validate_NULL_TYPETYPE(  arg0, "gluBeginTrim - arg0 (nurb)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

