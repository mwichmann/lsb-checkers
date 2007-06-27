/*
 * Test of sys/statvfs.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "sys/statvfs.h"



#ifdef TET_TEST
void sys_statvfs_h()
{
#else
int sys_statvfs_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/statvfs.h\n");
#endif

printf("Checking data structures in sys/statvfs.h\n");
#if defined __ia64__
#elif defined __i386__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __s390__ && !defined __s390x__
#elif defined __x86_64__
#endif

#if defined __i386__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __ia64__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __s390__ && !defined __s390x__
#elif defined __x86_64__
#endif

extern int fstatvfs_db(int, struct statvfs *);
CheckInterfacedef(fstatvfs,fstatvfs_db);
extern int fstatvfs64_db(int, struct statvfs64 *);
CheckInterfacedef(fstatvfs64,fstatvfs64_db);
extern int statvfs_db(const char *, struct statvfs *);
CheckInterfacedef(statvfs,statvfs_db);
extern int statvfs64_db(const char *, struct statvfs64 *);
CheckInterfacedef(statvfs64,statvfs64_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/statvfs.h\n\n",pcnt,cnt);
return cnt;
#endif

}
