// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glu.h>
#undef gluCheckExtension
static GLboolean(*funcptr) (const GLubyte * , const GLubyte * ) = 0;

extern int __lsb_check_params;
GLboolean gluCheckExtension (const GLubyte * arg0 , const GLubyte * arg1 )
{
	int reset_flag = __lsb_check_params;
	GLboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gluCheckExtension()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gluCheckExtension");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gluCheckExtension. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gluCheckExtension() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gluCheckExtension - arg0 (extName)");
		}
		validate_NULL_TYPETYPE(  arg0, "gluCheckExtension - arg0 (extName)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gluCheckExtension - arg1 (extString)");
		}
		validate_NULL_TYPETYPE(  arg1, "gluCheckExtension - arg1 (extString)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

