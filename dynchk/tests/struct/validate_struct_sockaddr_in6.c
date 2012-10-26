// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <netinet/in.h>

int validate_struct_sockaddr_in6(struct sockaddr_in6  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> sin6_family,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sin6_port,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sin6_flowinfo,name ))
		failure = 1;
	if(validate_struct_in6_addr( &(input-> sin6_addr),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sin6_scope_id,name ))
		failure = 1;
return failure;
}

