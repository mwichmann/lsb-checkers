/*
 * Test of sys/stat.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/stat.h\n");
#endif

printf("Checking data structures in sys/stat.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef S_IFMT
	CompareConstant(S_IFMT,0xf000,1683,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IFMT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IFDIR
	CompareConstant(S_IFDIR,0x4000,1684,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IFDIR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IFCHR
	CompareConstant(S_IFCHR,0x2000,1685,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IFCHR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IFBLK
	CompareConstant(S_IFBLK,0x6000,1686,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IFBLK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IFREG
	CompareConstant(S_IFREG,0x8000,1687,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IFREG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IFIFO
	CompareConstant(S_IFIFO,0x1000,1688,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IFIFO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IFLNK
	CompareConstant(S_IFLNK,0xa000,1689,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IFLNK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IFSOCK
	CompareConstant(S_IFSOCK,0xc000,1690,architecture,1.1,NULL)
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
	CompareConstant(S_ISUID,0x0800,1702,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_ISUID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_ISGID
	CompareConstant(S_ISGID,0x0400,1703,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_ISGID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_ISVTX
	CompareConstant(S_ISVTX,01000,1704,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: S_ISVTX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IRUSR
	CompareConstant(S_IRUSR,0x0100,1705,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IRUSR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IWUSR
	CompareConstant(S_IWUSR,0x0080,1706,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IWUSR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IXUSR
	CompareConstant(S_IXUSR,0x0040,1707,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IXUSR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IRWXU
	CompareConstant(S_IRWXU,(S_IREAD|S_IWRITE|S_IEXEC),1708,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IRWXU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IREAD
	CompareConstant(S_IREAD,S_IRUSR,1709,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IREAD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IWRITE
	CompareConstant(S_IWRITE,S_IWUSR,1710,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IWRITE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IEXEC
	CompareConstant(S_IEXEC,S_IXUSR,1711,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IEXEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IRGRP
	CompareConstant(S_IRGRP,(S_IRUSR>>3),1712,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IRGRP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IWGRP
	CompareConstant(S_IWGRP,(S_IWUSR>>3),1713,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IWGRP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IXGRP
	CompareConstant(S_IXGRP,(S_IXUSR>>3),1714,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IXGRP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IRWXG
	CompareConstant(S_IRWXG,(S_IRWXU>>3),1715,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IRWXG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IROTH
	CompareConstant(S_IROTH,(S_IRGRP>>3),1716,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IROTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IWOTH
	CompareConstant(S_IWOTH,(S_IWGRP>>3),1717,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IWOTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IXOTH
	CompareConstant(S_IXOTH,(S_IXGRP>>3),1718,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: S_IXOTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef S_IRWXO
	CompareConstant(S_IRWXO,(S_IRWXG>>3),1719,architecture,1.1,NULL)
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
	CompareConstant(_STAT_VER,1,4955,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _STAT_VER\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef _STAT_VER
	CompareConstant(_STAT_VER,3,4955,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _STAT_VER\n");
cnt++;
#endif

#elif __ia64__
#ifdef _STAT_VER
	CompareConstant(_STAT_VER,1,4955,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: _STAT_VER\n");
cnt++;
#endif

#elif __i386__
#ifdef _STAT_VER
	CompareConstant(_STAT_VER,3,4955,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _STAT_VER\n");
cnt++;
#endif

#elif __s390x__
#ifdef _STAT_VER
	CompareConstant(_STAT_VER,1,4955,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: _STAT_VER\n");
cnt++;
#endif

#elif __x86_64__
#ifdef _STAT_VER
	CompareConstant(_STAT_VER,1,4955,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _STAT_VER\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef _STAT_VER
	CompareConstant(_STAT_VER,3,4955,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: _STAT_VER\n");
cnt++;
#endif

#else
Msg( "No definition for _STAT_VER (4955, int) in db\n");
#ifdef _STAT_VER
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,4955,%d,'""1.3""',NULL);\n", architecture, _STAT_VER);
#endif
#endif
#if _LSB_DEFAULT_ARCH
/* No test for st_atime */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for st_mtime */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for st_ctime */
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390x__
#elif __s390__ && !__s390x__
#elif __x86_64__
#endif

#if __i386__
#elif __powerpc__ && !__powerpc64__
#elif __ia64__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#elif __s390__ && !__s390x__
#endif

extern int __fxstat_db(int, int, struct stat *);
CheckInterfacedef(__fxstat,__fxstat_db);
extern int __fxstat64_db(int, int, struct stat64 *);
CheckInterfacedef(__fxstat64,__fxstat64_db);
extern int __lxstat_db(int, const char *, struct stat *);
CheckInterfacedef(__lxstat,__lxstat_db);
extern int __lxstat64_db(int, const char *, struct stat64 *);
CheckInterfacedef(__lxstat64,__lxstat64_db);
extern int __xmknod_db(int, const char *, mode_t, dev_t *);
CheckInterfacedef(__xmknod,__xmknod_db);
extern int __xstat_db(int, const char *, struct stat *);
CheckInterfacedef(__xstat,__xstat_db);
extern int __xstat64_db(int, const char *, struct stat64 *);
CheckInterfacedef(__xstat64,__xstat64_db);
extern int mkfifo_db(const char *, mode_t);
CheckInterfacedef(mkfifo,mkfifo_db);
extern int chmod_db(const char *, mode_t);
CheckInterfacedef(chmod,chmod_db);
extern int fchmod_db(int, mode_t);
CheckInterfacedef(fchmod,fchmod_db);
extern mode_t umask_db(mode_t);
CheckInterfacedef(umask,umask_db);
extern int stat_db(const char *, struct stat *);
CheckInterfacedef(stat,stat_db);
extern int fstat_db(int, struct stat *);
CheckInterfacedef(fstat,fstat_db);
extern int lstat_db(const char *, struct stat *);
CheckInterfacedef(lstat,lstat_db);
extern int stat64_db(const char *, struct stat64 *);
CheckInterfacedef(stat64,stat64_db);
extern int fstat64_db(int, struct stat64 *);
CheckInterfacedef(fstat64,fstat64_db);
extern int lstat64_db(const char *, struct stat64 *);
CheckInterfacedef(lstat64,lstat64_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/stat.h\n\n",pcnt,cnt);
return cnt;
#endif

}
