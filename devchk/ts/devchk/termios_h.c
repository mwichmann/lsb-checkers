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
Msg( "Error: Constant not found: NCCS\n");
cnt++;
#endif

#ifdef VINTR
	CompareConstant(VINTR,0)
#else
Msg( "Error: Constant not found: VINTR\n");
cnt++;
#endif

#ifdef VQUIT
	CompareConstant(VQUIT,1)
#else
Msg( "Error: Constant not found: VQUIT\n");
cnt++;
#endif

#ifdef VERASE
	CompareConstant(VERASE,2)
#else
Msg( "Error: Constant not found: VERASE\n");
cnt++;
#endif

#ifdef VKILL
	CompareConstant(VKILL,3)
#else
Msg( "Error: Constant not found: VKILL\n");
cnt++;
#endif

#ifdef VEOF
	CompareConstant(VEOF,4)
#else
Msg( "Error: Constant not found: VEOF\n");
cnt++;
#endif

#ifdef VTIME
	CompareConstant(VTIME,5)
#else
Msg( "Error: Constant not found: VTIME\n");
cnt++;
#endif

#ifdef VMIN
	CompareConstant(VMIN,6)
#else
Msg( "Error: Constant not found: VMIN\n");
cnt++;
#endif

#ifdef VSWTC
	CompareConstant(VSWTC,7)
#else
Msg( "Error: Constant not found: VSWTC\n");
cnt++;
#endif

#ifdef VSTART
	CompareConstant(VSTART,8)
#else
Msg( "Error: Constant not found: VSTART\n");
cnt++;
#endif

#ifdef VSTOP
	CompareConstant(VSTOP,9)
#else
Msg( "Error: Constant not found: VSTOP\n");
cnt++;
#endif

#ifdef VSUSP
	CompareConstant(VSUSP,10)
#else
Msg( "Error: Constant not found: VSUSP\n");
cnt++;
#endif

#ifdef VEOL
	CompareConstant(VEOL,11)
#else
Msg( "Error: Constant not found: VEOL\n");
cnt++;
#endif

#ifdef VREPRINT
	CompareConstant(VREPRINT,12)
#else
Msg( "Error: Constant not found: VREPRINT\n");
cnt++;
#endif

#ifdef VDISCARD
	CompareConstant(VDISCARD,13)
#else
Msg( "Error: Constant not found: VDISCARD\n");
cnt++;
#endif

#ifdef VWERASE
	CompareConstant(VWERASE,14)
#else
Msg( "Error: Constant not found: VWERASE\n");
cnt++;
#endif

#ifdef VLNEXT
	CompareConstant(VLNEXT,15)
#else
Msg( "Error: Constant not found: VLNEXT\n");
cnt++;
#endif

#ifdef VEOL2
	CompareConstant(VEOL2,16)
#else
Msg( "Error: Constant not found: VEOL2\n");
cnt++;
#endif

#ifdef IGNBRK
	CompareConstant(IGNBRK,0000001)
#else
Msg( "Error: Constant not found: IGNBRK\n");
cnt++;
#endif

#ifdef BRKINT
	CompareConstant(BRKINT,0000002)
#else
Msg( "Error: Constant not found: BRKINT\n");
cnt++;
#endif

#ifdef IGNPAR
	CompareConstant(IGNPAR,0000004)
#else
Msg( "Error: Constant not found: IGNPAR\n");
cnt++;
#endif

#ifdef PARMRK
	CompareConstant(PARMRK,0000010)
#else
Msg( "Error: Constant not found: PARMRK\n");
cnt++;
#endif

#ifdef INPCK
	CompareConstant(INPCK,0000020)
#else
Msg( "Error: Constant not found: INPCK\n");
cnt++;
#endif

#ifdef ISTRIP
	CompareConstant(ISTRIP,0000040)
#else
Msg( "Error: Constant not found: ISTRIP\n");
cnt++;
#endif

#ifdef INLCR
	CompareConstant(INLCR,0000100)
#else
Msg( "Error: Constant not found: INLCR\n");
cnt++;
#endif

#ifdef IGNCR
	CompareConstant(IGNCR,0000200)
#else
Msg( "Error: Constant not found: IGNCR\n");
cnt++;
#endif

#ifdef ICRNL
	CompareConstant(ICRNL,0000400)
#else
Msg( "Error: Constant not found: ICRNL\n");
cnt++;
#endif

#ifdef IXON
	CompareConstant(IXON,0002000)
#else
Msg( "Error: Constant not found: IXON\n");
cnt++;
#endif

#ifdef IXANY
	CompareConstant(IXANY,0004000)
#else
Msg( "Error: Constant not found: IXANY\n");
cnt++;
#endif

#ifdef IXOFF
	CompareConstant(IXOFF,0010000)
#else
Msg( "Error: Constant not found: IXOFF\n");
cnt++;
#endif

#ifdef IMAXBEL
	CompareConstant(IMAXBEL,0020000)
#else
Msg( "Error: Constant not found: IMAXBEL\n");
cnt++;
#endif

#ifdef CSIZE
	CompareConstant(CSIZE,0000060)
#else
Msg( "Error: Constant not found: CSIZE\n");
cnt++;
#endif

#ifdef CS5
	CompareConstant(CS5,0000000)
#else
Msg( "Error: Constant not found: CS5\n");
cnt++;
#endif

#ifdef CS6
	CompareConstant(CS6,0000020)
#else
Msg( "Error: Constant not found: CS6\n");
cnt++;
#endif

#ifdef CS7
	CompareConstant(CS7,0000040)
#else
Msg( "Error: Constant not found: CS7\n");
cnt++;
#endif

#ifdef CS8
	CompareConstant(CS8,0000060)
#else
Msg( "Error: Constant not found: CS8\n");
cnt++;
#endif

#ifdef CSTOPB
	CompareConstant(CSTOPB,0000100)
#else
Msg( "Error: Constant not found: CSTOPB\n");
cnt++;
#endif

#ifdef CREAD
	CompareConstant(CREAD,0000200)
#else
Msg( "Error: Constant not found: CREAD\n");
cnt++;
#endif

#ifdef PARENB
	CompareConstant(PARENB,0000400)
#else
Msg( "Error: Constant not found: PARENB\n");
cnt++;
#endif

#ifdef PARODD
	CompareConstant(PARODD,0001000)
#else
Msg( "Error: Constant not found: PARODD\n");
cnt++;
#endif

#ifdef HUPCL
	CompareConstant(HUPCL,0002000)
#else
Msg( "Error: Constant not found: HUPCL\n");
cnt++;
#endif

#ifdef CLOCAL
	CompareConstant(CLOCAL,0004000)
#else
Msg( "Error: Constant not found: CLOCAL\n");
cnt++;
#endif

#ifdef CRTSCTS
	CompareConstant(CRTSCTS,020000000000)
#else
Msg( "Error: Constant not found: CRTSCTS\n");
cnt++;
#endif

#ifdef ISIG
	CompareConstant(ISIG,0000001)
#else
Msg( "Error: Constant not found: ISIG\n");
cnt++;
#endif

#ifdef ICANON
	CompareConstant(ICANON,0000002)
#else
Msg( "Error: Constant not found: ICANON\n");
cnt++;
#endif

#ifdef ECHO
	CompareConstant(ECHO,0000010)
#else
Msg( "Error: Constant not found: ECHO\n");
cnt++;
#endif

#ifdef ECHOE
	CompareConstant(ECHOE,0000020)
#else
Msg( "Error: Constant not found: ECHOE\n");
cnt++;
#endif

#ifdef ECHOK
	CompareConstant(ECHOK,0000040)
#else
Msg( "Error: Constant not found: ECHOK\n");
cnt++;
#endif

#ifdef ECHONL
	CompareConstant(ECHONL,0000100)
#else
Msg( "Error: Constant not found: ECHONL\n");
cnt++;
#endif

#ifdef NOFLSH
	CompareConstant(NOFLSH,0000200)
#else
Msg( "Error: Constant not found: NOFLSH\n");
cnt++;
#endif

#ifdef TOSTOP
	CompareConstant(TOSTOP,0000400)
#else
Msg( "Error: Constant not found: TOSTOP\n");
cnt++;
#endif

#ifdef ECHOCTL
	CompareConstant(ECHOCTL,0001000)
#else
Msg( "Error: Constant not found: ECHOCTL\n");
cnt++;
#endif

#ifdef ECHOPRT
	CompareConstant(ECHOPRT,0002000)
#else
Msg( "Error: Constant not found: ECHOPRT\n");
cnt++;
#endif

#ifdef ECHOKE
	CompareConstant(ECHOKE,0004000)
#else
Msg( "Error: Constant not found: ECHOKE\n");
cnt++;
#endif

#ifdef FLUSHO
	CompareConstant(FLUSHO,0010000)
#else
Msg( "Error: Constant not found: FLUSHO\n");
cnt++;
#endif

#ifdef PENDIN
	CompareConstant(PENDIN,0040000)
#else
Msg( "Error: Constant not found: PENDIN\n");
cnt++;
#endif

#ifdef IEXTEN
	CompareConstant(IEXTEN,0100000)
#else
Msg( "Error: Constant not found: IEXTEN\n");
cnt++;
#endif

#ifdef B0
	CompareConstant(B0,0000000)
#else
Msg( "Error: Constant not found: B0\n");
cnt++;
#endif

#ifdef B50
	CompareConstant(B50,0000001)
#else
Msg( "Error: Constant not found: B50\n");
cnt++;
#endif

#ifdef B75
	CompareConstant(B75,0000002)
#else
Msg( "Error: Constant not found: B75\n");
cnt++;
#endif

#ifdef B110
	CompareConstant(B110,0000003)
#else
Msg( "Error: Constant not found: B110\n");
cnt++;
#endif

#ifdef B134
	CompareConstant(B134,0000004)
#else
Msg( "Error: Constant not found: B134\n");
cnt++;
#endif

#ifdef B150
	CompareConstant(B150,0000005)
#else
Msg( "Error: Constant not found: B150\n");
cnt++;
#endif

#ifdef B200
	CompareConstant(B200,0000006)
#else
Msg( "Error: Constant not found: B200\n");
cnt++;
#endif

#ifdef B300
	CompareConstant(B300,0000007)
#else
Msg( "Error: Constant not found: B300\n");
cnt++;
#endif

#ifdef B600
	CompareConstant(B600,0000010)
#else
Msg( "Error: Constant not found: B600\n");
cnt++;
#endif

#ifdef B1200
	CompareConstant(B1200,0000011)
#else
Msg( "Error: Constant not found: B1200\n");
cnt++;
#endif

#ifdef B1800
	CompareConstant(B1800,0000012)
#else
Msg( "Error: Constant not found: B1800\n");
cnt++;
#endif

#ifdef B2400
	CompareConstant(B2400,0000013)
#else
Msg( "Error: Constant not found: B2400\n");
cnt++;
#endif

#ifdef B4800
	CompareConstant(B4800,0000014)
#else
Msg( "Error: Constant not found: B4800\n");
cnt++;
#endif

#ifdef B9600
	CompareConstant(B9600,0000015)
#else
Msg( "Error: Constant not found: B9600\n");
cnt++;
#endif

#ifdef B19200
	CompareConstant(B19200,0000016)
#else
Msg( "Error: Constant not found: B19200\n");
cnt++;
#endif

#ifdef B38400
	CompareConstant(B38400,0000017)
#else
Msg( "Error: Constant not found: B38400\n");
cnt++;
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
