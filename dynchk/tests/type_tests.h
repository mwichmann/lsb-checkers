#ifndef TYPE_TESTS_H
#define TYPE_TESTS_H

// This file gets included by every wrapper function file.

#ifndef _GNU_SOURCE
#define _GNU_SOURCE //for RTLD_NEXT in dlfcn
#endif
#define validate_NULL_TYPETYPE(x, ...) //validate_NULL_TYPETYPE is a placeholder.

#include <dlfcn.h>  //for dlsym() in wrapper functions
#include <sys/types.h>
#include <netinet/in.h>
#include "header_list.h"

extern void validate_pathname(const char *arg, int, const char *name);
extern void validate_filemode(const mode_t arg, const char *name);
extern void validate_RWaddress(const void *address, const char *name);
extern void validate_Rdaddress(const void *address, const char *name);
extern void validate_filedescriptor(const int fd, const char *name);
extern void validate_ioctlreq(const int req, const char *name);
extern void validate_IPv4Address(struct in_addr *, const char *);
extern void validate_socketfamily(sa_family_t, const char *);
extern void validate_socketport(sa_family_t, const char *);

#include "struct_tests.h"
#endif

