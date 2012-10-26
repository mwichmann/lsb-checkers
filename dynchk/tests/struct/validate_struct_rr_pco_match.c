// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <netinet/icmp6.h>

int validate_struct_rr_pco_match(struct rr_pco_match  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> rpm_code,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rpm_len,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rpm_ordinal,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rpm_matchlen,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rpm_minlen,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rpm_maxlen,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rpm_reserved,name ))
		failure = 1;
	if(validate_struct_in6_addr( &(input-> rpm_prefix),name ))
		failure = 1;
return failure;
}

