// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <nl_types.h>
#undef nl_langinfo
static char *(*funcptr) (nl_item ) = 0;

char * nl_langinfo (nl_item arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nl_langinfo");
	validate_NULL_TYPETYPE(arg0, "nl_langinfo");
	return funcptr(arg0);
}

char * lsb_nl_langinfo (nl_item arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nl_langinfo");
	return funcptr(arg0);
}

