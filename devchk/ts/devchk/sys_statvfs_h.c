/*
 * Test of sys/statvfs.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/statvfs.h\n");
#endif

#ifdef __i386__
CheckTypeSize(struct statvfs,72, 10323, 2)
CheckOffset(struct statvfs,f_bsize,0,2,34518)
CheckOffset(struct statvfs,f_frsize,4,2,34519)
CheckOffset(struct statvfs,f_blocks,8,2,34520)
CheckOffset(struct statvfs,f_bfree,12,2,34521)
CheckOffset(struct statvfs,f_bavail,16,2,34522)
CheckOffset(struct statvfs,f_files,20,2,34523)
CheckOffset(struct statvfs,f_ffree,24,2,34524)
CheckOffset(struct statvfs,f_favail,28,2,34525)
CheckOffset(struct statvfs,f_fsid,32,2,34526)
CheckOffset(struct statvfs,__f_unused,36,2,34527)
CheckOffset(struct statvfs,f_flag,40,2,34528)
CheckOffset(struct statvfs,f_namemax,44,2,34529)
CheckOffset(struct statvfs,__f_spare,48,2,34530)
#elif __ia64__
CheckTypeSize(struct statvfs,112, 10323, 3)
#elif __s390__
CheckTypeSize(struct statvfs,0, 10323, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10323,0);
Msg("Find size of statvfs (10323)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct statvfs64,96, 10325, 2)
CheckOffset(struct statvfs64,f_bsize,0,2,34532)
CheckOffset(struct statvfs64,f_frsize,4,2,34533)
CheckOffset(struct statvfs64,f_blocks,8,2,34534)
CheckOffset(struct statvfs64,f_bfree,16,2,34535)
CheckOffset(struct statvfs64,f_bavail,24,2,34536)
CheckOffset(struct statvfs64,f_files,32,2,34537)
CheckOffset(struct statvfs64,f_ffree,40,2,34538)
CheckOffset(struct statvfs64,f_favail,48,2,34539)
CheckOffset(struct statvfs64,f_fsid,56,2,34540)
CheckOffset(struct statvfs64,__f_unused,60,2,34541)
CheckOffset(struct statvfs64,f_flag,64,2,34542)
CheckOffset(struct statvfs64,f_namemax,68,2,34543)
CheckOffset(struct statvfs64,__f_spare,72,2,34544)
#elif __ia64__
CheckTypeSize(struct statvfs64,112, 10325, 3)
#elif __s390__
CheckTypeSize(struct statvfs64,0, 10325, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10325,0);
Msg("Find size of statvfs64 (10325)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/statvfs.h\n",cnt);
return cnt;
#endif

}
