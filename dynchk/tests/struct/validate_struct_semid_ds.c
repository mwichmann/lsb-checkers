// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <sys/sem.h>

#if defined __i386__
int validate_struct_semid_ds(struct semid_ds  * input, char *name)
{
int failure = 0;
	if(validate_struct_ipc_perm( &(input-> sem_perm),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_otime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused1,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_ctime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused2,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_nsems,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused3,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused4,name ))
		failure = 1;
return failure;
}

#endif /* defined __i386__ */
#if defined __ia64__
int validate_struct_semid_ds(struct semid_ds  * input, char *name)
{
int failure = 0;
	if(validate_struct_ipc_perm( &(input-> sem_perm),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_otime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused1,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_ctime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused2,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_nsems,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused3,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused4,name ))
		failure = 1;
return failure;
}

#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
int validate_struct_semid_ds(struct semid_ds  * input, char *name)
{
int failure = 0;
	if(validate_struct_ipc_perm( &(input-> sem_perm),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_otime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused1,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_ctime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused2,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_nsems,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused3,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused4,name ))
		failure = 1;
return failure;
}

#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
int validate_struct_semid_ds(struct semid_ds  * input, char *name)
{
int failure = 0;
	if(validate_struct_ipc_perm( &(input-> sem_perm),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_otime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused1,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_ctime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused2,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_nsems,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused3,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused4,name ))
		failure = 1;
return failure;
}

#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
int validate_struct_semid_ds(struct semid_ds  * input, char *name)
{
int failure = 0;
	if(validate_struct_ipc_perm( &(input-> sem_perm),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_otime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused1,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_ctime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused2,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_nsems,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused3,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused4,name ))
		failure = 1;
return failure;
}

#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
int validate_struct_semid_ds(struct semid_ds  * input, char *name)
{
int failure = 0;
	if(validate_struct_ipc_perm( &(input-> sem_perm),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_otime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused1,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_ctime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused2,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_nsems,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused3,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused4,name ))
		failure = 1;
return failure;
}

#endif /* defined __x86_64__ */
#if defined __s390x__
int validate_struct_semid_ds(struct semid_ds  * input, char *name)
{
int failure = 0;
	if(validate_struct_ipc_perm( &(input-> sem_perm),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_otime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused1,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_ctime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused2,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sem_nsems,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused3,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused4,name ))
		failure = 1;
return failure;
}

#endif /* defined __s390x__ */
