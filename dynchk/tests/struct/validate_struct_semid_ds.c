// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <sys/sem.h>

void validate_struct_semid_ds(struct semid_ds  * input, char *name)
{
	validate_struct_ipc_perm( &(input->sem_perm),name );
	validate_NULL_TYPETYPE(input->sem_otime,name );
	validate_NULL_TYPETYPE(input->__unused1,name );
	validate_NULL_TYPETYPE(input->sem_ctime,name );
	validate_NULL_TYPETYPE(input->__unused2,name );
	validate_NULL_TYPETYPE(input->sem_nsems,name );
	validate_NULL_TYPETYPE(input->__unused3,name );
	validate_NULL_TYPETYPE(input->__unused4,name );
}

