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

#ifdef _LSB_DEFAULT_ARCH
#ifdef EISCONN
	CompareConstant(EISCONN,106,140,architecture)
#else
Msg( "Error: Constant not found: EISCONN\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ENOTCONN
	CompareConstant(ENOTCONN,107,141,architecture)
#else
Msg( "Error: Constant not found: ENOTCONN\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ESHUTDOWN
	CompareConstant(ESHUTDOWN,108,142,architecture)
#else
Msg( "Error: Constant not found: ESHUTDOWN\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ETOOMANYREFS
	CompareConstant(ETOOMANYREFS,109,143,architecture)
#else
Msg( "Error: Constant not found: ETOOMANYREFS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ETIMEDOUT
	CompareConstant(ETIMEDOUT,110,144,architecture)
#else
Msg( "Error: Constant not found: ETIMEDOUT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ECONNREFUSED
	CompareConstant(ECONNREFUSED,111,145,architecture)
#else
Msg( "Error: Constant not found: ECONNREFUSED\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EHOSTDOWN
	CompareConstant(EHOSTDOWN,112,146,architecture)
#else
Msg( "Error: Constant not found: EHOSTDOWN\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EHOSTUNREACH
	CompareConstant(EHOSTUNREACH,113,147,architecture)
#else
Msg( "Error: Constant not found: EHOSTUNREACH\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EALREADY
	CompareConstant(EALREADY,114,148,architecture)
#else
Msg( "Error: Constant not found: EALREADY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EINPROGRESS
	CompareConstant(EINPROGRESS,115,149,architecture)
#else
Msg( "Error: Constant not found: EINPROGRESS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ESTALE
	CompareConstant(ESTALE,116,150,architecture)
#else
Msg( "Error: Constant not found: ESTALE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EUCLEAN
	CompareConstant(EUCLEAN,117,151,architecture)
#else
Msg( "Error: Constant not found: EUCLEAN\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ENOTNAM
	CompareConstant(ENOTNAM,118,152,architecture)
#else
Msg( "Error: Constant not found: ENOTNAM\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ENAVAIL
	CompareConstant(ENAVAIL,119,153,architecture)
#else
Msg( "Error: Constant not found: ENAVAIL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EISNAM
	CompareConstant(EISNAM,120,154,architecture)
#else
Msg( "Error: Constant not found: EISNAM\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EREMOTEIO
	CompareConstant(EREMOTEIO,121,155,architecture)
#else
Msg( "Error: Constant not found: EREMOTEIO\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EDQUOT
	CompareConstant(EDQUOT,122,156,architecture)
#else
Msg( "Error: Constant not found: EDQUOT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ENOMEDIUM
	CompareConstant(ENOMEDIUM,123,157,architecture)
#else
Msg( "Error: Constant not found: ENOMEDIUM\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EMEDIUMTYPE
	CompareConstant(EMEDIUMTYPE,124,158,architecture)
#else
Msg( "Error: Constant not found: EMEDIUMTYPE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ENOTSUP
	CompareConstant(ENOTSUP,EOPNOTSUPP,159,architecture)
#else
Msg( "Error: Constant not found: ENOTSUP\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ECANCELED
	CompareConstant(ECANCELED,125,160,architecture)
#else
Msg( "Error: Constant not found: ECANCELED\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for errno */
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EPERM
	CompareConstant(EPERM,1,35,architecture)
#else
Msg( "Error: Constant not found: EPERM\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ENOENT
	CompareConstant(ENOENT,2,36,architecture)
#else
Msg( "Error: Constant not found: ENOENT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ESRCH
	CompareConstant(ESRCH,3,37,architecture)
#else
Msg( "Error: Constant not found: ESRCH\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EINTR
	CompareConstant(EINTR,4,38,architecture)
#else
Msg( "Error: Constant not found: EINTR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EIO
	CompareConstant(EIO,5,39,architecture)
#else
Msg( "Error: Constant not found: EIO\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ENXIO
	CompareConstant(ENXIO,6,40,architecture)
#else
Msg( "Error: Constant not found: ENXIO\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef E2BIG
	CompareConstant(E2BIG,7,41,architecture)
#else
Msg( "Error: Constant not found: E2BIG\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ENOEXEC
	CompareConstant(ENOEXEC,8,42,architecture)
#else
Msg( "Error: Constant not found: ENOEXEC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EBADF
	CompareConstant(EBADF,9,43,architecture)
#else
Msg( "Error: Constant not found: EBADF\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ECHILD
	CompareConstant(ECHILD,10,44,architecture)
#else
Msg( "Error: Constant not found: ECHILD\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EAGAIN
	CompareConstant(EAGAIN,11,45,architecture)
#else
Msg( "Error: Constant not found: EAGAIN\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ENOMEM
	CompareConstant(ENOMEM,12,46,architecture)
#else
Msg( "Error: Constant not found: ENOMEM\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EACCES
	CompareConstant(EACCES,13,47,architecture)
#else
Msg( "Error: Constant not found: EACCES\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EFAULT
	CompareConstant(EFAULT,14,48,architecture)
#else
Msg( "Error: Constant not found: EFAULT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ENOTBLK
	CompareConstant(ENOTBLK,15,49,architecture)
#else
Msg( "Error: Constant not found: ENOTBLK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EBUSY
	CompareConstant(EBUSY,16,50,architecture)
#else
Msg( "Error: Constant not found: EBUSY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EEXIST
	CompareConstant(EEXIST,17,51,architecture)
#else
Msg( "Error: Constant not found: EEXIST\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EXDEV
	CompareConstant(EXDEV,18,52,architecture)
#else
Msg( "Error: Constant not found: EXDEV\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ENODEV
	CompareConstant(ENODEV,19,53,architecture)
#else
Msg( "Error: Constant not found: ENODEV\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ENOTDIR
	CompareConstant(ENOTDIR,20,54,architecture)
#else
Msg( "Error: Constant not found: ENOTDIR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EISDIR
	CompareConstant(EISDIR,21,55,architecture)
#else
Msg( "Error: Constant not found: EISDIR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EINVAL
	CompareConstant(EINVAL,22,56,architecture)
#else
Msg( "Error: Constant not found: EINVAL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ENFILE
	CompareConstant(ENFILE,23,57,architecture)
#else
Msg( "Error: Constant not found: ENFILE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EMFILE
	CompareConstant(EMFILE,24,58,architecture)
#else
Msg( "Error: Constant not found: EMFILE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ENOTTY
	CompareConstant(ENOTTY,25,59,architecture)
#else
Msg( "Error: Constant not found: ENOTTY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ETXTBSY
	CompareConstant(ETXTBSY,26,60,architecture)
#else
Msg( "Error: Constant not found: ETXTBSY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EFBIG
	CompareConstant(EFBIG,27,61,architecture)
#else
Msg( "Error: Constant not found: EFBIG\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ENOSPC
	CompareConstant(ENOSPC,28,62,architecture)
#else
Msg( "Error: Constant not found: ENOSPC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ESPIPE
	CompareConstant(ESPIPE,29,63,architecture)
#else
Msg( "Error: Constant not found: ESPIPE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EROFS
	CompareConstant(EROFS,30,64,architecture)
#else
Msg( "Error: Constant not found: EROFS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EMLINK
	CompareConstant(EMLINK,31,65,architecture)
#else
Msg( "Error: Constant not found: EMLINK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EPIPE
	CompareConstant(EPIPE,32,66,architecture)
#else
Msg( "Error: Constant not found: EPIPE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EDOM
	CompareConstant(EDOM,33,67,architecture)
#else
Msg( "Error: Constant not found: EDOM\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ERANGE
	CompareConstant(ERANGE,34,68,architecture)
#else
Msg( "Error: Constant not found: ERANGE\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef EDEADLK
	CompareConstant(EDEADLK,35,69,architecture)
#else
Msg( "Error: Constant not found: EDEADLK\n");
cnt++;
#endif

#elif __ia64__
#ifdef EDEADLK
	CompareConstant(EDEADLK,35,69,architecture)
#else
Msg( "Error: Constant not found: EDEADLK\n");
cnt++;
#endif

#elif __i386__
#ifdef EDEADLK
	CompareConstant(EDEADLK,35,69,architecture)
#else
Msg( "Error: Constant not found: EDEADLK\n");
cnt++;
#endif

#else
Msg( "No definition for EDEADLK (69, int) in db\n");
#ifdef EDEADLK
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,69,%d)\n", architecture, EDEADLK);
#endif
#endif
#ifdef __powerpc__
#ifdef ENAMETOOLONG
	CompareConstant(ENAMETOOLONG,36,70,architecture)
#else
Msg( "Error: Constant not found: ENAMETOOLONG\n");
cnt++;
#endif

#elif __ia64__
#ifdef ENAMETOOLONG
	CompareConstant(ENAMETOOLONG,36,70,architecture)
#else
Msg( "Error: Constant not found: ENAMETOOLONG\n");
cnt++;
#endif

#elif __i386__
#ifdef ENAMETOOLONG
	CompareConstant(ENAMETOOLONG,36,70,architecture)
#else
Msg( "Error: Constant not found: ENAMETOOLONG\n");
cnt++;
#endif

#else
Msg( "No definition for ENAMETOOLONG (70, int) in db\n");
#ifdef ENAMETOOLONG
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,70,%d)\n", architecture, ENAMETOOLONG);
#endif
#endif
#ifdef __powerpc__
#ifdef ENOLCK
	CompareConstant(ENOLCK,37,71,architecture)
#else
Msg( "Error: Constant not found: ENOLCK\n");
cnt++;
#endif

#elif __ia64__
#ifdef ENOLCK
	CompareConstant(ENOLCK,37,71,architecture)
#else
Msg( "Error: Constant not found: ENOLCK\n");
cnt++;
#endif

#elif __i386__
#ifdef ENOLCK
	CompareConstant(ENOLCK,37,71,architecture)
#else
Msg( "Error: Constant not found: ENOLCK\n");
cnt++;
#endif

#else
Msg( "No definition for ENOLCK (71, int) in db\n");
#ifdef ENOLCK
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,71,%d)\n", architecture, ENOLCK);
#endif
#endif
#ifdef __powerpc__
#ifdef ENOSYS
	CompareConstant(ENOSYS,38,72,architecture)
#else
Msg( "Error: Constant not found: ENOSYS\n");
cnt++;
#endif

#elif __ia64__
#ifdef ENOSYS
	CompareConstant(ENOSYS,38,72,architecture)
#else
Msg( "Error: Constant not found: ENOSYS\n");
cnt++;
#endif

#elif __i386__
#ifdef ENOSYS
	CompareConstant(ENOSYS,38,72,architecture)
#else
Msg( "Error: Constant not found: ENOSYS\n");
cnt++;
#endif

#else
Msg( "No definition for ENOSYS (72, int) in db\n");
#ifdef ENOSYS
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,72,%d)\n", architecture, ENOSYS);
#endif
#endif
#ifdef __powerpc__
#ifdef ENOTEMPTY
	CompareConstant(ENOTEMPTY,39,73,architecture)
#else
Msg( "Error: Constant not found: ENOTEMPTY\n");
cnt++;
#endif

#elif __ia64__
#ifdef ENOTEMPTY
	CompareConstant(ENOTEMPTY,39,73,architecture)
#else
Msg( "Error: Constant not found: ENOTEMPTY\n");
cnt++;
#endif

#elif __i386__
#ifdef ENOTEMPTY
	CompareConstant(ENOTEMPTY,39,73,architecture)
#else
Msg( "Error: Constant not found: ENOTEMPTY\n");
cnt++;
#endif

#else
Msg( "No definition for ENOTEMPTY (73, int) in db\n");
#ifdef ENOTEMPTY
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,73,%d)\n", architecture, ENOTEMPTY);
#endif
#endif
#ifdef __powerpc__
#ifdef ELOOP
	CompareConstant(ELOOP,40,74,architecture)
#else
Msg( "Error: Constant not found: ELOOP\n");
cnt++;
#endif

#elif __ia64__
#ifdef ELOOP
	CompareConstant(ELOOP,40,74,architecture)
#else
Msg( "Error: Constant not found: ELOOP\n");
cnt++;
#endif

#elif __i386__
#ifdef ELOOP
	CompareConstant(ELOOP,40,74,architecture)
#else
Msg( "Error: Constant not found: ELOOP\n");
cnt++;
#endif

#else
Msg( "No definition for ELOOP (74, int) in db\n");
#ifdef ELOOP
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,74,%d)\n", architecture, ELOOP);
#endif
#endif
#ifdef _LSB_DEFAULT_ARCH
#ifdef EWOULDBLOCK
	CompareConstant(EWOULDBLOCK,EAGAIN,75,architecture)
#else
Msg( "Error: Constant not found: EWOULDBLOCK\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef EREMOTE
	CompareConstant(EREMOTE,66,100,architecture)
#else
Msg( "Error: Constant not found: EREMOTE\n");
cnt++;
#endif

#elif __ia64__
#ifdef EREMOTE
	CompareConstant(EREMOTE,66,100,architecture)
#else
Msg( "Error: Constant not found: EREMOTE\n");
cnt++;
#endif

#elif __i386__
#ifdef EREMOTE
	CompareConstant(EREMOTE,66,100,architecture)
#else
Msg( "Error: Constant not found: EREMOTE\n");
cnt++;
#endif

#else
Msg( "No definition for EREMOTE (100, int) in db\n");
#ifdef EREMOTE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,100,%d)\n", architecture, EREMOTE);
#endif
#endif
#ifdef __powerpc__
#ifdef ENOMSG
	CompareConstant(ENOMSG,42,76,architecture)
#else
Msg( "Error: Constant not found: ENOMSG\n");
cnt++;
#endif

#elif __ia64__
#ifdef ENOMSG
	CompareConstant(ENOMSG,42,76,architecture)
#else
Msg( "Error: Constant not found: ENOMSG\n");
cnt++;
#endif

#elif __i386__
#ifdef ENOMSG
	CompareConstant(ENOMSG,42,76,architecture)
#else
Msg( "Error: Constant not found: ENOMSG\n");
cnt++;
#endif

#else
Msg( "No definition for ENOMSG (76, int) in db\n");
#ifdef ENOMSG
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,76,%d)\n", architecture, ENOMSG);
#endif
#endif
#ifdef __powerpc__
#ifdef ENOLINK
	CompareConstant(ENOLINK,67,101,architecture)
#else
Msg( "Error: Constant not found: ENOLINK\n");
cnt++;
#endif

#elif __ia64__
#ifdef ENOLINK
	CompareConstant(ENOLINK,67,101,architecture)
#else
Msg( "Error: Constant not found: ENOLINK\n");
cnt++;
#endif

#elif __i386__
#ifdef ENOLINK
	CompareConstant(ENOLINK,67,101,architecture)
#else
Msg( "Error: Constant not found: ENOLINK\n");
cnt++;
#endif

#else
Msg( "No definition for ENOLINK (101, int) in db\n");
#ifdef ENOLINK
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,101,%d)\n", architecture, ENOLINK);
#endif
#endif
#ifdef __powerpc__
#ifdef EIDRM
	CompareConstant(EIDRM,43,77,architecture)
#else
Msg( "Error: Constant not found: EIDRM\n");
cnt++;
#endif

#elif __ia64__
#ifdef EIDRM
	CompareConstant(EIDRM,43,77,architecture)
#else
Msg( "Error: Constant not found: EIDRM\n");
cnt++;
#endif

#elif __i386__
#ifdef EIDRM
	CompareConstant(EIDRM,43,77,architecture)
#else
Msg( "Error: Constant not found: EIDRM\n");
cnt++;
#endif

#else
Msg( "No definition for EIDRM (77, int) in db\n");
#ifdef EIDRM
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,77,%d)\n", architecture, EIDRM);
#endif
#endif
#ifdef __powerpc__
#ifdef ECHRNG
	CompareConstant(ECHRNG,44,78,architecture)
#else
Msg( "Error: Constant not found: ECHRNG\n");
cnt++;
#endif

#elif __ia64__
#ifdef ECHRNG
	CompareConstant(ECHRNG,44,78,architecture)
#else
Msg( "Error: Constant not found: ECHRNG\n");
cnt++;
#endif

#elif __i386__
#ifdef ECHRNG
	CompareConstant(ECHRNG,44,78,architecture)
#else
Msg( "Error: Constant not found: ECHRNG\n");
cnt++;
#endif

#else
Msg( "No definition for ECHRNG (78, int) in db\n");
#ifdef ECHRNG
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,78,%d)\n", architecture, ECHRNG);
#endif
#endif
#ifdef __powerpc__
#ifdef EADV
	CompareConstant(EADV,68,102,architecture)
#else
Msg( "Error: Constant not found: EADV\n");
cnt++;
#endif

#elif __ia64__
#ifdef EADV
	CompareConstant(EADV,68,102,architecture)
#else
Msg( "Error: Constant not found: EADV\n");
cnt++;
#endif

#elif __i386__
#ifdef EADV
	CompareConstant(EADV,68,102,architecture)
#else
Msg( "Error: Constant not found: EADV\n");
cnt++;
#endif

#else
Msg( "No definition for EADV (102, int) in db\n");
#ifdef EADV
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,102,%d)\n", architecture, EADV);
#endif
#endif
#ifdef __powerpc__
#ifdef ESRMNT
	CompareConstant(ESRMNT,69,103,architecture)
#else
Msg( "Error: Constant not found: ESRMNT\n");
cnt++;
#endif

#elif __ia64__
#ifdef ESRMNT
	CompareConstant(ESRMNT,69,103,architecture)
#else
Msg( "Error: Constant not found: ESRMNT\n");
cnt++;
#endif

#elif __i386__
#ifdef ESRMNT
	CompareConstant(ESRMNT,69,103,architecture)
#else
Msg( "Error: Constant not found: ESRMNT\n");
cnt++;
#endif

#else
Msg( "No definition for ESRMNT (103, int) in db\n");
#ifdef ESRMNT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,103,%d)\n", architecture, ESRMNT);
#endif
#endif
#ifdef __powerpc__
#ifdef EL2NSYNC
	CompareConstant(EL2NSYNC,45,79,architecture)
#else
Msg( "Error: Constant not found: EL2NSYNC\n");
cnt++;
#endif

#elif __ia64__
#ifdef EL2NSYNC
	CompareConstant(EL2NSYNC,45,79,architecture)
#else
Msg( "Error: Constant not found: EL2NSYNC\n");
cnt++;
#endif

#elif __i386__
#ifdef EL2NSYNC
	CompareConstant(EL2NSYNC,45,79,architecture)
#else
Msg( "Error: Constant not found: EL2NSYNC\n");
cnt++;
#endif

#else
Msg( "No definition for EL2NSYNC (79, int) in db\n");
#ifdef EL2NSYNC
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,79,%d)\n", architecture, EL2NSYNC);
#endif
#endif
#ifdef __powerpc__
#ifdef ECOMM
	CompareConstant(ECOMM,70,104,architecture)
#else
Msg( "Error: Constant not found: ECOMM\n");
cnt++;
#endif

#elif __ia64__
#ifdef ECOMM
	CompareConstant(ECOMM,70,104,architecture)
#else
Msg( "Error: Constant not found: ECOMM\n");
cnt++;
#endif

#elif __i386__
#ifdef ECOMM
	CompareConstant(ECOMM,70,104,architecture)
#else
Msg( "Error: Constant not found: ECOMM\n");
cnt++;
#endif

#else
Msg( "No definition for ECOMM (104, int) in db\n");
#ifdef ECOMM
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,104,%d)\n", architecture, ECOMM);
#endif
#endif
#ifdef __powerpc__
#ifdef EPROTO
	CompareConstant(EPROTO,71,105,architecture)
#else
Msg( "Error: Constant not found: EPROTO\n");
cnt++;
#endif

#elif __ia64__
#ifdef EPROTO
	CompareConstant(EPROTO,71,105,architecture)
#else
Msg( "Error: Constant not found: EPROTO\n");
cnt++;
#endif

#elif __i386__
#ifdef EPROTO
	CompareConstant(EPROTO,71,105,architecture)
#else
Msg( "Error: Constant not found: EPROTO\n");
cnt++;
#endif

#else
Msg( "No definition for EPROTO (105, int) in db\n");
#ifdef EPROTO
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,105,%d)\n", architecture, EPROTO);
#endif
#endif
#ifdef __powerpc__
#ifdef EMULTIHOP
	CompareConstant(EMULTIHOP,72,106,architecture)
#else
Msg( "Error: Constant not found: EMULTIHOP\n");
cnt++;
#endif

#elif __ia64__
#ifdef EMULTIHOP
	CompareConstant(EMULTIHOP,72,106,architecture)
#else
Msg( "Error: Constant not found: EMULTIHOP\n");
cnt++;
#endif

#elif __i386__
#ifdef EMULTIHOP
	CompareConstant(EMULTIHOP,72,106,architecture)
#else
Msg( "Error: Constant not found: EMULTIHOP\n");
cnt++;
#endif

#else
Msg( "No definition for EMULTIHOP (106, int) in db\n");
#ifdef EMULTIHOP
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,106,%d)\n", architecture, EMULTIHOP);
#endif
#endif
#ifdef __powerpc__
#ifdef EDOTDOT
	CompareConstant(EDOTDOT,73,107,architecture)
#else
Msg( "Error: Constant not found: EDOTDOT\n");
cnt++;
#endif

#elif __ia64__
#ifdef EDOTDOT
	CompareConstant(EDOTDOT,73,107,architecture)
#else
Msg( "Error: Constant not found: EDOTDOT\n");
cnt++;
#endif

#elif __i386__
#ifdef EDOTDOT
	CompareConstant(EDOTDOT,73,107,architecture)
#else
Msg( "Error: Constant not found: EDOTDOT\n");
cnt++;
#endif

#else
Msg( "No definition for EDOTDOT (107, int) in db\n");
#ifdef EDOTDOT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,107,%d)\n", architecture, EDOTDOT);
#endif
#endif
#ifdef __powerpc__
#ifdef EBADMSG
	CompareConstant(EBADMSG,74,108,architecture)
#else
Msg( "Error: Constant not found: EBADMSG\n");
cnt++;
#endif

#elif __ia64__
#ifdef EBADMSG
	CompareConstant(EBADMSG,74,108,architecture)
#else
Msg( "Error: Constant not found: EBADMSG\n");
cnt++;
#endif

#elif __i386__
#ifdef EBADMSG
	CompareConstant(EBADMSG,74,108,architecture)
#else
Msg( "Error: Constant not found: EBADMSG\n");
cnt++;
#endif

#else
Msg( "No definition for EBADMSG (108, int) in db\n");
#ifdef EBADMSG
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,108,%d)\n", architecture, EBADMSG);
#endif
#endif
#ifdef __powerpc__
#ifdef EOVERFLOW
	CompareConstant(EOVERFLOW,75,109,architecture)
#else
Msg( "Error: Constant not found: EOVERFLOW\n");
cnt++;
#endif

#elif __ia64__
#ifdef EOVERFLOW
	CompareConstant(EOVERFLOW,75,109,architecture)
#else
Msg( "Error: Constant not found: EOVERFLOW\n");
cnt++;
#endif

#elif __i386__
#ifdef EOVERFLOW
	CompareConstant(EOVERFLOW,75,109,architecture)
#else
Msg( "Error: Constant not found: EOVERFLOW\n");
cnt++;
#endif

#else
Msg( "No definition for EOVERFLOW (109, int) in db\n");
#ifdef EOVERFLOW
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,109,%d)\n", architecture, EOVERFLOW);
#endif
#endif
#ifdef __powerpc__
#ifdef EL3HLT
	CompareConstant(EL3HLT,46,80,architecture)
#else
Msg( "Error: Constant not found: EL3HLT\n");
cnt++;
#endif

#elif __ia64__
#ifdef EL3HLT
	CompareConstant(EL3HLT,46,80,architecture)
#else
Msg( "Error: Constant not found: EL3HLT\n");
cnt++;
#endif

#elif __i386__
#ifdef EL3HLT
	CompareConstant(EL3HLT,46,80,architecture)
#else
Msg( "Error: Constant not found: EL3HLT\n");
cnt++;
#endif

#else
Msg( "No definition for EL3HLT (80, int) in db\n");
#ifdef EL3HLT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,80,%d)\n", architecture, EL3HLT);
#endif
#endif
#ifdef __powerpc__
#ifdef EL3RST
	CompareConstant(EL3RST,47,81,architecture)
#else
Msg( "Error: Constant not found: EL3RST\n");
cnt++;
#endif

#elif __ia64__
#ifdef EL3RST
	CompareConstant(EL3RST,47,81,architecture)
#else
Msg( "Error: Constant not found: EL3RST\n");
cnt++;
#endif

#elif __i386__
#ifdef EL3RST
	CompareConstant(EL3RST,47,81,architecture)
#else
Msg( "Error: Constant not found: EL3RST\n");
cnt++;
#endif

#else
Msg( "No definition for EL3RST (81, int) in db\n");
#ifdef EL3RST
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,81,%d)\n", architecture, EL3RST);
#endif
#endif
#ifdef __powerpc__
#ifdef ELNRNG
	CompareConstant(ELNRNG,48,82,architecture)
#else
Msg( "Error: Constant not found: ELNRNG\n");
cnt++;
#endif

#elif __ia64__
#ifdef ELNRNG
	CompareConstant(ELNRNG,48,82,architecture)
#else
Msg( "Error: Constant not found: ELNRNG\n");
cnt++;
#endif

#elif __i386__
#ifdef ELNRNG
	CompareConstant(ELNRNG,48,82,architecture)
#else
Msg( "Error: Constant not found: ELNRNG\n");
cnt++;
#endif

#else
Msg( "No definition for ELNRNG (82, int) in db\n");
#ifdef ELNRNG
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,82,%d)\n", architecture, ELNRNG);
#endif
#endif
#ifdef __powerpc__
#ifdef EUNATCH
	CompareConstant(EUNATCH,49,83,architecture)
#else
Msg( "Error: Constant not found: EUNATCH\n");
cnt++;
#endif

#elif __ia64__
#ifdef EUNATCH
	CompareConstant(EUNATCH,49,83,architecture)
#else
Msg( "Error: Constant not found: EUNATCH\n");
cnt++;
#endif

#elif __i386__
#ifdef EUNATCH
	CompareConstant(EUNATCH,49,83,architecture)
#else
Msg( "Error: Constant not found: EUNATCH\n");
cnt++;
#endif

#else
Msg( "No definition for EUNATCH (83, int) in db\n");
#ifdef EUNATCH
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,83,%d)\n", architecture, EUNATCH);
#endif
#endif
#ifdef __powerpc__
#ifdef ENOTUNIQ
	CompareConstant(ENOTUNIQ,76,110,architecture)
#else
Msg( "Error: Constant not found: ENOTUNIQ\n");
cnt++;
#endif

#elif __ia64__
#ifdef ENOTUNIQ
	CompareConstant(ENOTUNIQ,76,110,architecture)
#else
Msg( "Error: Constant not found: ENOTUNIQ\n");
cnt++;
#endif

#elif __i386__
#ifdef ENOTUNIQ
	CompareConstant(ENOTUNIQ,76,110,architecture)
#else
Msg( "Error: Constant not found: ENOTUNIQ\n");
cnt++;
#endif

#else
Msg( "No definition for ENOTUNIQ (110, int) in db\n");
#ifdef ENOTUNIQ
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,110,%d)\n", architecture, ENOTUNIQ);
#endif
#endif
#ifdef __powerpc__
#ifdef EBADFD
	CompareConstant(EBADFD,77,111,architecture)
#else
Msg( "Error: Constant not found: EBADFD\n");
cnt++;
#endif

#elif __ia64__
#ifdef EBADFD
	CompareConstant(EBADFD,77,111,architecture)
#else
Msg( "Error: Constant not found: EBADFD\n");
cnt++;
#endif

#elif __i386__
#ifdef EBADFD
	CompareConstant(EBADFD,77,111,architecture)
#else
Msg( "Error: Constant not found: EBADFD\n");
cnt++;
#endif

#else
Msg( "No definition for EBADFD (111, int) in db\n");
#ifdef EBADFD
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,111,%d)\n", architecture, EBADFD);
#endif
#endif
#ifdef __powerpc__
#ifdef EREMCHG
	CompareConstant(EREMCHG,78,112,architecture)
#else
Msg( "Error: Constant not found: EREMCHG\n");
cnt++;
#endif

#elif __ia64__
#ifdef EREMCHG
	CompareConstant(EREMCHG,78,112,architecture)
#else
Msg( "Error: Constant not found: EREMCHG\n");
cnt++;
#endif

#elif __i386__
#ifdef EREMCHG
	CompareConstant(EREMCHG,78,112,architecture)
#else
Msg( "Error: Constant not found: EREMCHG\n");
cnt++;
#endif

#else
Msg( "No definition for EREMCHG (112, int) in db\n");
#ifdef EREMCHG
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,112,%d)\n", architecture, EREMCHG);
#endif
#endif
#ifdef __powerpc__
#ifdef ENOANO
	CompareConstant(ENOANO,55,89,architecture)
#else
Msg( "Error: Constant not found: ENOANO\n");
cnt++;
#endif

#elif __ia64__
#ifdef ENOANO
	CompareConstant(ENOANO,55,89,architecture)
#else
Msg( "Error: Constant not found: ENOANO\n");
cnt++;
#endif

#elif __i386__
#ifdef ENOANO
	CompareConstant(ENOANO,55,89,architecture)
#else
Msg( "Error: Constant not found: ENOANO\n");
cnt++;
#endif

#else
Msg( "No definition for ENOANO (89, int) in db\n");
#ifdef ENOANO
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,89,%d)\n", architecture, ENOANO);
#endif
#endif
#ifdef __powerpc__
#ifdef ELIBACC
	CompareConstant(ELIBACC,79,113,architecture)
#else
Msg( "Error: Constant not found: ELIBACC\n");
cnt++;
#endif

#elif __ia64__
#ifdef ELIBACC
	CompareConstant(ELIBACC,79,113,architecture)
#else
Msg( "Error: Constant not found: ELIBACC\n");
cnt++;
#endif

#elif __i386__
#ifdef ELIBACC
	CompareConstant(ELIBACC,79,113,architecture)
#else
Msg( "Error: Constant not found: ELIBACC\n");
cnt++;
#endif

#else
Msg( "No definition for ELIBACC (113, int) in db\n");
#ifdef ELIBACC
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,113,%d)\n", architecture, ELIBACC);
#endif
#endif
#ifdef __powerpc__
#ifdef ELIBBAD
	CompareConstant(ELIBBAD,80,114,architecture)
#else
Msg( "Error: Constant not found: ELIBBAD\n");
cnt++;
#endif

#elif __ia64__
#ifdef ELIBBAD
	CompareConstant(ELIBBAD,80,114,architecture)
#else
Msg( "Error: Constant not found: ELIBBAD\n");
cnt++;
#endif

#elif __i386__
#ifdef ELIBBAD
	CompareConstant(ELIBBAD,80,114,architecture)
#else
Msg( "Error: Constant not found: ELIBBAD\n");
cnt++;
#endif

#else
Msg( "No definition for ELIBBAD (114, int) in db\n");
#ifdef ELIBBAD
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,114,%d)\n", architecture, ELIBBAD);
#endif
#endif
#ifdef __powerpc__
#ifdef ELIBSCN
	CompareConstant(ELIBSCN,81,115,architecture)
#else
Msg( "Error: Constant not found: ELIBSCN\n");
cnt++;
#endif

#elif __ia64__
#ifdef ELIBSCN
	CompareConstant(ELIBSCN,81,115,architecture)
#else
Msg( "Error: Constant not found: ELIBSCN\n");
cnt++;
#endif

#elif __i386__
#ifdef ELIBSCN
	CompareConstant(ELIBSCN,81,115,architecture)
#else
Msg( "Error: Constant not found: ELIBSCN\n");
cnt++;
#endif

#else
Msg( "No definition for ELIBSCN (115, int) in db\n");
#ifdef ELIBSCN
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,115,%d)\n", architecture, ELIBSCN);
#endif
#endif
#ifdef __powerpc__
#ifdef ELIBMAX
	CompareConstant(ELIBMAX,82,116,architecture)
#else
Msg( "Error: Constant not found: ELIBMAX\n");
cnt++;
#endif

#elif __ia64__
#ifdef ELIBMAX
	CompareConstant(ELIBMAX,82,116,architecture)
#else
Msg( "Error: Constant not found: ELIBMAX\n");
cnt++;
#endif

#elif __i386__
#ifdef ELIBMAX
	CompareConstant(ELIBMAX,82,116,architecture)
#else
Msg( "Error: Constant not found: ELIBMAX\n");
cnt++;
#endif

#else
Msg( "No definition for ELIBMAX (116, int) in db\n");
#ifdef ELIBMAX
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,116,%d)\n", architecture, ELIBMAX);
#endif
#endif
#ifdef __powerpc__
#ifdef ELIBEXEC
	CompareConstant(ELIBEXEC,83,117,architecture)
#else
Msg( "Error: Constant not found: ELIBEXEC\n");
cnt++;
#endif

#elif __ia64__
#ifdef ELIBEXEC
	CompareConstant(ELIBEXEC,83,117,architecture)
#else
Msg( "Error: Constant not found: ELIBEXEC\n");
cnt++;
#endif

#elif __i386__
#ifdef ELIBEXEC
	CompareConstant(ELIBEXEC,83,117,architecture)
#else
Msg( "Error: Constant not found: ELIBEXEC\n");
cnt++;
#endif

#else
Msg( "No definition for ELIBEXEC (117, int) in db\n");
#ifdef ELIBEXEC
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,117,%d)\n", architecture, ELIBEXEC);
#endif
#endif
#ifdef __powerpc__
#ifdef EILSEQ
	CompareConstant(EILSEQ,84,118,architecture)
#else
Msg( "Error: Constant not found: EILSEQ\n");
cnt++;
#endif

#elif __ia64__
#ifdef EILSEQ
	CompareConstant(EILSEQ,84,118,architecture)
#else
Msg( "Error: Constant not found: EILSEQ\n");
cnt++;
#endif

#elif __i386__
#ifdef EILSEQ
	CompareConstant(EILSEQ,84,118,architecture)
#else
Msg( "Error: Constant not found: EILSEQ\n");
cnt++;
#endif

#else
Msg( "No definition for EILSEQ (118, int) in db\n");
#ifdef EILSEQ
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,118,%d)\n", architecture, EILSEQ);
#endif
#endif
#ifdef __powerpc__
#ifdef ERESTART
	CompareConstant(ERESTART,85,119,architecture)
#else
Msg( "Error: Constant not found: ERESTART\n");
cnt++;
#endif

#elif __ia64__
#ifdef ERESTART
	CompareConstant(ERESTART,85,119,architecture)
#else
Msg( "Error: Constant not found: ERESTART\n");
cnt++;
#endif

#elif __i386__
#ifdef ERESTART
	CompareConstant(ERESTART,85,119,architecture)
#else
Msg( "Error: Constant not found: ERESTART\n");
cnt++;
#endif

#else
Msg( "No definition for ERESTART (119, int) in db\n");
#ifdef ERESTART
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,119,%d)\n", architecture, ERESTART);
#endif
#endif
#ifdef __powerpc__
#ifdef EBADRQC
	CompareConstant(EBADRQC,56,90,architecture)
#else
Msg( "Error: Constant not found: EBADRQC\n");
cnt++;
#endif

#elif __ia64__
#ifdef EBADRQC
	CompareConstant(EBADRQC,56,90,architecture)
#else
Msg( "Error: Constant not found: EBADRQC\n");
cnt++;
#endif

#elif __i386__
#ifdef EBADRQC
	CompareConstant(EBADRQC,56,90,architecture)
#else
Msg( "Error: Constant not found: EBADRQC\n");
cnt++;
#endif

#else
Msg( "No definition for EBADRQC (90, int) in db\n");
#ifdef EBADRQC
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,90,%d)\n", architecture, EBADRQC);
#endif
#endif
#ifdef __powerpc__
#ifdef EBADSLT
	CompareConstant(EBADSLT,57,91,architecture)
#else
Msg( "Error: Constant not found: EBADSLT\n");
cnt++;
#endif

#elif __ia64__
#ifdef EBADSLT
	CompareConstant(EBADSLT,57,91,architecture)
#else
Msg( "Error: Constant not found: EBADSLT\n");
cnt++;
#endif

#elif __i386__
#ifdef EBADSLT
	CompareConstant(EBADSLT,57,91,architecture)
#else
Msg( "Error: Constant not found: EBADSLT\n");
cnt++;
#endif

#else
Msg( "No definition for EBADSLT (91, int) in db\n");
#ifdef EBADSLT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,91,%d)\n", architecture, EBADSLT);
#endif
#endif
#ifdef __powerpc__
#ifdef EDEADLOCK
	CompareConstant(EDEADLOCK,58,92,architecture)
#else
Msg( "Error: Constant not found: EDEADLOCK\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef EDEADLOCK
	CompareConstant(EDEADLOCK,EDEADLK,92,architecture)
#else
Msg( "Error: Constant not found: EDEADLOCK\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef EBFONT
	CompareConstant(EBFONT,59,93,architecture)
#else
Msg( "Error: Constant not found: EBFONT\n");
cnt++;
#endif

#elif __ia64__
#ifdef EBFONT
	CompareConstant(EBFONT,59,93,architecture)
#else
Msg( "Error: Constant not found: EBFONT\n");
cnt++;
#endif

#elif __i386__
#ifdef EBFONT
	CompareConstant(EBFONT,59,93,architecture)
#else
Msg( "Error: Constant not found: EBFONT\n");
cnt++;
#endif

#else
Msg( "No definition for EBFONT (93, int) in db\n");
#ifdef EBFONT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,93,%d)\n", architecture, EBFONT);
#endif
#endif
#ifdef __powerpc__
#ifdef ENOSTR
	CompareConstant(ENOSTR,60,94,architecture)
#else
Msg( "Error: Constant not found: ENOSTR\n");
cnt++;
#endif

#elif __ia64__
#ifdef ENOSTR
	CompareConstant(ENOSTR,60,94,architecture)
#else
Msg( "Error: Constant not found: ENOSTR\n");
cnt++;
#endif

#elif __i386__
#ifdef ENOSTR
	CompareConstant(ENOSTR,60,94,architecture)
#else
Msg( "Error: Constant not found: ENOSTR\n");
cnt++;
#endif

#else
Msg( "No definition for ENOSTR (94, int) in db\n");
#ifdef ENOSTR
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,94,%d)\n", architecture, ENOSTR);
#endif
#endif
#ifdef __powerpc__
#ifdef ENODATA
	CompareConstant(ENODATA,61,95,architecture)
#else
Msg( "Error: Constant not found: ENODATA\n");
cnt++;
#endif

#elif __ia64__
#ifdef ENODATA
	CompareConstant(ENODATA,61,95,architecture)
#else
Msg( "Error: Constant not found: ENODATA\n");
cnt++;
#endif

#elif __i386__
#ifdef ENODATA
	CompareConstant(ENODATA,61,95,architecture)
#else
Msg( "Error: Constant not found: ENODATA\n");
cnt++;
#endif

#else
Msg( "No definition for ENODATA (95, int) in db\n");
#ifdef ENODATA
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,95,%d)\n", architecture, ENODATA);
#endif
#endif
#ifdef __powerpc__
#ifdef ETIME
	CompareConstant(ETIME,62,96,architecture)
#else
Msg( "Error: Constant not found: ETIME\n");
cnt++;
#endif

#elif __ia64__
#ifdef ETIME
	CompareConstant(ETIME,62,96,architecture)
#else
Msg( "Error: Constant not found: ETIME\n");
cnt++;
#endif

#elif __i386__
#ifdef ETIME
	CompareConstant(ETIME,62,96,architecture)
#else
Msg( "Error: Constant not found: ETIME\n");
cnt++;
#endif

#else
Msg( "No definition for ETIME (96, int) in db\n");
#ifdef ETIME
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,96,%d)\n", architecture, ETIME);
#endif
#endif
#ifdef __powerpc__
#ifdef ESTRPIPE
	CompareConstant(ESTRPIPE,86,120,architecture)
#else
Msg( "Error: Constant not found: ESTRPIPE\n");
cnt++;
#endif

#elif __ia64__
#ifdef ESTRPIPE
	CompareConstant(ESTRPIPE,86,120,architecture)
#else
Msg( "Error: Constant not found: ESTRPIPE\n");
cnt++;
#endif

#elif __i386__
#ifdef ESTRPIPE
	CompareConstant(ESTRPIPE,86,120,architecture)
#else
Msg( "Error: Constant not found: ESTRPIPE\n");
cnt++;
#endif

#else
Msg( "No definition for ESTRPIPE (120, int) in db\n");
#ifdef ESTRPIPE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,120,%d)\n", architecture, ESTRPIPE);
#endif
#endif
#ifdef __powerpc__
#ifdef EUSERS
	CompareConstant(EUSERS,87,121,architecture)
#else
Msg( "Error: Constant not found: EUSERS\n");
cnt++;
#endif

#elif __ia64__
#ifdef EUSERS
	CompareConstant(EUSERS,87,121,architecture)
#else
Msg( "Error: Constant not found: EUSERS\n");
cnt++;
#endif

#elif __i386__
#ifdef EUSERS
	CompareConstant(EUSERS,87,121,architecture)
#else
Msg( "Error: Constant not found: EUSERS\n");
cnt++;
#endif

#else
Msg( "No definition for EUSERS (121, int) in db\n");
#ifdef EUSERS
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,121,%d)\n", architecture, EUSERS);
#endif
#endif
#ifdef __powerpc__
#ifdef ENOSR
	CompareConstant(ENOSR,63,97,architecture)
#else
Msg( "Error: Constant not found: ENOSR\n");
cnt++;
#endif

#elif __ia64__
#ifdef ENOSR
	CompareConstant(ENOSR,63,97,architecture)
#else
Msg( "Error: Constant not found: ENOSR\n");
cnt++;
#endif

#elif __i386__
#ifdef ENOSR
	CompareConstant(ENOSR,63,97,architecture)
#else
Msg( "Error: Constant not found: ENOSR\n");
cnt++;
#endif

#else
Msg( "No definition for ENOSR (97, int) in db\n");
#ifdef ENOSR
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,97,%d)\n", architecture, ENOSR);
#endif
#endif
#ifdef __powerpc__
#ifdef ENOTSOCK
	CompareConstant(ENOTSOCK,88,122,architecture)
#else
Msg( "Error: Constant not found: ENOTSOCK\n");
cnt++;
#endif

#elif __ia64__
#ifdef ENOTSOCK
	CompareConstant(ENOTSOCK,88,122,architecture)
#else
Msg( "Error: Constant not found: ENOTSOCK\n");
cnt++;
#endif

#elif __i386__
#ifdef ENOTSOCK
	CompareConstant(ENOTSOCK,88,122,architecture)
#else
Msg( "Error: Constant not found: ENOTSOCK\n");
cnt++;
#endif

#else
Msg( "No definition for ENOTSOCK (122, int) in db\n");
#ifdef ENOTSOCK
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,122,%d)\n", architecture, ENOTSOCK);
#endif
#endif
#ifdef __powerpc__
#ifdef ENONET
	CompareConstant(ENONET,64,98,architecture)
#else
Msg( "Error: Constant not found: ENONET\n");
cnt++;
#endif

#elif __ia64__
#ifdef ENONET
	CompareConstant(ENONET,64,98,architecture)
#else
Msg( "Error: Constant not found: ENONET\n");
cnt++;
#endif

#elif __i386__
#ifdef ENONET
	CompareConstant(ENONET,64,98,architecture)
#else
Msg( "Error: Constant not found: ENONET\n");
cnt++;
#endif

#else
Msg( "No definition for ENONET (98, int) in db\n");
#ifdef ENONET
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,98,%d)\n", architecture, ENONET);
#endif
#endif
#ifdef __powerpc__
#ifdef ENOPKG
	CompareConstant(ENOPKG,65,99,architecture)
#else
Msg( "Error: Constant not found: ENOPKG\n");
cnt++;
#endif

#elif __ia64__
#ifdef ENOPKG
	CompareConstant(ENOPKG,65,99,architecture)
#else
Msg( "Error: Constant not found: ENOPKG\n");
cnt++;
#endif

#elif __i386__
#ifdef ENOPKG
	CompareConstant(ENOPKG,65,99,architecture)
#else
Msg( "Error: Constant not found: ENOPKG\n");
cnt++;
#endif

#else
Msg( "No definition for ENOPKG (99, int) in db\n");
#ifdef ENOPKG
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,99,%d)\n", architecture, ENOPKG);
#endif
#endif
#ifdef __powerpc__
#ifdef EDESTADDRREQ
	CompareConstant(EDESTADDRREQ,89,123,architecture)
#else
Msg( "Error: Constant not found: EDESTADDRREQ\n");
cnt++;
#endif

#elif __ia64__
#ifdef EDESTADDRREQ
	CompareConstant(EDESTADDRREQ,89,123,architecture)
#else
Msg( "Error: Constant not found: EDESTADDRREQ\n");
cnt++;
#endif

#elif __i386__
#ifdef EDESTADDRREQ
	CompareConstant(EDESTADDRREQ,89,123,architecture)
#else
Msg( "Error: Constant not found: EDESTADDRREQ\n");
cnt++;
#endif

#else
Msg( "No definition for EDESTADDRREQ (123, int) in db\n");
#ifdef EDESTADDRREQ
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,123,%d)\n", architecture, EDESTADDRREQ);
#endif
#endif
#ifdef __powerpc__
#ifdef EMSGSIZE
	CompareConstant(EMSGSIZE,90,124,architecture)
#else
Msg( "Error: Constant not found: EMSGSIZE\n");
cnt++;
#endif

#elif __ia64__
#ifdef EMSGSIZE
	CompareConstant(EMSGSIZE,90,124,architecture)
#else
Msg( "Error: Constant not found: EMSGSIZE\n");
cnt++;
#endif

#elif __i386__
#ifdef EMSGSIZE
	CompareConstant(EMSGSIZE,90,124,architecture)
#else
Msg( "Error: Constant not found: EMSGSIZE\n");
cnt++;
#endif

#else
Msg( "No definition for EMSGSIZE (124, int) in db\n");
#ifdef EMSGSIZE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,124,%d)\n", architecture, EMSGSIZE);
#endif
#endif
#ifdef __powerpc__
#ifdef EPROTOTYPE
	CompareConstant(EPROTOTYPE,91,125,architecture)
#else
Msg( "Error: Constant not found: EPROTOTYPE\n");
cnt++;
#endif

#elif __ia64__
#ifdef EPROTOTYPE
	CompareConstant(EPROTOTYPE,91,125,architecture)
#else
Msg( "Error: Constant not found: EPROTOTYPE\n");
cnt++;
#endif

#elif __i386__
#ifdef EPROTOTYPE
	CompareConstant(EPROTOTYPE,91,125,architecture)
#else
Msg( "Error: Constant not found: EPROTOTYPE\n");
cnt++;
#endif

#else
Msg( "No definition for EPROTOTYPE (125, int) in db\n");
#ifdef EPROTOTYPE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,125,%d)\n", architecture, EPROTOTYPE);
#endif
#endif
#ifdef __powerpc__
#ifdef ENOPROTOOPT
	CompareConstant(ENOPROTOOPT,92,126,architecture)
#else
Msg( "Error: Constant not found: ENOPROTOOPT\n");
cnt++;
#endif

#elif __ia64__
#ifdef ENOPROTOOPT
	CompareConstant(ENOPROTOOPT,92,126,architecture)
#else
Msg( "Error: Constant not found: ENOPROTOOPT\n");
cnt++;
#endif

#elif __i386__
#ifdef ENOPROTOOPT
	CompareConstant(ENOPROTOOPT,92,126,architecture)
#else
Msg( "Error: Constant not found: ENOPROTOOPT\n");
cnt++;
#endif

#else
Msg( "No definition for ENOPROTOOPT (126, int) in db\n");
#ifdef ENOPROTOOPT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,126,%d)\n", architecture, ENOPROTOOPT);
#endif
#endif
#ifdef __powerpc__
#ifdef EPROTONOSUPPORT
	CompareConstant(EPROTONOSUPPORT,93,127,architecture)
#else
Msg( "Error: Constant not found: EPROTONOSUPPORT\n");
cnt++;
#endif

#elif __ia64__
#ifdef EPROTONOSUPPORT
	CompareConstant(EPROTONOSUPPORT,93,127,architecture)
#else
Msg( "Error: Constant not found: EPROTONOSUPPORT\n");
cnt++;
#endif

#elif __i386__
#ifdef EPROTONOSUPPORT
	CompareConstant(EPROTONOSUPPORT,93,127,architecture)
#else
Msg( "Error: Constant not found: EPROTONOSUPPORT\n");
cnt++;
#endif

#else
Msg( "No definition for EPROTONOSUPPORT (127, int) in db\n");
#ifdef EPROTONOSUPPORT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,127,%d)\n", architecture, EPROTONOSUPPORT);
#endif
#endif
#ifdef __powerpc__
#ifdef ESOCKTNOSUPPORT
	CompareConstant(ESOCKTNOSUPPORT,94,128,architecture)
#else
Msg( "Error: Constant not found: ESOCKTNOSUPPORT\n");
cnt++;
#endif

#elif __ia64__
#ifdef ESOCKTNOSUPPORT
	CompareConstant(ESOCKTNOSUPPORT,94,128,architecture)
#else
Msg( "Error: Constant not found: ESOCKTNOSUPPORT\n");
cnt++;
#endif

#elif __i386__
#ifdef ESOCKTNOSUPPORT
	CompareConstant(ESOCKTNOSUPPORT,94,128,architecture)
#else
Msg( "Error: Constant not found: ESOCKTNOSUPPORT\n");
cnt++;
#endif

#else
Msg( "No definition for ESOCKTNOSUPPORT (128, int) in db\n");
#ifdef ESOCKTNOSUPPORT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,128,%d)\n", architecture, ESOCKTNOSUPPORT);
#endif
#endif
#ifdef __powerpc__
#ifdef EOPNOTSUPP
	CompareConstant(EOPNOTSUPP,95,129,architecture)
#else
Msg( "Error: Constant not found: EOPNOTSUPP\n");
cnt++;
#endif

#elif __ia64__
#ifdef EOPNOTSUPP
	CompareConstant(EOPNOTSUPP,95,129,architecture)
#else
Msg( "Error: Constant not found: EOPNOTSUPP\n");
cnt++;
#endif

#elif __i386__
#ifdef EOPNOTSUPP
	CompareConstant(EOPNOTSUPP,95,129,architecture)
#else
Msg( "Error: Constant not found: EOPNOTSUPP\n");
cnt++;
#endif

#else
Msg( "No definition for EOPNOTSUPP (129, int) in db\n");
#ifdef EOPNOTSUPP
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,129,%d)\n", architecture, EOPNOTSUPP);
#endif
#endif
#ifdef __powerpc__
#ifdef EPFNOSUPPORT
	CompareConstant(EPFNOSUPPORT,96,130,architecture)
#else
Msg( "Error: Constant not found: EPFNOSUPPORT\n");
cnt++;
#endif

#elif __ia64__
#ifdef EPFNOSUPPORT
	CompareConstant(EPFNOSUPPORT,96,130,architecture)
#else
Msg( "Error: Constant not found: EPFNOSUPPORT\n");
cnt++;
#endif

#elif __i386__
#ifdef EPFNOSUPPORT
	CompareConstant(EPFNOSUPPORT,96,130,architecture)
#else
Msg( "Error: Constant not found: EPFNOSUPPORT\n");
cnt++;
#endif

#else
Msg( "No definition for EPFNOSUPPORT (130, int) in db\n");
#ifdef EPFNOSUPPORT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,130,%d)\n", architecture, EPFNOSUPPORT);
#endif
#endif
#ifdef __powerpc__
#ifdef EAFNOSUPPORT
	CompareConstant(EAFNOSUPPORT,97,131,architecture)
#else
Msg( "Error: Constant not found: EAFNOSUPPORT\n");
cnt++;
#endif

#elif __ia64__
#ifdef EAFNOSUPPORT
	CompareConstant(EAFNOSUPPORT,97,131,architecture)
#else
Msg( "Error: Constant not found: EAFNOSUPPORT\n");
cnt++;
#endif

#elif __i386__
#ifdef EAFNOSUPPORT
	CompareConstant(EAFNOSUPPORT,97,131,architecture)
#else
Msg( "Error: Constant not found: EAFNOSUPPORT\n");
cnt++;
#endif

#else
Msg( "No definition for EAFNOSUPPORT (131, int) in db\n");
#ifdef EAFNOSUPPORT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,131,%d)\n", architecture, EAFNOSUPPORT);
#endif
#endif
#ifdef __powerpc__
#ifdef EADDRINUSE
	CompareConstant(EADDRINUSE,98,132,architecture)
#else
Msg( "Error: Constant not found: EADDRINUSE\n");
cnt++;
#endif

#elif __ia64__
#ifdef EADDRINUSE
	CompareConstant(EADDRINUSE,98,132,architecture)
#else
Msg( "Error: Constant not found: EADDRINUSE\n");
cnt++;
#endif

#elif __i386__
#ifdef EADDRINUSE
	CompareConstant(EADDRINUSE,98,132,architecture)
#else
Msg( "Error: Constant not found: EADDRINUSE\n");
cnt++;
#endif

#else
Msg( "No definition for EADDRINUSE (132, int) in db\n");
#ifdef EADDRINUSE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,132,%d)\n", architecture, EADDRINUSE);
#endif
#endif
#ifdef __powerpc__
#ifdef EADDRNOTAVAIL
	CompareConstant(EADDRNOTAVAIL,99,133,architecture)
#else
Msg( "Error: Constant not found: EADDRNOTAVAIL\n");
cnt++;
#endif

#elif __ia64__
#ifdef EADDRNOTAVAIL
	CompareConstant(EADDRNOTAVAIL,99,133,architecture)
#else
Msg( "Error: Constant not found: EADDRNOTAVAIL\n");
cnt++;
#endif

#elif __i386__
#ifdef EADDRNOTAVAIL
	CompareConstant(EADDRNOTAVAIL,99,133,architecture)
#else
Msg( "Error: Constant not found: EADDRNOTAVAIL\n");
cnt++;
#endif

#else
Msg( "No definition for EADDRNOTAVAIL (133, int) in db\n");
#ifdef EADDRNOTAVAIL
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,133,%d)\n", architecture, EADDRNOTAVAIL);
#endif
#endif
#ifdef _LSB_DEFAULT_ARCH
#ifdef ENETDOWN
	CompareConstant(ENETDOWN,100,134,architecture)
#else
Msg( "Error: Constant not found: ENETDOWN\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ENETUNREACH
	CompareConstant(ENETUNREACH,101,135,architecture)
#else
Msg( "Error: Constant not found: ENETUNREACH\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ENETRESET
	CompareConstant(ENETRESET,102,136,architecture)
#else
Msg( "Error: Constant not found: ENETRESET\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ECONNABORTED
	CompareConstant(ECONNABORTED,103,137,architecture)
#else
Msg( "Error: Constant not found: ECONNABORTED\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ECONNRESET
	CompareConstant(ECONNRESET,104,138,architecture)
#else
Msg( "Error: Constant not found: ECONNRESET\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ENOBUFS
	CompareConstant(ENOBUFS,105,139,architecture)
#else
Msg( "Error: Constant not found: ENOBUFS\n");
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
