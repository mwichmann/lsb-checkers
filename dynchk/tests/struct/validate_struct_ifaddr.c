// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <net/if.h>

int validate_struct_ifaddr(struct ifaddr  * input, char *name)
{
int failure = 0;
	if(validate_struct_sockaddr( &(input-> ifa_addr),name ))
		failure = 1;
	if(validate_struct_sockaddr( &(input->ifa_ifu. ifu_broadaddr),name ))
		failure = 1;
	if(validate_struct_sockaddr( &(input->ifa_ifu. ifu_dstaddr),name ))
		failure = 1;
return failure;
	if(validate_NULL_TYPETYPE(input-> ifa_ifp,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ifa_next,name ))
		failure = 1;
return failure;
}

