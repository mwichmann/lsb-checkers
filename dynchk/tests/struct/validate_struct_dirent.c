// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <dirent.h>

void validate_struct_dirent(struct dirent  * input, char *name)
{
	validate_NULL_TYPETYPE(input->d_ino,name );
	validate_NULL_TYPETYPE(input->d_off,name );
	validate_NULL_TYPETYPE(input->d_reclen,name );
	validate_NULL_TYPETYPE(input->d_type,name );
	validate_NULL_TYPETYPE(input->d_name,name );
}

