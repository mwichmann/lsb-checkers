// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <rpc/rpc_msg.h>

int validate_struct_accepted_reply(struct accepted_reply  * input, char *name)
{
int failure = 0;
	if(validate_struct_opaque_auth( &(input-> ar_verf),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ar_stat,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->ru.AR_versions. low,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->ru.AR_versions. high,name ))
		failure = 1;
return failure;
	if(validate_NULL_TYPETYPE(input->ru.AR_results. where,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->ru.AR_results. proc,name ))
		failure = 1;
return failure;
return failure;
return failure;
}

