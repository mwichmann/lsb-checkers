/*
 * Test of termios.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "termios.h"



#ifdef TET_TEST
void termios_h()
{
#else
int termios_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in termios.h\n");
#endif

#ifdef NCCS
	CompareConstant(NCCS,32)
#else
Msg( "Warning: Constant not found: NCCS\n");
#endif

#ifdef VINTR
	CompareConstant(VINTR,0)
#else
Msg( "Warning: Constant not found: VINTR\n");
#endif

#ifdef VQUIT
	CompareConstant(VQUIT,1)
#else
Msg( "Warning: Constant not found: VQUIT\n");
#endif

#ifdef VERASE
	CompareConstant(VERASE,2)
#else
Msg( "Warning: Constant not found: VERASE\n");
#endif

#ifdef VKILL
	CompareConstant(VKILL,3)
#else
Msg( "Warning: Constant not found: VKILL\n");
#endif

#ifdef VEOF
	CompareConstant(VEOF,4)
#else
Msg( "Warning: Constant not found: VEOF\n");
#endif

#ifdef VTIME
	CompareConstant(VTIME,5)
#else
Msg( "Warning: Constant not found: VTIME\n");
#endif

#ifdef VMIN
	CompareConstant(VMIN,6)
#else
Msg( "Warning: Constant not found: VMIN\n");
#endif

#ifdef VSWTC
	CompareConstant(VSWTC,7)
#else
Msg( "Warning: Constant not found: VSWTC\n");
#endif

#ifdef VSTART
	CompareConstant(VSTART,8)
#else
Msg( "Warning: Constant not found: VSTART\n");
#endif

#ifdef VSTOP
	CompareConstant(VSTOP,9)
#else
Msg( "Warning: Constant not found: VSTOP\n");
#endif

#ifdef VSUSP
	CompareConstant(VSUSP,10)
#else
Msg( "Warning: Constant not found: VSUSP\n");
#endif

#ifdef VEOL
	CompareConstant(VEOL,11)
#else
Msg( "Warning: Constant not found: VEOL\n");
#endif

#ifdef VREPRINT
	CompareConstant(VREPRINT,12)
#else
Msg( "Warning: Constant not found: VREPRINT\n");
#endif

#ifdef VDISCARD
	CompareConstant(VDISCARD,13)
#else
Msg( "Warning: Constant not found: VDISCARD\n");
#endif

#ifdef VWERASE
	CompareConstant(VWERASE,14)
#else
Msg( "Warning: Constant not found: VWERASE\n");
#endif

#ifdef VLNEXT
	CompareConstant(VLNEXT,15)
#else
Msg( "Warning: Constant not found: VLNEXT\n");
#endif

#ifdef VEOL2
	CompareConstant(VEOL2,16)
#else
Msg( "Warning: Constant not found: VEOL2\n");
#endif

#ifdef IGNBRK
	CompareConstant(IGNBRK,0000001)
#else
Msg( "Warning: Constant not found: IGNBRK\n");
#endif

#ifdef BRKINT
	CompareConstant(BRKINT,0000002)
#else
Msg( "Warning: Constant not found: BRKINT\n");
#endif

#ifdef IGNPAR
	CompareConstant(IGNPAR,0000004)
#else
Msg( "Warning: Constant not found: IGNPAR\n");
#endif

#ifdef PARMRK
	CompareConstant(PARMRK,0000010)
#else
Msg( "Warning: Constant not found: PARMRK\n");
#endif

#ifdef INPCK
	CompareConstant(INPCK,0000020)
#else
Msg( "Warning: Constant not found: INPCK\n");
#endif

#ifdef ISTRIP
	CompareConstant(ISTRIP,0000040)
#else
Msg( "Warning: Constant not found: ISTRIP\n");
#endif

#ifdef INLCR
	CompareConstant(INLCR,0000100)
#else
Msg( "Warning: Constant not found: INLCR\n");
#endif

#ifdef IGNCR
	CompareConstant(IGNCR,0000200)
#else
Msg( "Warning: Constant not found: IGNCR\n");
#endif

#ifdef ICRNL
	CompareConstant(ICRNL,0000400)
#else
Msg( "Warning: Constant not found: ICRNL\n");
#endif

#ifdef IXON
	CompareConstant(IXON,0002000)
#else
Msg( "Warning: Constant not found: IXON\n");
#endif

#ifdef IXANY
	CompareConstant(IXANY,0004000)
#else
Msg( "Warning: Constant not found: IXANY\n");
#endif

#ifdef IXOFF
	CompareConstant(IXOFF,0010000)
#else
Msg( "Warning: Constant not found: IXOFF\n");
#endif

#ifdef IMAXBEL
	CompareConstant(IMAXBEL,0020000)
#else
Msg( "Warning: Constant not found: IMAXBEL\n");
#endif

#ifdef OCRNL
	CompareConstant(OCRNL,0000010)
#else
Msg( "Warning: Constant not found: OCRNL\n");
#endif

#ifdef OPOST
	CompareConstant(OPOST,0000001)
#else
Msg( "Warning: Constant not found: OPOST\n");
#endif

#ifdef ONLCR
	CompareConstant(ONLCR,0000004)
#else
Msg( "Warning: Constant not found: ONLCR\n");
#endif

#ifdef ONOCR
	CompareConstant(ONOCR,0000020)
#else
Msg( "Warning: Constant not found: ONOCR\n");
#endif

#ifdef ONLRET
	CompareConstant(ONLRET,0000040)
#else
Msg( "Warning: Constant not found: ONLRET\n");
#endif

#ifdef CSIZE
	CompareConstant(CSIZE,0000060)
#else
Msg( "Warning: Constant not found: CSIZE\n");
#endif

#ifdef CS5
	CompareConstant(CS5,0000000)
#else
Msg( "Warning: Constant not found: CS5\n");
#endif

#ifdef CS6
	CompareConstant(CS6,0000020)
#else
Msg( "Warning: Constant not found: CS6\n");
#endif

#ifdef CS7
	CompareConstant(CS7,0000040)
#else
Msg( "Warning: Constant not found: CS7\n");
#endif

#ifdef CS8
	CompareConstant(CS8,0000060)
#else
Msg( "Warning: Constant not found: CS8\n");
#endif

#ifdef CSTOPB
	CompareConstant(CSTOPB,0000100)
#else
Msg( "Warning: Constant not found: CSTOPB\n");
#endif

#ifdef CREAD
	CompareConstant(CREAD,0000200)
#else
Msg( "Warning: Constant not found: CREAD\n");
#endif

#ifdef PARENB
	CompareConstant(PARENB,0000400)
#else
Msg( "Warning: Constant not found: PARENB\n");
#endif

#ifdef PARODD
	CompareConstant(PARODD,0001000)
#else
Msg( "Warning: Constant not found: PARODD\n");
#endif

#ifdef HUPCL
	CompareConstant(HUPCL,0002000)
#else
Msg( "Warning: Constant not found: HUPCL\n");
#endif

#ifdef CLOCAL
	CompareConstant(CLOCAL,0004000)
#else
Msg( "Warning: Constant not found: CLOCAL\n");
#endif

#ifdef CRTSCTS
	CompareConstant(CRTSCTS,020000000000)
#else
Msg( "Warning: Constant not found: CRTSCTS\n");
#endif

#ifdef ISIG
	CompareConstant(ISIG,0000001)
#else
Msg( "Warning: Constant not found: ISIG\n");
#endif

#ifdef ICANON
	CompareConstant(ICANON,0000002)
#else
Msg( "Warning: Constant not found: ICANON\n");
#endif

#ifdef ECHO
	CompareConstant(ECHO,0000010)
#else
Msg( "Warning: Constant not found: ECHO\n");
#endif

#ifdef ECHOE
	CompareConstant(ECHOE,0000020)
#else
Msg( "Warning: Constant not found: ECHOE\n");
#endif

#ifdef ECHOK
	CompareConstant(ECHOK,0000040)
#else
Msg( "Warning: Constant not found: ECHOK\n");
#endif

#ifdef ECHONL
	CompareConstant(ECHONL,0000100)
#else
Msg( "Warning: Constant not found: ECHONL\n");
#endif

#ifdef NOFLSH
	CompareConstant(NOFLSH,0000200)
#else
Msg( "Warning: Constant not found: NOFLSH\n");
#endif

#ifdef TOSTOP
	CompareConstant(TOSTOP,0000400)
#else
Msg( "Warning: Constant not found: TOSTOP\n");
#endif

#ifdef ECHOCTL
	CompareConstant(ECHOCTL,0001000)
#else
Msg( "Warning: Constant not found: ECHOCTL\n");
#endif

#ifdef ECHOPRT
	CompareConstant(ECHOPRT,0002000)
#else
Msg( "Warning: Constant not found: ECHOPRT\n");
#endif

#ifdef ECHOKE
	CompareConstant(ECHOKE,0004000)
#else
Msg( "Warning: Constant not found: ECHOKE\n");
#endif

#ifdef FLUSHO
	CompareConstant(FLUSHO,0010000)
#else
Msg( "Warning: Constant not found: FLUSHO\n");
#endif

#ifdef PENDIN
	CompareConstant(PENDIN,0040000)
#else
Msg( "Warning: Constant not found: PENDIN\n");
#endif

#ifdef IEXTEN
	CompareConstant(IEXTEN,0100000)
#else
Msg( "Warning: Constant not found: IEXTEN\n");
#endif

#ifdef B0
	CompareConstant(B0,0000000)
#else
Msg( "Warning: Constant not found: B0\n");
#endif

#ifdef B50
	CompareConstant(B50,0000001)
#else
Msg( "Warning: Constant not found: B50\n");
#endif

#ifdef B75
	CompareConstant(B75,0000002)
#else
Msg( "Warning: Constant not found: B75\n");
#endif

#ifdef B110
	CompareConstant(B110,0000003)
#else
Msg( "Warning: Constant not found: B110\n");
#endif

#ifdef B134
	CompareConstant(B134,0000004)
#else
Msg( "Warning: Constant not found: B134\n");
#endif

#ifdef B150
	CompareConstant(B150,0000005)
#else
Msg( "Warning: Constant not found: B150\n");
#endif

#ifdef B200
	CompareConstant(B200,0000006)
#else
Msg( "Warning: Constant not found: B200\n");
#endif

#ifdef B300
	CompareConstant(B300,0000007)
#else
Msg( "Warning: Constant not found: B300\n");
#endif

#ifdef B600
	CompareConstant(B600,0000010)
#else
Msg( "Warning: Constant not found: B600\n");
#endif

#ifdef B1200
	CompareConstant(B1200,0000011)
#else
Msg( "Warning: Constant not found: B1200\n");
#endif

#ifdef B1800
	CompareConstant(B1800,0000012)
#else
Msg( "Warning: Constant not found: B1800\n");
#endif

#ifdef B2400
	CompareConstant(B2400,0000013)
#else
Msg( "Warning: Constant not found: B2400\n");
#endif

#ifdef B4800
	CompareConstant(B4800,0000014)
#else
Msg( "Warning: Constant not found: B4800\n");
#endif

#ifdef B9600
	CompareConstant(B9600,0000015)
#else
Msg( "Warning: Constant not found: B9600\n");
#endif

#ifdef B19200
	CompareConstant(B19200,0000016)
#else
Msg( "Warning: Constant not found: B19200\n");
#endif

#ifdef B38400
	CompareConstant(B38400,0000017)
#else
Msg( "Warning: Constant not found: B38400\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in termios.h\n",cnt);
return cnt;
#endif

}
