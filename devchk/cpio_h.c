/*
 * Test of cpio.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "cpio.h"



int cpio_h()
{
int cnt=0;
#ifdef MAGIC
CompareConstant(MAGIC,"070707")
#else
Msg( "Warning: Constant not found: MAGIC\n");
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
#ifdef C_ISCHR
CompareConstant(C_ISCHR,0020000)
#else
Msg( "Warning: Constant not found: C_ISCHR\n");
#endif
#ifdef C_ISBLK
CompareConstant(C_ISBLK,0060000)
#else
Msg( "Warning: Constant not found: C_ISBLK\n");
#endif
#ifdef C_ISREG
CompareConstant(C_ISREG,0100000)
#else
Msg( "Warning: Constant not found: C_ISREG\n");
#endif
#ifdef C_ISFIFO
CompareConstant(C_ISFIFO,0010000)
#else
Msg( "Warning: Constant not found: C_ISFIFO\n");
#endif
#ifdef C_ISDIR
CompareConstant(C_ISDIR,0040000)
#else
Msg( "Warning: Constant not found: C_ISDIR\n");
#endif
#ifdef C_ISVTX
CompareConstant(C_ISVTX,0001000)
#else
Msg( "Warning: Constant not found: C_ISVTX\n");
#endif
#ifdef C_ISGID
CompareConstant(C_ISGID,0002000)
#else
Msg( "Warning: Constant not found: C_ISGID\n");
#endif
#ifdef C_ISUID
CompareConstant(C_ISUID,0004000)
#else
Msg( "Warning: Constant not found: C_ISUID\n");
#endif
#ifdef C_IXOTH
CompareConstant(C_IXOTH,0000001)
#else
Msg( "Warning: Constant not found: C_IXOTH\n");
#endif
#ifdef C_IWOTH
CompareConstant(C_IWOTH,0000002)
#else
Msg( "Warning: Constant not found: C_IWOTH\n");
#endif
#ifdef C_IROTH
CompareConstant(C_IROTH,0000004)
#else
Msg( "Warning: Constant not found: C_IROTH\n");
#endif
#ifdef C_IXGRP
CompareConstant(C_IXGRP,0000010)
#else
Msg( "Warning: Constant not found: C_IXGRP\n");
#endif
#ifdef C_IWGRP
CompareConstant(C_IWGRP,0000020)
#else
Msg( "Warning: Constant not found: C_IWGRP\n");
#endif
#ifdef C_IRGRP
CompareConstant(C_IRGRP,0000040)
#else
Msg( "Warning: Constant not found: C_IRGRP\n");
#endif
#ifdef C_IXUSR
CompareConstant(C_IXUSR,0000100)
#else
Msg( "Warning: Constant not found: C_IXUSR\n");
#endif
#ifdef C_IWUSR
CompareConstant(C_IWUSR,0000200)
#else
Msg( "Warning: Constant not found: C_IWUSR\n");
#endif
#ifdef C_IRUSR
CompareConstant(C_IRUSR,0000400)
#else
Msg( "Warning: Constant not found: C_IRUSR\n");
#endif
printf("%d tests in cpio.h\n",cnt);
return cnt;
}
