#include <stdlib.h>
#include "elfchk.h"
struct versym libutil_so_1[] = {
#if __i386__
	{"forkpty","GLIBC_2.0"},
#endif
#if __ia64__
	{"forkpty","GLIBC_2.0"},
#endif
#if __powerpc__ && !__powerpc64__
	{"forkpty","GLIBC_2.0"},
#endif
#if __powerpc64__
	{"forkpty","GLIBC_2.3"},
#endif
#if __s390__ && !__s390x__
	{"forkpty","GLIBC_2.0"},
#endif
#if __x86_64__
	{"forkpty","GLIBC_2.2.5"},
#endif
#if __s390x__
	{"forkpty","GLIBC_2.2"},
#endif
#if __i386__
	{"login","GLIBC_2.0"},
#endif
#if __ia64__
	{"login","GLIBC_2.0"},
#endif
#if __powerpc__ && !__powerpc64__
	{"login","GLIBC_2.0"},
#endif
#if __powerpc64__
	{"login","GLIBC_2.3"},
#endif
#if __s390__ && !__s390x__
	{"login","GLIBC_2.0"},
#endif
#if __x86_64__
	{"login","GLIBC_2.2.5"},
#endif
#if __s390x__
	{"login","GLIBC_2.2"},
#endif
#if __i386__
	{"login_tty","GLIBC_2.0"},
#endif
#if __ia64__
	{"login_tty","GLIBC_2.0"},
#endif
#if __powerpc__ && !__powerpc64__
	{"login_tty","GLIBC_2.0"},
#endif
#if __powerpc64__
	{"login_tty","GLIBC_2.3"},
#endif
#if __s390__ && !__s390x__
	{"login_tty","GLIBC_2.0"},
#endif
#if __x86_64__
	{"login_tty","GLIBC_2.2.5"},
#endif
#if __s390x__
	{"login_tty","GLIBC_2.2"},
#endif
#if __i386__
	{"logout","GLIBC_2.0"},
#endif
#if __ia64__
	{"logout","GLIBC_2.0"},
#endif
#if __powerpc__ && !__powerpc64__
	{"logout","GLIBC_2.0"},
#endif
#if __powerpc64__
	{"logout","GLIBC_2.3"},
#endif
#if __s390__ && !__s390x__
	{"logout","GLIBC_2.0"},
#endif
#if __x86_64__
	{"logout","GLIBC_2.2.5"},
#endif
#if __s390x__
	{"logout","GLIBC_2.2"},
#endif
#if __i386__
	{"logwtmp","GLIBC_2.0"},
#endif
#if __ia64__
	{"logwtmp","GLIBC_2.0"},
#endif
#if __powerpc__ && !__powerpc64__
	{"logwtmp","GLIBC_2.0"},
#endif
#if __powerpc64__
	{"logwtmp","GLIBC_2.3"},
#endif
#if __s390__ && !__s390x__
	{"logwtmp","GLIBC_2.0"},
#endif
#if __x86_64__
	{"logwtmp","GLIBC_2.2.5"},
#endif
#if __s390x__
	{"logwtmp","GLIBC_2.2"},
#endif
#if __i386__
	{"openpty","GLIBC_2.0"},
#endif
#if __ia64__
	{"openpty","GLIBC_2.0"},
#endif
#if __powerpc__ && !__powerpc64__
	{"openpty","GLIBC_2.0"},
#endif
#if __powerpc64__
	{"openpty","GLIBC_2.3"},
#endif
#if __s390__ && !__s390x__
	{"openpty","GLIBC_2.0"},
#endif
#if __x86_64__
	{"openpty","GLIBC_2.2.5"},
#endif
#if __s390x__
	{"openpty","GLIBC_2.2"},
#endif
	{0,0}};

struct classinfo *libutil_so_1_classinfo[] = {

	NULL	};
