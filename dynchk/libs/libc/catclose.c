// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <nl_types.h>
#undef catclose
static int(*funcptr) (nl_catd ) = 0;

int catclose (nl_catd arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "catclose");
	validate_NULL_TYPETYPE(  arg0, "catclose - arg0");
	return funcptr(arg0);
}

int __lsb_catclose (nl_catd arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "catclose");
	return funcptr(arg0);
}

