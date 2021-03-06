// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <netinet/icmp6.h>

int validate_struct_rr_pco_use(struct rr_pco_use  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> rpu_uselen,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rpu_keeplen,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rpu_ramask,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rpu_raflags,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rpu_vltime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rpu_pltime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rpu_flags,name ))
		failure = 1;
	if(validate_struct_in6_addr( &(input-> rpu_prefix),name ))
		failure = 1;
return failure;
}

