// Code generated by gen_tests.pl

#include <sys/stat.h>

void validate_struct_stat(struct stat * input)
{
	validate_NULL_TYPETYPE(input->st_dev);
	validate_NULL_TYPETYPE(input->__pad1);
	validate_NULL_TYPETYPE(input->st_ino);
	validate_NULL_TYPETYPE(input->st_mode);
	validate_NULL_TYPETYPE(input->st_nlink);
	validate_NULL_TYPETYPE(input->st_uid);
	validate_NULL_TYPETYPE(input->st_gid);
	validate_NULL_TYPETYPE(input->st_rdev);
	validate_NULL_TYPETYPE(input->__pad2);
	validate_NULL_TYPETYPE(input->st_size);
	validate_NULL_TYPETYPE(input->st_blksize);
	validate_NULL_TYPETYPE(input->st_blocks);
	validate_struct_timespec(input->st_atim);
	validate_struct_timespec(input->st_mtim);
	validate_struct_timespec(input->st_ctim);
	validate_NULL_TYPETYPE(input->__unused4);
	validate_NULL_TYPETYPE(input->__unused5);
}

