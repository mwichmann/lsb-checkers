// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <rpc/rpc_msg.h>

int validate_struct_rpc_msg(struct rpc_msg  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> rm_xid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rm_direction,name ))
		failure = 1;
	if(validate_struct_call_body( &(input->ru. RM_cmb),name ))
		failure = 1;
	if(validate_struct_reply_body( &(input->ru. RM_rmb),name ))
		failure = 1;
return failure;
return failure;
}

