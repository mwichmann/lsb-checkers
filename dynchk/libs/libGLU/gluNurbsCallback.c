// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/glu.h>
#include <GL/gl.h>
#undef gluNurbsCallback
static void(*funcptr) (GLUnurbs * , GLenum , _GLUfuncptr ) = 0;

extern int __lsb_check_params;
void gluNurbsCallback (GLUnurbs * arg0 , GLenum arg1 , _GLUfuncptr arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gluNurbsCallback()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gluNurbsCallback");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gluNurbsCallback. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gluNurbsCallback() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gluNurbsCallback - arg0 (nurb)");
		}
		validate_NULL_TYPETYPE(  arg0, "gluNurbsCallback - arg0 (nurb)");
		validate_NULL_TYPETYPE(  arg1, "gluNurbsCallback - arg1 (which)");
		validate_NULL_TYPETYPE(  arg2, "gluNurbsCallback - arg2 (CallBackFunc)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}
