// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <signal.h>

void validate_struct_sigcontext(struct sigcontext  * input, char *name)
{
	validate_NULL_TYPETYPE(input->gs,name );
	validate_NULL_TYPETYPE(input->__gsh,name );
	validate_NULL_TYPETYPE(input->fs,name );
	validate_NULL_TYPETYPE(input->__fsh,name );
	validate_NULL_TYPETYPE(input->es,name );
	validate_NULL_TYPETYPE(input->__esh,name );
	validate_NULL_TYPETYPE(input->ds,name );
	validate_NULL_TYPETYPE(input->__dsh,name );
	validate_NULL_TYPETYPE(input->edi,name );
	validate_NULL_TYPETYPE(input->esi,name );
	validate_NULL_TYPETYPE(input->ebp,name );
	validate_NULL_TYPETYPE(input->esp,name );
	validate_NULL_TYPETYPE(input->ebx,name );
	validate_NULL_TYPETYPE(input->edx,name );
	validate_NULL_TYPETYPE(input->ecx,name );
	validate_NULL_TYPETYPE(input->eax,name );
	validate_NULL_TYPETYPE(input->trapno,name );
	validate_NULL_TYPETYPE(input->err,name );
	validate_NULL_TYPETYPE(input->eip,name );
	validate_NULL_TYPETYPE(input->cs,name );
	validate_NULL_TYPETYPE(input->__csh,name );
	validate_NULL_TYPETYPE(input->eflags,name );
	validate_NULL_TYPETYPE(input->esp_at_signal,name );
	validate_NULL_TYPETYPE(input->ss,name );
	validate_NULL_TYPETYPE(input->__ssh,name );
	validate_struct__fpstate(input->fpstate,name );
	validate_NULL_TYPETYPE(input->oldmask,name );
	validate_NULL_TYPETYPE(input->cr2,name );
}

