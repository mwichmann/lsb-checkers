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
#elif __ia64__
CheckTypeSize(struct stat,144, 8693, 3)
#elif __powerpc__
CheckTypeSize(struct stat,88, 8693, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8693,0);
Msg("Find size of stat (8693)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct stat64,96, 8697, 2)
#elif __ia64__
CheckTypeSize(struct stat64,144, 8697, 3)
#elif __powerpc__
CheckTypeSize(struct stat64,104, 8697, 6)
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
