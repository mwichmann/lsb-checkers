// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <libintl.h>
#undef bind_textdomain_codeset
static char *(*funcptr) (const char * , const char * ) = 0;

char * bind_textdomain_codeset (const char * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "bind_textdomain_codeset");
	validate_Rdaddress( arg0, "bind_textdomain_codeset - arg0");
	validate_NULL_TYPETYPE(  arg0, "bind_textdomain_codeset - arg0");
	validate_Rdaddress( arg1, "bind_textdomain_codeset - arg1");
	validate_NULL_TYPETYPE(  arg1, "bind_textdomain_codeset - arg1");
	return funcptr(arg0, arg1);
}

char * __lsb_bind_textdomain_codeset (const char * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "bind_textdomain_codeset");
	return funcptr(arg0, arg1);
}

