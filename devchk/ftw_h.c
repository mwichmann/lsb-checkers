/*
 * Test of ftw.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "ftw.h"



int ftw_h()
{
int cnt=0;
/* No test for S_ISREG(x) */
/* No test for S_ISLNK(x) */
/* No test for S_ISFIFO(x) */
/* No test for S_ISDIR(x) */
/* No test for S_ISCHR(x) */
/* No test for S_ISBLK(x) */
#ifdef S_TYPEISSHM
CompareConstant(S_TYPEISSHM,(-1))
#else
Msg( "Warning: Constant not found: S_TYPEISSHM\n");
#endif
#ifdef S_TYPEISSEM
CompareConstant(S_TYPEISSEM,(-1))
#else
Msg( "Warning: Constant not found: S_TYPEISSEM\n");
#endif
#ifdef S_TYPEISMQ
CompareConstant(S_TYPEISMQ,(-1))
#else
Msg( "Warning: Constant not found: S_TYPEISMQ\n");
#endif
#ifdef S_ISVTX
CompareConstant(S_ISVTX,0001000)
#else
Msg( "Warning: Constant not found: S_ISVTX\n");
#endif
#ifdef S_IFREG
CompareConstant(S_IFREG,0100000)
#else
Msg( "Warning: Constant not found: S_IFREG\n");
#endif
#ifdef S_IFMT
CompareConstant(S_IFMT,0170000)
#else
Msg( "Warning: Constant not found: S_IFMT\n");
#endif
#ifdef S_IFLNK
CompareConstant(S_IFLNK,0120000)
#else
Msg( "Warning: Constant not found: S_IFLNK\n");
#endif
#ifdef S_IFIFO
CompareConstant(S_IFIFO,0010000)
#else
Msg( "Warning: Constant not found: S_IFIFO\n");
#endif
#ifdef S_IFDIR
CompareConstant(S_IFDIR,0040000)
#else
Msg( "Warning: Constant not found: S_IFDIR\n");
#endif
#ifdef S_IFCHR
CompareConstant(S_IFCHR,0020000)
#else
Msg( "Warning: Constant not found: S_IFCHR\n");
#endif
#ifdef S_IFBLK
CompareConstant(S_IFBLK,0060000)
#else
Msg( "Warning: Constant not found: S_IFBLK\n");
#endif
#ifdef FTW_SLN
CompareConstant(FTW_SLN,(-1))
#else
Msg( "Warning: Constant not found: FTW_SLN\n");
#endif
#ifdef FTW_SL
CompareConstant(FTW_SL,4)
#else
Msg( "Warning: Constant not found: FTW_SL\n");
#endif
#ifdef FTW_PHYS
CompareConstant(FTW_PHYS,(-1))
#else
Msg( "Warning: Constant not found: FTW_PHYS\n");
#endif
#ifdef FTW_NS
CompareConstant(FTW_NS,3)
#else
Msg( "Warning: Constant not found: FTW_NS\n");
#endif
#ifdef FTW_MOUNT
CompareConstant(FTW_MOUNT,(-1))
#else
Msg( "Warning: Constant not found: FTW_MOUNT\n");
#endif
#ifdef FTW_F
CompareConstant(FTW_F,0)
#else
Msg( "Warning: Constant not found: FTW_F\n");
#endif
#ifdef FTW_DP
CompareConstant(FTW_DP,(-1))
#else
Msg( "Warning: Constant not found: FTW_DP\n");
#endif
#ifdef FTW_DNR
CompareConstant(FTW_DNR,2)
#else
Msg( "Warning: Constant not found: FTW_DNR\n");
#endif
#ifdef FTW_DEPTH
CompareConstant(FTW_DEPTH,(-1))
#else
Msg( "Warning: Constant not found: FTW_DEPTH\n");
#endif
#ifdef FTW_D
CompareConstant(FTW_D,1)
#else
Msg( "Warning: Constant not found: FTW_D\n");
#endif
#ifdef FTW_CHDIR
CompareConstant(FTW_CHDIR,(-1))
#else
Msg( "Warning: Constant not found: FTW_CHDIR\n");
#endif
printf("%d tests in ftw.h\n",cnt);
return cnt;
}
