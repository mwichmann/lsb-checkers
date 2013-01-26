// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <netinet/igmp.h>

int validate_struct_igmp(struct igmp  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> igmp_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> igmp_code,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> igmp_cksum,name ))
		failure = 1;
	if(validate_struct_in_addr( &(input-> igmp_group),name ))
		failure = 1;
return failure;
}
