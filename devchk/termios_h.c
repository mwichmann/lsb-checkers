/*
 * Test of termios.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "termios.h"



int termios_h()
{
int cnt=0;
#ifdef IGNBRK
CompareConstant(IGNBRK,1)
#else
Msg( "Warning: Constant not found: IGNBRK\n");
#endif
#ifdef ICRNL
CompareConstant(ICRNL,256)
#else
Msg( "Warning: Constant not found: ICRNL\n");
#endif
#ifdef BRKINT
CompareConstant(BRKINT,2)
#else
Msg( "Warning: Constant not found: BRKINT\n");
#endif
#ifdef VTIME
CompareConstant(VTIME,5)
#else
Msg( "Warning: Constant not found: VTIME\n");
#endif
#ifdef VSUSP
CompareConstant(VSUSP,10)
#else
Msg( "Warning: Constant not found: VSUSP\n");
#endif
#ifdef VSTOP
CompareConstant(VSTOP,9)
#else
Msg( "Warning: Constant not found: VSTOP\n");
#endif
#ifdef VSTART
CompareConstant(VSTART,8)
#else
Msg( "Warning: Constant not found: VSTART\n");
#endif
#ifdef VQUIT
CompareConstant(VQUIT,1)
#else
Msg( "Warning: Constant not found: VQUIT\n");
#endif
#ifdef VMIN
CompareConstant(VMIN,6)
#else
Msg( "Warning: Constant not found: VMIN\n");
#endif
#ifdef VKILL
CompareConstant(VKILL,3)
#else
Msg( "Warning: Constant not found: VKILL\n");
#endif
#ifdef VINTR
CompareConstant(VINTR,0)
#else
Msg( "Warning: Constant not found: VINTR\n");
#endif
#ifdef VERASE
CompareConstant(VERASE,2)
#else
Msg( "Warning: Constant not found: VERASE\n");
#endif
#ifdef VEOL
CompareConstant(VEOL,11)
#else
Msg( "Warning: Constant not found: VEOL\n");
#endif
#ifdef VEOF
CompareConstant(VEOF,4)
#else
Msg( "Warning: Constant not found: VEOF\n");
#endif
#ifdef NCCS
CompareConstant(NCCS,32)
#else
Msg( "Warning: Constant not found: NCCS\n");
#endif
#ifdef IGNCR
CompareConstant(IGNCR,128)
#else
Msg( "Warning: Constant not found: IGNCR\n");
#endif
#ifdef IGNPAR
CompareConstant(IGNPAR,4)
#else
Msg( "Warning: Constant not found: IGNPAR\n");
#endif
#ifdef INLCR
CompareConstant(INLCR,64)
#else
Msg( "Warning: Constant not found: INLCR\n");
#endif
#ifdef INPCK
CompareConstant(INPCK,16)
#else
Msg( "Warning: Constant not found: INPCK\n");
#endif
#ifdef ISTRIP
CompareConstant(ISTRIP,32)
#else
Msg( "Warning: Constant not found: ISTRIP\n");
#endif
#ifdef IUCLC
CompareConstant(IUCLC,512)
#else
Msg( "Warning: Constant not found: IUCLC\n");
#endif
#ifdef IXANY
CompareConstant(IXANY,2048)
#else
Msg( "Warning: Constant not found: IXANY\n");
#endif
#ifdef IXOFF
CompareConstant(IXOFF,4096)
#else
Msg( "Warning: Constant not found: IXOFF\n");
#endif
#ifdef IXON
CompareConstant(IXON,1024)
#else
Msg( "Warning: Constant not found: IXON\n");
#endif
#ifdef PARMRK
CompareConstant(PARMRK,8)
#else
Msg( "Warning: Constant not found: PARMRK\n");
#endif
#ifdef OPOST
CompareConstant(OPOST,1)
#else
Msg( "Warning: Constant not found: OPOST\n");
#endif
#ifdef OLCUC
CompareConstant(OLCUC,2)
#else
Msg( "Warning: Constant not found: OLCUC\n");
#endif
#ifdef ONLCR
CompareConstant(ONLCR,4)
#else
Msg( "Warning: Constant not found: ONLCR\n");
#endif
#ifdef OCRNL
CompareConstant(OCRNL,8)
#else
Msg( "Warning: Constant not found: OCRNL\n");
#endif
#ifdef ONOCR
CompareConstant(ONOCR,16)
#else
Msg( "Warning: Constant not found: ONOCR\n");
#endif
#ifdef ONLRET
CompareConstant(ONLRET,32)
#else
Msg( "Warning: Constant not found: ONLRET\n");
#endif
#ifdef OFILL
CompareConstant(OFILL,64)
#else
Msg( "Warning: Constant not found: OFILL\n");
#endif
#ifdef OFDEL
CompareConstant(OFDEL,128)
#else
Msg( "Warning: Constant not found: OFDEL\n");
#endif
#ifdef NLDLY
CompareConstant(NLDLY,256)
#else
Msg( "Warning: Constant not found: NLDLY\n");
#endif
#ifdef NL0
CompareConstant(NL0,0)
#else
Msg( "Warning: Constant not found: NL0\n");
#endif
#ifdef NL1
CompareConstant(NL1,256)
#else
Msg( "Warning: Constant not found: NL1\n");
#endif
#ifdef CRDLY
CompareConstant(CRDLY,1536)
#else
Msg( "Warning: Constant not found: CRDLY\n");
#endif
#ifdef CR0
CompareConstant(CR0,0)
#else
Msg( "Warning: Constant not found: CR0\n");
#endif
#ifdef CR1
CompareConstant(CR1,512)
#else
Msg( "Warning: Constant not found: CR1\n");
#endif
#ifdef CR2
CompareConstant(CR2,1024)
#else
Msg( "Warning: Constant not found: CR2\n");
#endif
#ifdef CR3
CompareConstant(CR3,1536)
#else
Msg( "Warning: Constant not found: CR3\n");
#endif
#ifdef TABDLY
CompareConstant(TABDLY,6144)
#else
Msg( "Warning: Constant not found: TABDLY\n");
#endif
#ifdef TAB0
CompareConstant(TAB0,0)
#else
Msg( "Warning: Constant not found: TAB0\n");
#endif
#ifdef TAB1
CompareConstant(TAB1,2048)
#else
Msg( "Warning: Constant not found: TAB1\n");
#endif
#ifdef TAB2
CompareConstant(TAB2,4096)
#else
Msg( "Warning: Constant not found: TAB2\n");
#endif
#ifdef TAB3
CompareConstant(TAB3,6144)
#else
Msg( "Warning: Constant not found: TAB3\n");
#endif
#ifdef BSDLY
CompareConstant(BSDLY,8192)
#else
Msg( "Warning: Constant not found: BSDLY\n");
#endif
#ifdef BS0
CompareConstant(BS0,0)
#else
Msg( "Warning: Constant not found: BS0\n");
#endif
#ifdef BS1
CompareConstant(BS1,8192)
#else
Msg( "Warning: Constant not found: BS1\n");
#endif
#ifdef VTDLY
CompareConstant(VTDLY,16384)
#else
Msg( "Warning: Constant not found: VTDLY\n");
#endif
#ifdef VT0
CompareConstant(VT0,0)
#else
Msg( "Warning: Constant not found: VT0\n");
#endif
#ifdef VT1
CompareConstant(VT1,16384)
#else
Msg( "Warning: Constant not found: VT1\n");
#endif
#ifdef FFDLY
CompareConstant(FFDLY,32768)
#else
Msg( "Warning: Constant not found: FFDLY\n");
#endif
#ifdef FF0
CompareConstant(FF0,0)
#else
Msg( "Warning: Constant not found: FF0\n");
#endif
#ifdef FF1
CompareConstant(FF1,32768)
#else
Msg( "Warning: Constant not found: FF1\n");
#endif
#ifdef B0
CompareConstant(B0,0)
#else
Msg( "Warning: Constant not found: B0\n");
#endif
#ifdef B50
CompareConstant(B50,1)
#else
Msg( "Warning: Constant not found: B50\n");
#endif
#ifdef B75
CompareConstant(B75,2)
#else
Msg( "Warning: Constant not found: B75\n");
#endif
#ifdef B110
CompareConstant(B110,3)
#else
Msg( "Warning: Constant not found: B110\n");
#endif
#ifdef B134
CompareConstant(B134,4)
#else
Msg( "Warning: Constant not found: B134\n");
#endif
#ifdef B150
CompareConstant(B150,5)
#else
Msg( "Warning: Constant not found: B150\n");
#endif
#ifdef B200
CompareConstant(B200,6)
#else
Msg( "Warning: Constant not found: B200\n");
#endif
#ifdef B300
CompareConstant(B300,7)
#else
Msg( "Warning: Constant not found: B300\n");
#endif
#ifdef B600
CompareConstant(B600,8)
#else
Msg( "Warning: Constant not found: B600\n");
#endif
#ifdef B1200
CompareConstant(B1200,9)
#else
Msg( "Warning: Constant not found: B1200\n");
#endif
#ifdef B1800
CompareConstant(B1800,10)
#else
Msg( "Warning: Constant not found: B1800\n");
#endif
#ifdef B2400
CompareConstant(B2400,11)
#else
Msg( "Warning: Constant not found: B2400\n");
#endif
#ifdef B4800
CompareConstant(B4800,12)
#else
Msg( "Warning: Constant not found: B4800\n");
#endif
#ifdef B9600
CompareConstant(B9600,13)
#else
Msg( "Warning: Constant not found: B9600\n");
#endif
#ifdef B19200
CompareConstant(B19200,14)
#else
Msg( "Warning: Constant not found: B19200\n");
#endif
#ifdef B38400
CompareConstant(B38400,15)
#else
Msg( "Warning: Constant not found: B38400\n");
#endif
#ifdef CSIZE
CompareConstant(CSIZE,48)
#else
Msg( "Warning: Constant not found: CSIZE\n");
#endif
#ifdef CS5
CompareConstant(CS5,0)
#else
Msg( "Warning: Constant not found: CS5\n");
#endif
#ifdef CS6
CompareConstant(CS6,16)
#else
Msg( "Warning: Constant not found: CS6\n");
#endif
#ifdef CS7
CompareConstant(CS7,32)
#else
Msg( "Warning: Constant not found: CS7\n");
#endif
#ifdef CS8
CompareConstant(CS8,48)
#else
Msg( "Warning: Constant not found: CS8\n");
#endif
#ifdef CSTOPB
CompareConstant(CSTOPB,64)
#else
Msg( "Warning: Constant not found: CSTOPB\n");
#endif
#ifdef CREAD
CompareConstant(CREAD,128)
#else
Msg( "Warning: Constant not found: CREAD\n");
#endif
#ifdef PARENB
CompareConstant(PARENB,256)
#else
Msg( "Warning: Constant not found: PARENB\n");
#endif
#ifdef PARODD
CompareConstant(PARODD,512)
#else
Msg( "Warning: Constant not found: PARODD\n");
#endif
#ifdef HUPCL
CompareConstant(HUPCL,1024)
#else
Msg( "Warning: Constant not found: HUPCL\n");
#endif
#ifdef CLOCAL
CompareConstant(CLOCAL,2048)
#else
Msg( "Warning: Constant not found: CLOCAL\n");
#endif
#ifdef ECHO
CompareConstant(ECHO,8)
#else
Msg( "Warning: Constant not found: ECHO\n");
#endif
#ifdef ECHOE
CompareConstant(ECHOE,16)
#else
Msg( "Warning: Constant not found: ECHOE\n");
#endif
#ifdef ECHOK
CompareConstant(ECHOK,32)
#else
Msg( "Warning: Constant not found: ECHOK\n");
#endif
#ifdef ECHONL
CompareConstant(ECHONL,64)
#else
Msg( "Warning: Constant not found: ECHONL\n");
#endif
#ifdef ICANON
CompareConstant(ICANON,2)
#else
Msg( "Warning: Constant not found: ICANON\n");
#endif
#ifdef IEXTEN
CompareConstant(IEXTEN,32768)
#else
Msg( "Warning: Constant not found: IEXTEN\n");
#endif
#ifdef ISIG
CompareConstant(ISIG,1)
#else
Msg( "Warning: Constant not found: ISIG\n");
#endif
#ifdef NOFLSH
CompareConstant(NOFLSH,128)
#else
Msg( "Warning: Constant not found: NOFLSH\n");
#endif
#ifdef TOSTOP
CompareConstant(TOSTOP,256)
#else
Msg( "Warning: Constant not found: TOSTOP\n");
#endif
#ifdef XCASE
CompareConstant(XCASE,4)
#else
Msg( "Warning: Constant not found: XCASE\n");
#endif
#ifdef TCSANOW
CompareConstant(TCSANOW,0)
#else
Msg( "Warning: Constant not found: TCSANOW\n");
#endif
#ifdef TCSADRAIN
CompareConstant(TCSADRAIN,1)
#else
Msg( "Warning: Constant not found: TCSADRAIN\n");
#endif
#ifdef TCSAFLUSH
CompareConstant(TCSAFLUSH,2)
#else
Msg( "Warning: Constant not found: TCSAFLUSH\n");
#endif
#ifdef TCIFLUSH
CompareConstant(TCIFLUSH,0)
#else
Msg( "Warning: Constant not found: TCIFLUSH\n");
#endif
#ifdef TCOFLUSH
CompareConstant(TCOFLUSH,1)
#else
Msg( "Warning: Constant not found: TCOFLUSH\n");
#endif
#ifdef TCIOFLUSH
CompareConstant(TCIOFLUSH,2)
#else
Msg( "Warning: Constant not found: TCIOFLUSH\n");
#endif
#ifdef TCIOFF
CompareConstant(TCIOFF,2)
#else
Msg( "Warning: Constant not found: TCIOFF\n");
#endif
#ifdef TCION
CompareConstant(TCION,3)
#else
Msg( "Warning: Constant not found: TCION\n");
#endif
#ifdef TCOOFF
CompareConstant(TCOOFF,0)
#else
Msg( "Warning: Constant not found: TCOOFF\n");
#endif
#ifdef TCOON
CompareConstant(TCOON,1)
#else
Msg( "Warning: Constant not found: TCOON\n");
#endif
printf("%d tests in termios.h\n",cnt);
return cnt;
}
