/*
 * Test of errno.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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

#if _LSB_DEFAULT_ARCH
#ifdef EREMOTE
	CompareConstant(EREMOTE,66,100,architecture)
#else
Msg( "Error: Constant not found: EREMOTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOLINK
	CompareConstant(ENOLINK,67,101,architecture)
#else
Msg( "Error: Constant not found: ENOLINK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EADV
	CompareConstant(EADV,68,102,architecture)
#else
Msg( "Error: Constant not found: EADV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ESRMNT
	CompareConstant(ESRMNT,69,103,architecture)
#else
Msg( "Error: Constant not found: ESRMNT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECOMM
	CompareConstant(ECOMM,70,104,architecture)
#else
Msg( "Error: Constant not found: ECOMM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EPROTO
	CompareConstant(EPROTO,71,105,architecture)
#else
Msg( "Error: Constant not found: EPROTO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EMULTIHOP
	CompareConstant(EMULTIHOP,72,106,architecture)
#else
Msg( "Error: Constant not found: EMULTIHOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EDOTDOT
	CompareConstant(EDOTDOT,73,107,architecture)
#else
Msg( "Error: Constant not found: EDOTDOT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EBADMSG
	CompareConstant(EBADMSG,74,108,architecture)
#else
Msg( "Error: Constant not found: EBADMSG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EOVERFLOW
	CompareConstant(EOVERFLOW,75,109,architecture)
#else
Msg( "Error: Constant not found: EOVERFLOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOTUNIQ
	CompareConstant(ENOTUNIQ,76,110,architecture)
#else
Msg( "Error: Constant not found: ENOTUNIQ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EBADFD
	CompareConstant(EBADFD,77,111,architecture)
#else
Msg( "Error: Constant not found: EBADFD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EREMCHG
	CompareConstant(EREMCHG,78,112,architecture)
#else
Msg( "Error: Constant not found: EREMCHG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELIBACC
	CompareConstant(ELIBACC,79,113,architecture)
#else
Msg( "Error: Constant not found: ELIBACC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELIBBAD
	CompareConstant(ELIBBAD,80,114,architecture)
#else
Msg( "Error: Constant not found: ELIBBAD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELIBSCN
	CompareConstant(ELIBSCN,81,115,architecture)
#else
Msg( "Error: Constant not found: ELIBSCN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELIBMAX
	CompareConstant(ELIBMAX,82,116,architecture)
#else
Msg( "Error: Constant not found: ELIBMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELIBEXEC
	CompareConstant(ELIBEXEC,83,117,architecture)
#else
Msg( "Error: Constant not found: ELIBEXEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EILSEQ
	CompareConstant(EILSEQ,84,118,architecture)
#else
Msg( "Error: Constant not found: EILSEQ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ERESTART
	CompareConstant(ERESTART,85,119,architecture)
#else
Msg( "Error: Constant not found: ERESTART\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ESTRPIPE
	CompareConstant(ESTRPIPE,86,120,architecture)
#else
Msg( "Error: Constant not found: ESTRPIPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EUSERS
	CompareConstant(EUSERS,87,121,architecture)
#else
Msg( "Error: Constant not found: EUSERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOTSOCK
	CompareConstant(ENOTSOCK,88,122,architecture)
#else
Msg( "Error: Constant not found: ENOTSOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EDESTADDRREQ
	CompareConstant(EDESTADDRREQ,89,123,architecture)
#else
Msg( "Error: Constant not found: EDESTADDRREQ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EMSGSIZE
	CompareConstant(EMSGSIZE,90,124,architecture)
#else
Msg( "Error: Constant not found: EMSGSIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EPROTOTYPE
	CompareConstant(EPROTOTYPE,91,125,architecture)
#else
Msg( "Error: Constant not found: EPROTOTYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOPROTOOPT
	CompareConstant(ENOPROTOOPT,92,126,architecture)
#else
Msg( "Error: Constant not found: ENOPROTOOPT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EPROTONOSUPPORT
	CompareConstant(EPROTONOSUPPORT,93,127,architecture)
#else
Msg( "Error: Constant not found: EPROTONOSUPPORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ESOCKTNOSUPPORT
	CompareConstant(ESOCKTNOSUPPORT,94,128,architecture)
#else
Msg( "Error: Constant not found: ESOCKTNOSUPPORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EOPNOTSUPP
	CompareConstant(EOPNOTSUPP,95,129,architecture)
#else
Msg( "Error: Constant not found: EOPNOTSUPP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EPFNOSUPPORT
	CompareConstant(EPFNOSUPPORT,96,130,architecture)
#else
Msg( "Error: Constant not found: EPFNOSUPPORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EAFNOSUPPORT
	CompareConstant(EAFNOSUPPORT,97,131,architecture)
#else
Msg( "Error: Constant not found: EAFNOSUPPORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EADDRINUSE
	CompareConstant(EADDRINUSE,98,132,architecture)
#else
Msg( "Error: Constant not found: EADDRINUSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EADDRNOTAVAIL
	CompareConstant(EADDRNOTAVAIL,99,133,architecture)
#else
Msg( "Error: Constant not found: EADDRNOTAVAIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENETDOWN
	CompareConstant(ENETDOWN,100,134,architecture)
#else
Msg( "Error: Constant not found: ENETDOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENETUNREACH
	CompareConstant(ENETUNREACH,101,135,architecture)
#else
Msg( "Error: Constant not found: ENETUNREACH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENETRESET
	CompareConstant(ENETRESET,102,136,architecture)
#else
Msg( "Error: Constant not found: ENETRESET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECONNABORTED
	CompareConstant(ECONNABORTED,103,137,architecture)
#else
Msg( "Error: Constant not found: ECONNABORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECONNRESET
	CompareConstant(ECONNRESET,104,138,architecture)
#else
Msg( "Error: Constant not found: ECONNRESET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOBUFS
	CompareConstant(ENOBUFS,105,139,architecture)
#else
Msg( "Error: Constant not found: ENOBUFS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EISCONN
	CompareConstant(EISCONN,106,140,architecture)
#else
Msg( "Error: Constant not found: EISCONN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOTCONN
	CompareConstant(ENOTCONN,107,141,architecture)
#else
Msg( "Error: Constant not found: ENOTCONN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ESHUTDOWN
	CompareConstant(ESHUTDOWN,108,142,architecture)
#else
Msg( "Error: Constant not found: ESHUTDOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ETOOMANYREFS
	CompareConstant(ETOOMANYREFS,109,143,architecture)
#else
Msg( "Error: Constant not found: ETOOMANYREFS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ETIMEDOUT
	CompareConstant(ETIMEDOUT,110,144,architecture)
#else
Msg( "Error: Constant not found: ETIMEDOUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECONNREFUSED
	CompareConstant(ECONNREFUSED,111,145,architecture)
#else
Msg( "Error: Constant not found: ECONNREFUSED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EHOSTDOWN
	CompareConstant(EHOSTDOWN,112,146,architecture)
#else
Msg( "Error: Constant not found: EHOSTDOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EHOSTUNREACH
	CompareConstant(EHOSTUNREACH,113,147,architecture)
#else
Msg( "Error: Constant not found: EHOSTUNREACH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EALREADY
	CompareConstant(EALREADY,114,148,architecture)
#else
Msg( "Error: Constant not found: EALREADY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EINPROGRESS
	CompareConstant(EINPROGRESS,115,149,architecture)
#else
Msg( "Error: Constant not found: EINPROGRESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ESTALE
	CompareConstant(ESTALE,116,150,architecture)
#else
Msg( "Error: Constant not found: ESTALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EUCLEAN
	CompareConstant(EUCLEAN,117,151,architecture)
#else
Msg( "Error: Constant not found: EUCLEAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOTNAM
	CompareConstant(ENOTNAM,118,152,architecture)
#else
Msg( "Error: Constant not found: ENOTNAM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENAVAIL
	CompareConstant(ENAVAIL,119,153,architecture)
#else
Msg( "Error: Constant not found: ENAVAIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EISNAM
	CompareConstant(EISNAM,120,154,architecture)
#else
Msg( "Error: Constant not found: EISNAM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EREMOTEIO
	CompareConstant(EREMOTEIO,121,155,architecture)
#else
Msg( "Error: Constant not found: EREMOTEIO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EDQUOT
	CompareConstant(EDQUOT,122,156,architecture)
#else
Msg( "Error: Constant not found: EDQUOT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOMEDIUM
	CompareConstant(ENOMEDIUM,123,157,architecture)
#else
Msg( "Error: Constant not found: ENOMEDIUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EMEDIUMTYPE
	CompareConstant(EMEDIUMTYPE,124,158,architecture)
#else
Msg( "Error: Constant not found: EMEDIUMTYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOTSUP
	CompareConstant(ENOTSUP,EOPNOTSUPP,159,architecture)
#else
Msg( "Error: Constant not found: ENOTSUP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECANCELED
	CompareConstant(ECANCELED,125,160,architecture)
#else
Msg( "Error: Constant not found: ECANCELED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for errno */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef EPERM
	CompareConstant(EPERM,1,35,architecture)
#else
Msg( "Error: Constant not found: EPERM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOENT
	CompareConstant(ENOENT,2,36,architecture)
#else
Msg( "Error: Constant not found: ENOENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ESRCH
	CompareConstant(ESRCH,3,37,architecture)
#else
Msg( "Error: Constant not found: ESRCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EINTR
	CompareConstant(EINTR,4,38,architecture)
#else
Msg( "Error: Constant not found: EINTR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EIO
	CompareConstant(EIO,5,39,architecture)
#else
Msg( "Error: Constant not found: EIO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENXIO
	CompareConstant(ENXIO,6,40,architecture)
#else
Msg( "Error: Constant not found: ENXIO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef E2BIG
	CompareConstant(E2BIG,7,41,architecture)
#else
Msg( "Error: Constant not found: E2BIG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOEXEC
	CompareConstant(ENOEXEC,8,42,architecture)
#else
Msg( "Error: Constant not found: ENOEXEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EBADF
	CompareConstant(EBADF,9,43,architecture)
#else
Msg( "Error: Constant not found: EBADF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECHILD
	CompareConstant(ECHILD,10,44,architecture)
#else
Msg( "Error: Constant not found: ECHILD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EAGAIN
	CompareConstant(EAGAIN,11,45,architecture)
#else
Msg( "Error: Constant not found: EAGAIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOMEM
	CompareConstant(ENOMEM,12,46,architecture)
#else
Msg( "Error: Constant not found: ENOMEM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EACCES
	CompareConstant(EACCES,13,47,architecture)
#else
Msg( "Error: Constant not found: EACCES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EFAULT
	CompareConstant(EFAULT,14,48,architecture)
#else
Msg( "Error: Constant not found: EFAULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOTBLK
	CompareConstant(ENOTBLK,15,49,architecture)
#else
Msg( "Error: Constant not found: ENOTBLK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EBUSY
	CompareConstant(EBUSY,16,50,architecture)
#else
Msg( "Error: Constant not found: EBUSY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EEXIST
	CompareConstant(EEXIST,17,51,architecture)
#else
Msg( "Error: Constant not found: EEXIST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EXDEV
	CompareConstant(EXDEV,18,52,architecture)
#else
Msg( "Error: Constant not found: EXDEV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENODEV
	CompareConstant(ENODEV,19,53,architecture)
#else
Msg( "Error: Constant not found: ENODEV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOTDIR
	CompareConstant(ENOTDIR,20,54,architecture)
#else
Msg( "Error: Constant not found: ENOTDIR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EISDIR
	CompareConstant(EISDIR,21,55,architecture)
#else
Msg( "Error: Constant not found: EISDIR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EINVAL
	CompareConstant(EINVAL,22,56,architecture)
#else
Msg( "Error: Constant not found: EINVAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENFILE
	CompareConstant(ENFILE,23,57,architecture)
#else
Msg( "Error: Constant not found: ENFILE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EMFILE
	CompareConstant(EMFILE,24,58,architecture)
#else
Msg( "Error: Constant not found: EMFILE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOTTY
	CompareConstant(ENOTTY,25,59,architecture)
#else
Msg( "Error: Constant not found: ENOTTY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ETXTBSY
	CompareConstant(ETXTBSY,26,60,architecture)
#else
Msg( "Error: Constant not found: ETXTBSY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EFBIG
	CompareConstant(EFBIG,27,61,architecture)
#else
Msg( "Error: Constant not found: EFBIG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOSPC
	CompareConstant(ENOSPC,28,62,architecture)
#else
Msg( "Error: Constant not found: ENOSPC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ESPIPE
	CompareConstant(ESPIPE,29,63,architecture)
#else
Msg( "Error: Constant not found: ESPIPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EROFS
	CompareConstant(EROFS,30,64,architecture)
#else
Msg( "Error: Constant not found: EROFS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EMLINK
	CompareConstant(EMLINK,31,65,architecture)
#else
Msg( "Error: Constant not found: EMLINK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EPIPE
	CompareConstant(EPIPE,32,66,architecture)
#else
Msg( "Error: Constant not found: EPIPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EDOM
	CompareConstant(EDOM,33,67,architecture)
#else
Msg( "Error: Constant not found: EDOM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ERANGE
	CompareConstant(ERANGE,34,68,architecture)
#else
Msg( "Error: Constant not found: ERANGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EDEADLK
	CompareConstant(EDEADLK,35,69,architecture)
#else
Msg( "Error: Constant not found: EDEADLK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENAMETOOLONG
	CompareConstant(ENAMETOOLONG,36,70,architecture)
#else
Msg( "Error: Constant not found: ENAMETOOLONG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOLCK
	CompareConstant(ENOLCK,37,71,architecture)
#else
Msg( "Error: Constant not found: ENOLCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOSYS
	CompareConstant(ENOSYS,38,72,architecture)
#else
Msg( "Error: Constant not found: ENOSYS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOTEMPTY
	CompareConstant(ENOTEMPTY,39,73,architecture)
#else
Msg( "Error: Constant not found: ENOTEMPTY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELOOP
	CompareConstant(ELOOP,40,74,architecture)
#else
Msg( "Error: Constant not found: ELOOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EWOULDBLOCK
	CompareConstant(EWOULDBLOCK,EAGAIN,75,architecture)
#else
Msg( "Error: Constant not found: EWOULDBLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOMSG
	CompareConstant(ENOMSG,42,76,architecture)
#else
Msg( "Error: Constant not found: ENOMSG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EIDRM
	CompareConstant(EIDRM,43,77,architecture)
#else
Msg( "Error: Constant not found: EIDRM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECHRNG
	CompareConstant(ECHRNG,44,78,architecture)
#else
Msg( "Error: Constant not found: ECHRNG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EL2NSYNC
	CompareConstant(EL2NSYNC,45,79,architecture)
#else
Msg( "Error: Constant not found: EL2NSYNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EL3HLT
	CompareConstant(EL3HLT,46,80,architecture)
#else
Msg( "Error: Constant not found: EL3HLT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EL3RST
	CompareConstant(EL3RST,47,81,architecture)
#else
Msg( "Error: Constant not found: EL3RST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELNRNG
	CompareConstant(ELNRNG,48,82,architecture)
#else
Msg( "Error: Constant not found: ELNRNG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EUNATCH
	CompareConstant(EUNATCH,49,83,architecture)
#else
Msg( "Error: Constant not found: EUNATCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOANO
	CompareConstant(ENOANO,55,89,architecture)
#else
Msg( "Error: Constant not found: ENOANO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EBADRQC
	CompareConstant(EBADRQC,56,90,architecture)
#else
Msg( "Error: Constant not found: EBADRQC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EBADSLT
	CompareConstant(EBADSLT,57,91,architecture)
#else
Msg( "Error: Constant not found: EBADSLT\n");
cnt++;
#endif

#endif

#if __powerpc64__
#ifdef EDEADLOCK
	CompareConstant(EDEADLOCK,58,92,architecture)
#else
Msg( "Error: Constant not found: EDEADLOCK\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef EDEADLOCK
	CompareConstant(EDEADLOCK,58,92,architecture)
#else
Msg( "Error: Constant not found: EDEADLOCK\n");
cnt++;
#endif

#elif __ia64__
#ifdef EDEADLOCK
	CompareConstant(EDEADLOCK,EDEADLK,92,architecture)
#else
Msg( "Error: Constant not found: EDEADLOCK\n");
cnt++;
#endif

#elif __i386__
#ifdef EDEADLOCK
	CompareConstant(EDEADLOCK,EDEADLK,92,architecture)
#else
Msg( "Error: Constant not found: EDEADLOCK\n");
cnt++;
#endif

#elif __s390x__
#ifdef EDEADLOCK
	CompareConstant(EDEADLOCK,35,92,architecture)
#else
Msg( "Error: Constant not found: EDEADLOCK\n");
cnt++;
#endif

#elif __x86_64__
#ifdef EDEADLOCK
	CompareConstant(EDEADLOCK,EDEADLK,92,architecture)
#else
Msg( "Error: Constant not found: EDEADLOCK\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef EDEADLOCK
	CompareConstant(EDEADLOCK,EDEADLK,92,architecture)
#else
Msg( "Error: Constant not found: EDEADLOCK\n");
cnt++;
#endif

#else
Msg( "No definition for EDEADLOCK (92, int) in db\n");
#ifdef EDEADLOCK
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,92,%d);\n", architecture, EDEADLOCK);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef EBFONT
	CompareConstant(EBFONT,59,93,architecture)
#else
Msg( "Error: Constant not found: EBFONT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOSTR
	CompareConstant(ENOSTR,60,94,architecture)
#else
Msg( "Error: Constant not found: ENOSTR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENODATA
	CompareConstant(ENODATA,61,95,architecture)
#else
Msg( "Error: Constant not found: ENODATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ETIME
	CompareConstant(ETIME,62,96,architecture)
#else
Msg( "Error: Constant not found: ETIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOSR
	CompareConstant(ENOSR,63,97,architecture)
#else
Msg( "Error: Constant not found: ENOSR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENONET
	CompareConstant(ENONET,64,98,architecture)
#else
Msg( "Error: Constant not found: ENONET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ENOPKG
	CompareConstant(ENOPKG,65,99,architecture)
#else
Msg( "Error: Constant not found: ENOPKG\n");
cnt++;
#endif

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
