// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <libintl.h>
#undef dcgettext
static char *(*funcptr) (const char * , const char * , int ) = 0;

char * dcgettext (const char * arg0 , const char * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dcgettext");
	validate_Rdaddress( arg0, "dcgettext - arg0");
	validate_NULL_TYPETYPE(  arg0, "dcgettext - arg0");
	validate_Rdaddress( arg1, "dcgettext - arg1");
	validate_NULL_TYPETYPE(  arg1, "dcgettext - arg1");
	validate_NULL_TYPETYPE(  arg2, "dcgettext - arg2");
	return funcptr(arg0, arg1, arg2);
}

char * __lsb_dcgettext (const char * arg0 , const char * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dcgettext");
	return funcptr(arg0, arg1, arg2);
}

