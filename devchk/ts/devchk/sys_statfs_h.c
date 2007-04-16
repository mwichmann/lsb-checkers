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
CheckTypeSize(struct statfs,64, 10319, 2);
CheckMemberSize(struct statfs,f_type,4,2,34498);
CheckOffset(struct statfs,f_type,0,2,34498);
CheckMemberSize(struct statfs,f_bsize,4,2,34499);
CheckOffset(struct statfs,f_bsize,4,2,34499);
CheckMemberSize(struct statfs,f_blocks,4,2,34500);
CheckOffset(struct statfs,f_blocks,8,2,34500);
CheckMemberSize(struct statfs,f_bfree,4,2,34501);
CheckOffset(struct statfs,f_bfree,12,2,34501);
CheckMemberSize(struct statfs,f_bavail,4,2,34502);
CheckOffset(struct statfs,f_bavail,16,2,34502);
CheckMemberSize(struct statfs,f_files,4,2,34503);
CheckOffset(struct statfs,f_files,20,2,34503);
CheckMemberSize(struct statfs,f_ffree,4,2,34504);
CheckOffset(struct statfs,f_ffree,24,2,34504);
CheckMemberSize(struct statfs,f_fsid,4,2,34505);
CheckOffset(struct statfs,f_fsid,28,2,34505);
CheckMemberSize(struct statfs,f_namelen,0,2,34506);
CheckOffset(struct statfs,f_namelen,36,2,34506);
CheckMemberSize(struct statfs,f_spare,0,2,34507);
CheckOffset(struct statfs,f_spare,40,2,34507);
#elif __ia64__
CheckTypeSize(struct statfs,120, 10319, 3);
Msg("Missing member data for statfs on IA64\n");
CheckOffset(struct statfs,f_type,0,3,34498);
CheckOffset(struct statfs,f_bsize,0,3,34499);
CheckOffset(struct statfs,f_blocks,0,3,34500);
CheckOffset(struct statfs,f_bfree,0,3,34501);
CheckOffset(struct statfs,f_bavail,0,3,34502);
CheckOffset(struct statfs,f_files,0,3,34503);
CheckOffset(struct statfs,f_ffree,0,3,34504);
CheckOffset(struct statfs,f_fsid,0,3,34505);
CheckOffset(struct statfs,f_namelen,0,3,34506);
CheckOffset(struct statfs,f_spare,0,3,34507);
#elif 1
CheckTypeSize(struct statfs,0, 10319, 1);
Msg("Missing member data for statfs on All\n");
CheckOffset(struct statfs,f_type,0,1,34498);
CheckOffset(struct statfs,f_bsize,0,1,34499);
CheckOffset(struct statfs,f_blocks,0,1,34500);
CheckOffset(struct statfs,f_bfree,0,1,34501);
CheckOffset(struct statfs,f_bavail,0,1,34502);
CheckOffset(struct statfs,f_files,0,1,34503);
CheckOffset(struct statfs,f_ffree,0,1,34504);
CheckOffset(struct statfs,f_fsid,0,1,34505);
CheckOffset(struct statfs,f_namelen,0,1,34506);
CheckOffset(struct statfs,f_spare,0,1,34507);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct statfs,64, 10319, 6);
Msg("Missing member data for statfs on PPC32\n");
CheckOffset(struct statfs,f_type,0,6,34498);
CheckOffset(struct statfs,f_bsize,0,6,34499);
CheckOffset(struct statfs,f_blocks,0,6,34500);
CheckOffset(struct statfs,f_bfree,0,6,34501);
CheckOffset(struct statfs,f_bavail,0,6,34502);
CheckOffset(struct statfs,f_files,0,6,34503);
CheckOffset(struct statfs,f_ffree,0,6,34504);
CheckOffset(struct statfs,f_fsid,0,6,34505);
CheckOffset(struct statfs,f_namelen,0,6,34506);
CheckOffset(struct statfs,f_spare,0,6,34507);
#elif __s390__ && !__s390x__
CheckTypeSize(struct statfs,64, 10319, 10);
Msg("Missing member data for statfs on S390\n");
CheckOffset(struct statfs,f_type,0,10,34498);
CheckOffset(struct statfs,f_bsize,0,10,34499);
CheckOffset(struct statfs,f_blocks,0,10,34500);
CheckOffset(struct statfs,f_bfree,0,10,34501);
CheckOffset(struct statfs,f_bavail,0,10,34502);
CheckOffset(struct statfs,f_files,0,10,34503);
CheckOffset(struct statfs,f_ffree,0,10,34504);
CheckOffset(struct statfs,f_fsid,0,10,34505);
CheckOffset(struct statfs,f_namelen,0,10,34506);
CheckOffset(struct statfs,f_spare,0,10,34507);
#elif __powerpc64__
CheckTypeSize(struct statfs,120, 10319, 9);
Msg("Missing member data for statfs on PPC64\n");
CheckOffset(struct statfs,f_type,0,9,34498);
CheckOffset(struct statfs,f_bsize,0,9,34499);
CheckOffset(struct statfs,f_blocks,0,9,34500);
CheckOffset(struct statfs,f_bfree,0,9,34501);
CheckOffset(struct statfs,f_bavail,0,9,34502);
CheckOffset(struct statfs,f_files,0,9,34503);
CheckOffset(struct statfs,f_ffree,0,9,34504);
CheckOffset(struct statfs,f_fsid,0,9,34505);
CheckOffset(struct statfs,f_namelen,0,9,34506);
CheckOffset(struct statfs,f_spare,0,9,34507);
#elif __x86_64__
CheckTypeSize(struct statfs,120, 10319, 11);
Msg("Missing member data for statfs on x86-64\n");
CheckOffset(struct statfs,f_type,0,11,34498);
CheckOffset(struct statfs,f_bsize,0,11,34499);
CheckOffset(struct statfs,f_blocks,0,11,34500);
CheckOffset(struct statfs,f_bfree,0,11,34501);
CheckOffset(struct statfs,f_bavail,0,11,34502);
CheckOffset(struct statfs,f_files,0,11,34503);
CheckOffset(struct statfs,f_ffree,0,11,34504);
CheckOffset(struct statfs,f_fsid,0,11,34505);
CheckOffset(struct statfs,f_namelen,0,11,34506);
CheckOffset(struct statfs,f_spare,0,11,34507);
#elif __s390x__
CheckTypeSize(struct statfs,120, 10319, 12);
Msg("Missing member data for statfs on S390X\n");
CheckOffset(struct statfs,f_type,0,12,34498);
CheckOffset(struct statfs,f_bsize,0,12,34499);
CheckOffset(struct statfs,f_blocks,0,12,34500);
CheckOffset(struct statfs,f_bfree,0,12,34501);
CheckOffset(struct statfs,f_bavail,0,12,34502);
CheckOffset(struct statfs,f_files,0,12,34503);
CheckOffset(struct statfs,f_ffree,0,12,34504);
CheckOffset(struct statfs,f_fsid,0,12,34505);
CheckOffset(struct statfs,f_namelen,0,12,34506);
CheckOffset(struct statfs,f_spare,0,12,34507);
#endif

#if __i386__
CheckTypeSize(struct statfs64,84, 10321, 2);
CheckMemberSize(struct statfs64,f_type,4,2,34508);
CheckOffset(struct statfs64,f_type,0,2,34508);
CheckMemberSize(struct statfs64,f_bsize,4,2,34509);
CheckOffset(struct statfs64,f_bsize,4,2,34509);
CheckMemberSize(struct statfs64,f_blocks,8,2,34510);
CheckOffset(struct statfs64,f_blocks,8,2,34510);
CheckMemberSize(struct statfs64,f_bfree,8,2,34511);
CheckOffset(struct statfs64,f_bfree,16,2,34511);
CheckMemberSize(struct statfs64,f_bavail,8,2,34512);
CheckOffset(struct statfs64,f_bavail,24,2,34512);
CheckMemberSize(struct statfs64,f_files,8,2,34513);
CheckOffset(struct statfs64,f_files,32,2,34513);
CheckMemberSize(struct statfs64,f_ffree,8,2,34514);
CheckOffset(struct statfs64,f_ffree,40,2,34514);
CheckMemberSize(struct statfs64,f_fsid,4,2,34515);
CheckOffset(struct statfs64,f_fsid,48,2,34515);
CheckMemberSize(struct statfs64,f_namelen,0,2,34516);
CheckOffset(struct statfs64,f_namelen,56,2,34516);
CheckMemberSize(struct statfs64,f_spare,0,2,34517);
CheckOffset(struct statfs64,f_spare,60,2,34517);
#elif __ia64__
CheckTypeSize(struct statfs64,120, 10321, 3);
Msg("Missing member data for statfs64 on IA64\n");
CheckOffset(struct statfs64,f_type,0,3,34508);
CheckOffset(struct statfs64,f_bsize,0,3,34509);
CheckOffset(struct statfs64,f_blocks,0,3,34510);
CheckOffset(struct statfs64,f_bfree,0,3,34511);
CheckOffset(struct statfs64,f_bavail,0,3,34512);
CheckOffset(struct statfs64,f_files,0,3,34513);
CheckOffset(struct statfs64,f_ffree,0,3,34514);
CheckOffset(struct statfs64,f_fsid,0,3,34515);
CheckOffset(struct statfs64,f_namelen,0,3,34516);
CheckOffset(struct statfs64,f_spare,0,3,34517);
#elif 1
CheckTypeSize(struct statfs64,0, 10321, 1);
Msg("Missing member data for statfs64 on All\n");
CheckOffset(struct statfs64,f_type,0,1,34508);
CheckOffset(struct statfs64,f_bsize,0,1,34509);
CheckOffset(struct statfs64,f_blocks,0,1,34510);
CheckOffset(struct statfs64,f_bfree,0,1,34511);
CheckOffset(struct statfs64,f_bavail,0,1,34512);
CheckOffset(struct statfs64,f_files,0,1,34513);
CheckOffset(struct statfs64,f_ffree,0,1,34514);
CheckOffset(struct statfs64,f_fsid,0,1,34515);
CheckOffset(struct statfs64,f_namelen,0,1,34516);
CheckOffset(struct statfs64,f_spare,0,1,34517);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct statfs64,84, 10321, 6);
Msg("Missing member data for statfs64 on PPC32\n");
CheckOffset(struct statfs64,f_type,0,6,34508);
CheckOffset(struct statfs64,f_bsize,0,6,34509);
CheckOffset(struct statfs64,f_blocks,0,6,34510);
CheckOffset(struct statfs64,f_bfree,0,6,34511);
CheckOffset(struct statfs64,f_bavail,0,6,34512);
CheckOffset(struct statfs64,f_files,0,6,34513);
CheckOffset(struct statfs64,f_ffree,0,6,34514);
CheckOffset(struct statfs64,f_fsid,0,6,34515);
CheckOffset(struct statfs64,f_namelen,0,6,34516);
CheckOffset(struct statfs64,f_spare,0,6,34517);
#elif __s390__ && !__s390x__
CheckTypeSize(struct statfs64,84, 10321, 10);
Msg("Missing member data for statfs64 on S390\n");
CheckOffset(struct statfs64,f_type,0,10,34508);
CheckOffset(struct statfs64,f_bsize,0,10,34509);
CheckOffset(struct statfs64,f_blocks,0,10,34510);
CheckOffset(struct statfs64,f_bfree,0,10,34511);
CheckOffset(struct statfs64,f_bavail,0,10,34512);
CheckOffset(struct statfs64,f_files,0,10,34513);
CheckOffset(struct statfs64,f_ffree,0,10,34514);
CheckOffset(struct statfs64,f_fsid,0,10,34515);
CheckOffset(struct statfs64,f_namelen,0,10,34516);
CheckOffset(struct statfs64,f_spare,0,10,34517);
#elif __powerpc64__
CheckTypeSize(struct statfs64,120, 10321, 9);
Msg("Missing member data for statfs64 on PPC64\n");
CheckOffset(struct statfs64,f_type,0,9,34508);
CheckOffset(struct statfs64,f_bsize,0,9,34509);
CheckOffset(struct statfs64,f_blocks,0,9,34510);
CheckOffset(struct statfs64,f_bfree,0,9,34511);
CheckOffset(struct statfs64,f_bavail,0,9,34512);
CheckOffset(struct statfs64,f_files,0,9,34513);
CheckOffset(struct statfs64,f_ffree,0,9,34514);
CheckOffset(struct statfs64,f_fsid,0,9,34515);
CheckOffset(struct statfs64,f_namelen,0,9,34516);
CheckOffset(struct statfs64,f_spare,0,9,34517);
#elif __x86_64__
CheckTypeSize(struct statfs64,120, 10321, 11);
Msg("Missing member data for statfs64 on x86-64\n");
CheckOffset(struct statfs64,f_type,0,11,34508);
CheckOffset(struct statfs64,f_bsize,0,11,34509);
CheckOffset(struct statfs64,f_blocks,0,11,34510);
CheckOffset(struct statfs64,f_bfree,0,11,34511);
CheckOffset(struct statfs64,f_bavail,0,11,34512);
CheckOffset(struct statfs64,f_files,0,11,34513);
CheckOffset(struct statfs64,f_ffree,0,11,34514);
CheckOffset(struct statfs64,f_fsid,0,11,34515);
CheckOffset(struct statfs64,f_namelen,0,11,34516);
CheckOffset(struct statfs64,f_spare,0,11,34517);
#elif __s390x__
CheckTypeSize(struct statfs64,120, 10321, 12);
Msg("Missing member data for statfs64 on S390X\n");
CheckOffset(struct statfs64,f_type,0,12,34508);
CheckOffset(struct statfs64,f_bsize,0,12,34509);
CheckOffset(struct statfs64,f_blocks,0,12,34510);
CheckOffset(struct statfs64,f_bfree,0,12,34511);
CheckOffset(struct statfs64,f_bavail,0,12,34512);
CheckOffset(struct statfs64,f_files,0,12,34513);
CheckOffset(struct statfs64,f_ffree,0,12,34514);
CheckOffset(struct statfs64,f_fsid,0,12,34515);
CheckOffset(struct statfs64,f_namelen,0,12,34516);
CheckOffset(struct statfs64,f_spare,0,12,34517);
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
