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
Msg("Missing member data for statfs on IA32\n");
CheckOffset(struct statfs,f_type,0,2,63851)
CheckOffset(struct statfs,f_bsize,0,2,63858)
CheckOffset(struct statfs,f_blocks,0,2,63865)
CheckOffset(struct statfs,f_bfree,0,2,63872)
CheckOffset(struct statfs,f_bavail,0,2,63879)
CheckOffset(struct statfs,f_files,0,2,63886)
CheckOffset(struct statfs,f_ffree,0,2,63893)
CheckOffset(struct statfs,f_fsid,0,2,63900)
CheckOffset(struct statfs,f_namelen,0,2,63907)
CheckOffset(struct statfs,f_spare,0,2,63914)
#elif defined __ia64__
CheckTypeSize(struct statfs,120, 10319, 3, 3.1, NULL, 0, NULL)
Msg("Missing member data for statfs on IA64\n");
CheckOffset(struct statfs,f_type,0,3,63852)
CheckOffset(struct statfs,f_bsize,0,3,63859)
CheckOffset(struct statfs,f_blocks,0,3,63866)
CheckOffset(struct statfs,f_bfree,0,3,63873)
CheckOffset(struct statfs,f_bavail,0,3,63880)
CheckOffset(struct statfs,f_files,0,3,63887)
CheckOffset(struct statfs,f_ffree,0,3,63894)
CheckOffset(struct statfs,f_fsid,0,3,63901)
CheckOffset(struct statfs,f_namelen,0,3,63908)
CheckOffset(struct statfs,f_spare,0,3,63915)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct statfs,64, 10319, 6, 3.1, NULL, 0, NULL)
Msg("Missing member data for statfs on PPC32\n");
CheckOffset(struct statfs,f_type,0,6,63853)
CheckOffset(struct statfs,f_bsize,0,6,63860)
CheckOffset(struct statfs,f_blocks,0,6,63867)
CheckOffset(struct statfs,f_bfree,0,6,63874)
CheckOffset(struct statfs,f_bavail,0,6,63881)
CheckOffset(struct statfs,f_files,0,6,63888)
CheckOffset(struct statfs,f_ffree,0,6,63895)
CheckOffset(struct statfs,f_fsid,0,6,63902)
CheckOffset(struct statfs,f_namelen,0,6,63909)
CheckOffset(struct statfs,f_spare,0,6,63916)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct statfs,64, 10319, 10, 3.1, NULL, 0, NULL)
Msg("Missing member data for statfs on S390\n");
CheckOffset(struct statfs,f_type,0,10,63855)
CheckOffset(struct statfs,f_bsize,0,10,63862)
CheckOffset(struct statfs,f_blocks,0,10,63869)
CheckOffset(struct statfs,f_bfree,0,10,63876)
CheckOffset(struct statfs,f_bavail,0,10,63883)
CheckOffset(struct statfs,f_files,0,10,63890)
CheckOffset(struct statfs,f_ffree,0,10,63897)
CheckOffset(struct statfs,f_fsid,0,10,63904)
CheckOffset(struct statfs,f_namelen,0,10,63911)
CheckOffset(struct statfs,f_spare,0,10,63918)
#elif defined __powerpc64__
CheckTypeSize(struct statfs,120, 10319, 9, 3.1, NULL, 0, NULL)
Msg("Missing member data for statfs on PPC64\n");
CheckOffset(struct statfs,f_type,0,9,63854)
CheckOffset(struct statfs,f_bsize,0,9,63861)
CheckOffset(struct statfs,f_blocks,0,9,63868)
CheckOffset(struct statfs,f_bfree,0,9,63875)
CheckOffset(struct statfs,f_bavail,0,9,63882)
CheckOffset(struct statfs,f_files,0,9,63889)
CheckOffset(struct statfs,f_ffree,0,9,63896)
CheckOffset(struct statfs,f_fsid,0,9,63903)
CheckOffset(struct statfs,f_namelen,0,9,63910)
CheckOffset(struct statfs,f_spare,0,9,63917)
#elif defined __x86_64__
CheckTypeSize(struct statfs,120, 10319, 11, 3.1, NULL, 0, NULL)
CheckMemberSize(struct statfs,f_bsize,8,11,63863)
CheckOffset(struct statfs,f_bsize,8,11,63863)
CheckMemberSize(struct statfs,f_blocks,8,11,63870)
CheckOffset(struct statfs,f_blocks,16,11,63870)
CheckMemberSize(struct statfs,f_bfree,8,11,63877)
CheckOffset(struct statfs,f_bfree,24,11,63877)
CheckMemberSize(struct statfs,f_bavail,8,11,63884)
CheckOffset(struct statfs,f_bavail,32,11,63884)
CheckMemberSize(struct statfs,f_files,8,11,63891)
CheckOffset(struct statfs,f_files,40,11,63891)
CheckMemberSize(struct statfs,f_ffree,8,11,63898)
CheckOffset(struct statfs,f_ffree,48,11,63898)
CheckMemberSize(struct statfs,f_fsid,8,11,63905)
CheckOffset(struct statfs,f_fsid,56,11,63905)
CheckMemberSize(struct statfs,f_namelen,8,11,63912)
CheckOffset(struct statfs,f_namelen,64,11,63912)
CheckMemberSize(struct statfs,f_spare,40,11,63919)
CheckOffset(struct statfs,f_spare,80,11,63919)
#elif defined __s390x__
CheckTypeSize(struct statfs,88, 10319, 12, 3.1, NULL, 0, NULL)
Msg("Missing member data for statfs on S390X\n");
CheckOffset(struct statfs,f_type,0,12,63857)
CheckOffset(struct statfs,f_bsize,0,12,63864)
CheckOffset(struct statfs,f_blocks,0,12,63871)
CheckOffset(struct statfs,f_bfree,0,12,63878)
CheckOffset(struct statfs,f_bavail,0,12,63885)
CheckOffset(struct statfs,f_files,0,12,63892)
CheckOffset(struct statfs,f_ffree,0,12,63899)
CheckOffset(struct statfs,f_fsid,0,12,63906)
CheckOffset(struct statfs,f_namelen,0,12,63913)
CheckOffset(struct statfs,f_spare,0,12,63920)
#endif

#if defined __i386__
CheckTypeSize(struct statfs64,84, 10321, 2, 3.1, NULL, 0, NULL)
Msg("Missing member data for statfs64 on IA32\n");
CheckOffset(struct statfs64,f_type,0,2,63921)
CheckOffset(struct statfs64,f_bsize,0,2,63928)
CheckOffset(struct statfs64,f_blocks,0,2,63935)
CheckOffset(struct statfs64,f_bfree,0,2,63942)
CheckOffset(struct statfs64,f_bavail,0,2,63949)
CheckOffset(struct statfs64,f_files,0,2,63956)
CheckOffset(struct statfs64,f_ffree,0,2,63963)
CheckOffset(struct statfs64,f_fsid,0,2,63970)
CheckOffset(struct statfs64,f_namelen,0,2,63977)
CheckOffset(struct statfs64,f_spare,0,2,63984)
#elif defined __ia64__
CheckTypeSize(struct statfs64,120, 10321, 3, 3.1, NULL, 0, NULL)
Msg("Missing member data for statfs64 on IA64\n");
CheckOffset(struct statfs64,f_type,0,3,63922)
CheckOffset(struct statfs64,f_bsize,0,3,63929)
CheckOffset(struct statfs64,f_blocks,0,3,63936)
CheckOffset(struct statfs64,f_bfree,0,3,63943)
CheckOffset(struct statfs64,f_bavail,0,3,63950)
CheckOffset(struct statfs64,f_files,0,3,63957)
CheckOffset(struct statfs64,f_ffree,0,3,63964)
CheckOffset(struct statfs64,f_fsid,0,3,63971)
CheckOffset(struct statfs64,f_namelen,0,3,63978)
CheckOffset(struct statfs64,f_spare,0,3,63985)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct statfs64,88, 10321, 6, 3.1, NULL, 0, NULL)
Msg("Missing member data for statfs64 on PPC32\n");
CheckOffset(struct statfs64,f_type,0,6,63923)
CheckOffset(struct statfs64,f_bsize,0,6,63930)
CheckOffset(struct statfs64,f_blocks,0,6,63937)
CheckOffset(struct statfs64,f_bfree,0,6,63944)
CheckOffset(struct statfs64,f_bavail,0,6,63951)
CheckOffset(struct statfs64,f_files,0,6,63958)
CheckOffset(struct statfs64,f_ffree,0,6,63965)
CheckOffset(struct statfs64,f_fsid,0,6,63972)
CheckOffset(struct statfs64,f_namelen,0,6,63979)
CheckOffset(struct statfs64,f_spare,0,6,63986)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct statfs64,88, 10321, 10, 3.1, NULL, 0, NULL)
Msg("Missing member data for statfs64 on S390\n");
CheckOffset(struct statfs64,f_type,0,10,63925)
CheckOffset(struct statfs64,f_bsize,0,10,63932)
CheckOffset(struct statfs64,f_blocks,0,10,63939)
CheckOffset(struct statfs64,f_bfree,0,10,63946)
CheckOffset(struct statfs64,f_bavail,0,10,63953)
CheckOffset(struct statfs64,f_files,0,10,63960)
CheckOffset(struct statfs64,f_ffree,0,10,63967)
CheckOffset(struct statfs64,f_fsid,0,10,63974)
CheckOffset(struct statfs64,f_namelen,0,10,63981)
CheckOffset(struct statfs64,f_spare,0,10,63988)
#elif defined __powerpc64__
CheckTypeSize(struct statfs64,120, 10321, 9, 3.1, NULL, 0, NULL)
Msg("Missing member data for statfs64 on PPC64\n");
CheckOffset(struct statfs64,f_type,0,9,63924)
CheckOffset(struct statfs64,f_bsize,0,9,63931)
CheckOffset(struct statfs64,f_blocks,0,9,63938)
CheckOffset(struct statfs64,f_bfree,0,9,63945)
CheckOffset(struct statfs64,f_bavail,0,9,63952)
CheckOffset(struct statfs64,f_files,0,9,63959)
CheckOffset(struct statfs64,f_ffree,0,9,63966)
CheckOffset(struct statfs64,f_fsid,0,9,63973)
CheckOffset(struct statfs64,f_namelen,0,9,63980)
CheckOffset(struct statfs64,f_spare,0,9,63987)
#elif defined __x86_64__
CheckTypeSize(struct statfs64,120, 10321, 11, 3.1, NULL, 0, NULL)
CheckMemberSize(struct statfs64,f_bsize,8,11,63933)
CheckOffset(struct statfs64,f_bsize,8,11,63933)
CheckMemberSize(struct statfs64,f_blocks,8,11,63940)
CheckOffset(struct statfs64,f_blocks,16,11,63940)
CheckMemberSize(struct statfs64,f_bfree,8,11,63947)
CheckOffset(struct statfs64,f_bfree,24,11,63947)
CheckMemberSize(struct statfs64,f_bavail,8,11,63954)
CheckOffset(struct statfs64,f_bavail,32,11,63954)
CheckMemberSize(struct statfs64,f_files,8,11,63961)
CheckOffset(struct statfs64,f_files,40,11,63961)
CheckMemberSize(struct statfs64,f_ffree,8,11,63968)
CheckOffset(struct statfs64,f_ffree,48,11,63968)
CheckMemberSize(struct statfs64,f_fsid,8,11,63975)
CheckOffset(struct statfs64,f_fsid,56,11,63975)
CheckMemberSize(struct statfs64,f_namelen,8,11,63982)
CheckOffset(struct statfs64,f_namelen,64,11,63982)
CheckMemberSize(struct statfs64,f_spare,40,11,63989)
CheckOffset(struct statfs64,f_spare,80,11,63989)
#elif defined __s390x__
CheckTypeSize(struct statfs64,88, 10321, 12, 3.1, NULL, 0, NULL)
Msg("Missing member data for statfs64 on S390X\n");
CheckOffset(struct statfs64,f_type,0,12,63927)
CheckOffset(struct statfs64,f_bsize,0,12,63934)
CheckOffset(struct statfs64,f_blocks,0,12,63941)
CheckOffset(struct statfs64,f_bfree,0,12,63948)
CheckOffset(struct statfs64,f_bavail,0,12,63955)
CheckOffset(struct statfs64,f_files,0,12,63962)
CheckOffset(struct statfs64,f_ffree,0,12,63969)
CheckOffset(struct statfs64,f_fsid,0,12,63976)
CheckOffset(struct statfs64,f_namelen,0,12,63983)
CheckOffset(struct statfs64,f_spare,0,12,63990)
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
