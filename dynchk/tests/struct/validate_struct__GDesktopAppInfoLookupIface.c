// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gio-unix-2.0/gio/gdesktopappinfo.h>

int validate_struct__GDesktopAppInfoLookupIface(struct _GDesktopAppInfoLookupIface  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> g_iface,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_default_for_uri_scheme,name ))
		failure = 1;
return failure;
}

