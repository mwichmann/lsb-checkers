#ifndef TYPE_TESTS_H
#define TYPE_TESTS_H

// This file gets included by every wrapper function file.

#define _GNU_SOURCE //for RTLD_NEXT in dlfcn
#include <dlfcn.h>  //for dlsym() in wrapper functions
#include <sys/types.h>

extern void validate_pathname(const char *arg, const char *name);
extern void valid
ate_filemode(const mode_t arg, const char *name);
extern void validate_RWaddress(const void *address, const char *name);
extern void validate_filedescriptor(const int fd, const char *name);
extern void validate_ioctlreq(const int req, const char *name);

#include "struct_tests.h"
#endif

