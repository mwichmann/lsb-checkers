// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glSecondaryColor3uiv
static void(*funcptr) (const GLuint * ) = 0;

extern int __lsb_check_params;
void glSecondaryColor3uiv (const GLuint * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glSecondaryColor3uiv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glSecondaryColor3uiv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glSecondaryColor3uiv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glSecondaryColor3uiv() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "glSecondaryColor3uiv - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "glSecondaryColor3uiv - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

