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
/* No test for S_ISFIFO(m) */
#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for S_ISREG(m) */
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
/* No test for S_ISSOCK(m) */
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
#ifdef S_ISGID
	CompareConstant(S_ISGID,0x0400,1703,architecture)
#else
Msg( "Error: Constant not found: S_ISGID\n");
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
#ifdef S_IWUSR
	CompareConstant(S_IWUSR,0x0080,1706,architecture)
#else
Msg( "Error: Constant not found: S_IWUSR\n");
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
#ifdef S_ISVTX
	CompareConstant(S_ISVTX,01000,1704,architecture)
#else
Msg( "Error: Constant not found: S_ISVTX\n");
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
#ifdef S_IXGRP
	CompareConstant(S_IXGRP,(S_IXUSR>>3),1714,architecture)
#else
Msg( "Error: Constant not found: S_IXGRP\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for S_TYPEISMQ(buf) */
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
#ifdef S_IEXEC
	CompareConstant(S_IEXEC,S_IXUSR,1711,architecture)
#else
Msg( "Error: Constant not found: S_IEXEC\n");
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
/* No test for S_TYPEISSEM(buf) */
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
#ifdef S_IREAD
	CompareConstant(S_IREAD,S_IRUSR,1709,architecture)
#else
Msg( "Error: Constant not found: S_IREAD\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for S_ISDIR(m) */
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
/* No test for S_ISBLK(m) */
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
#ifdef S_IFSOCK
	CompareConstant(S_IFSOCK,0xc000,1690,architecture)
#else
Msg( "Error: Constant not found: S_IFSOCK\n");
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
#ifdef S_IWRITE
	CompareConstant(S_IWRITE,S_IWUSR,1710,architecture)
#else
Msg( "Error: Constant not found: S_IWRITE\n");
cnt++;
#endif

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
/* No test for S_ISLNK(m) */
#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for S_TYPEISSHM(buf) */
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
#ifdef S_IFMT
	CompareConstant(S_IFMT,0xf000,1683,architecture)
#else
Msg( "Error: Constant not found: S_IFMT\n");
cnt++;
#endif

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
#ifdef S_IWGRP
	CompareConstant(S_IWGRP,(S_IWUSR>>3),1713,architecture)
#else
Msg( "Error: Constant not found: S_IWGRP\n");
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
#ifdef S_IFBLK
	CompareConstant(S_IFBLK,0x6000,1686,architecture)
#else
Msg( "Error: Constant not found: S_IFBLK\n");
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

#ifdef _LSB_DEFAULT_ARCH
/* No test for S_ISCHR(m) */
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
#elif __ia64__
CheckTypeSize(struct stat,144, 8693, 3)
Msg("Missing member data for stat on IA64\n");
CheckOffset(struct stat,st_dev,0,3,33632)
CheckOffset(struct stat,__pad1,0,3,33633)
CheckOffset(struct stat,st_ino,0,3,33634)
CheckOffset(struct stat,st_mode,0,3,33635)
CheckOffset(struct stat,st_nlink,0,3,33636)
CheckOffset(struct stat,st_uid,0,3,33637)
CheckOffset(struct stat,st_gid,0,3,33638)
CheckOffset(struct stat,st_rdev,0,3,33639)
CheckOffset(struct stat,__pad2,0,3,33640)
CheckOffset(struct stat,st_size,0,3,33641)
CheckOffset(struct stat,st_blksize,0,3,33642)
CheckOffset(struct stat,st_blocks,0,3,33643)
CheckOffset(struct stat,st_atime,0,3,33644)
CheckOffset(struct stat,__unused1,0,3,33645)
CheckOffset(struct stat,st_mtime,0,3,33646)
CheckOffset(struct stat,__unused2,0,3,33647)
CheckOffset(struct stat,st_ctime,0,3,33648)
CheckOffset(struct stat,__unused3,0,3,33649)
CheckOffset(struct stat,__unused4,0,3,33650)
CheckOffset(struct stat,__unused5,0,3,33651)
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
Msg("Missing member data for stat on S390\n");
CheckOffset(struct stat,st_dev,0,10,33632)
CheckOffset(struct stat,__pad1,0,10,33633)
CheckOffset(struct stat,st_ino,0,10,33634)
CheckOffset(struct stat,st_mode,0,10,33635)
CheckOffset(struct stat,st_nlink,0,10,33636)
CheckOffset(struct stat,st_uid,0,10,33637)
CheckOffset(struct stat,st_gid,0,10,33638)
CheckOffset(struct stat,st_rdev,0,10,33639)
CheckOffset(struct stat,__pad2,0,10,33640)
CheckOffset(struct stat,st_size,0,10,33641)
CheckOffset(struct stat,st_blksize,0,10,33642)
CheckOffset(struct stat,st_blocks,0,10,33643)
CheckOffset(struct stat,st_atime,0,10,33644)
CheckOffset(struct stat,__unused1,0,10,33645)
CheckOffset(struct stat,st_mtime,0,10,33646)
CheckOffset(struct stat,__unused2,0,10,33647)
CheckOffset(struct stat,st_ctime,0,10,33648)
CheckOffset(struct stat,__unused3,0,10,33649)
CheckOffset(struct stat,__unused4,0,10,33650)
CheckOffset(struct stat,__unused5,0,10,33651)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8693,0);
Msg("Find size of stat (8693)\n");
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
#elif __ia64__
CheckTypeSize(struct stat64,144, 8697, 3)
Msg("Missing member data for stat64 on IA64\n");
CheckOffset(struct stat64,st_dev,0,3,33652)
CheckOffset(struct stat64,__pad1,0,3,33653)
CheckOffset(struct stat64,__st_ino,0,3,33654)
CheckOffset(struct stat64,st_mode,0,3,33655)
CheckOffset(struct stat64,st_nlink,0,3,33656)
CheckOffset(struct stat64,st_uid,0,3,33657)
CheckOffset(struct stat64,st_gid,0,3,33658)
CheckOffset(struct stat64,st_rdev,0,3,33659)
CheckOffset(struct stat64,__pad2,0,3,33660)
CheckOffset(struct stat64,st_size,0,3,33661)
CheckOffset(struct stat64,st_blksize,0,3,33662)
CheckOffset(struct stat64,st_blocks,0,3,33663)
CheckOffset(struct stat64,st_atime,0,3,33664)
CheckOffset(struct stat64,__unused1,0,3,33665)
CheckOffset(struct stat64,st_mtime,0,3,33666)
CheckOffset(struct stat64,__unused2,0,3,33667)
CheckOffset(struct stat64,st_ctime,0,3,33668)
CheckOffset(struct stat64,__unused3,0,3,33669)
CheckOffset(struct stat64,st_ino,0,3,33670)
#elif __powerpc__
CheckTypeSize(struct stat64,104, 8697, 6)
Msg("Missing member data for stat64 on PPC32\n");
CheckOffset(struct stat64,st_dev,0,6,33652)
CheckOffset(struct stat64,__pad1,0,6,33653)
CheckOffset(struct stat64,__st_ino,0,6,33654)
CheckOffset(struct stat64,st_mode,0,6,33655)
CheckOffset(struct stat64,st_nlink,0,6,33656)
CheckOffset(struct stat64,st_uid,0,6,33657)
CheckOffset(struct stat64,st_gid,0,6,33658)
CheckOffset(struct stat64,st_rdev,0,6,33659)
CheckOffset(struct stat64,__pad2,0,6,33660)
CheckOffset(struct stat64,st_size,0,6,33661)
CheckOffset(struct stat64,st_blksize,0,6,33662)
CheckOffset(struct stat64,st_blocks,0,6,33663)
CheckOffset(struct stat64,st_atime,0,6,33664)
CheckOffset(struct stat64,__unused1,0,6,33665)
CheckOffset(struct stat64,st_mtime,0,6,33666)
CheckOffset(struct stat64,__unused2,0,6,33667)
CheckOffset(struct stat64,st_ctime,0,6,33668)
CheckOffset(struct stat64,__unused3,0,6,33669)
CheckOffset(struct stat64,st_ino,0,6,33670)
#elif __s390__
CheckTypeSize(struct stat64,104, 8697, 10)
Msg("Missing member data for stat64 on S390\n");
CheckOffset(struct stat64,st_dev,0,10,33652)
CheckOffset(struct stat64,__pad1,0,10,33653)
CheckOffset(struct stat64,__st_ino,0,10,33654)
CheckOffset(struct stat64,st_mode,0,10,33655)
CheckOffset(struct stat64,st_nlink,0,10,33656)
CheckOffset(struct stat64,st_uid,0,10,33657)
CheckOffset(struct stat64,st_gid,0,10,33658)
CheckOffset(struct stat64,st_rdev,0,10,33659)
CheckOffset(struct stat64,__pad2,0,10,33660)
CheckOffset(struct stat64,st_size,0,10,33661)
CheckOffset(struct stat64,st_blksize,0,10,33662)
CheckOffset(struct stat64,st_blocks,0,10,33663)
CheckOffset(struct stat64,st_atime,0,10,33664)
CheckOffset(struct stat64,__unused1,0,10,33665)
CheckOffset(struct stat64,st_mtime,0,10,33666)
CheckOffset(struct stat64,__unused2,0,10,33667)
CheckOffset(struct stat64,st_ctime,0,10,33668)
CheckOffset(struct stat64,__unused3,0,10,33669)
CheckOffset(struct stat64,st_ino,0,10,33670)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8697,0);
Msg("Find size of stat64 (8697)\n");
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
