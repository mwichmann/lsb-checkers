// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <sys/msg.h>

void validate_struct_msqid_ds(struct msqid_ds * input)
{
	validate_struct_ipc_perm(input->struct ipc_perm);
	validate_NULL_TYPETYPE(input->time_t);
	validate_NULL_TYPETYPE(input->unsigned long);
	validate_NULL_TYPETYPE(input->time_t);
	validate_NULL_TYPETYPE(input->unsigned long);
	validate_NULL_TYPETYPE(input->time_t);
	validate_NULL_TYPETYPE(input->unsigned long);
	validate_NULL_TYPETYPE(input->unsigned long);
	validate_NULL_TYPETYPE(input->msgqnum_t);
	validate_NULL_TYPETYPE(input->msglen_t);
	validate_NULL_TYPETYPE(input->pid_t);
	validate_NULL_TYPETYPE(input->pid_t);
	validate_NULL_TYPETYPE(input->unsigned long);
	validate_NULL_TYPETYPE(input->unsigned long);
}

