/*
 * Test of sys/stat.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "sys/stat.h"



#ifdef TET_TEST
void sys_stat_h()
{
#else
int sys_stat_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/stat.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IFMT
	CompareConstant(S_IFMT,0xf000,1683,architecture)
#else
Msg( "Error: Constant not found: S_IFMT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IFDIR
	CompareConstant(S_IFDIR,0x4000,1684,architecture)
#else
Msg( "Error: Constant not found: S_IFDIR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IFCHR
	CompareConstant(S_IFCHR,0x2000,1685,architecture)
#else
Msg( "Error: Constant not found: S_IFCHR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IFBLK
	CompareConstant(S_IFBLK,0x6000,1686,architecture)
#else
Msg( "Error: Constant not found: S_IFBLK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IFREG
	CompareConstant(S_IFREG,0x8000,1687,architecture)
#else
Msg( "Error: Constant not found: S_IFREG\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IFIFO
	CompareConstant(S_IFIFO,0x1000,1688,architecture)
#else
Msg( "Error: Constant not found: S_IFIFO\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IFLNK
	CompareConstant(S_IFLNK,0xa000,1689,architecture)
#else
Msg( "Error: Constant not found: S_IFLNK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IFSOCK
	CompareConstant(S_IFSOCK,0xc000,1690,architecture)
#else
Msg( "Error: Constant not found: S_IFSOCK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for S_TYPEISMQ(buf) */
#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for S_ISLNK(m) */
#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for S_ISREG(m) */
#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for S_ISDIR(m) */
#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for S_ISCHR(m) */
#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for S_ISBLK(m) */
#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for S_ISFIFO(m) */
#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for S_ISSOCK(m) */
#endif

#ifdef __ia64__
#ifdef _STAT_VER
	CompareConstant(_STAT_VER,1,4955,architecture)
#else
Msg( "Error: Constant not found: _STAT_VER\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef _STAT_VER
	CompareConstant(_STAT_VER,3,4955,architecture)
#else
Msg( "Error: Constant not found: _STAT_VER\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for S_TYPEISSEM(buf) */
#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for S_TYPEISSHM(buf) */
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_ISUID
	CompareConstant(S_ISUID,0x0800,1702,architecture)
#else
Msg( "Error: Constant not found: S_ISUID\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_ISGID
	CompareConstant(S_ISGID,0x0400,1703,architecture)
#else
Msg( "Error: Constant not found: S_ISGID\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_ISVTX
	CompareConstant(S_ISVTX,01000,1704,architecture)
#else
Msg( "Error: Constant not found: S_ISVTX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IRUSR
	CompareConstant(S_IRUSR,0x0100,1705,architecture)
#else
Msg( "Error: Constant not found: S_IRUSR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IWUSR
	CompareConstant(S_IWUSR,0x0080,1706,architecture)
#else
Msg( "Error: Constant not found: S_IWUSR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IXUSR
	CompareConstant(S_IXUSR,0x0040,1707,architecture)
#else
Msg( "Error: Constant not found: S_IXUSR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IRWXU
	CompareConstant(S_IRWXU,(S_IREAD|S_IWRITE|S_IEXEC),1708,architecture)
#else
Msg( "Error: Constant not found: S_IRWXU\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IREAD
	CompareConstant(S_IREAD,S_IRUSR,1709,architecture)
#else
Msg( "Error: Constant not found: S_IREAD\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IWRITE
	CompareConstant(S_IWRITE,S_IWUSR,1710,architecture)
#else
Msg( "Error: Constant not found: S_IWRITE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IEXEC
	CompareConstant(S_IEXEC,S_IXUSR,1711,architecture)
#else
Msg( "Error: Constant not found: S_IEXEC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IRGRP
	CompareConstant(S_IRGRP,(S_IRUSR>>3),1712,architecture)
#else
Msg( "Error: Constant not found: S_IRGRP\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IWGRP
	CompareConstant(S_IWGRP,(S_IWUSR>>3),1713,architecture)
#else
Msg( "Error: Constant not found: S_IWGRP\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IXGRP
	CompareConstant(S_IXGRP,(S_IXUSR>>3),1714,architecture)
#else
Msg( "Error: Constant not found: S_IXGRP\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IRWXG
	CompareConstant(S_IRWXG,(S_IRWXU>>3),1715,architecture)
#else
Msg( "Error: Constant not found: S_IRWXG\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IROTH
	CompareConstant(S_IROTH,(S_IRGRP>>3),1716,architecture)
#else
Msg( "Error: Constant not found: S_IROTH\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IWOTH
	CompareConstant(S_IWOTH,(S_IWGRP>>3),1717,architecture)
#else
Msg( "Error: Constant not found: S_IWOTH\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IXOTH
	CompareConstant(S_IXOTH,(S_IXGRP>>3),1718,architecture)
#else
Msg( "Error: Constant not found: S_IXOTH\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef S_IRWXO
	CompareConstant(S_IRWXO,(S_IRWXG>>3),1719,architecture)
#else
Msg( "Error: Constant not found: S_IRWXO\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(struct stat,88, 8693, 2)
CheckOffset(struct stat,__pad1,8,2,33633)
CheckOffset(struct stat,st_ino,12,2,33634)
CheckOffset(struct stat,st_mode,16,2,33635)
CheckOffset(struct stat,st_nlink,20,2,33636)
CheckOffset(struct stat,st_uid,24,2,33637)
CheckOffset(struct stat,st_gid,28,2,33638)
CheckOffset(struct stat,st_rdev,32,2,33639)
CheckOffset(struct stat,__pad2,40,2,33640)
CheckOffset(struct stat,st_size,44,2,33641)
CheckOffset(struct stat,st_blksize,48,2,33642)
CheckOffset(struct stat,st_blocks,52,2,33643)
CheckOffset(struct stat,st_atime,56,2,33644)
CheckOffset(struct stat,__unused1,60,2,33645)
CheckOffset(struct stat,st_mtime,64,2,33646)
CheckOffset(struct stat,__unused2,68,2,33647)
CheckOffset(struct stat,st_ctime,72,2,33648)
CheckOffset(struct stat,__unused3,76,2,33649)
CheckOffset(struct stat,__unused4,80,2,33650)
CheckOffset(struct stat,__unused5,84,2,33651)
#elif __powerpc__
CheckTypeSize(struct stat,88, 8693, 6)
Msg("Missing member data for stat on PPC32\n");
CheckOffset(struct stat,st_dev,0,6,33632)
CheckOffset(struct stat,__pad1,0,6,33633)
CheckOffset(struct stat,st_ino,0,6,33634)
CheckOffset(struct stat,st_mode,0,6,33635)
CheckOffset(struct stat,st_nlink,0,6,33636)
CheckOffset(struct stat,st_uid,0,6,33637)
CheckOffset(struct stat,st_gid,0,6,33638)
CheckOffset(struct stat,st_rdev,0,6,33639)
CheckOffset(struct stat,__pad2,0,6,33640)
CheckOffset(struct stat,st_size,0,6,33641)
CheckOffset(struct stat,st_blksize,0,6,33642)
CheckOffset(struct stat,st_blocks,0,6,33643)
CheckOffset(struct stat,st_atime,0,6,33644)
CheckOffset(struct stat,__unused1,0,6,33645)
CheckOffset(struct stat,st_mtime,0,6,33646)
CheckOffset(struct stat,__unused2,0,6,33647)
CheckOffset(struct stat,st_ctime,0,6,33648)
CheckOffset(struct stat,__unused3,0,6,33649)
CheckOffset(struct stat,__unused4,0,6,33650)
CheckOffset(struct stat,__unused5,0,6,33651)
#elif __s390__
CheckTypeSize(struct stat,88, 8693, 10)
CheckOffset(struct stat,__pad1,8,10,33633)
CheckOffset(struct stat,st_ino,12,10,33634)
CheckOffset(struct stat,st_mode,16,10,33635)
CheckOffset(struct stat,st_nlink,20,10,33636)
CheckOffset(struct stat,st_uid,24,10,33637)
CheckOffset(struct stat,st_gid,28,10,33638)
CheckOffset(struct stat,st_rdev,32,10,33639)
CheckOffset(struct stat,__pad2,40,10,33640)
CheckOffset(struct stat,st_size,44,10,33641)
CheckOffset(struct stat,st_blksize,48,10,33642)
CheckOffset(struct stat,st_blocks,52,10,33643)
CheckOffset(struct stat,st_atime,56,10,33644)
CheckOffset(struct stat,__unused1,60,10,33645)
CheckOffset(struct stat,st_mtime,64,10,33646)
CheckOffset(struct stat,__unused2,68,10,33647)
CheckOffset(struct stat,st_ctime,72,10,33648)
CheckOffset(struct stat,__unused3,76,10,33649)
CheckOffset(struct stat,__unused4,80,10,33650)
CheckOffset(struct stat,__unused5,84,10,33651)
#endif

#ifdef __i386__
CheckTypeSize(struct stat64,96, 8697, 2)
CheckOffset(struct stat64,__pad1,8,2,33653)
CheckOffset(struct stat64,__st_ino,12,2,33654)
CheckOffset(struct stat64,st_mode,16,2,33655)
CheckOffset(struct stat64,st_nlink,20,2,33656)
CheckOffset(struct stat64,st_uid,24,2,33657)
CheckOffset(struct stat64,st_gid,28,2,33658)
CheckOffset(struct stat64,st_rdev,32,2,33659)
CheckOffset(struct stat64,__pad2,40,2,33660)
CheckOffset(struct stat64,st_size,44,2,33661)
CheckOffset(struct stat64,st_blksize,52,2,33662)
CheckOffset(struct stat64,st_blocks,56,2,33663)
CheckOffset(struct stat64,st_atime,64,2,33664)
CheckOffset(struct stat64,__unused1,68,2,33665)
CheckOffset(struct stat64,st_mtime,72,2,33666)
CheckOffset(struct stat64,__unused2,76,2,33667)
CheckOffset(struct stat64,st_ctime,80,2,33668)
CheckOffset(struct stat64,__unused3,84,2,33669)
CheckOffset(struct stat64,st_ino,88,2,33670)
#elif __s390__
CheckTypeSize(struct stat64,104, 8697, 10)
CheckOffset(struct stat64,__pad1,8,10,33653)
CheckOffset(struct stat64,__st_ino,12,10,33654)
CheckOffset(struct stat64,st_mode,16,10,33655)
CheckOffset(struct stat64,st_nlink,20,10,33656)
CheckOffset(struct stat64,st_uid,24,10,33657)
CheckOffset(struct stat64,st_gid,28,10,33658)
CheckOffset(struct stat64,st_rdev,32,10,33659)
CheckOffset(struct stat64,__pad2,40,10,33660)
CheckOffset(struct stat64,st_size,48,10,33661)
CheckOffset(struct stat64,st_blksize,56,10,33662)
CheckOffset(struct stat64,st_blocks,64,10,33663)
CheckOffset(struct stat64,st_atime,72,10,33664)
CheckOffset(struct stat64,__unused1,76,10,33665)
CheckOffset(struct stat64,st_mtime,80,10,33666)
CheckOffset(struct stat64,__unused2,84,10,33667)
CheckOffset(struct stat64,st_ctime,88,10,33668)
CheckOffset(struct stat64,__unused3,92,10,33669)
CheckOffset(struct stat64,st_ino,96,10,33670)
#endif

#ifdef __ia64__
CheckTypeSize(struct stat,144, 10397, 3)
CheckOffset(struct stat,st_dev,0,3,34670)
CheckOffset(struct stat,st_ino,8,3,34671)
CheckOffset(struct stat,st_nlink,16,3,34672)
CheckOffset(struct stat,st_mode,24,3,34673)
CheckOffset(struct stat,st_uid,28,3,34674)
CheckOffset(struct stat,st_gid,32,3,34675)
CheckOffset(struct stat,pad0,36,3,34676)
CheckOffset(struct stat,st_rdev,40,3,34677)
CheckOffset(struct stat,st_size,48,3,34678)
CheckOffset(struct stat,st_atime,56,3,34679)
CheckOffset(struct stat,__reserved0,64,3,34680)
CheckOffset(struct stat,st_mtime,72,3,34681)
CheckOffset(struct stat,__reserved1,80,3,34683)
CheckOffset(struct stat,st_ctime,88,3,34682)
CheckOffset(struct stat,__reserved2,96,3,34684)
CheckOffset(struct stat,st_blksize,104,3,34685)
CheckOffset(struct stat,st_blocks,112,3,34687)
CheckOffset(struct stat,__unused,120,3,34686)
#endif

#ifdef __powerpc__
CheckTypeSize(struct stat64,104, 10398, 6)
Msg("Missing member data for stat64 on PPC32\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/stat.h\n",cnt);
return cnt;
#endif

}
