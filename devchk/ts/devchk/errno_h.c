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

#ifdef EPERM
	CompareConstant(EPERM,1)
#else
Msg( "Warning: Constant not found: EPERM\n");
#endif

#ifdef ENOENT
	CompareConstant(ENOENT,2)
#else
Msg( "Warning: Constant not found: ENOENT\n");
#endif

#ifdef ESRCH
	CompareConstant(ESRCH,3)
#else
Msg( "Warning: Constant not found: ESRCH\n");
#endif

#ifdef EINTR
	CompareConstant(EINTR,4)
#else
Msg( "Warning: Constant not found: EINTR\n");
#endif

#ifdef ENXIO
	CompareConstant(ENXIO,6)
#else
Msg( "Warning: Constant not found: ENXIO\n");
#endif

#ifdef E2BIG
	CompareConstant(E2BIG,7)
#else
Msg( "Warning: Constant not found: E2BIG\n");
#endif

#ifdef ENOEXEC
	CompareConstant(ENOEXEC,8)
#else
Msg( "Warning: Constant not found: ENOEXEC\n");
#endif

#ifdef EBADF
	CompareConstant(EBADF,9)
#else
Msg( "Warning: Constant not found: EBADF\n");
#endif

#ifdef ECHILD
	CompareConstant(ECHILD,10)
#else
Msg( "Warning: Constant not found: ECHILD\n");
#endif

#ifdef EAGAIN
	CompareConstant(EAGAIN,11)
#else
Msg( "Warning: Constant not found: EAGAIN\n");
#endif

#ifdef ENOMEM
	CompareConstant(ENOMEM,12)
#else
Msg( "Warning: Constant not found: ENOMEM\n");
#endif

#ifdef EACCES
	CompareConstant(EACCES,13)
#else
Msg( "Warning: Constant not found: EACCES\n");
#endif

#ifdef EFAULT
	CompareConstant(EFAULT,14)
#else
Msg( "Warning: Constant not found: EFAULT\n");
#endif

#ifdef ENOTBLK
	CompareConstant(ENOTBLK,15)
#else
Msg( "Warning: Constant not found: ENOTBLK\n");
#endif

#ifdef EBUSY
	CompareConstant(EBUSY,16)
#else
Msg( "Warning: Constant not found: EBUSY\n");
#endif

#ifdef EEXIST
	CompareConstant(EEXIST,17)
#else
Msg( "Warning: Constant not found: EEXIST\n");
#endif

#ifdef EXDEV
	CompareConstant(EXDEV,18)
#else
Msg( "Warning: Constant not found: EXDEV\n");
#endif

#ifdef ENODEV
	CompareConstant(ENODEV,19)
#else
Msg( "Warning: Constant not found: ENODEV\n");
#endif

#ifdef ENOTDIR
	CompareConstant(ENOTDIR,20)
#else
Msg( "Warning: Constant not found: ENOTDIR\n");
#endif

#ifdef EISDIR
	CompareConstant(EISDIR,21)
#else
Msg( "Warning: Constant not found: EISDIR\n");
#endif

#ifdef EINVAL
	CompareConstant(EINVAL,22)
#else
Msg( "Warning: Constant not found: EINVAL\n");
#endif

#ifdef ENFILE
	CompareConstant(ENFILE,23)
#else
Msg( "Warning: Constant not found: ENFILE\n");
#endif

#ifdef EMFILE
	CompareConstant(EMFILE,24)
#else
Msg( "Warning: Constant not found: EMFILE\n");
#endif

#ifdef ENOTTY
	CompareConstant(ENOTTY,25)
#else
Msg( "Warning: Constant not found: ENOTTY\n");
#endif

#ifdef ETXTBSY
	CompareConstant(ETXTBSY,26)
#else
Msg( "Warning: Constant not found: ETXTBSY\n");
#endif

#ifdef EFBIG
	CompareConstant(EFBIG,27)
#else
Msg( "Warning: Constant not found: EFBIG\n");
#endif

#ifdef ENOSPC
	CompareConstant(ENOSPC,28)
#else
Msg( "Warning: Constant not found: ENOSPC\n");
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

#ifdef EMLINK
	CompareConstant(EMLINK,31)
#else
Msg( "Warning: Constant not found: EMLINK\n");
#endif

#ifdef EPIPE
	CompareConstant(EPIPE,32)
#else
Msg( "Warning: Constant not found: EPIPE\n");
#endif

#ifdef EDOM
	CompareConstant(EDOM,33)
#else
Msg( "Warning: Constant not found: EDOM\n");
#endif

#ifdef ERANGE
	CompareConstant(ERANGE,34)
#else
Msg( "Warning: Constant not found: ERANGE\n");
#endif

#ifdef EDEADLK
	CompareConstant(EDEADLK,35)
#else
Msg( "Warning: Constant not found: EDEADLK\n");
#endif

#ifdef ENAMETOOLONG
	CompareConstant(ENAMETOOLONG,36)
#else
Msg( "Warning: Constant not found: ENAMETOOLONG\n");
#endif

#ifdef ENOLCK
	CompareConstant(ENOLCK,37)
#else
Msg( "Warning: Constant not found: ENOLCK\n");
#endif

#ifdef ENOSYS
	CompareConstant(ENOSYS,38)
#else
Msg( "Warning: Constant not found: ENOSYS\n");
#endif

#ifdef ENOTEMPTY
	CompareConstant(ENOTEMPTY,39)
#else
Msg( "Warning: Constant not found: ENOTEMPTY\n");
#endif

#ifdef ELOOP
	CompareConstant(ELOOP,40)
#else
Msg( "Warning: Constant not found: ELOOP\n");
#endif

#ifdef EWOULDBLOCK
	CompareConstant(EWOULDBLOCK,EAGAIN)
#else
Msg( "Warning: Constant not found: EWOULDBLOCK\n");
#endif

#ifdef ENOMSG
	CompareConstant(ENOMSG,42)
#else
Msg( "Warning: Constant not found: ENOMSG\n");
#endif

#ifdef EIDRM
	CompareConstant(EIDRM,43)
#else
Msg( "Warning: Constant not found: EIDRM\n");
#endif

#ifdef ECHRNG
	CompareConstant(ECHRNG,44)
#else
Msg( "Warning: Constant not found: ECHRNG\n");
#endif

#ifdef EL2NSYNC
	CompareConstant(EL2NSYNC,45)
#else
Msg( "Warning: Constant not found: EL2NSYNC\n");
#endif

#ifdef EL3HLT
	CompareConstant(EL3HLT,46)
#else
Msg( "Warning: Constant not found: EL3HLT\n");
#endif

#ifdef EL3RST
	CompareConstant(EL3RST,47)
#else
Msg( "Warning: Constant not found: EL3RST\n");
#endif

#ifdef ELNRNG
	CompareConstant(ELNRNG,48)
#else
Msg( "Warning: Constant not found: ELNRNG\n");
#endif

#ifdef EUNATCH
	CompareConstant(EUNATCH,49)
#else
Msg( "Warning: Constant not found: EUNATCH\n");
#endif

#ifdef ENOANO
	CompareConstant(ENOANO,55)
#else
Msg( "Warning: Constant not found: ENOANO\n");
#endif

#ifdef EBADRQC
	CompareConstant(EBADRQC,56)
#else
Msg( "Warning: Constant not found: EBADRQC\n");
#endif

#ifdef EBADSLT
	CompareConstant(EBADSLT,57)
#else
Msg( "Warning: Constant not found: EBADSLT\n");
#endif

#ifdef EDEADLOCK
	CompareConstant(EDEADLOCK,EDEADLK)
#else
Msg( "Warning: Constant not found: EDEADLOCK\n");
#endif

#ifdef EBFONT
	CompareConstant(EBFONT,59)
#else
Msg( "Warning: Constant not found: EBFONT\n");
#endif

#ifdef ENOSTR
	CompareConstant(ENOSTR,60)
#else
Msg( "Warning: Constant not found: ENOSTR\n");
#endif

#ifdef ENODATA
	CompareConstant(ENODATA,61)
#else
Msg( "Warning: Constant not found: ENODATA\n");
#endif

#ifdef ETIME
	CompareConstant(ETIME,62)
#else
Msg( "Warning: Constant not found: ETIME\n");
#endif

#ifdef ENOSR
	CompareConstant(ENOSR,63)
#else
Msg( "Warning: Constant not found: ENOSR\n");
#endif

#ifdef ENONET
	CompareConstant(ENONET,64)
#else
Msg( "Warning: Constant not found: ENONET\n");
#endif

#ifdef ENOPKG
	CompareConstant(ENOPKG,65)
#else
Msg( "Warning: Constant not found: ENOPKG\n");
#endif

#ifdef EREMOTE
	CompareConstant(EREMOTE,66)
#else
Msg( "Warning: Constant not found: EREMOTE\n");
#endif

#ifdef ENOLINK
	CompareConstant(ENOLINK,67)
#else
Msg( "Warning: Constant not found: ENOLINK\n");
#endif

#ifdef EADV
	CompareConstant(EADV,68)
#else
Msg( "Warning: Constant not found: EADV\n");
#endif

#ifdef ESRMNT
	CompareConstant(ESRMNT,69)
#else
Msg( "Warning: Constant not found: ESRMNT\n");
#endif

#ifdef ECOMM
	CompareConstant(ECOMM,70)
#else
Msg( "Warning: Constant not found: ECOMM\n");
#endif

#ifdef EPROTO
	CompareConstant(EPROTO,71)
#else
Msg( "Warning: Constant not found: EPROTO\n");
#endif

#ifdef EMULTIHOP
	CompareConstant(EMULTIHOP,72)
#else
Msg( "Warning: Constant not found: EMULTIHOP\n");
#endif

#ifdef EDOTDOT
	CompareConstant(EDOTDOT,73)
#else
Msg( "Warning: Constant not found: EDOTDOT\n");
#endif

#ifdef EBADMSG
	CompareConstant(EBADMSG,74)
#else
Msg( "Warning: Constant not found: EBADMSG\n");
#endif

#ifdef EOVERFLOW
	CompareConstant(EOVERFLOW,75)
#else
Msg( "Warning: Constant not found: EOVERFLOW\n");
#endif

#ifdef ENOTUNIQ
	CompareConstant(ENOTUNIQ,76)
#else
Msg( "Warning: Constant not found: ENOTUNIQ\n");
#endif

#ifdef EBADFD
	CompareConstant(EBADFD,77)
#else
Msg( "Warning: Constant not found: EBADFD\n");
#endif

#ifdef EREMCHG
	CompareConstant(EREMCHG,78)
#else
Msg( "Warning: Constant not found: EREMCHG\n");
#endif

#ifdef ELIBACC
	CompareConstant(ELIBACC,79)
#else
Msg( "Warning: Constant not found: ELIBACC\n");
#endif

#ifdef ELIBBAD
	CompareConstant(ELIBBAD,80)
#else
Msg( "Warning: Constant not found: ELIBBAD\n");
#endif

#ifdef ELIBSCN
	CompareConstant(ELIBSCN,81)
#else
Msg( "Warning: Constant not found: ELIBSCN\n");
#endif

#ifdef ELIBMAX
	CompareConstant(ELIBMAX,82)
#else
Msg( "Warning: Constant not found: ELIBMAX\n");
#endif

#ifdef ELIBEXEC
	CompareConstant(ELIBEXEC,83)
#else
Msg( "Warning: Constant not found: ELIBEXEC\n");
#endif

#ifdef EILSEQ
	CompareConstant(EILSEQ,84)
#else
Msg( "Warning: Constant not found: EILSEQ\n");
#endif

#ifdef ERESTART
	CompareConstant(ERESTART,85)
#else
Msg( "Warning: Constant not found: ERESTART\n");
#endif

#ifdef ESTRPIPE
	CompareConstant(ESTRPIPE,86)
#else
Msg( "Warning: Constant not found: ESTRPIPE\n");
#endif

#ifdef EUSERS
	CompareConstant(EUSERS,87)
#else
Msg( "Warning: Constant not found: EUSERS\n");
#endif

#ifdef ENOTSOCK
	CompareConstant(ENOTSOCK,88)
#else
Msg( "Warning: Constant not found: ENOTSOCK\n");
#endif

#ifdef EDESTADDRREQ
	CompareConstant(EDESTADDRREQ,89)
#else
Msg( "Warning: Constant not found: EDESTADDRREQ\n");
#endif

#ifdef EMSGSIZE
	CompareConstant(EMSGSIZE,90)
#else
Msg( "Warning: Constant not found: EMSGSIZE\n");
#endif

#ifdef EPROTOTYPE
	CompareConstant(EPROTOTYPE,91)
#else
Msg( "Warning: Constant not found: EPROTOTYPE\n");
#endif

#ifdef ENOPROTOOPT
	CompareConstant(ENOPROTOOPT,92)
#else
Msg( "Warning: Constant not found: ENOPROTOOPT\n");
#endif

#ifdef EPROTONOSUPPORT
	CompareConstant(EPROTONOSUPPORT,93)
#else
Msg( "Warning: Constant not found: EPROTONOSUPPORT\n");
#endif

#ifdef ESOCKTNOSUPPORT
	CompareConstant(ESOCKTNOSUPPORT,94)
#else
Msg( "Warning: Constant not found: ESOCKTNOSUPPORT\n");
#endif

#ifdef EOPNOTSUPP
	CompareConstant(EOPNOTSUPP,95)
#else
Msg( "Warning: Constant not found: EOPNOTSUPP\n");
#endif

#ifdef EPFNOSUPPORT
	CompareConstant(EPFNOSUPPORT,96)
#else
Msg( "Warning: Constant not found: EPFNOSUPPORT\n");
#endif

#ifdef EAFNOSUPPORT
	CompareConstant(EAFNOSUPPORT,97)
#else
Msg( "Warning: Constant not found: EAFNOSUPPORT\n");
#endif

#ifdef EADDRINUSE
	CompareConstant(EADDRINUSE,98)
#else
Msg( "Warning: Constant not found: EADDRINUSE\n");
#endif

#ifdef EADDRNOTAVAIL
	CompareConstant(EADDRNOTAVAIL,99)
#else
Msg( "Warning: Constant not found: EADDRNOTAVAIL\n");
#endif

#ifdef ENETDOWN
	CompareConstant(ENETDOWN,100)
#else
Msg( "Warning: Constant not found: ENETDOWN\n");
#endif

#ifdef ENETUNREACH
	CompareConstant(ENETUNREACH,101)
#else
Msg( "Warning: Constant not found: ENETUNREACH\n");
#endif

#ifdef ENETRESET
	CompareConstant(ENETRESET,102)
#else
Msg( "Warning: Constant not found: ENETRESET\n");
#endif

#ifdef ECONNABORTED
	CompareConstant(ECONNABORTED,103)
#else
Msg( "Warning: Constant not found: ECONNABORTED\n");
#endif

#ifdef ECONNRESET
	CompareConstant(ECONNRESET,104)
#else
Msg( "Warning: Constant not found: ECONNRESET\n");
#endif

#ifdef ENOBUFS
	CompareConstant(ENOBUFS,105)
#else
Msg( "Warning: Constant not found: ENOBUFS\n");
#endif

#ifdef EISCONN
	CompareConstant(EISCONN,106)
#else
Msg( "Warning: Constant not found: EISCONN\n");
#endif

#ifdef ENOTCONN
	CompareConstant(ENOTCONN,107)
#else
Msg( "Warning: Constant not found: ENOTCONN\n");
#endif

#ifdef ESHUTDOWN
	CompareConstant(ESHUTDOWN,108)
#else
Msg( "Warning: Constant not found: ESHUTDOWN\n");
#endif

#ifdef ETOOMANYREFS
	CompareConstant(ETOOMANYREFS,109)
#else
Msg( "Warning: Constant not found: ETOOMANYREFS\n");
#endif

#ifdef ETIMEDOUT
	CompareConstant(ETIMEDOUT,110)
#else
Msg( "Warning: Constant not found: ETIMEDOUT\n");
#endif

#ifdef ECONNREFUSED
	CompareConstant(ECONNREFUSED,111)
#else
Msg( "Warning: Constant not found: ECONNREFUSED\n");
#endif

#ifdef EHOSTDOWN
	CompareConstant(EHOSTDOWN,112)
#else
Msg( "Warning: Constant not found: EHOSTDOWN\n");
#endif

#ifdef EHOSTUNREACH
	CompareConstant(EHOSTUNREACH,113)
#else
Msg( "Warning: Constant not found: EHOSTUNREACH\n");
#endif

#ifdef EALREADY
	CompareConstant(EALREADY,114)
#else
Msg( "Warning: Constant not found: EALREADY\n");
#endif

#ifdef EINPROGRESS
	CompareConstant(EINPROGRESS,115)
#else
Msg( "Warning: Constant not found: EINPROGRESS\n");
#endif

#ifdef ESTALE
	CompareConstant(ESTALE,116)
#else
Msg( "Warning: Constant not found: ESTALE\n");
#endif

#ifdef EUCLEAN
	CompareConstant(EUCLEAN,117)
#else
Msg( "Warning: Constant not found: EUCLEAN\n");
#endif

#ifdef ENOTNAM
	CompareConstant(ENOTNAM,118)
#else
Msg( "Warning: Constant not found: ENOTNAM\n");
#endif

#ifdef ENAVAIL
	CompareConstant(ENAVAIL,119)
#else
Msg( "Warning: Constant not found: ENAVAIL\n");
#endif

#ifdef EISNAM
	CompareConstant(EISNAM,120)
#else
Msg( "Warning: Constant not found: EISNAM\n");
#endif

#ifdef EREMOTEIO
	CompareConstant(EREMOTEIO,121)
#else
Msg( "Warning: Constant not found: EREMOTEIO\n");
#endif

#ifdef EDQUOT
	CompareConstant(EDQUOT,122)
#else
Msg( "Warning: Constant not found: EDQUOT\n");
#endif

#ifdef ENOMEDIUM
	CompareConstant(ENOMEDIUM,123)
#else
Msg( "Warning: Constant not found: ENOMEDIUM\n");
#endif

#ifdef EMEDIUMTYPE
	CompareConstant(EMEDIUMTYPE,124)
#else
Msg( "Warning: Constant not found: EMEDIUMTYPE\n");
#endif

#ifdef ENOTSUP
	CompareConstant(ENOTSUP,EOPNOTSUPP)
#else
Msg( "Warning: Constant not found: ENOTSUP\n");
#endif

#ifdef ECANCELED
	CompareConstant(ECANCELED,125)
#else
Msg( "Warning: Constant not found: ECANCELED\n");
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
