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
#elif __s390__
CheckTypeSize(struct statvfs,72, 10323, 10)
Msg("Missing member data for statvfs on S390\n");
CheckOffset(struct statvfs,f_bsize,0,10,34518)
CheckOffset(struct statvfs,f_frsize,0,10,34519)
CheckOffset(struct statvfs,f_blocks,0,10,34520)
CheckOffset(struct statvfs,f_bfree,0,10,34521)
CheckOffset(struct statvfs,f_bavail,0,10,34522)
CheckOffset(struct statvfs,f_files,0,10,34523)
CheckOffset(struct statvfs,f_ffree,0,10,34524)
CheckOffset(struct statvfs,f_favail,0,10,34525)
CheckOffset(struct statvfs,f_fsid,0,10,34526)
CheckOffset(struct statvfs,__f_unused,0,10,34527)
CheckOffset(struct statvfs,f_flag,0,10,34528)
CheckOffset(struct statvfs,f_namemax,0,10,34529)
CheckOffset(struct statvfs,__f_spare,0,10,34530)
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
#elif __s390__
CheckTypeSize(struct statvfs64,96, 10325, 10)
Msg("Missing member data for statvfs64 on S390\n");
CheckOffset(struct statvfs64,f_bsize,0,10,34532)
CheckOffset(struct statvfs64,f_frsize,0,10,34533)
CheckOffset(struct statvfs64,f_blocks,0,10,34534)
CheckOffset(struct statvfs64,f_bfree,0,10,34535)
CheckOffset(struct statvfs64,f_bavail,0,10,34536)
CheckOffset(struct statvfs64,f_files,0,10,34537)
CheckOffset(struct statvfs64,f_ffree,0,10,34538)
CheckOffset(struct statvfs64,f_favail,0,10,34539)
CheckOffset(struct statvfs64,f_fsid,0,10,34540)
CheckOffset(struct statvfs64,__f_unused,0,10,34541)
CheckOffset(struct statvfs64,f_flag,0,10,34542)
CheckOffset(struct statvfs64,f_namemax,0,10,34543)
CheckOffset(struct statvfs64,__f_spare,0,10,34544)
#endif

#ifdef __ia64__
CheckTypeSize(struct statvfs,112, 10399, 3)
CheckOffset(struct statvfs,f_bsize,0,3,34688)
CheckOffset(struct statvfs,f_frsize,8,3,34689)
CheckOffset(struct statvfs,f_blocks,16,3,34690)
CheckOffset(struct statvfs,f_bfree,24,3,34691)
CheckOffset(struct statvfs,f_bavail,32,3,34692)
CheckOffset(struct statvfs,f_files,40,3,34693)
CheckOffset(struct statvfs,f_ffree,48,3,34694)
CheckOffset(struct statvfs,f_favail,56,3,34695)
CheckOffset(struct statvfs,f_fsid,64,3,34696)
CheckOffset(struct statvfs,f_flag,72,3,34697)
CheckOffset(struct statvfs,f_namemax,80,3,34698)
CheckOffset(struct statvfs,__f_spare,88,3,34699)
#endif

#ifdef __ia64__
CheckTypeSize(struct statvfs64,112, 10400, 3)
CheckOffset(struct statvfs64,f_bsize,0,3,34700)
CheckOffset(struct statvfs64,f_frsize,8,3,34701)
CheckOffset(struct statvfs64,f_blocks,16,3,34702)
CheckOffset(struct statvfs64,f_bfree,24,3,34703)
CheckOffset(struct statvfs64,f_bavail,32,3,34704)
CheckOffset(struct statvfs64,f_files,40,3,34705)
CheckOffset(struct statvfs64,f_ffree,48,3,34706)
CheckOffset(struct statvfs64,f_favail,56,3,34707)
CheckOffset(struct statvfs64,f_fsid,64,3,34708)
CheckOffset(struct statvfs64,f_flag,72,3,34709)
CheckOffset(struct statvfs64,f_namemax,80,3,34710)
CheckOffset(struct statvfs64,__f_spare,88,3,34711)
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
