// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <glib-2.0/gio/gnetworkmonitor.h>

int validate_struct__GNetworkMonitorInterface(struct _GNetworkMonitorInterface  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> g_iface,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> network_changed,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> can_reach,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> can_reach_async,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> can_reach_finish,name ))
		failure = 1;
return failure;
}
