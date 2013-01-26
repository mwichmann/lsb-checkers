// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/glu.h>
#undef gluDeleteTess
static void(*funcptr) (GLUtesselator * ) = 0;

extern int __lsb_check_params;
void gluDeleteTess (GLUtesselator * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gluDeleteTess()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gluDeleteTess");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gluDeleteTess. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gluDeleteTess() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gluDeleteTess - arg0 (tess)");
		}
		validate_NULL_TYPETYPE(  arg0, "gluDeleteTess - arg0 (tess)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}
