/*
 * Test of sys/statfs.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "sys/statfs.h"



#ifdef TET_TEST
void sys_statfs_h()
{
#else
int sys_statfs_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/statfs.h\n");
#endif

printf("Checking data structures in sys/statfs.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef NFS_SUPER_MAGIC
	CompareConstant(NFS_SUPER_MAGIC,0x6969,5026,architecture)
#else
Msg( "Error: Constant not found: NFS_SUPER_MAGIC\n");
cnt++;
#endif

#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __x86_64__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10319,0);
Msg("Find size of statfs (10319)\n");
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __x86_64__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10321,0);
Msg("Find size of statfs64 (10321)\n");
#endif

extern int fstatfs64_db(int, struct statfs64 *);
CheckInterfacedef(fstatfs64,fstatfs64_db);
extern int statfs64_db(const char *, struct stat64 *);
CheckInterfacedef(statfs64,statfs64_db);
extern int fstatfs_db(int, struct statfs *);
CheckInterfacedef(fstatfs,fstatfs_db);
extern int statfs_db(const char *, struct statfs *);
CheckInterfacedef(statfs,statfs_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/statfs.h\n\n",pcnt,cnt);
return cnt;
#endif

}
