// Code generated by gen_tests.pl

#include <utmp.h>

void validate_struct_utmp(struct utmp * input)
{
	validate_NULL_TYPETYPE(input->ut_type);
	validate_NULL_TYPETYPE(input->ut_pid);
	validate_NULL_TYPETYPE(input->ut_line);
	validate_NULL_TYPETYPE(input->ut_id);
	validate_NULL_TYPETYPE(input->ut_user);
	validate_NULL_TYPETYPE(input->ut_host);
	validate_struct_exit_status(input->ut_exit);
	validate_NULL_TYPETYPE(input->ut_session);
	validate_struct_timeval(input->ut_tv);
	validate_NULL_TYPETYPE(input->ut_addr_v6);
	validate_NULL_TYPETYPE(input->__unused);
}

