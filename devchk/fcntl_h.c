/*
 * Test of fcntl.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "fcntl.h"



int fcntl_h()
{
int cnt=0;
#ifdef S_IXUSR
CompareConstant(S_IXUSR,(-1))
#else
Msg( "Warning: Constant not found: S_IXUSR\n");
#endif
#ifdef S_IXOTH
CompareConstant(S_IXOTH,(-1))
#else
Msg( "Warning: Constant not found: S_IXOTH\n");
#endif
#ifdef S_IXGRP
CompareConstant(S_IXGRP,(-1))
#else
Msg( "Warning: Constant not found: S_IXGRP\n");
#endif
#ifdef S_IWUSR
CompareConstant(S_IWUSR,(-1))
#else
Msg( "Warning: Constant not found: S_IWUSR\n");
#endif
#ifdef S_IWOTH
CompareConstant(S_IWOTH,(-1))
#else
Msg( "Warning: Constant not found: S_IWOTH\n");
#endif
#ifdef S_IWGRP
CompareConstant(S_IWGRP,(-1))
#else
Msg( "Warning: Constant not found: S_IWGRP\n");
#endif
#ifdef S_ISUID
CompareConstant(S_ISUID,(-1))
#else
Msg( "Warning: Constant not found: S_ISUID\n");
#endif
#ifdef S_ISGID
CompareConstant(S_ISGID,(-1))
#else
Msg( "Warning: Constant not found: S_ISGID\n");
#endif
#ifdef S_IRWXU
CompareConstant(S_IRWXU,(-1))
#else
Msg( "Warning: Constant not found: S_IRWXU\n");
#endif
#ifdef S_IRWXO
CompareConstant(S_IRWXO,(-1))
#else
Msg( "Warning: Constant not found: S_IRWXO\n");
#endif
#ifdef S_IRWXG
CompareConstant(S_IRWXG,(-1))
#else
Msg( "Warning: Constant not found: S_IRWXG\n");
#endif
#ifdef S_IRUSR
CompareConstant(S_IRUSR,(-1))
#else
Msg( "Warning: Constant not found: S_IRUSR\n");
#endif
#ifdef S_IROTH
CompareConstant(S_IROTH,(-1))
#else
Msg( "Warning: Constant not found: S_IROTH\n");
#endif
#ifdef S_IRGRP
CompareConstant(S_IRGRP,(-1))
#else
Msg( "Warning: Constant not found: S_IRGRP\n");
#endif
#ifdef SEEK_SET
CompareConstant(SEEK_SET,(-1))
#else
Msg( "Warning: Constant not found: SEEK_SET\n");
#endif
#ifdef SEEK_END
CompareConstant(SEEK_END,(-1))
#else
Msg( "Warning: Constant not found: SEEK_END\n");
#endif
#ifdef SEEK_CUR
CompareConstant(SEEK_CUR,(-1))
#else
Msg( "Warning: Constant not found: SEEK_CUR\n");
#endif
#ifdef O_TRUNC
CompareConstant(O_TRUNC,512)
#else
Msg( "Warning: Constant not found: O_TRUNC\n");
#endif
#ifdef O_SYNC
CompareConstant(O_SYNC,4096)
#else
Msg( "Warning: Constant not found: O_SYNC\n");
#endif
#ifdef O_RSYNC
CompareConstant(O_RSYNC,4096)
#else
Msg( "Warning: Constant not found: O_RSYNC\n");
#endif
#ifdef O_NONBLOCK
CompareConstant(O_NONBLOCK,2048)
#else
Msg( "Warning: Constant not found: O_NONBLOCK\n");
#endif
#ifdef O_NOCTTY
CompareConstant(O_NOCTTY,256)
#else
Msg( "Warning: Constant not found: O_NOCTTY\n");
#endif
#ifdef O_EXCL
CompareConstant(O_EXCL,128)
#else
Msg( "Warning: Constant not found: O_EXCL\n");
#endif
#ifdef O_DSYNC
CompareConstant(O_DSYNC,4096)
#else
Msg( "Warning: Constant not found: O_DSYNC\n");
#endif
#ifdef O_CREAT
CompareConstant(O_CREAT,64)
#else
Msg( "Warning: Constant not found: O_CREAT\n");
#endif
#ifdef O_APPEND
CompareConstant(O_APPEND,1024)
#else
Msg( "Warning: Constant not found: O_APPEND\n");
#endif
#ifdef O_ACCMODE
CompareConstant(O_ACCMODE,3)
#else
Msg( "Warning: Constant not found: O_ACCMODE\n");
#endif
#ifdef F_WRLCK
CompareConstant(F_WRLCK,1)
#else
Msg( "Warning: Constant not found: F_WRLCK\n");
#endif
#ifdef F_UNLCK
CompareConstant(F_UNLCK,2)
#else
Msg( "Warning: Constant not found: F_UNLCK\n");
#endif
#ifdef F_SETLKW
CompareConstant(F_SETLKW,7)
#else
Msg( "Warning: Constant not found: F_SETLKW\n");
#endif
#ifdef F_SETLK
CompareConstant(F_SETLK,6)
#else
Msg( "Warning: Constant not found: F_SETLK\n");
#endif
#ifdef F_RDLCK
CompareConstant(F_RDLCK,0)
#else
Msg( "Warning: Constant not found: F_RDLCK\n");
#endif
#ifdef F_GETLK
CompareConstant(F_GETLK,5)
#else
Msg( "Warning: Constant not found: F_GETLK\n");
#endif
#ifdef FD_CLOEXEC
CompareConstant(FD_CLOEXEC,1)
#else
Msg( "Warning: Constant not found: FD_CLOEXEC\n");
#endif
#ifdef O_WRONLY
CompareConstant(O_WRONLY,1)
#else
Msg( "Warning: Constant not found: O_WRONLY\n");
#endif
#ifdef O_RDWR
CompareConstant(O_RDWR,2)
#else
Msg( "Warning: Constant not found: O_RDWR\n");
#endif
#ifdef O_RDONLY
CompareConstant(O_RDONLY,0)
#else
Msg( "Warning: Constant not found: O_RDONLY\n");
#endif
#ifdef F_SETFL
CompareConstant(F_SETFL,4)
#else
Msg( "Warning: Constant not found: F_SETFL\n");
#endif
#ifdef F_SETFD
CompareConstant(F_SETFD,2)
#else
Msg( "Warning: Constant not found: F_SETFD\n");
#endif
#ifdef F_GETFL
CompareConstant(F_GETFL,3)
#else
Msg( "Warning: Constant not found: F_GETFL\n");
#endif
#ifdef F_GETFD
CompareConstant(F_GETFD,1)
#else
Msg( "Warning: Constant not found: F_GETFD\n");
#endif
#ifdef F_DUPFD
CompareConstant(F_DUPFD,0)
#else
Msg( "Warning: Constant not found: F_DUPFD\n");
#endif
printf("%d tests in fcntl.h\n",cnt);
return cnt;
}
