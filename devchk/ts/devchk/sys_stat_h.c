/*
 * Test of sys/stat.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef S_IFMT
	CompareConstant(S_IFMT,0xf000)
#else
Msg( "Error: Constant not found: S_IFMT\n");
cnt++;
#endif

#ifdef S_IFDIR
	CompareConstant(S_IFDIR,0x4000)
#else
Msg( "Error: Constant not found: S_IFDIR\n");
cnt++;
#endif

#ifdef S_IFCHR
	CompareConstant(S_IFCHR,0x2000)
#else
Msg( "Error: Constant not found: S_IFCHR\n");
cnt++;
#endif

#ifdef S_IFBLK
	CompareConstant(S_IFBLK,0x6000)
#else
Msg( "Error: Constant not found: S_IFBLK\n");
cnt++;
#endif

#ifdef S_IFREG
	CompareConstant(S_IFREG,0x8000)
#else
Msg( "Error: Constant not found: S_IFREG\n");
cnt++;
#endif

#ifdef S_IFIFO
	CompareConstant(S_IFIFO,0x1000)
#else
Msg( "Error: Constant not found: S_IFIFO\n");
cnt++;
#endif

#ifdef S_IFLNK
	CompareConstant(S_IFLNK,0xa000)
#else
Msg( "Error: Constant not found: S_IFLNK\n");
cnt++;
#endif

#ifdef S_IFSOCK
	CompareConstant(S_IFSOCK,0xc000)
#else
Msg( "Error: Constant not found: S_IFSOCK\n");
cnt++;
#endif

/* No test for S_TYPEISMQ(buf) */
/* No test for S_TYPEISSEM(buf) */
/* No test for S_TYPEISSHM(buf) */
#ifdef S_ISUID
	CompareConstant(S_ISUID,0x0800)
#else
Msg( "Error: Constant not found: S_ISUID\n");
cnt++;
#endif

#ifdef S_ISGID
	CompareConstant(S_ISGID,0x0400)
#else
Msg( "Error: Constant not found: S_ISGID\n");
cnt++;
#endif

#ifdef S_ISVTX
	CompareConstant(S_ISVTX,01000)
#else
Msg( "Error: Constant not found: S_ISVTX\n");
cnt++;
#endif

#ifdef S_IRUSR
	CompareConstant(S_IRUSR,0x0100)
#else
Msg( "Error: Constant not found: S_IRUSR\n");
cnt++;
#endif

#ifdef S_IWUSR
	CompareConstant(S_IWUSR,0x0080)
#else
Msg( "Error: Constant not found: S_IWUSR\n");
cnt++;
#endif

#ifdef S_IXUSR
	CompareConstant(S_IXUSR,0x0040)
#else
Msg( "Error: Constant not found: S_IXUSR\n");
cnt++;
#endif

#ifdef S_IRWXU
	CompareConstant(S_IRWXU,(S_IREAD|S_IWRITE|S_IEXEC))
#else
Msg( "Error: Constant not found: S_IRWXU\n");
cnt++;
#endif

#ifdef S_IREAD
	CompareConstant(S_IREAD,S_IRUSR)
#else
Msg( "Error: Constant not found: S_IREAD\n");
cnt++;
#endif

#ifdef S_IWRITE
	CompareConstant(S_IWRITE,S_IWUSR)
#else
Msg( "Error: Constant not found: S_IWRITE\n");
cnt++;
#endif

#ifdef S_IEXEC
	CompareConstant(S_IEXEC,S_IXUSR)
#else
Msg( "Error: Constant not found: S_IEXEC\n");
cnt++;
#endif

#ifdef S_IRGRP
	CompareConstant(S_IRGRP,(S_IRUSR>>3))
#else
Msg( "Error: Constant not found: S_IRGRP\n");
cnt++;
#endif

#ifdef S_IWGRP
	CompareConstant(S_IWGRP,(S_IWUSR>>3))
#else
Msg( "Error: Constant not found: S_IWGRP\n");
cnt++;
#endif

#ifdef S_IXGRP
	CompareConstant(S_IXGRP,(S_IXUSR>>3))
#else
Msg( "Error: Constant not found: S_IXGRP\n");
cnt++;
#endif

#ifdef S_IRWXG
	CompareConstant(S_IRWXG,(S_IRWXU>>3))
#else
Msg( "Error: Constant not found: S_IRWXG\n");
cnt++;
#endif

#ifdef S_IROTH
	CompareConstant(S_IROTH,(S_IRGRP>>3))
#else
Msg( "Error: Constant not found: S_IROTH\n");
cnt++;
#endif

#ifdef S_IWOTH
	CompareConstant(S_IWOTH,(S_IWGRP>>3))
#else
Msg( "Error: Constant not found: S_IWOTH\n");
cnt++;
#endif

#ifdef S_IXOTH
	CompareConstant(S_IXOTH,(S_IXGRP>>3))
#else
Msg( "Error: Constant not found: S_IXOTH\n");
cnt++;
#endif

#ifdef S_IRWXO
	CompareConstant(S_IRWXO,(S_IRWXG>>3))
#else
Msg( "Error: Constant not found: S_IRWXO\n");
cnt++;
#endif

/* No test for S_ISLNK(m) */
/* No test for S_ISREG(m) */
/* No test for S_ISDIR(m) */
/* No test for S_ISCHR(m) */
/* No test for S_ISBLK(m) */
/* No test for S_ISFIFO(m) */
/* No test for S_ISSOCK(m) */
#ifdef __i386__
CheckTypeSize(struct stat,88, 8693, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8693,0);
#endif

#ifdef __i386__
CheckTypeSize(struct stat64,96, 8697, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8697,0);
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
