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
	CompareConstant(NFS_SUPER_MAGIC,0x6969,5026,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: NFS_SUPER_MAGIC\n");
cnt++;
#endif

#endif

#if defined __i386__
CheckTypeSize(struct statfs,64, 10319, 2, 3.1, NULL, 0, NULL)
CheckMemberSize(struct statfs,f_type,4,2,34498)
CheckOffset(struct statfs,f_type,0,2,34498)
CheckMemberSize(struct statfs,f_bsize,4,2,34499)
CheckOffset(struct statfs,f_bsize,4,2,34499)
CheckMemberSize(struct statfs,f_blocks,4,2,34500)
CheckOffset(struct statfs,f_blocks,8,2,34500)
CheckMemberSize(struct statfs,f_bfree,4,2,34501)
CheckOffset(struct statfs,f_bfree,12,2,34501)
CheckMemberSize(struct statfs,f_bavail,4,2,34502)
CheckOffset(struct statfs,f_bavail,16,2,34502)
CheckMemberSize(struct statfs,f_files,4,2,34503)
CheckOffset(struct statfs,f_files,20,2,34503)
CheckMemberSize(struct statfs,f_ffree,4,2,34504)
CheckOffset(struct statfs,f_ffree,24,2,34504)
CheckMemberSize(struct statfs,f_fsid,8,2,34505)
CheckOffset(struct statfs,f_fsid,28,2,34505)
CheckMemberSize(struct statfs,f_namelen,4,2,34506)
CheckOffset(struct statfs,f_namelen,36,2,34506)
CheckMemberSize(struct statfs,f_spare,20,2,34507)
CheckOffset(struct statfs,f_spare,40,2,34507)
#elif defined __ia64__
CheckTypeSize(struct statfs,120, 10319, 3, 3.1, NULL, 0, NULL)
CheckMemberSize(struct statfs,f_bsize,8,3,34499)
CheckOffset(struct statfs,f_bsize,8,3,34499)
CheckMemberSize(struct statfs,f_blocks,8,3,34500)
CheckOffset(struct statfs,f_blocks,16,3,34500)
CheckMemberSize(struct statfs,f_bfree,8,3,34501)
CheckOffset(struct statfs,f_bfree,24,3,34501)
CheckMemberSize(struct statfs,f_bavail,8,3,34502)
CheckOffset(struct statfs,f_bavail,32,3,34502)
CheckMemberSize(struct statfs,f_files,8,3,34503)
CheckOffset(struct statfs,f_files,40,3,34503)
CheckMemberSize(struct statfs,f_ffree,8,3,34504)
CheckOffset(struct statfs,f_ffree,48,3,34504)
CheckMemberSize(struct statfs,f_fsid,8,3,34505)
CheckOffset(struct statfs,f_fsid,56,3,34505)
CheckMemberSize(struct statfs,f_namelen,8,3,34506)
CheckOffset(struct statfs,f_namelen,64,3,34506)
CheckMemberSize(struct statfs,f_spare,40,3,34507)
CheckOffset(struct statfs,f_spare,80,3,34507)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct statfs,64, 10319, 6, 3.1, NULL, 0, NULL)
CheckMemberSize(struct statfs,f_bsize,4,6,34499)
CheckOffset(struct statfs,f_bsize,4,6,34499)
CheckMemberSize(struct statfs,f_blocks,4,6,34500)
CheckOffset(struct statfs,f_blocks,8,6,34500)
CheckMemberSize(struct statfs,f_bfree,4,6,34501)
CheckOffset(struct statfs,f_bfree,12,6,34501)
CheckMemberSize(struct statfs,f_bavail,4,6,34502)
CheckOffset(struct statfs,f_bavail,16,6,34502)
CheckMemberSize(struct statfs,f_files,4,6,34503)
CheckOffset(struct statfs,f_files,20,6,34503)
CheckMemberSize(struct statfs,f_ffree,4,6,34504)
CheckOffset(struct statfs,f_ffree,24,6,34504)
CheckMemberSize(struct statfs,f_fsid,8,6,34505)
CheckOffset(struct statfs,f_fsid,28,6,34505)
CheckMemberSize(struct statfs,f_namelen,4,6,34506)
CheckOffset(struct statfs,f_namelen,36,6,34506)
CheckMemberSize(struct statfs,f_spare,20,6,34507)
CheckOffset(struct statfs,f_spare,44,6,34507)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct statfs,64, 10319, 10, 3.1, NULL, 0, NULL)
CheckMemberSize(struct statfs,f_bsize,4,10,34499)
CheckOffset(struct statfs,f_bsize,4,10,34499)
CheckMemberSize(struct statfs,f_blocks,4,10,34500)
CheckOffset(struct statfs,f_blocks,8,10,34500)
CheckMemberSize(struct statfs,f_bfree,4,10,34501)
CheckOffset(struct statfs,f_bfree,12,10,34501)
CheckMemberSize(struct statfs,f_bavail,4,10,34502)
CheckOffset(struct statfs,f_bavail,16,10,34502)
CheckMemberSize(struct statfs,f_files,4,10,34503)
CheckOffset(struct statfs,f_files,20,10,34503)
CheckMemberSize(struct statfs,f_ffree,4,10,34504)
CheckOffset(struct statfs,f_ffree,24,10,34504)
CheckMemberSize(struct statfs,f_fsid,8,10,34505)
CheckOffset(struct statfs,f_fsid,28,10,34505)
CheckMemberSize(struct statfs,f_namelen,4,10,34506)
CheckOffset(struct statfs,f_namelen,36,10,34506)
CheckMemberSize(struct statfs,f_spare,20,10,34507)
CheckOffset(struct statfs,f_spare,44,10,34507)
#elif defined __powerpc64__
CheckTypeSize(struct statfs,120, 10319, 9, 3.1, NULL, 0, NULL)
CheckMemberSize(struct statfs,f_bsize,8,9,34499)
CheckOffset(struct statfs,f_bsize,8,9,34499)
CheckMemberSize(struct statfs,f_blocks,8,9,34500)
CheckOffset(struct statfs,f_blocks,16,9,34500)
CheckMemberSize(struct statfs,f_bfree,8,9,34501)
CheckOffset(struct statfs,f_bfree,24,9,34501)
CheckMemberSize(struct statfs,f_bavail,8,9,34502)
CheckOffset(struct statfs,f_bavail,32,9,34502)
CheckMemberSize(struct statfs,f_files,8,9,34503)
CheckOffset(struct statfs,f_files,40,9,34503)
CheckMemberSize(struct statfs,f_ffree,8,9,34504)
CheckOffset(struct statfs,f_ffree,48,9,34504)
CheckMemberSize(struct statfs,f_fsid,8,9,34505)
CheckOffset(struct statfs,f_fsid,56,9,34505)
CheckMemberSize(struct statfs,f_namelen,8,9,34506)
CheckOffset(struct statfs,f_namelen,64,9,34506)
CheckMemberSize(struct statfs,f_spare,40,9,34507)
CheckOffset(struct statfs,f_spare,80,9,34507)
#elif defined __x86_64__
CheckTypeSize(struct statfs,120, 10319, 11, 3.1, NULL, 0, NULL)
CheckMemberSize(struct statfs,f_bsize,8,11,34499)
CheckOffset(struct statfs,f_bsize,8,11,34499)
CheckMemberSize(struct statfs,f_blocks,8,11,34500)
CheckOffset(struct statfs,f_blocks,16,11,34500)
CheckMemberSize(struct statfs,f_bfree,8,11,34501)
CheckOffset(struct statfs,f_bfree,24,11,34501)
CheckMemberSize(struct statfs,f_bavail,8,11,34502)
CheckOffset(struct statfs,f_bavail,32,11,34502)
CheckMemberSize(struct statfs,f_files,8,11,34503)
CheckOffset(struct statfs,f_files,40,11,34503)
CheckMemberSize(struct statfs,f_ffree,8,11,34504)
CheckOffset(struct statfs,f_ffree,48,11,34504)
CheckMemberSize(struct statfs,f_fsid,8,11,34505)
CheckOffset(struct statfs,f_fsid,56,11,34505)
CheckMemberSize(struct statfs,f_namelen,8,11,34506)
CheckOffset(struct statfs,f_namelen,64,11,34506)
CheckMemberSize(struct statfs,f_spare,40,11,34507)
CheckOffset(struct statfs,f_spare,80,11,34507)
#elif defined __s390x__
CheckTypeSize(struct statfs,120, 10319, 12, 3.1, NULL, 0, NULL)
CheckMemberSize(struct statfs,f_bsize,4,12,34499)
CheckOffset(struct statfs,f_bsize,4,12,34499)
CheckMemberSize(struct statfs,f_blocks,8,12,34500)
CheckOffset(struct statfs,f_blocks,8,12,34500)
CheckMemberSize(struct statfs,f_bfree,8,12,34501)
CheckOffset(struct statfs,f_bfree,16,12,34501)
CheckMemberSize(struct statfs,f_bavail,8,12,34502)
CheckOffset(struct statfs,f_bavail,24,12,34502)
CheckMemberSize(struct statfs,f_files,8,12,34503)
CheckOffset(struct statfs,f_files,32,12,34503)
CheckMemberSize(struct statfs,f_ffree,8,12,34504)
CheckOffset(struct statfs,f_ffree,40,12,34504)
CheckMemberSize(struct statfs,f_fsid,8,12,34505)
CheckOffset(struct statfs,f_fsid,48,12,34505)
CheckMemberSize(struct statfs,f_namelen,4,12,34506)
CheckOffset(struct statfs,f_namelen,56,12,34506)
CheckMemberSize(struct statfs,f_spare,20,12,34507)
CheckOffset(struct statfs,f_spare,64,12,34507)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,0,NULL);\n",architecture,10319,0);
Msg("Find size of statfs (10319)\n");
#endif

#if defined __i386__
CheckTypeSize(struct statfs64,84, 10321, 2, 3.1, NULL, 0, NULL)
CheckMemberSize(struct statfs64,f_type,4,2,34508)
CheckOffset(struct statfs64,f_type,0,2,34508)
CheckMemberSize(struct statfs64,f_bsize,4,2,34509)
CheckOffset(struct statfs64,f_bsize,4,2,34509)
CheckMemberSize(struct statfs64,f_blocks,8,2,34510)
CheckOffset(struct statfs64,f_blocks,8,2,34510)
CheckMemberSize(struct statfs64,f_bfree,8,2,34511)
CheckOffset(struct statfs64,f_bfree,16,2,34511)
CheckMemberSize(struct statfs64,f_bavail,8,2,34512)
CheckOffset(struct statfs64,f_bavail,24,2,34512)
CheckMemberSize(struct statfs64,f_files,8,2,34513)
CheckOffset(struct statfs64,f_files,32,2,34513)
CheckMemberSize(struct statfs64,f_ffree,8,2,34514)
CheckOffset(struct statfs64,f_ffree,40,2,34514)
CheckMemberSize(struct statfs64,f_fsid,8,2,34515)
CheckOffset(struct statfs64,f_fsid,48,2,34515)
CheckMemberSize(struct statfs64,f_namelen,4,2,34516)
CheckOffset(struct statfs64,f_namelen,56,2,34516)
CheckMemberSize(struct statfs64,f_spare,20,2,34517)
CheckOffset(struct statfs64,f_spare,64,2,34517)
#elif defined __ia64__
CheckTypeSize(struct statfs64,120, 10321, 3, 3.1, NULL, 0, NULL)
CheckMemberSize(struct statfs64,f_bsize,8,3,34509)
CheckOffset(struct statfs64,f_bsize,8,3,34509)
CheckMemberSize(struct statfs64,f_blocks,8,3,34510)
CheckOffset(struct statfs64,f_blocks,16,3,34510)
CheckMemberSize(struct statfs64,f_bfree,8,3,34511)
CheckOffset(struct statfs64,f_bfree,24,3,34511)
CheckMemberSize(struct statfs64,f_bavail,8,3,34512)
CheckOffset(struct statfs64,f_bavail,32,3,34512)
CheckMemberSize(struct statfs64,f_files,8,3,34513)
CheckOffset(struct statfs64,f_files,40,3,34513)
CheckMemberSize(struct statfs64,f_ffree,8,3,34514)
CheckOffset(struct statfs64,f_ffree,48,3,34514)
CheckMemberSize(struct statfs64,f_fsid,8,3,34515)
CheckOffset(struct statfs64,f_fsid,56,3,34515)
CheckMemberSize(struct statfs64,f_namelen,8,3,34516)
CheckOffset(struct statfs64,f_namelen,64,3,34516)
CheckMemberSize(struct statfs64,f_spare,40,3,34517)
CheckOffset(struct statfs64,f_spare,80,3,34517)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct statfs64,84, 10321, 6, 3.1, NULL, 0, NULL)
CheckMemberSize(struct statfs64,f_bsize,4,6,34509)
CheckOffset(struct statfs64,f_bsize,4,6,34509)
CheckMemberSize(struct statfs64,f_blocks,8,6,34510)
CheckOffset(struct statfs64,f_blocks,8,6,34510)
CheckMemberSize(struct statfs64,f_bfree,8,6,34511)
CheckOffset(struct statfs64,f_bfree,16,6,34511)
CheckMemberSize(struct statfs64,f_bavail,8,6,34512)
CheckOffset(struct statfs64,f_bavail,24,6,34512)
CheckMemberSize(struct statfs64,f_files,8,6,34513)
CheckOffset(struct statfs64,f_files,32,6,34513)
CheckMemberSize(struct statfs64,f_ffree,8,6,34514)
CheckOffset(struct statfs64,f_ffree,40,6,34514)
CheckMemberSize(struct statfs64,f_fsid,8,6,34515)
CheckOffset(struct statfs64,f_fsid,48,6,34515)
CheckMemberSize(struct statfs64,f_namelen,4,6,34516)
CheckOffset(struct statfs64,f_namelen,56,6,34516)
CheckMemberSize(struct statfs64,f_spare,20,6,34517)
CheckOffset(struct statfs64,f_spare,64,6,34517)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct statfs64,84, 10321, 10, 3.1, NULL, 0, NULL)
CheckMemberSize(struct statfs64,f_bsize,4,10,34509)
CheckOffset(struct statfs64,f_bsize,4,10,34509)
CheckMemberSize(struct statfs64,f_blocks,8,10,34510)
CheckOffset(struct statfs64,f_blocks,8,10,34510)
CheckMemberSize(struct statfs64,f_bfree,8,10,34511)
CheckOffset(struct statfs64,f_bfree,16,10,34511)
CheckMemberSize(struct statfs64,f_bavail,8,10,34512)
CheckOffset(struct statfs64,f_bavail,24,10,34512)
CheckMemberSize(struct statfs64,f_files,8,10,34513)
CheckOffset(struct statfs64,f_files,32,10,34513)
CheckMemberSize(struct statfs64,f_ffree,8,10,34514)
CheckOffset(struct statfs64,f_ffree,40,10,34514)
CheckMemberSize(struct statfs64,f_fsid,8,10,34515)
CheckOffset(struct statfs64,f_fsid,48,10,34515)
CheckMemberSize(struct statfs64,f_namelen,4,10,34516)
CheckOffset(struct statfs64,f_namelen,56,10,34516)
CheckMemberSize(struct statfs64,f_spare,20,10,34517)
CheckOffset(struct statfs64,f_spare,64,10,34517)
#elif defined __powerpc64__
CheckTypeSize(struct statfs64,120, 10321, 9, 3.1, NULL, 0, NULL)
CheckMemberSize(struct statfs64,f_bsize,8,9,34509)
CheckOffset(struct statfs64,f_bsize,8,9,34509)
CheckMemberSize(struct statfs64,f_blocks,8,9,34510)
CheckOffset(struct statfs64,f_blocks,16,9,34510)
CheckMemberSize(struct statfs64,f_bfree,8,9,34511)
CheckOffset(struct statfs64,f_bfree,24,9,34511)
CheckMemberSize(struct statfs64,f_bavail,8,9,34512)
CheckOffset(struct statfs64,f_bavail,32,9,34512)
CheckMemberSize(struct statfs64,f_files,8,9,34513)
CheckOffset(struct statfs64,f_files,40,9,34513)
CheckMemberSize(struct statfs64,f_ffree,8,9,34514)
CheckOffset(struct statfs64,f_ffree,48,9,34514)
CheckMemberSize(struct statfs64,f_fsid,8,9,34515)
CheckOffset(struct statfs64,f_fsid,56,9,34515)
CheckMemberSize(struct statfs64,f_namelen,8,9,34516)
CheckOffset(struct statfs64,f_namelen,64,9,34516)
CheckMemberSize(struct statfs64,f_spare,40,9,34517)
CheckOffset(struct statfs64,f_spare,80,9,34517)
#elif defined __x86_64__
CheckTypeSize(struct statfs64,120, 10321, 11, 3.1, NULL, 0, NULL)
CheckMemberSize(struct statfs64,f_bsize,8,11,34509)
CheckOffset(struct statfs64,f_bsize,8,11,34509)
CheckMemberSize(struct statfs64,f_blocks,8,11,34510)
CheckOffset(struct statfs64,f_blocks,16,11,34510)
CheckMemberSize(struct statfs64,f_bfree,8,11,34511)
CheckOffset(struct statfs64,f_bfree,24,11,34511)
CheckMemberSize(struct statfs64,f_bavail,8,11,34512)
CheckOffset(struct statfs64,f_bavail,32,11,34512)
CheckMemberSize(struct statfs64,f_files,8,11,34513)
CheckOffset(struct statfs64,f_files,40,11,34513)
CheckMemberSize(struct statfs64,f_ffree,8,11,34514)
CheckOffset(struct statfs64,f_ffree,48,11,34514)
CheckMemberSize(struct statfs64,f_fsid,8,11,34515)
CheckOffset(struct statfs64,f_fsid,56,11,34515)
CheckMemberSize(struct statfs64,f_namelen,8,11,34516)
CheckOffset(struct statfs64,f_namelen,64,11,34516)
CheckMemberSize(struct statfs64,f_spare,40,11,34517)
CheckOffset(struct statfs64,f_spare,80,11,34517)
#elif defined __s390x__
CheckTypeSize(struct statfs64,120, 10321, 12, 3.1, NULL, 0, NULL)
CheckMemberSize(struct statfs64,f_bsize,4,12,34509)
CheckOffset(struct statfs64,f_bsize,4,12,34509)
CheckMemberSize(struct statfs64,f_blocks,8,12,34510)
CheckOffset(struct statfs64,f_blocks,8,12,34510)
CheckMemberSize(struct statfs64,f_bfree,8,12,34511)
CheckOffset(struct statfs64,f_bfree,16,12,34511)
CheckMemberSize(struct statfs64,f_bavail,8,12,34512)
CheckOffset(struct statfs64,f_bavail,24,12,34512)
CheckMemberSize(struct statfs64,f_files,8,12,34513)
CheckOffset(struct statfs64,f_files,32,12,34513)
CheckMemberSize(struct statfs64,f_ffree,8,12,34514)
CheckOffset(struct statfs64,f_ffree,40,12,34514)
CheckMemberSize(struct statfs64,f_fsid,8,12,34515)
CheckOffset(struct statfs64,f_fsid,48,12,34515)
CheckMemberSize(struct statfs64,f_namelen,4,12,34516)
CheckOffset(struct statfs64,f_namelen,56,12,34516)
CheckMemberSize(struct statfs64,f_spare,20,12,34517)
CheckOffset(struct statfs64,f_spare,64,12,34517)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,0, NULL);\n",architecture,10321,0);
Msg("Find size of statfs64 (10321)\n");
#endif

extern int fstatfs64_db(int, struct statfs64 *);
CheckInterfacedef(fstatfs64,fstatfs64_db);
extern int statfs64_db(const char *, struct statfs64 *);
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
