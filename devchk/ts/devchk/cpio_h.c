/*
 * Test of cpio.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "cpio.h"



#ifdef TET_TEST
void cpio_h()
{
#else
int cpio_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in cpio.h\n");
#endif

#ifdef C_IRUSR
	CompareConstant(C_IRUSR,000400)
#else
Msg( "Warning: Constant not found: C_IRUSR\n");
#endif

#ifdef C_IWUSR
	CompareConstant(C_IWUSR,000200)
#else
Msg( "Warning: Constant not found: C_IWUSR\n");
#endif

#ifdef C_IXUSR
	CompareConstant(C_IXUSR,000100)
#else
Msg( "Warning: Constant not found: C_IXUSR\n");
#endif

#ifdef C_IRGRP
	CompareConstant(C_IRGRP,000040)
#else
Msg( "Warning: Constant not found: C_IRGRP\n");
#endif

#ifdef C_IWGRP
	CompareConstant(C_IWGRP,000020)
#else
Msg( "Warning: Constant not found: C_IWGRP\n");
#endif

#ifdef C_IXGRP
	CompareConstant(C_IXGRP,000010)
#else
Msg( "Warning: Constant not found: C_IXGRP\n");
#endif

#ifdef C_IROTH
	CompareConstant(C_IROTH,000004)
#else
Msg( "Warning: Constant not found: C_IROTH\n");
#endif

#ifdef C_IWOTH
	CompareConstant(C_IWOTH,000002)
#else
Msg( "Warning: Constant not found: C_IWOTH\n");
#endif

#ifdef C_IXOTH
	CompareConstant(C_IXOTH,000001)
#else
Msg( "Warning: Constant not found: C_IXOTH\n");
#endif

#ifdef C_ISUID
	CompareConstant(C_ISUID,004000)
#else
Msg( "Warning: Constant not found: C_ISUID\n");
#endif

#ifdef C_ISGID
	CompareConstant(C_ISGID,002000)
#else
Msg( "Warning: Constant not found: C_ISGID\n");
#endif

#ifdef C_ISVTX
	CompareConstant(C_ISVTX,001000)
#else
Msg( "Warning: Constant not found: C_ISVTX\n");
#endif

#ifdef C_ISBLK
	CompareConstant(C_ISBLK,060000)
#else
Msg( "Warning: Constant not found: C_ISBLK\n");
#endif

#ifdef C_ISCHR
	CompareConstant(C_ISCHR,020000)
#else
Msg( "Warning: Constant not found: C_ISCHR\n");
#endif

#ifdef C_ISDIR
	CompareConstant(C_ISDIR,040000)
#else
Msg( "Warning: Constant not found: C_ISDIR\n");
#endif

#ifdef C_ISFIFO
	CompareConstant(C_ISFIFO,010000)
#else
Msg( "Warning: Constant not found: C_ISFIFO\n");
#endif

#ifdef C_ISSOCK
	CompareConstant(C_ISSOCK,0140000)
#else
Msg( "Warning: Constant not found: C_ISSOCK\n");
#endif

#ifdef C_ISLNK
	CompareConstant(C_ISLNK,0120000)
#else
Msg( "Warning: Constant not found: C_ISLNK\n");
#endif

#ifdef C_ISCTG
	CompareConstant(C_ISCTG,0110000)
#else
Msg( "Warning: Constant not found: C_ISCTG\n");
#endif

#ifdef C_ISREG
	CompareConstant(C_ISREG,0100000)
#else
Msg( "Warning: Constant not found: C_ISREG\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in cpio.h\n",cnt);
return cnt;
#endif

}
