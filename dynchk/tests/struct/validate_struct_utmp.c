// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <utmp.h>

#if defined __i386__
int validate_struct_utmp(struct utmp  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ut_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_pid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_line,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_id,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_user,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_host,name ))
		failure = 1;
	if(validate_struct_exit_status( &(input-> ut_exit),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_session,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->ut_tv. tv_sec,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->ut_tv. tv_usec,name ))
		failure = 1;
return failure;
	if(validate_NULL_TYPETYPE(input-> ut_addr_v6,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused,name ))
		failure = 1;
return failure;
}

#endif /* defined __i386__ */
#if defined __ia64__
int validate_struct_utmp(struct utmp  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ut_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_pid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_line,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_id,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_user,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_host,name ))
		failure = 1;
	if(validate_struct_exit_status( &(input-> ut_exit),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_session,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->ut_tv. tv_sec,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->ut_tv. tv_usec,name ))
		failure = 1;
return failure;
	if(validate_NULL_TYPETYPE(input-> ut_addr_v6,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused,name ))
		failure = 1;
return failure;
}

#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
int validate_struct_utmp(struct utmp  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ut_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_pid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_line,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_id,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_user,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_host,name ))
		failure = 1;
	if(validate_struct_exit_status( &(input-> ut_exit),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_session,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->ut_tv. tv_sec,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->ut_tv. tv_usec,name ))
		failure = 1;
return failure;
	if(validate_NULL_TYPETYPE(input-> ut_addr_v6,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused,name ))
		failure = 1;
return failure;
}

#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
int validate_struct_utmp(struct utmp  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ut_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_pid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_line,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_id,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_user,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_host,name ))
		failure = 1;
	if(validate_struct_exit_status( &(input-> ut_exit),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_session,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->ut_tv. tv_sec,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->ut_tv. tv_usec,name ))
		failure = 1;
return failure;
	if(validate_NULL_TYPETYPE(input-> ut_addr_v6,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused,name ))
		failure = 1;
return failure;
}

#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
int validate_struct_utmp(struct utmp  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ut_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_pid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_line,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_id,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_user,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_host,name ))
		failure = 1;
	if(validate_struct_exit_status( &(input-> ut_exit),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_session,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->ut_tv. tv_sec,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->ut_tv. tv_usec,name ))
		failure = 1;
return failure;
	if(validate_NULL_TYPETYPE(input-> ut_addr_v6,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused,name ))
		failure = 1;
return failure;
}

#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
int validate_struct_utmp(struct utmp  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ut_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_pid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_line,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_id,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_user,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_host,name ))
		failure = 1;
	if(validate_struct_exit_status( &(input-> ut_exit),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_session,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->ut_tv. tv_sec,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->ut_tv. tv_usec,name ))
		failure = 1;
return failure;
	if(validate_NULL_TYPETYPE(input-> ut_addr_v6,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused,name ))
		failure = 1;
return failure;
}

#endif /* defined __x86_64__ */
#if defined __s390x__
int validate_struct_utmp(struct utmp  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ut_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_pid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_line,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_id,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_user,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_host,name ))
		failure = 1;
	if(validate_struct_exit_status( &(input-> ut_exit),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ut_session,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->ut_tv. tv_sec,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->ut_tv. tv_usec,name ))
		failure = 1;
return failure;
	if(validate_NULL_TYPETYPE(input-> ut_addr_v6,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused,name ))
		failure = 1;
return failure;
}

#endif /* defined __s390x__ */
