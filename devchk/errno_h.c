/*
 * Test of errno.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "errno.h"



int errno_h()
{
int cnt=0;
#ifdef EXDEV
CompareConstant(EXDEV,18)
#else
Msg( "Warning: Constant not found: EXDEV\n");
#endif
#ifdef EWOULDBLOCK
CompareConstant(EWOULDBLOCK,11)
#else
Msg( "Warning: Constant not found: EWOULDBLOCK\n");
#endif
#ifdef ETXTBSY
CompareConstant(ETXTBSY,26)
#else
Msg( "Warning: Constant not found: ETXTBSY\n");
#endif
#ifdef ETIMEDOUT
CompareConstant(ETIMEDOUT,110)
#else
Msg( "Warning: Constant not found: ETIMEDOUT\n");
#endif
#ifdef ETIME
CompareConstant(ETIME,62)
#else
Msg( "Warning: Constant not found: ETIME\n");
#endif
#ifdef ESTALE
CompareConstant(ESTALE,116)
#else
Msg( "Warning: Constant not found: ESTALE\n");
#endif
#ifdef ESRCH
CompareConstant(ESRCH,3)
#else
Msg( "Warning: Constant not found: ESRCH\n");
#endif
#ifdef ESPIPE
CompareConstant(ESPIPE,29)
#else
Msg( "Warning: Constant not found: ESPIPE\n");
#endif
#ifdef EROFS
CompareConstant(EROFS,30)
#else
Msg( "Warning: Constant not found: EROFS\n");
#endif
#ifdef ERANGE
CompareConstant(ERANGE,34)
#else
Msg( "Warning: Constant not found: ERANGE\n");
#endif
#ifdef EPROTOTYPE
CompareConstant(EPROTOTYPE,91)
#else
Msg( "Warning: Constant not found: EPROTOTYPE\n");
#endif
#ifdef EPROTONOSUPPORT
CompareConstant(EPROTONOSUPPORT,93)
#else
Msg( "Warning: Constant not found: EPROTONOSUPPORT\n");
#endif
#ifdef EPROTO
CompareConstant(EPROTO,71)
#else
Msg( "Warning: Constant not found: EPROTO\n");
#endif
#ifdef EPIPE
CompareConstant(EPIPE,32)
#else
Msg( "Warning: Constant not found: EPIPE\n");
#endif
#ifdef EPERM
CompareConstant(EPERM,1)
#else
Msg( "Warning: Constant not found: EPERM\n");
#endif
#ifdef EOVERFLOW
CompareConstant(EOVERFLOW,75)
#else
Msg( "Warning: Constant not found: EOVERFLOW\n");
#endif
#ifdef EOPNOTSUPP
CompareConstant(EOPNOTSUPP,95)
#else
Msg( "Warning: Constant not found: EOPNOTSUPP\n");
#endif
#ifdef ENXIO
CompareConstant(ENXIO,6)
#else
Msg( "Warning: Constant not found: ENXIO\n");
#endif
#ifdef ENOTTY
CompareConstant(ENOTTY,25)
#else
Msg( "Warning: Constant not found: ENOTTY\n");
#endif
#ifdef ENOTSUP
CompareConstant(ENOTSUP,95)
#else
Msg( "Warning: Constant not found: ENOTSUP\n");
#endif
#ifdef ENOTSOCK
CompareConstant(ENOTSOCK,88)
#else
Msg( "Warning: Constant not found: ENOTSOCK\n");
#endif
#ifdef ENOTEMPTY
CompareConstant(ENOTEMPTY,39)
#else
Msg( "Warning: Constant not found: ENOTEMPTY\n");
#endif
#ifdef ENOTDIR
CompareConstant(ENOTDIR,20)
#else
Msg( "Warning: Constant not found: ENOTDIR\n");
#endif
#ifdef ENOTCONN
CompareConstant(ENOTCONN,107)
#else
Msg( "Warning: Constant not found: ENOTCONN\n");
#endif
#ifdef ENOTBLK
CompareConstant(ENOTBLK,15)
#else
Msg( "Warning: Constant not found: ENOTBLK\n");
#endif
#ifdef ENOSYS
CompareConstant(ENOSYS,38)
#else
Msg( "Warning: Constant not found: ENOSYS\n");
#endif
#ifdef ENOSTR
CompareConstant(ENOSTR,60)
#else
Msg( "Warning: Constant not found: ENOSTR\n");
#endif
#ifdef ENOSR
CompareConstant(ENOSR,63)
#else
Msg( "Warning: Constant not found: ENOSR\n");
#endif
#ifdef ENOSPC
CompareConstant(ENOSPC,28)
#else
Msg( "Warning: Constant not found: ENOSPC\n");
#endif
#ifdef ENOPROTOOPT
CompareConstant(ENOPROTOOPT,92)
#else
Msg( "Warning: Constant not found: ENOPROTOOPT\n");
#endif
#ifdef ENOMSG
CompareConstant(ENOMSG,42)
#else
Msg( "Warning: Constant not found: ENOMSG\n");
#endif
#ifdef ENOMEM
CompareConstant(ENOMEM,12)
#else
Msg( "Warning: Constant not found: ENOMEM\n");
#endif
#ifdef ENOLINK
CompareConstant(ENOLINK,67)
#else
Msg( "Warning: Constant not found: ENOLINK\n");
#endif
#ifdef ENOLCK
CompareConstant(ENOLCK,37)
#else
Msg( "Warning: Constant not found: ENOLCK\n");
#endif
#ifdef ENOEXEC
CompareConstant(ENOEXEC,8)
#else
Msg( "Warning: Constant not found: ENOEXEC\n");
#endif
#ifdef ENOENT
CompareConstant(ENOENT,2)
#else
Msg( "Warning: Constant not found: ENOENT\n");
#endif
#ifdef ENODEV
CompareConstant(ENODEV,19)
#else
Msg( "Warning: Constant not found: ENODEV\n");
#endif
#ifdef ENODATA
CompareConstant(ENODATA,61)
#else
Msg( "Warning: Constant not found: ENODATA\n");
#endif
#ifdef ENOBUFS
CompareConstant(ENOBUFS,105)
#else
Msg( "Warning: Constant not found: ENOBUFS\n");
#endif
#ifdef ENFILE
CompareConstant(ENFILE,23)
#else
Msg( "Warning: Constant not found: ENFILE\n");
#endif
#ifdef ENETUNREACH
CompareConstant(ENETUNREACH,101)
#else
Msg( "Warning: Constant not found: ENETUNREACH\n");
#endif
#ifdef ENETDOWN
CompareConstant(ENETDOWN,100)
#else
Msg( "Warning: Constant not found: ENETDOWN\n");
#endif
#ifdef ENAMETOOLONG
CompareConstant(ENAMETOOLONG,36)
#else
Msg( "Warning: Constant not found: ENAMETOOLONG\n");
#endif
#ifdef EMULTIHOP
CompareConstant(EMULTIHOP,72)
#else
Msg( "Warning: Constant not found: EMULTIHOP\n");
#endif
#ifdef EMSGSIZE
CompareConstant(EMSGSIZE,90)
#else
Msg( "Warning: Constant not found: EMSGSIZE\n");
#endif
#ifdef EMLINK
CompareConstant(EMLINK,31)
#else
Msg( "Warning: Constant not found: EMLINK\n");
#endif
#ifdef EMFILE
CompareConstant(EMFILE,24)
#else
Msg( "Warning: Constant not found: EMFILE\n");
#endif
#ifdef ELOOP
CompareConstant(ELOOP,40)
#else
Msg( "Warning: Constant not found: ELOOP\n");
#endif
#ifdef EISDIR
CompareConstant(EISDIR,21)
#else
Msg( "Warning: Constant not found: EISDIR\n");
#endif
#ifdef EISCONN
CompareConstant(EISCONN,106)
#else
Msg( "Warning: Constant not found: EISCONN\n");
#endif
#ifdef EIO
CompareConstant(EIO,5)
#else
Msg( "Warning: Constant not found: EIO\n");
#endif
#ifdef EINVAL
CompareConstant(EINVAL,22)
#else
Msg( "Warning: Constant not found: EINVAL\n");
#endif
#ifdef EINTR
CompareConstant(EINTR,4)
#else
Msg( "Warning: Constant not found: EINTR\n");
#endif
#ifdef EINPROGRESS
CompareConstant(EINPROGRESS,115)
#else
Msg( "Warning: Constant not found: EINPROGRESS\n");
#endif
#ifdef EILSEQ
CompareConstant(EILSEQ,84)
#else
Msg( "Warning: Constant not found: EILSEQ\n");
#endif
#ifdef EIDRM
CompareConstant(EIDRM,43)
#else
Msg( "Warning: Constant not found: EIDRM\n");
#endif
#ifdef EHOSTUNREACH
CompareConstant(EHOSTUNREACH,113)
#else
Msg( "Warning: Constant not found: EHOSTUNREACH\n");
#endif
#ifdef EFBIG
CompareConstant(EFBIG,27)
#else
Msg( "Warning: Constant not found: EFBIG\n");
#endif
#ifdef EFAULT
CompareConstant(EFAULT,14)
#else
Msg( "Warning: Constant not found: EFAULT\n");
#endif
#ifdef EEXIST
CompareConstant(EEXIST,17)
#else
Msg( "Warning: Constant not found: EEXIST\n");
#endif
#ifdef EDQUOT
CompareConstant(EDQUOT,122)
#else
Msg( "Warning: Constant not found: EDQUOT\n");
#endif
#ifdef EDOM
CompareConstant(EDOM,33)
#else
Msg( "Warning: Constant not found: EDOM\n");
#endif
#ifdef EDESTADDRREQ
CompareConstant(EDESTADDRREQ,89)
#else
Msg( "Warning: Constant not found: EDESTADDRREQ\n");
#endif
#ifdef EDEADLK
CompareConstant(EDEADLK,35)
#else
Msg( "Warning: Constant not found: EDEADLK\n");
#endif
#ifdef ECONNRESET
CompareConstant(ECONNRESET,104)
#else
Msg( "Warning: Constant not found: ECONNRESET\n");
#endif
#ifdef ECONNREFUSED
CompareConstant(ECONNREFUSED,111)
#else
Msg( "Warning: Constant not found: ECONNREFUSED\n");
#endif
#ifdef ECONNABORTED
CompareConstant(ECONNABORTED,103)
#else
Msg( "Warning: Constant not found: ECONNABORTED\n");
#endif
#ifdef ECHILD
CompareConstant(ECHILD,10)
#else
Msg( "Warning: Constant not found: ECHILD\n");
#endif
#ifdef ECANCELED
CompareConstant(ECANCELED,125)
#else
Msg( "Warning: Constant not found: ECANCELED\n");
#endif
#ifdef EBUSY
CompareConstant(EBUSY,16)
#else
Msg( "Warning: Constant not found: EBUSY\n");
#endif
#ifdef EBADMSG
CompareConstant(EBADMSG,74)
#else
Msg( "Warning: Constant not found: EBADMSG\n");
#endif
#ifdef EBADF
CompareConstant(EBADF,9)
#else
Msg( "Warning: Constant not found: EBADF\n");
#endif
#ifdef EALREADY
CompareConstant(EALREADY,114)
#else
Msg( "Warning: Constant not found: EALREADY\n");
#endif
#ifdef EAGAIN
CompareConstant(EAGAIN,11)
#else
Msg( "Warning: Constant not found: EAGAIN\n");
#endif
#ifdef EAFNOSUPPORT
CompareConstant(EAFNOSUPPORT,97)
#else
Msg( "Warning: Constant not found: EAFNOSUPPORT\n");
#endif
#ifdef EADDRNOTAVAIL
CompareConstant(EADDRNOTAVAIL,99)
#else
Msg( "Warning: Constant not found: EADDRNOTAVAIL\n");
#endif
#ifdef EADDRINUSE
CompareConstant(EADDRINUSE,98)
#else
Msg( "Warning: Constant not found: EADDRINUSE\n");
#endif
#ifdef EACCES
CompareConstant(EACCES,13)
#else
Msg( "Warning: Constant not found: EACCES\n");
#endif
#ifdef E2BIG
CompareConstant(E2BIG,7)
#else
Msg( "Warning: Constant not found: E2BIG\n");
#endif
printf("%d tests in errno.h\n",cnt);
return cnt;
}
