// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <netinet/in.h>

int validate_struct_ipv6_mreq(struct ipv6_mreq  * input, char *name)
{
int failure = 0;
	if(validate_struct_in6_addr( &(input-> ipv6mr_multiaddr),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ipv6mr_interface,name ))
		failure = 1;
return failure;
}

