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
	CompareConstant(S_IFMT,__S_IFMT)
#else
Msg( "Warning: Constant not found: S_IFMT\n");
#endif

#ifdef S_IFDIR
	CompareConstant(S_IFDIR,__S_IFDIR)
#else
Msg( "Warning: Constant not found: S_IFDIR\n");
#endif

#ifdef S_IFCHR
	CompareConstant(S_IFCHR,__S_IFCHR)
#else
Msg( "Warning: Constant not found: S_IFCHR\n");
#endif

#ifdef S_IFBLK
	CompareConstant(S_IFBLK,__S_IFBLK)
#else
Msg( "Warning: Constant not found: S_IFBLK\n");
#endif

#ifdef S_IFREG
	CompareConstant(S_IFREG,__S_IFREG)
#else
Msg( "Warning: Constant not found: S_IFREG\n");
#endif

#ifdef S_IFIFO
	CompareConstant(S_IFIFO,__S_IFIFO)
#else
Msg( "Warning: Constant not found: S_IFIFO\n");
#endif

#ifdef S_IFLNK
	CompareConstant(S_IFLNK,__S_IFLNK)
#else
Msg( "Warning: Constant not found: S_IFLNK\n");
#endif

#ifdef S_IFSOCK
	CompareConstant(S_IFSOCK,__S_IFSOCK)
#else
Msg( "Warning: Constant not found: S_IFSOCK\n");
#endif

#ifdef S_ISUID
	CompareConstant(S_ISUID,__S_ISUID)
#else
Msg( "Warning: Constant not found: S_ISUID\n");
#endif

#ifdef S_ISGID
	CompareConstant(S_ISGID,__S_ISGID)
#else
Msg( "Warning: Constant not found: S_ISGID\n");
#endif

#ifdef S_IRUSR
	CompareConstant(S_IRUSR,__S_IREAD)
#else
Msg( "Warning: Constant not found: S_IRUSR\n");
#endif

#ifdef S_IWUSR
	CompareConstant(S_IWUSR,__S_IWRITE)
#else
Msg( "Warning: Constant not found: S_IWUSR\n");
#endif

#ifdef S_IXUSR
	CompareConstant(S_IXUSR,__S_IEXEC)
#else
Msg( "Warning: Constant not found: S_IXUSR\n");
#endif

#ifdef S_IRWXU
	CompareConstant(S_IRWXU,(__S_IREAD|__S_IWRITE|__S_IEXEC))
#else
Msg( "Warning: Constant not found: S_IRWXU\n");
#endif

#ifdef S_IRGRP
	CompareConstant(S_IRGRP,(S_IRUSR>>3))
#else
Msg( "Warning: Constant not found: S_IRGRP\n");
#endif

#ifdef S_IWGRP
	CompareConstant(S_IWGRP,(S_IWUSR>>3))
#else
Msg( "Warning: Constant not found: S_IWGRP\n");
#endif

#ifdef S_IXGRP
	CompareConstant(S_IXGRP,(S_IXUSR>>3))
#else
Msg( "Warning: Constant not found: S_IXGRP\n");
#endif

#ifdef S_IRWXG
	CompareConstant(S_IRWXG,(S_IRWXU>>3))
#else
Msg( "Warning: Constant not found: S_IRWXG\n");
#endif

#ifdef S_IROTH
	CompareConstant(S_IROTH,(S_IRGRP>>3))
#else
Msg( "Warning: Constant not found: S_IROTH\n");
#endif

#ifdef S_IWOTH
	CompareConstant(S_IWOTH,(S_IWGRP>>3))
#else
Msg( "Warning: Constant not found: S_IWOTH\n");
#endif

#ifdef S_IXOTH
	CompareConstant(S_IXOTH,(S_IXGRP>>3))
#else
Msg( "Warning: Constant not found: S_IXOTH\n");
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
