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

#if _LSB_DEFAULT_ARCH
#ifdef S_IFMT
	CompareConstant(S_IFMT,0xf000,1683,architecture)
#else
Msg( "Error: Constant not found: S_IFMT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IFDIR
	CompareConstant(S_IFDIR,0x4000,1684,architecture)
#else
Msg( "Error: Constant not found: S_IFDIR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IFCHR
	CompareConstant(S_IFCHR,0x2000,1685,architecture)
#else
Msg( "Error: Constant not found: S_IFCHR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IFBLK
	CompareConstant(S_IFBLK,0x6000,1686,architecture)
#else
Msg( "Error: Constant not found: S_IFBLK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IFREG
	CompareConstant(S_IFREG,0x8000,1687,architecture)
#else
Msg( "Error: Constant not found: S_IFREG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IFIFO
	CompareConstant(S_IFIFO,0x1000,1688,architecture)
#else
Msg( "Error: Constant not found: S_IFIFO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IFLNK
	CompareConstant(S_IFLNK,0xa000,1689,architecture)
#else
Msg( "Error: Constant not found: S_IFLNK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IFSOCK
	CompareConstant(S_IFSOCK,0xc000,1690,architecture)
#else
Msg( "Error: Constant not found: S_IFSOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for S_TYPEISMQ(buf) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for S_TYPEISSEM(buf) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for S_TYPEISSHM(buf) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_ISUID
	CompareConstant(S_ISUID,0x0800,1702,architecture)
#else
Msg( "Error: Constant not found: S_ISUID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_ISGID
	CompareConstant(S_ISGID,0x0400,1703,architecture)
#else
Msg( "Error: Constant not found: S_ISGID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_ISVTX
	CompareConstant(S_ISVTX,01000,1704,architecture)
#else
Msg( "Error: Constant not found: S_ISVTX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IRUSR
	CompareConstant(S_IRUSR,0x0100,1705,architecture)
#else
Msg( "Error: Constant not found: S_IRUSR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IWUSR
	CompareConstant(S_IWUSR,0x0080,1706,architecture)
#else
Msg( "Error: Constant not found: S_IWUSR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IXUSR
	CompareConstant(S_IXUSR,0x0040,1707,architecture)
#else
Msg( "Error: Constant not found: S_IXUSR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IRWXU
	CompareConstant(S_IRWXU,(S_IREAD|S_IWRITE|S_IEXEC),1708,architecture)
#else
Msg( "Error: Constant not found: S_IRWXU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IREAD
	CompareConstant(S_IREAD,S_IRUSR,1709,architecture)
#else
Msg( "Error: Constant not found: S_IREAD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IWRITE
	CompareConstant(S_IWRITE,S_IWUSR,1710,architecture)
#else
Msg( "Error: Constant not found: S_IWRITE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IEXEC
	CompareConstant(S_IEXEC,S_IXUSR,1711,architecture)
#else
Msg( "Error: Constant not found: S_IEXEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IRGRP
	CompareConstant(S_IRGRP,(S_IRUSR>>3),1712,architecture)
#else
Msg( "Error: Constant not found: S_IRGRP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IWGRP
	CompareConstant(S_IWGRP,(S_IWUSR>>3),1713,architecture)
#else
Msg( "Error: Constant not found: S_IWGRP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IXGRP
	CompareConstant(S_IXGRP,(S_IXUSR>>3),1714,architecture)
#else
Msg( "Error: Constant not found: S_IXGRP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IRWXG
	CompareConstant(S_IRWXG,(S_IRWXU>>3),1715,architecture)
#else
Msg( "Error: Constant not found: S_IRWXG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IROTH
	CompareConstant(S_IROTH,(S_IRGRP>>3),1716,architecture)
#else
Msg( "Error: Constant not found: S_IROTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IWOTH
	CompareConstant(S_IWOTH,(S_IWGRP>>3),1717,architecture)
#else
Msg( "Error: Constant not found: S_IWOTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IXOTH
	CompareConstant(S_IXOTH,(S_IXGRP>>3),1718,architecture)
#else
Msg( "Error: Constant not found: S_IXOTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IRWXO
	CompareConstant(S_IRWXO,(S_IRWXG>>3),1719,architecture)
#else
Msg( "Error: Constant not found: S_IRWXO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for S_ISLNK(m) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for S_ISREG(m) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for S_ISDIR(m) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for S_ISCHR(m) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for S_ISBLK(m) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for S_ISFIFO(m) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for S_ISSOCK(m) */
#endif

#if __powerpc64__
#ifdef _STAT_VER
	CompareConstant(_STAT_VER,3,4955,architecture)
#else
Msg( "Error: Constant not found: _STAT_VER\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef _STAT_VER
	CompareConstant(_STAT_VER,3,4955,architecture)
#else
Msg( "Error: Constant not found: _STAT_VER\n");
cnt++;
#endif

#elif __ia64__
#ifdef _STAT_VER
	CompareConstant(_STAT_VER,1,4955,architecture)
#else
Msg( "Error: Constant not found: _STAT_VER\n");
cnt++;
#endif

#elif __i386__
#ifdef _STAT_VER
	CompareConstant(_STAT_VER,3,4955,architecture)
#else
Msg( "Error: Constant not found: _STAT_VER\n");
cnt++;
#endif

#elif __s390x__
#ifdef _STAT_VER
	CompareConstant(_STAT_VER,1,4955,architecture)
#else
Msg( "Error: Constant not found: _STAT_VER\n");
cnt++;
#endif

#elif __x86_64__
#ifdef _STAT_VER
	CompareConstant(_STAT_VER,3,4955,architecture)
#else
Msg( "Error: Constant not found: _STAT_VER\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef _STAT_VER
	CompareConstant(_STAT_VER,3,4955,architecture)
#else
Msg( "Error: Constant not found: _STAT_VER\n");
cnt++;
#endif

#else
Msg( "No definition for _STAT_VER (4955, int) in db\n");
#ifdef _STAT_VER
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,4955,%d);\n", architecture, _STAT_VER);
#endif
#endif
#if __i386__
CheckTypeSize(struct stat,88, 8693, 2)
CheckMemberSize(struct stat,__pad1,2,2,33633)
CheckOffset(struct stat,__pad1,8,2,33633)
CheckMemberSize(struct stat,st_ino,4,2,33634)
CheckOffset(struct stat,st_ino,12,2,33634)
CheckMemberSize(struct stat,st_mode,4,2,33635)
CheckOffset(struct stat,st_mode,16,2,33635)
CheckMemberSize(struct stat,st_nlink,4,2,33636)
CheckOffset(struct stat,st_nlink,20,2,33636)
CheckMemberSize(struct stat,st_uid,4,2,33637)
CheckOffset(struct stat,st_uid,24,2,33637)
CheckMemberSize(struct stat,st_gid,4,2,33638)
CheckOffset(struct stat,st_gid,28,2,33638)
CheckMemberSize(struct stat,st_rdev,8,2,33639)
CheckOffset(struct stat,st_rdev,32,2,33639)
CheckMemberSize(struct stat,__pad2,2,2,33640)
CheckOffset(struct stat,__pad2,40,2,33640)
CheckMemberSize(struct stat,st_size,4,2,33641)
CheckOffset(struct stat,st_size,44,2,33641)
CheckMemberSize(struct stat,st_blksize,4,2,33642)
CheckOffset(struct stat,st_blksize,48,2,33642)
CheckMemberSize(struct stat,st_blocks,4,2,33643)
CheckOffset(struct stat,st_blocks,52,2,33643)
CheckMemberSize(struct stat,st_atime,4,2,33644)
CheckOffset(struct stat,st_atime,56,2,33644)
CheckMemberSize(struct stat,__unused1,4,2,33645)
CheckOffset(struct stat,__unused1,60,2,33645)
CheckMemberSize(struct stat,st_mtime,4,2,33646)
CheckOffset(struct stat,st_mtime,64,2,33646)
CheckMemberSize(struct stat,__unused2,4,2,33647)
CheckOffset(struct stat,__unused2,68,2,33647)
CheckMemberSize(struct stat,st_ctime,4,2,33648)
CheckOffset(struct stat,st_ctime,72,2,33648)
CheckMemberSize(struct stat,__unused3,4,2,33649)
CheckOffset(struct stat,__unused3,76,2,33649)
CheckMemberSize(struct stat,__unused4,4,2,33650)
CheckOffset(struct stat,__unused4,80,2,33650)
CheckMemberSize(struct stat,__unused5,4,2,33651)
CheckOffset(struct stat,__unused5,84,2,33651)
#elif __s390__ && !__s390x__
CheckTypeSize(struct stat,88, 8693, 10)
CheckMemberSize(struct stat,__pad1,0,10,33633)
CheckOffset(struct stat,__pad1,8,10,33633)
CheckMemberSize(struct stat,st_ino,0,10,33634)
CheckOffset(struct stat,st_ino,12,10,33634)
CheckMemberSize(struct stat,st_mode,0,10,33635)
CheckOffset(struct stat,st_mode,16,10,33635)
CheckMemberSize(struct stat,st_nlink,0,10,33636)
CheckOffset(struct stat,st_nlink,20,10,33636)
CheckMemberSize(struct stat,st_uid,0,10,33637)
CheckOffset(struct stat,st_uid,24,10,33637)
CheckMemberSize(struct stat,st_gid,0,10,33638)
CheckOffset(struct stat,st_gid,28,10,33638)
CheckMemberSize(struct stat,st_rdev,0,10,33639)
CheckOffset(struct stat,st_rdev,32,10,33639)
CheckMemberSize(struct stat,__pad2,0,10,33640)
CheckOffset(struct stat,__pad2,40,10,33640)
CheckMemberSize(struct stat,st_size,0,10,33641)
CheckOffset(struct stat,st_size,44,10,33641)
CheckMemberSize(struct stat,st_blksize,0,10,33642)
CheckOffset(struct stat,st_blksize,48,10,33642)
CheckMemberSize(struct stat,st_blocks,0,10,33643)
CheckOffset(struct stat,st_blocks,52,10,33643)
CheckMemberSize(struct stat,st_atime,0,10,33644)
CheckOffset(struct stat,st_atime,56,10,33644)
CheckMemberSize(struct stat,__unused1,0,10,33645)
CheckOffset(struct stat,__unused1,60,10,33645)
CheckMemberSize(struct stat,st_mtime,0,10,33646)
CheckOffset(struct stat,st_mtime,64,10,33646)
CheckMemberSize(struct stat,__unused2,0,10,33647)
CheckOffset(struct stat,__unused2,68,10,33647)
CheckMemberSize(struct stat,st_ctime,0,10,33648)
CheckOffset(struct stat,st_ctime,72,10,33648)
CheckMemberSize(struct stat,__unused3,0,10,33649)
CheckOffset(struct stat,__unused3,76,10,33649)
CheckMemberSize(struct stat,__unused4,0,10,33650)
CheckOffset(struct stat,__unused4,80,10,33650)
CheckMemberSize(struct stat,__unused5,0,10,33651)
CheckOffset(struct stat,__unused5,84,10,33651)
#endif

#if __i386__
CheckTypeSize(struct stat64,96, 8697, 2)
CheckMemberSize(struct stat64,__pad1,4,2,33653)
CheckOffset(struct stat64,__pad1,8,2,33653)
CheckMemberSize(struct stat64,__st_ino,4,2,33654)
CheckOffset(struct stat64,__st_ino,12,2,33654)
CheckMemberSize(struct stat64,st_mode,4,2,33655)
CheckOffset(struct stat64,st_mode,16,2,33655)
CheckMemberSize(struct stat64,st_nlink,4,2,33656)
CheckOffset(struct stat64,st_nlink,20,2,33656)
CheckMemberSize(struct stat64,st_uid,4,2,33657)
CheckOffset(struct stat64,st_uid,24,2,33657)
CheckMemberSize(struct stat64,st_gid,4,2,33658)
CheckOffset(struct stat64,st_gid,28,2,33658)
CheckMemberSize(struct stat64,st_rdev,8,2,33659)
CheckOffset(struct stat64,st_rdev,32,2,33659)
CheckMemberSize(struct stat64,__pad2,4,2,33660)
CheckOffset(struct stat64,__pad2,40,2,33660)
CheckMemberSize(struct stat64,st_size,8,2,33661)
CheckOffset(struct stat64,st_size,44,2,33661)
CheckMemberSize(struct stat64,st_blksize,4,2,33662)
CheckOffset(struct stat64,st_blksize,52,2,33662)
CheckMemberSize(struct stat64,st_blocks,8,2,33663)
CheckOffset(struct stat64,st_blocks,56,2,33663)
CheckMemberSize(struct stat64,st_atime,4,2,33664)
CheckOffset(struct stat64,st_atime,64,2,33664)
CheckMemberSize(struct stat64,__unused1,4,2,33665)
CheckOffset(struct stat64,__unused1,68,2,33665)
CheckMemberSize(struct stat64,st_mtime,4,2,33666)
CheckOffset(struct stat64,st_mtime,72,2,33666)
CheckMemberSize(struct stat64,__unused2,4,2,33667)
CheckOffset(struct stat64,__unused2,76,2,33667)
CheckMemberSize(struct stat64,st_ctime,4,2,33668)
CheckOffset(struct stat64,st_ctime,80,2,33668)
CheckMemberSize(struct stat64,__unused3,4,2,33669)
CheckOffset(struct stat64,__unused3,84,2,33669)
CheckMemberSize(struct stat64,st_ino,8,2,33670)
CheckOffset(struct stat64,st_ino,88,2,33670)
#elif __s390__ && !__s390x__
CheckTypeSize(struct stat64,104, 8697, 10)
CheckMemberSize(struct stat64,__pad1,0,10,33653)
CheckOffset(struct stat64,__pad1,8,10,33653)
CheckMemberSize(struct stat64,__st_ino,0,10,33654)
CheckOffset(struct stat64,__st_ino,12,10,33654)
CheckMemberSize(struct stat64,st_mode,0,10,33655)
CheckOffset(struct stat64,st_mode,16,10,33655)
CheckMemberSize(struct stat64,st_nlink,0,10,33656)
CheckOffset(struct stat64,st_nlink,20,10,33656)
CheckMemberSize(struct stat64,st_uid,0,10,33657)
CheckOffset(struct stat64,st_uid,24,10,33657)
CheckMemberSize(struct stat64,st_gid,0,10,33658)
CheckOffset(struct stat64,st_gid,28,10,33658)
CheckMemberSize(struct stat64,st_rdev,0,10,33659)
CheckOffset(struct stat64,st_rdev,32,10,33659)
CheckMemberSize(struct stat64,__pad2,0,10,33660)
CheckOffset(struct stat64,__pad2,40,10,33660)
CheckMemberSize(struct stat64,st_size,0,10,33661)
CheckOffset(struct stat64,st_size,48,10,33661)
CheckMemberSize(struct stat64,st_blksize,0,10,33662)
CheckOffset(struct stat64,st_blksize,56,10,33662)
CheckMemberSize(struct stat64,st_blocks,0,10,33663)
CheckOffset(struct stat64,st_blocks,64,10,33663)
CheckMemberSize(struct stat64,st_atime,0,10,33664)
CheckOffset(struct stat64,st_atime,72,10,33664)
CheckMemberSize(struct stat64,__unused1,0,10,33665)
CheckOffset(struct stat64,__unused1,76,10,33665)
CheckMemberSize(struct stat64,st_mtime,0,10,33666)
CheckOffset(struct stat64,st_mtime,80,10,33666)
CheckMemberSize(struct stat64,__unused2,0,10,33667)
CheckOffset(struct stat64,__unused2,84,10,33667)
CheckMemberSize(struct stat64,st_ctime,0,10,33668)
CheckOffset(struct stat64,st_ctime,88,10,33668)
CheckMemberSize(struct stat64,__unused3,0,10,33669)
CheckOffset(struct stat64,__unused3,92,10,33669)
CheckMemberSize(struct stat64,st_ino,0,10,33670)
CheckOffset(struct stat64,st_ino,96,10,33670)
#endif

#if __ia64__
CheckTypeSize(struct stat,144, 10397, 3)
CheckMemberSize(struct stat,st_dev,8,3,34670)
CheckOffset(struct stat,st_dev,0,3,34670)
CheckMemberSize(struct stat,st_ino,8,3,34671)
CheckOffset(struct stat,st_ino,8,3,34671)
CheckMemberSize(struct stat,st_nlink,8,3,34672)
CheckOffset(struct stat,st_nlink,16,3,34672)
CheckMemberSize(struct stat,st_mode,4,3,34673)
CheckOffset(struct stat,st_mode,24,3,34673)
CheckMemberSize(struct stat,st_uid,4,3,34674)
CheckOffset(struct stat,st_uid,28,3,34674)
CheckMemberSize(struct stat,st_gid,4,3,34675)
CheckOffset(struct stat,st_gid,32,3,34675)
CheckMemberSize(struct stat,pad0,4,3,34676)
CheckOffset(struct stat,pad0,36,3,34676)
CheckMemberSize(struct stat,st_rdev,8,3,34677)
CheckOffset(struct stat,st_rdev,40,3,34677)
CheckMemberSize(struct stat,st_size,8,3,34678)
CheckOffset(struct stat,st_size,48,3,34678)
CheckMemberSize(struct stat,st_atime,8,3,34679)
CheckOffset(struct stat,st_atime,56,3,34679)
CheckMemberSize(struct stat,__reserved0,8,3,34680)
CheckOffset(struct stat,__reserved0,64,3,34680)
CheckMemberSize(struct stat,st_mtime,8,3,34681)
CheckOffset(struct stat,st_mtime,72,3,34681)
CheckMemberSize(struct stat,__reserved1,8,3,34683)
CheckOffset(struct stat,__reserved1,80,3,34683)
CheckMemberSize(struct stat,st_ctime,8,3,34682)
CheckOffset(struct stat,st_ctime,88,3,34682)
CheckMemberSize(struct stat,__reserved2,8,3,34684)
CheckOffset(struct stat,__reserved2,96,3,34684)
CheckMemberSize(struct stat,st_blksize,8,3,34685)
CheckOffset(struct stat,st_blksize,104,3,34685)
CheckMemberSize(struct stat,st_blocks,8,3,34687)
CheckOffset(struct stat,st_blocks,112,3,34687)
CheckMemberSize(struct stat,__unused,24,3,34686)
CheckOffset(struct stat,__unused,120,3,34686)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(struct stat64,104, 10398, 6)
CheckMemberSize(struct stat64,st_dev,8,6,34851)
CheckOffset(struct stat64,st_dev,0,6,34851)
CheckMemberSize(struct stat64,st_ino,8,6,34852)
CheckOffset(struct stat64,st_ino,8,6,34852)
CheckMemberSize(struct stat64,st_mode,4,6,34853)
CheckOffset(struct stat64,st_mode,16,6,34853)
CheckMemberSize(struct stat64,st_nlink,4,6,34854)
CheckOffset(struct stat64,st_nlink,20,6,34854)
CheckMemberSize(struct stat64,st_uid,4,6,34855)
CheckOffset(struct stat64,st_uid,24,6,34855)
CheckMemberSize(struct stat64,st_gid,4,6,34856)
CheckOffset(struct stat64,st_gid,28,6,34856)
CheckMemberSize(struct stat64,st_rdev,8,6,34857)
CheckOffset(struct stat64,st_rdev,32,6,34857)
CheckMemberSize(struct stat64,__pad2,2,6,34858)
CheckOffset(struct stat64,__pad2,40,6,34858)
CheckMemberSize(struct stat64,st_size,8,6,34859)
CheckOffset(struct stat64,st_size,48,6,34859)
CheckMemberSize(struct stat64,st_blksize,4,6,34860)
CheckOffset(struct stat64,st_blksize,56,6,34860)
CheckMemberSize(struct stat64,st_blocks,8,6,34861)
CheckOffset(struct stat64,st_blocks,64,6,34861)
CheckMemberSize(struct stat64,st_atime,4,6,34862)
CheckOffset(struct stat64,st_atime,72,6,34862)
CheckMemberSize(struct stat64,__unused1,4,6,34863)
CheckOffset(struct stat64,__unused1,76,6,34863)
CheckMemberSize(struct stat64,st_mtime,4,6,34864)
CheckOffset(struct stat64,st_mtime,80,6,34864)
CheckMemberSize(struct stat64,__unused2,4,6,34865)
CheckOffset(struct stat64,__unused2,84,6,34865)
CheckMemberSize(struct stat64,st_ctime,4,6,34866)
CheckOffset(struct stat64,st_ctime,88,6,34866)
CheckMemberSize(struct stat64,__unused3,4,6,34867)
CheckOffset(struct stat64,__unused3,92,6,34867)
CheckMemberSize(struct stat64,__unused4,4,6,34868)
CheckOffset(struct stat64,__unused4,96,6,34868)
CheckMemberSize(struct stat64,__unused5,4,6,34869)
CheckOffset(struct stat64,__unused5,100,6,34869)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(struct stat,88, 10432, 6)
CheckMemberSize(struct stat,st_dev,8,6,34831)
CheckOffset(struct stat,st_dev,0,6,34831)
CheckMemberSize(struct stat,__pad1,2,6,34832)
CheckOffset(struct stat,__pad1,8,6,34832)
CheckMemberSize(struct stat,st_ino,4,6,34833)
CheckOffset(struct stat,st_ino,12,6,34833)
CheckMemberSize(struct stat,st_mode,4,6,34834)
CheckOffset(struct stat,st_mode,16,6,34834)
CheckMemberSize(struct stat,st_nlink,4,6,34835)
CheckOffset(struct stat,st_nlink,20,6,34835)
CheckMemberSize(struct stat,st_uid,4,6,34836)
CheckOffset(struct stat,st_uid,24,6,34836)
CheckMemberSize(struct stat,st_gid,4,6,34837)
CheckOffset(struct stat,st_gid,28,6,34837)
CheckMemberSize(struct stat,st_rdev,8,6,34838)
CheckOffset(struct stat,st_rdev,32,6,34838)
CheckMemberSize(struct stat,__pad2,2,6,34839)
CheckOffset(struct stat,__pad2,40,6,34839)
CheckMemberSize(struct stat,st_size,4,6,34840)
CheckOffset(struct stat,st_size,44,6,34840)
CheckMemberSize(struct stat,st_blksize,4,6,34841)
CheckOffset(struct stat,st_blksize,48,6,34841)
CheckMemberSize(struct stat,st_blocks,4,6,34842)
CheckOffset(struct stat,st_blocks,52,6,34842)
CheckMemberSize(struct stat,st_atime,4,6,34843)
CheckOffset(struct stat,st_atime,56,6,34843)
CheckMemberSize(struct stat,__unused1,4,6,34844)
CheckOffset(struct stat,__unused1,60,6,34844)
CheckMemberSize(struct stat,st_mtime,4,6,34845)
CheckOffset(struct stat,st_mtime,64,6,34845)
CheckMemberSize(struct stat,__unused2,4,6,34846)
CheckOffset(struct stat,__unused2,68,6,34846)
CheckMemberSize(struct stat,st_ctime,4,6,34847)
CheckOffset(struct stat,st_ctime,72,6,34847)
CheckMemberSize(struct stat,__unused3,4,6,34848)
CheckOffset(struct stat,__unused3,76,6,34848)
CheckMemberSize(struct stat,__unused4,4,6,34849)
CheckOffset(struct stat,__unused4,80,6,34849)
CheckMemberSize(struct stat,__unused5,4,6,34850)
CheckOffset(struct stat,__unused5,84,6,34850)
#endif

#if __ia64__
CheckTypeSize(struct stat64,144, 10436, 3)
CheckMemberSize(struct stat64,st_dev,8,3,34879)
CheckOffset(struct stat64,st_dev,0,3,34879)
CheckMemberSize(struct stat64,st_ino,8,3,34880)
CheckOffset(struct stat64,st_ino,8,3,34880)
CheckMemberSize(struct stat64,st_nlink,8,3,34881)
CheckOffset(struct stat64,st_nlink,16,3,34881)
CheckMemberSize(struct stat64,st_mode,4,3,34882)
CheckOffset(struct stat64,st_mode,24,3,34882)
CheckMemberSize(struct stat64,st_uid,4,3,34883)
CheckOffset(struct stat64,st_uid,28,3,34883)
CheckMemberSize(struct stat64,st_gid,4,3,34884)
CheckOffset(struct stat64,st_gid,32,3,34884)
CheckMemberSize(struct stat64,pad0,4,3,34885)
CheckOffset(struct stat64,pad0,36,3,34885)
CheckMemberSize(struct stat64,st_rdev,8,3,34886)
CheckOffset(struct stat64,st_rdev,40,3,34886)
CheckMemberSize(struct stat64,st_size,8,3,34887)
CheckOffset(struct stat64,st_size,48,3,34887)
CheckMemberSize(struct stat64,st_atime,8,3,34888)
CheckOffset(struct stat64,st_atime,56,3,34888)
CheckMemberSize(struct stat64,__reserved0,8,3,34889)
CheckOffset(struct stat64,__reserved0,64,3,34889)
CheckMemberSize(struct stat64,st_mtime,8,3,34890)
CheckOffset(struct stat64,st_mtime,72,3,34890)
CheckMemberSize(struct stat64,__reserved1,8,3,34891)
CheckOffset(struct stat64,__reserved1,80,3,34891)
CheckMemberSize(struct stat64,st_ctime,8,3,34892)
CheckOffset(struct stat64,st_ctime,88,3,34892)
CheckMemberSize(struct stat64,__reserved2,8,3,34893)
CheckOffset(struct stat64,__reserved2,96,3,34893)
CheckMemberSize(struct stat64,st_blksize,8,3,34894)
CheckOffset(struct stat64,st_blksize,104,3,34894)
CheckMemberSize(struct stat64,st_blocks,8,3,34895)
CheckOffset(struct stat64,st_blocks,112,3,34895)
CheckMemberSize(struct stat64,__unused,24,3,34896)
CheckOffset(struct stat64,__unused,120,3,34896)
#endif

#if __powerpc64__
CheckTypeSize(struct stat,144, 10497, 9)
CheckMemberSize(struct stat,st_dev,8,9,40086)
CheckOffset(struct stat,st_dev,0,9,40086)
CheckMemberSize(struct stat,st_ino,8,9,40087)
CheckOffset(struct stat,st_ino,8,9,40087)
CheckMemberSize(struct stat,st_nlink,8,9,40088)
CheckOffset(struct stat,st_nlink,16,9,40088)
CheckMemberSize(struct stat,st_mode,4,9,40089)
CheckOffset(struct stat,st_mode,24,9,40089)
CheckMemberSize(struct stat,st_uid,4,9,40090)
CheckOffset(struct stat,st_uid,28,9,40090)
CheckMemberSize(struct stat,st_gid,4,9,40091)
CheckOffset(struct stat,st_gid,32,9,40091)
CheckMemberSize(struct stat,__pad1,4,9,40092)
CheckOffset(struct stat,__pad1,36,9,40092)
CheckMemberSize(struct stat,st_rdev,8,9,40093)
CheckOffset(struct stat,st_rdev,40,9,40093)
CheckMemberSize(struct stat,st_size,8,9,40094)
CheckOffset(struct stat,st_size,48,9,40094)
CheckMemberSize(struct stat,st_blksize,8,9,40095)
CheckOffset(struct stat,st_blksize,56,9,40095)
CheckMemberSize(struct stat,st_blocks,8,9,40096)
CheckOffset(struct stat,st_blocks,64,9,40096)
CheckMemberSize(struct stat,st_atime,8,9,40097)
CheckOffset(struct stat,st_atime,72,9,40097)
CheckMemberSize(struct stat,__unused1,8,9,40098)
CheckOffset(struct stat,__unused1,80,9,40098)
CheckMemberSize(struct stat,st_mtime,8,9,40099)
CheckOffset(struct stat,st_mtime,88,9,40099)
CheckMemberSize(struct stat,__unused2,8,9,40100)
CheckOffset(struct stat,__unused2,96,9,40100)
CheckMemberSize(struct stat,st_ctime,8,9,40101)
CheckOffset(struct stat,st_ctime,104,9,40101)
CheckMemberSize(struct stat,__unused3,8,9,40102)
CheckOffset(struct stat,__unused3,112,9,40102)
CheckMemberSize(struct stat,__unused4,8,9,40103)
CheckOffset(struct stat,__unused4,120,9,40103)
CheckMemberSize(struct stat,__unused5,8,9,40104)
CheckOffset(struct stat,__unused5,128,9,40104)
CheckMemberSize(struct stat,__unused6,8,9,40105)
CheckOffset(struct stat,__unused6,136,9,40105)
#endif

#if __powerpc64__
CheckTypeSize(struct stat64,144, 10498, 9)
CheckMemberSize(struct stat64,st_dev,8,9,40106)
CheckOffset(struct stat64,st_dev,0,9,40106)
CheckMemberSize(struct stat64,st_ino,8,9,40107)
CheckOffset(struct stat64,st_ino,8,9,40107)
CheckMemberSize(struct stat64,st_nlink,8,9,40108)
CheckOffset(struct stat64,st_nlink,16,9,40108)
CheckMemberSize(struct stat64,st_mode,4,9,40109)
CheckOffset(struct stat64,st_mode,24,9,40109)
CheckMemberSize(struct stat64,st_uid,4,9,40110)
CheckOffset(struct stat64,st_uid,28,9,40110)
CheckMemberSize(struct stat64,st_gid,4,9,40111)
CheckOffset(struct stat64,st_gid,32,9,40111)
CheckMemberSize(struct stat64,__pad1,4,9,40112)
CheckOffset(struct stat64,__pad1,36,9,40112)
CheckMemberSize(struct stat64,st_rdev,8,9,40113)
CheckOffset(struct stat64,st_rdev,40,9,40113)
CheckMemberSize(struct stat64,st_size,8,9,40114)
CheckOffset(struct stat64,st_size,48,9,40114)
CheckMemberSize(struct stat64,st_blksize,8,9,40115)
CheckOffset(struct stat64,st_blksize,56,9,40115)
CheckMemberSize(struct stat64,st_blocks,8,9,40116)
CheckOffset(struct stat64,st_blocks,64,9,40116)
CheckMemberSize(struct stat64,st_atime,8,9,40117)
CheckOffset(struct stat64,st_atime,72,9,40117)
CheckMemberSize(struct stat64,__unused1,8,9,40118)
CheckOffset(struct stat64,__unused1,80,9,40118)
CheckMemberSize(struct stat64,st_mtime,8,9,40119)
CheckOffset(struct stat64,st_mtime,88,9,40119)
CheckMemberSize(struct stat64,__unused2,8,9,40120)
CheckOffset(struct stat64,__unused2,96,9,40120)
CheckMemberSize(struct stat64,st_ctime,8,9,40121)
CheckOffset(struct stat64,st_ctime,104,9,40121)
CheckMemberSize(struct stat64,__unused3,8,9,40122)
CheckOffset(struct stat64,__unused3,112,9,40122)
CheckMemberSize(struct stat64,__unused4,8,9,40123)
CheckOffset(struct stat64,__unused4,120,9,40123)
CheckMemberSize(struct stat64,__unused5,8,9,40124)
CheckOffset(struct stat64,__unused5,128,9,40124)
CheckMemberSize(struct stat64,__unused6,8,9,40125)
CheckOffset(struct stat64,__unused6,136,9,40125)
#endif

#if __s390x__
CheckTypeSize(struct stat,144, 10550, 12)
CheckMemberSize(struct stat,st_dev,8,12,40228)
CheckOffset(struct stat,st_dev,0,12,40228)
CheckMemberSize(struct stat,st_ino,8,12,40229)
CheckOffset(struct stat,st_ino,8,12,40229)
CheckMemberSize(struct stat,st_nlink,8,12,40230)
CheckOffset(struct stat,st_nlink,16,12,40230)
CheckMemberSize(struct stat,st_mode,4,12,40231)
CheckOffset(struct stat,st_mode,24,12,40231)
CheckMemberSize(struct stat,st_uid,4,12,40232)
CheckOffset(struct stat,st_uid,28,12,40232)
CheckMemberSize(struct stat,st_gid,4,12,40233)
CheckOffset(struct stat,st_gid,32,12,40233)
CheckMemberSize(struct stat,pad0,4,12,40234)
CheckOffset(struct stat,pad0,36,12,40234)
CheckMemberSize(struct stat,st_rdev,8,12,40235)
CheckOffset(struct stat,st_rdev,40,12,40235)
CheckMemberSize(struct stat,st_size,8,12,40236)
CheckOffset(struct stat,st_size,48,12,40236)
CheckMemberSize(struct stat,st_atime,8,12,40237)
CheckOffset(struct stat,st_atime,56,12,40237)
CheckMemberSize(struct stat,__reserved0,8,12,40238)
CheckOffset(struct stat,__reserved0,64,12,40238)
CheckMemberSize(struct stat,st_mtime,8,12,40239)
CheckOffset(struct stat,st_mtime,72,12,40239)
CheckMemberSize(struct stat,__reserved1,8,12,40240)
CheckOffset(struct stat,__reserved1,80,12,40240)
CheckMemberSize(struct stat,st_ctime,8,12,40241)
CheckOffset(struct stat,st_ctime,88,12,40241)
CheckMemberSize(struct stat,__reserved2,8,12,40242)
CheckOffset(struct stat,__reserved2,96,12,40242)
CheckMemberSize(struct stat,st_blksize,8,12,40243)
CheckOffset(struct stat,st_blksize,104,12,40243)
CheckMemberSize(struct stat,st_blocks,8,12,40244)
CheckOffset(struct stat,st_blocks,112,12,40244)
#endif

#if __s390x__
CheckTypeSize(struct stat64,144, 10551, 12)
CheckMemberSize(struct stat64,st_dev,8,12,40245)
CheckOffset(struct stat64,st_dev,0,12,40245)
CheckMemberSize(struct stat64,st_ino,8,12,40246)
CheckOffset(struct stat64,st_ino,8,12,40246)
CheckMemberSize(struct stat64,st_nlink,8,12,40247)
CheckOffset(struct stat64,st_nlink,16,12,40247)
CheckMemberSize(struct stat64,st_mode,4,12,40248)
CheckOffset(struct stat64,st_mode,24,12,40248)
CheckMemberSize(struct stat64,st_uid,4,12,40249)
CheckOffset(struct stat64,st_uid,28,12,40249)
CheckMemberSize(struct stat64,st_gid,4,12,40250)
CheckOffset(struct stat64,st_gid,32,12,40250)
CheckMemberSize(struct stat64,pad0,4,12,40251)
CheckOffset(struct stat64,pad0,36,12,40251)
CheckMemberSize(struct stat64,st_rdev,8,12,40252)
CheckOffset(struct stat64,st_rdev,40,12,40252)
CheckMemberSize(struct stat64,st_size,8,12,40253)
CheckOffset(struct stat64,st_size,48,12,40253)
CheckMemberSize(struct stat64,st_atime,8,12,40254)
CheckOffset(struct stat64,st_atime,56,12,40254)
CheckMemberSize(struct stat64,__reserved0,8,12,40255)
CheckOffset(struct stat64,__reserved0,64,12,40255)
CheckMemberSize(struct stat64,st_mtime,8,12,40256)
CheckOffset(struct stat64,st_mtime,72,12,40256)
CheckMemberSize(struct stat64,__reserved1,8,12,40257)
CheckOffset(struct stat64,__reserved1,80,12,40257)
CheckMemberSize(struct stat64,st_ctime,8,12,40258)
CheckOffset(struct stat64,st_ctime,88,12,40258)
CheckMemberSize(struct stat64,__reserved2,8,12,40259)
CheckOffset(struct stat64,__reserved2,96,12,40259)
CheckMemberSize(struct stat64,st_blksize,8,12,40260)
CheckOffset(struct stat64,st_blksize,104,12,40260)
CheckMemberSize(struct stat64,st_blocks,8,12,40261)
CheckOffset(struct stat64,st_blocks,112,12,40261)
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
