/*
 * Test of errno.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "errno.h"



#ifdef TET_TEST
void errno_h()
{
#else
int errno_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in errno.h\n");
#endif

/* No test for errno */
#ifdef EPERM
	CompareConstant(EPERM,1)
#else
Msg( "Error: Constant not found: EPERM\n");
cnt++;
#endif

#ifdef ENOENT
	CompareConstant(ENOENT,2)
#else
Msg( "Error: Constant not found: ENOENT\n");
cnt++;
#endif

#ifdef ESRCH
	CompareConstant(ESRCH,3)
#else
Msg( "Error: Constant not found: ESRCH\n");
cnt++;
#endif

#ifdef EINTR
	CompareConstant(EINTR,4)
#else
Msg( "Error: Constant not found: EINTR\n");
cnt++;
#endif

#ifdef EIO
	CompareConstant(EIO,5)
#else
Msg( "Error: Constant not found: EIO\n");
cnt++;
#endif

#ifdef ENXIO
	CompareConstant(ENXIO,6)
#else
Msg( "Error: Constant not found: ENXIO\n");
cnt++;
#endif

#ifdef E2BIG
	CompareConstant(E2BIG,7)
#else
Msg( "Error: Constant not found: E2BIG\n");
cnt++;
#endif

#ifdef ENOEXEC
	CompareConstant(ENOEXEC,8)
#else
Msg( "Error: Constant not found: ENOEXEC\n");
cnt++;
#endif

#ifdef EBADF
	CompareConstant(EBADF,9)
#else
Msg( "Error: Constant not found: EBADF\n");
cnt++;
#endif

#ifdef ECHILD
	CompareConstant(ECHILD,10)
#else
Msg( "Error: Constant not found: ECHILD\n");
cnt++;
#endif

#ifdef EAGAIN
	CompareConstant(EAGAIN,11)
#else
Msg( "Error: Constant not found: EAGAIN\n");
cnt++;
#endif

#ifdef ENOMEM
	CompareConstant(ENOMEM,12)
#else
Msg( "Error: Constant not found: ENOMEM\n");
cnt++;
#endif

#ifdef EACCES
	CompareConstant(EACCES,13)
#else
Msg( "Error: Constant not found: EACCES\n");
cnt++;
#endif

#ifdef EFAULT
	CompareConstant(EFAULT,14)
#else
Msg( "Error: Constant not found: EFAULT\n");
cnt++;
#endif

#ifdef ENOTBLK
	CompareConstant(ENOTBLK,15)
#else
Msg( "Error: Constant not found: ENOTBLK\n");
cnt++;
#endif

#ifdef EBUSY
	CompareConstant(EBUSY,16)
#else
Msg( "Error: Constant not found: EBUSY\n");
cnt++;
#endif

#ifdef EEXIST
	CompareConstant(EEXIST,17)
#else
Msg( "Error: Constant not found: EEXIST\n");
cnt++;
#endif

#ifdef EXDEV
	CompareConstant(EXDEV,18)
#else
Msg( "Error: Constant not found: EXDEV\n");
cnt++;
#endif

#ifdef ENODEV
	CompareConstant(ENODEV,19)
#else
Msg( "Error: Constant not found: ENODEV\n");
cnt++;
#endif

#ifdef ENOTDIR
	CompareConstant(ENOTDIR,20)
#else
Msg( "Error: Constant not found: ENOTDIR\n");
cnt++;
#endif

#ifdef EISDIR
	CompareConstant(EISDIR,21)
#else
Msg( "Error: Constant not found: EISDIR\n");
cnt++;
#endif

#ifdef EINVAL
	CompareConstant(EINVAL,22)
#else
Msg( "Error: Constant not found: EINVAL\n");
cnt++;
#endif

#ifdef ENFILE
	CompareConstant(ENFILE,23)
#else
Msg( "Error: Constant not found: ENFILE\n");
cnt++;
#endif

#ifdef EMFILE
	CompareConstant(EMFILE,24)
#else
Msg( "Error: Constant not found: EMFILE\n");
cnt++;
#endif

#ifdef ENOTTY
	CompareConstant(ENOTTY,25)
#else
Msg( "Error: Constant not found: ENOTTY\n");
cnt++;
#endif

#ifdef ETXTBSY
	CompareConstant(ETXTBSY,26)
#else
Msg( "Error: Constant not found: ETXTBSY\n");
cnt++;
#endif

#ifdef EFBIG
	CompareConstant(EFBIG,27)
#else
Msg( "Error: Constant not found: EFBIG\n");
cnt++;
#endif

#ifdef ENOSPC
	CompareConstant(ENOSPC,28)
#else
Msg( "Error: Constant not found: ENOSPC\n");
cnt++;
#endif

#ifdef ESPIPE
	CompareConstant(ESPIPE,29)
#else
Msg( "Error: Constant not found: ESPIPE\n");
cnt++;
#endif

#ifdef EROFS
	CompareConstant(EROFS,30)
#else
Msg( "Error: Constant not found: EROFS\n");
cnt++;
#endif

#ifdef EMLINK
	CompareConstant(EMLINK,31)
#else
Msg( "Error: Constant not found: EMLINK\n");
cnt++;
#endif

#ifdef EPIPE
	CompareConstant(EPIPE,32)
#else
Msg( "Error: Constant not found: EPIPE\n");
cnt++;
#endif

#ifdef EDOM
	CompareConstant(EDOM,33)
#else
Msg( "Error: Constant not found: EDOM\n");
cnt++;
#endif

#ifdef ERANGE
	CompareConstant(ERANGE,34)
#else
Msg( "Error: Constant not found: ERANGE\n");
cnt++;
#endif

#ifdef EDEADLK
	CompareConstant(EDEADLK,35)
#else
Msg( "Error: Constant not found: EDEADLK\n");
cnt++;
#endif

#ifdef ENAMETOOLONG
	CompareConstant(ENAMETOOLONG,36)
#else
Msg( "Error: Constant not found: ENAMETOOLONG\n");
cnt++;
#endif

#ifdef ENOLCK
	CompareConstant(ENOLCK,37)
#else
Msg( "Error: Constant not found: ENOLCK\n");
cnt++;
#endif

#ifdef ENOSYS
	CompareConstant(ENOSYS,38)
#else
Msg( "Error: Constant not found: ENOSYS\n");
cnt++;
#endif

#ifdef ENOTEMPTY
	CompareConstant(ENOTEMPTY,39)
#else
Msg( "Error: Constant not found: ENOTEMPTY\n");
cnt++;
#endif

#ifdef ELOOP
	CompareConstant(ELOOP,40)
#else
Msg( "Error: Constant not found: ELOOP\n");
cnt++;
#endif

#ifdef EWOULDBLOCK
	CompareConstant(EWOULDBLOCK,EAGAIN)
#else
Msg( "Error: Constant not found: EWOULDBLOCK\n");
cnt++;
#endif

#ifdef ENOMSG
	CompareConstant(ENOMSG,42)
#else
Msg( "Error: Constant not found: ENOMSG\n");
cnt++;
#endif

#ifdef EIDRM
	CompareConstant(EIDRM,43)
#else
Msg( "Error: Constant not found: EIDRM\n");
cnt++;
#endif

#ifdef ECHRNG
	CompareConstant(ECHRNG,44)
#else
Msg( "Error: Constant not found: ECHRNG\n");
cnt++;
#endif

#ifdef EL2NSYNC
	CompareConstant(EL2NSYNC,45)
#else
Msg( "Error: Constant not found: EL2NSYNC\n");
cnt++;
#endif

#ifdef EL3HLT
	CompareConstant(EL3HLT,46)
#else
Msg( "Error: Constant not found: EL3HLT\n");
cnt++;
#endif

#ifdef EL3RST
	CompareConstant(EL3RST,47)
#else
Msg( "Error: Constant not found: EL3RST\n");
cnt++;
#endif

#ifdef ELNRNG
	CompareConstant(ELNRNG,48)
#else
Msg( "Error: Constant not found: ELNRNG\n");
cnt++;
#endif

#ifdef EUNATCH
	CompareConstant(EUNATCH,49)
#else
Msg( "Error: Constant not found: EUNATCH\n");
cnt++;
#endif

#ifdef ENOANO
	CompareConstant(ENOANO,55)
#else
Msg( "Error: Constant not found: ENOANO\n");
cnt++;
#endif

#ifdef EBADRQC
	CompareConstant(EBADRQC,56)
#else
Msg( "Error: Constant not found: EBADRQC\n");
cnt++;
#endif

#ifdef EBADSLT
	CompareConstant(EBADSLT,57)
#else
Msg( "Error: Constant not found: EBADSLT\n");
cnt++;
#endif

#ifdef EDEADLOCK
	CompareConstant(EDEADLOCK,EDEADLK)
#else
Msg( "Error: Constant not found: EDEADLOCK\n");
cnt++;
#endif

#ifdef EBFONT
	CompareConstant(EBFONT,59)
#else
Msg( "Error: Constant not found: EBFONT\n");
cnt++;
#endif

#ifdef ENOSTR
	CompareConstant(ENOSTR,60)
#else
Msg( "Error: Constant not found: ENOSTR\n");
cnt++;
#endif

#ifdef ENODATA
	CompareConstant(ENODATA,61)
#else
Msg( "Error: Constant not found: ENODATA\n");
cnt++;
#endif

#ifdef ETIME
	CompareConstant(ETIME,62)
#else
Msg( "Error: Constant not found: ETIME\n");
cnt++;
#endif

#ifdef ENOSR
	CompareConstant(ENOSR,63)
#else
Msg( "Error: Constant not found: ENOSR\n");
cnt++;
#endif

#ifdef ENONET
	CompareConstant(ENONET,64)
#else
Msg( "Error: Constant not found: ENONET\n");
cnt++;
#endif

#ifdef ENOPKG
	CompareConstant(ENOPKG,65)
#else
Msg( "Error: Constant not found: ENOPKG\n");
cnt++;
#endif

#ifdef EREMOTE
	CompareConstant(EREMOTE,66)
#else
Msg( "Error: Constant not found: EREMOTE\n");
cnt++;
#endif

#ifdef ENOLINK
	CompareConstant(ENOLINK,67)
#else
Msg( "Error: Constant not found: ENOLINK\n");
cnt++;
#endif

#ifdef EADV
	CompareConstant(EADV,68)
#else
Msg( "Error: Constant not found: EADV\n");
cnt++;
#endif

#ifdef ESRMNT
	CompareConstant(ESRMNT,69)
#else
Msg( "Error: Constant not found: ESRMNT\n");
cnt++;
#endif

#ifdef ECOMM
	CompareConstant(ECOMM,70)
#else
Msg( "Error: Constant not found: ECOMM\n");
cnt++;
#endif

#ifdef EPROTO
	CompareConstant(EPROTO,71)
#else
Msg( "Error: Constant not found: EPROTO\n");
cnt++;
#endif

#ifdef EMULTIHOP
	CompareConstant(EMULTIHOP,72)
#else
Msg( "Error: Constant not found: EMULTIHOP\n");
cnt++;
#endif

#ifdef EDOTDOT
	CompareConstant(EDOTDOT,73)
#else
Msg( "Error: Constant not found: EDOTDOT\n");
cnt++;
#endif

#ifdef EBADMSG
	CompareConstant(EBADMSG,74)
#else
Msg( "Error: Constant not found: EBADMSG\n");
cnt++;
#endif

#ifdef EOVERFLOW
	CompareConstant(EOVERFLOW,75)
#else
Msg( "Error: Constant not found: EOVERFLOW\n");
cnt++;
#endif

#ifdef ENOTUNIQ
	CompareConstant(ENOTUNIQ,76)
#else
Msg( "Error: Constant not found: ENOTUNIQ\n");
cnt++;
#endif

#ifdef EBADFD
	CompareConstant(EBADFD,77)
#else
Msg( "Error: Constant not found: EBADFD\n");
cnt++;
#endif

#ifdef EREMCHG
	CompareConstant(EREMCHG,78)
#else
Msg( "Error: Constant not found: EREMCHG\n");
cnt++;
#endif

#ifdef ELIBACC
	CompareConstant(ELIBACC,79)
#else
Msg( "Error: Constant not found: ELIBACC\n");
cnt++;
#endif

#ifdef ELIBBAD
	CompareConstant(ELIBBAD,80)
#else
Msg( "Error: Constant not found: ELIBBAD\n");
cnt++;
#endif

#ifdef ELIBSCN
	CompareConstant(ELIBSCN,81)
#else
Msg( "Error: Constant not found: ELIBSCN\n");
cnt++;
#endif

#ifdef ELIBMAX
	CompareConstant(ELIBMAX,82)
#else
Msg( "Error: Constant not found: ELIBMAX\n");
cnt++;
#endif

#ifdef ELIBEXEC
	CompareConstant(ELIBEXEC,83)
#else
Msg( "Error: Constant not found: ELIBEXEC\n");
cnt++;
#endif

#ifdef EILSEQ
	CompareConstant(EILSEQ,84)
#else
Msg( "Error: Constant not found: EILSEQ\n");
cnt++;
#endif

#ifdef ERESTART
	CompareConstant(ERESTART,85)
#else
Msg( "Error: Constant not found: ERESTART\n");
cnt++;
#endif

#ifdef ESTRPIPE
	CompareConstant(ESTRPIPE,86)
#else
Msg( "Error: Constant not found: ESTRPIPE\n");
cnt++;
#endif

#ifdef EUSERS
	CompareConstant(EUSERS,87)
#else
Msg( "Error: Constant not found: EUSERS\n");
cnt++;
#endif

#ifdef ENOTSOCK
	CompareConstant(ENOTSOCK,88)
#else
Msg( "Error: Constant not found: ENOTSOCK\n");
cnt++;
#endif

#ifdef EDESTADDRREQ
	CompareConstant(EDESTADDRREQ,89)
#else
Msg( "Error: Constant not found: EDESTADDRREQ\n");
cnt++;
#endif

#ifdef EMSGSIZE
	CompareConstant(EMSGSIZE,90)
#else
Msg( "Error: Constant not found: EMSGSIZE\n");
cnt++;
#endif

#ifdef EPROTOTYPE
	CompareConstant(EPROTOTYPE,91)
#else
Msg( "Error: Constant not found: EPROTOTYPE\n");
cnt++;
#endif

#ifdef ENOPROTOOPT
	CompareConstant(ENOPROTOOPT,92)
#else
Msg( "Error: Constant not found: ENOPROTOOPT\n");
cnt++;
#endif

#ifdef EPROTONOSUPPORT
	CompareConstant(EPROTONOSUPPORT,93)
#else
Msg( "Error: Constant not found: EPROTONOSUPPORT\n");
cnt++;
#endif

#ifdef ESOCKTNOSUPPORT
	CompareConstant(ESOCKTNOSUPPORT,94)
#else
Msg( "Error: Constant not found: ESOCKTNOSUPPORT\n");
cnt++;
#endif

#ifdef EOPNOTSUPP
	CompareConstant(EOPNOTSUPP,95)
#else
Msg( "Error: Constant not found: EOPNOTSUPP\n");
cnt++;
#endif

#ifdef EPFNOSUPPORT
	CompareConstant(EPFNOSUPPORT,96)
#else
Msg( "Error: Constant not found: EPFNOSUPPORT\n");
cnt++;
#endif

#ifdef EAFNOSUPPORT
	CompareConstant(EAFNOSUPPORT,97)
#else
Msg( "Error: Constant not found: EAFNOSUPPORT\n");
cnt++;
#endif

#ifdef EADDRINUSE
	CompareConstant(EADDRINUSE,98)
#else
Msg( "Error: Constant not found: EADDRINUSE\n");
cnt++;
#endif

#ifdef EADDRNOTAVAIL
	CompareConstant(EADDRNOTAVAIL,99)
#else
Msg( "Error: Constant not found: EADDRNOTAVAIL\n");
cnt++;
#endif

#ifdef ENETDOWN
	CompareConstant(ENETDOWN,100)
#else
Msg( "Error: Constant not found: ENETDOWN\n");
cnt++;
#endif

#ifdef ENETUNREACH
	CompareConstant(ENETUNREACH,101)
#else
Msg( "Error: Constant not found: ENETUNREACH\n");
cnt++;
#endif

#ifdef ENETRESET
	CompareConstant(ENETRESET,102)
#else
Msg( "Error: Constant not found: ENETRESET\n");
cnt++;
#endif

#ifdef ECONNABORTED
	CompareConstant(ECONNABORTED,103)
#else
Msg( "Error: Constant not found: ECONNABORTED\n");
cnt++;
#endif

#ifdef ECONNRESET
	CompareConstant(ECONNRESET,104)
#else
Msg( "Error: Constant not found: ECONNRESET\n");
cnt++;
#endif

#ifdef ENOBUFS
	CompareConstant(ENOBUFS,105)
#else
Msg( "Error: Constant not found: ENOBUFS\n");
cnt++;
#endif

#ifdef EISCONN
	CompareConstant(EISCONN,106)
#else
Msg( "Error: Constant not found: EISCONN\n");
cnt++;
#endif

#ifdef ENOTCONN
	CompareConstant(ENOTCONN,107)
#else
Msg( "Error: Constant not found: ENOTCONN\n");
cnt++;
#endif

#ifdef ESHUTDOWN
	CompareConstant(ESHUTDOWN,108)
#else
Msg( "Error: Constant not found: ESHUTDOWN\n");
cnt++;
#endif

#ifdef ETOOMANYREFS
	CompareConstant(ETOOMANYREFS,109)
#else
Msg( "Error: Constant not found: ETOOMANYREFS\n");
cnt++;
#endif

#ifdef ETIMEDOUT
	CompareConstant(ETIMEDOUT,110)
#else
Msg( "Error: Constant not found: ETIMEDOUT\n");
cnt++;
#endif

#ifdef ECONNREFUSED
	CompareConstant(ECONNREFUSED,111)
#else
Msg( "Error: Constant not found: ECONNREFUSED\n");
cnt++;
#endif

#ifdef EHOSTDOWN
	CompareConstant(EHOSTDOWN,112)
#else
Msg( "Error: Constant not found: EHOSTDOWN\n");
cnt++;
#endif

#ifdef EHOSTUNREACH
	CompareConstant(EHOSTUNREACH,113)
#else
Msg( "Error: Constant not found: EHOSTUNREACH\n");
cnt++;
#endif

#ifdef EALREADY
	CompareConstant(EALREADY,114)
#else
Msg( "Error: Constant not found: EALREADY\n");
cnt++;
#endif

#ifdef EINPROGRESS
	CompareConstant(EINPROGRESS,115)
#else
Msg( "Error: Constant not found: EINPROGRESS\n");
cnt++;
#endif

#ifdef ESTALE
	CompareConstant(ESTALE,116)
#else
Msg( "Error: Constant not found: ESTALE\n");
cnt++;
#endif

#ifdef EUCLEAN
	CompareConstant(EUCLEAN,117)
#else
Msg( "Error: Constant not found: EUCLEAN\n");
cnt++;
#endif

#ifdef ENOTNAM
	CompareConstant(ENOTNAM,118)
#else
Msg( "Error: Constant not found: ENOTNAM\n");
cnt++;
#endif

#ifdef ENAVAIL
	CompareConstant(ENAVAIL,119)
#else
Msg( "Error: Constant not found: ENAVAIL\n");
cnt++;
#endif

#ifdef EISNAM
	CompareConstant(EISNAM,120)
#else
Msg( "Error: Constant not found: EISNAM\n");
cnt++;
#endif

#ifdef EREMOTEIO
	CompareConstant(EREMOTEIO,121)
#else
Msg( "Error: Constant not found: EREMOTEIO\n");
cnt++;
#endif

#ifdef EDQUOT
	CompareConstant(EDQUOT,122)
#else
Msg( "Error: Constant not found: EDQUOT\n");
cnt++;
#endif

#ifdef ENOMEDIUM
	CompareConstant(ENOMEDIUM,123)
#else
Msg( "Error: Constant not found: ENOMEDIUM\n");
cnt++;
#endif

#ifdef EMEDIUMTYPE
	CompareConstant(EMEDIUMTYPE,124)
#else
Msg( "Error: Constant not found: EMEDIUMTYPE\n");
cnt++;
#endif

#ifdef ENOTSUP
	CompareConstant(ENOTSUP,EOPNOTSUPP)
#else
Msg( "Error: Constant not found: ENOTSUP\n");
cnt++;
#endif

#ifdef ECANCELED
	CompareConstant(ECANCELED,125)
#else
Msg( "Error: Constant not found: ECANCELED\n");
cnt++;
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in errno.h\n",cnt);
return cnt;
#endif

}
