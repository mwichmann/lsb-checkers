/*
 * Test of termios.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <sys/ioctl.h> 

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

#ifdef _LSB_DEFAULT_ARCH
#ifdef CR0
	CompareConstant(CR0,0000000,1820,architecture)
#else
Msg( "Error: Constant not found: CR0\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef CR1
	CompareConstant(CR1,4096,1821,architecture)
#else
Msg( "Error: Constant not found: CR1\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef CR1
	CompareConstant(CR1,0001000,1821,architecture)
#else
Msg( "Error: Constant not found: CR1\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef CR2
	CompareConstant(CR2,8192,1822,architecture)
#else
Msg( "Error: Constant not found: CR2\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef CR2
	CompareConstant(CR2,0002000,1822,architecture)
#else
Msg( "Error: Constant not found: CR2\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef CR3
	CompareConstant(CR3,12288,1823,architecture)
#else
Msg( "Error: Constant not found: CR3\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef CR3
	CompareConstant(CR3,0003000,1823,architecture)
#else
Msg( "Error: Constant not found: CR3\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef TABDLY
	CompareConstant(TABDLY,3072,1824,architecture)
#else
Msg( "Error: Constant not found: TABDLY\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef TABDLY
	CompareConstant(TABDLY,0014000,1824,architecture)
#else
Msg( "Error: Constant not found: TABDLY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef TAB0
	CompareConstant(TAB0,0000000,1825,architecture)
#else
Msg( "Error: Constant not found: TAB0\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef TAB1
	CompareConstant(TAB1,1024,1826,architecture)
#else
Msg( "Error: Constant not found: TAB1\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef TAB1
	CompareConstant(TAB1,0004000,1826,architecture)
#else
Msg( "Error: Constant not found: TAB1\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef TAB2
	CompareConstant(TAB2,2048,1827,architecture)
#else
Msg( "Error: Constant not found: TAB2\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef TAB2
	CompareConstant(TAB2,0010000,1827,architecture)
#else
Msg( "Error: Constant not found: TAB2\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef TAB3
	CompareConstant(TAB3,3072,1828,architecture)
#else
Msg( "Error: Constant not found: TAB3\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef TAB3
	CompareConstant(TAB3,0014000,1828,architecture)
#else
Msg( "Error: Constant not found: TAB3\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef BSDLY
	CompareConstant(BSDLY,32768,1829,architecture)
#else
Msg( "Error: Constant not found: BSDLY\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef BSDLY
	CompareConstant(BSDLY,0020000,1829,architecture)
#else
Msg( "Error: Constant not found: BSDLY\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef FLUSHO
	CompareConstant(FLUSHO,8388608,1900,architecture)
#else
Msg( "Error: Constant not found: FLUSHO\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef FLUSHO
	CompareConstant(FLUSHO,0010000,1900,architecture)
#else
Msg( "Error: Constant not found: FLUSHO\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef PENDIN
	CompareConstant(PENDIN,536870912,1901,architecture)
#else
Msg( "Error: Constant not found: PENDIN\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef PENDIN
	CompareConstant(PENDIN,0040000,1901,architecture)
#else
Msg( "Error: Constant not found: PENDIN\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef IEXTEN
	CompareConstant(IEXTEN,1024,1902,architecture)
#else
Msg( "Error: Constant not found: IEXTEN\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef IEXTEN
	CompareConstant(IEXTEN,0100000,1902,architecture)
#else
Msg( "Error: Constant not found: IEXTEN\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef TCOOFF
	CompareConstant(TCOOFF,0,1903,architecture)
#else
Msg( "Error: Constant not found: TCOOFF\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef BS0
	CompareConstant(BS0,0000000,1830,architecture)
#else
Msg( "Error: Constant not found: BS0\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef TCOON
	CompareConstant(TCOON,1,1904,architecture)
#else
Msg( "Error: Constant not found: TCOON\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef BS1
	CompareConstant(BS1,32768,1831,architecture)
#else
Msg( "Error: Constant not found: BS1\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef BS1
	CompareConstant(BS1,0020000,1831,architecture)
#else
Msg( "Error: Constant not found: BS1\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef TCIOFF
	CompareConstant(TCIOFF,2,1905,architecture)
#else
Msg( "Error: Constant not found: TCIOFF\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef FFDLY
	CompareConstant(FFDLY,16384,1832,architecture)
#else
Msg( "Error: Constant not found: FFDLY\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef FFDLY
	CompareConstant(FFDLY,0100000,1832,architecture)
#else
Msg( "Error: Constant not found: FFDLY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef TCION
	CompareConstant(TCION,3,1906,architecture)
#else
Msg( "Error: Constant not found: TCION\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef FF0
	CompareConstant(FF0,0000000,1833,architecture)
#else
Msg( "Error: Constant not found: FF0\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef TCIFLUSH
	CompareConstant(TCIFLUSH,0,1907,architecture)
#else
Msg( "Error: Constant not found: TCIFLUSH\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef FF1
	CompareConstant(FF1,16384,1834,architecture)
#else
Msg( "Error: Constant not found: FF1\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef FF1
	CompareConstant(FF1,0100000,1834,architecture)
#else
Msg( "Error: Constant not found: FF1\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef VTDLY
	CompareConstant(VTDLY,65536,1835,architecture)
#else
Msg( "Error: Constant not found: VTDLY\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef VTDLY
	CompareConstant(VTDLY,0040000,1835,architecture)
#else
Msg( "Error: Constant not found: VTDLY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef TCOFLUSH
	CompareConstant(TCOFLUSH,1,1908,architecture)
#else
Msg( "Error: Constant not found: TCOFLUSH\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef VT0
	CompareConstant(VT0,0000000,1836,architecture)
#else
Msg( "Error: Constant not found: VT0\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef TCIOFLUSH
	CompareConstant(TCIOFLUSH,2,1909,architecture)
#else
Msg( "Error: Constant not found: TCIOFLUSH\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef VT1
	CompareConstant(VT1,65536,1837,architecture)
#else
Msg( "Error: Constant not found: VT1\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef VT1
	CompareConstant(VT1,0040000,1837,architecture)
#else
Msg( "Error: Constant not found: VT1\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef TCSANOW
	CompareConstant(TCSANOW,0,1910,architecture)
#else
Msg( "Error: Constant not found: TCSANOW\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef TCSADRAIN
	CompareConstant(TCSADRAIN,1,1911,architecture)
#else
Msg( "Error: Constant not found: TCSADRAIN\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef TCSAFLUSH
	CompareConstant(TCSAFLUSH,2,1912,architecture)
#else
Msg( "Error: Constant not found: TCSAFLUSH\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef B0
	CompareConstant(B0,0000000,1840,architecture)
#else
Msg( "Error: Constant not found: B0\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef B50
	CompareConstant(B50,0000001,1841,architecture)
#else
Msg( "Error: Constant not found: B50\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef B75
	CompareConstant(B75,0000002,1842,architecture)
#else
Msg( "Error: Constant not found: B75\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef B110
	CompareConstant(B110,0000003,1843,architecture)
#else
Msg( "Error: Constant not found: B110\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef B134
	CompareConstant(B134,0000004,1844,architecture)
#else
Msg( "Error: Constant not found: B134\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef B150
	CompareConstant(B150,0000005,1845,architecture)
#else
Msg( "Error: Constant not found: B150\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef B200
	CompareConstant(B200,0000006,1846,architecture)
#else
Msg( "Error: Constant not found: B200\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef B300
	CompareConstant(B300,0000007,1847,architecture)
#else
Msg( "Error: Constant not found: B300\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef B600
	CompareConstant(B600,0000010,1848,architecture)
#else
Msg( "Error: Constant not found: B600\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef NCCS
	CompareConstant(NCCS,32,1776,architecture)
#else
Msg( "Error: Constant not found: NCCS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef B1200
	CompareConstant(B1200,0000011,1849,architecture)
#else
Msg( "Error: Constant not found: B1200\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef VINTR
	CompareConstant(VINTR,0,1777,architecture)
#else
Msg( "Error: Constant not found: VINTR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef VQUIT
	CompareConstant(VQUIT,1,1778,architecture)
#else
Msg( "Error: Constant not found: VQUIT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef VERASE
	CompareConstant(VERASE,2,1779,architecture)
#else
Msg( "Error: Constant not found: VERASE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef B1800
	CompareConstant(B1800,0000012,1850,architecture)
#else
Msg( "Error: Constant not found: B1800\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef B2400
	CompareConstant(B2400,0000013,1851,architecture)
#else
Msg( "Error: Constant not found: B2400\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef B4800
	CompareConstant(B4800,0000014,1852,architecture)
#else
Msg( "Error: Constant not found: B4800\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef B9600
	CompareConstant(B9600,0000015,1853,architecture)
#else
Msg( "Error: Constant not found: B9600\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef VKILL
	CompareConstant(VKILL,3,1780,architecture)
#else
Msg( "Error: Constant not found: VKILL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef B19200
	CompareConstant(B19200,0000016,1854,architecture)
#else
Msg( "Error: Constant not found: B19200\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef VEOF
	CompareConstant(VEOF,4,1781,architecture)
#else
Msg( "Error: Constant not found: VEOF\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef B38400
	CompareConstant(B38400,0000017,1855,architecture)
#else
Msg( "Error: Constant not found: B38400\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef VTIME
	CompareConstant(VTIME,7,1782,architecture)
#else
Msg( "Error: Constant not found: VTIME\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef VTIME
	CompareConstant(VTIME,5,1782,architecture)
#else
Msg( "Error: Constant not found: VTIME\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef VMIN
	CompareConstant(VMIN,5,1783,architecture)
#else
Msg( "Error: Constant not found: VMIN\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef VMIN
	CompareConstant(VMIN,6,1783,architecture)
#else
Msg( "Error: Constant not found: VMIN\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef VSWTC
	CompareConstant(VSWTC,9,1784,architecture)
#else
Msg( "Error: Constant not found: VSWTC\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef VSWTC
	CompareConstant(VSWTC,7,1784,architecture)
#else
Msg( "Error: Constant not found: VSWTC\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef CSIZE
	CompareConstant(CSIZE,768,1858,architecture)
#else
Msg( "Error: Constant not found: CSIZE\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef CSIZE
	CompareConstant(CSIZE,0000060,1858,architecture)
#else
Msg( "Error: Constant not found: CSIZE\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef VSTART
	CompareConstant(VSTART,13,1785,architecture)
#else
Msg( "Error: Constant not found: VSTART\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef VSTART
	CompareConstant(VSTART,8,1785,architecture)
#else
Msg( "Error: Constant not found: VSTART\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef CS5
	CompareConstant(CS5,0000000,1859,architecture)
#else
Msg( "Error: Constant not found: CS5\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef VSTOP
	CompareConstant(VSTOP,14,1786,architecture)
#else
Msg( "Error: Constant not found: VSTOP\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef VSTOP
	CompareConstant(VSTOP,9,1786,architecture)
#else
Msg( "Error: Constant not found: VSTOP\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef VSUSP
	CompareConstant(VSUSP,12,1787,architecture)
#else
Msg( "Error: Constant not found: VSUSP\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef VSUSP
	CompareConstant(VSUSP,10,1787,architecture)
#else
Msg( "Error: Constant not found: VSUSP\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef VEOL
	CompareConstant(VEOL,6,1788,architecture)
#else
Msg( "Error: Constant not found: VEOL\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef VEOL
	CompareConstant(VEOL,11,1788,architecture)
#else
Msg( "Error: Constant not found: VEOL\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef VREPRINT
	CompareConstant(VREPRINT,11,1789,architecture)
#else
Msg( "Error: Constant not found: VREPRINT\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef VREPRINT
	CompareConstant(VREPRINT,12,1789,architecture)
#else
Msg( "Error: Constant not found: VREPRINT\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef CS6
	CompareConstant(CS6,256,1860,architecture)
#else
Msg( "Error: Constant not found: CS6\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef CS6
	CompareConstant(CS6,0000020,1860,architecture)
#else
Msg( "Error: Constant not found: CS6\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef CS7
	CompareConstant(CS7,512,1861,architecture)
#else
Msg( "Error: Constant not found: CS7\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef CS7
	CompareConstant(CS7,0000040,1861,architecture)
#else
Msg( "Error: Constant not found: CS7\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef CS8
	CompareConstant(CS8,768,1862,architecture)
#else
Msg( "Error: Constant not found: CS8\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef CS8
	CompareConstant(CS8,0000060,1862,architecture)
#else
Msg( "Error: Constant not found: CS8\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef CSTOPB
	CompareConstant(CSTOPB,1024,1863,architecture)
#else
Msg( "Error: Constant not found: CSTOPB\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef CSTOPB
	CompareConstant(CSTOPB,0000100,1863,architecture)
#else
Msg( "Error: Constant not found: CSTOPB\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef VDISCARD
	CompareConstant(VDISCARD,16,1790,architecture)
#else
Msg( "Error: Constant not found: VDISCARD\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef VDISCARD
	CompareConstant(VDISCARD,13,1790,architecture)
#else
Msg( "Error: Constant not found: VDISCARD\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef CREAD
	CompareConstant(CREAD,2048,1864,architecture)
#else
Msg( "Error: Constant not found: CREAD\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef CREAD
	CompareConstant(CREAD,0000200,1864,architecture)
#else
Msg( "Error: Constant not found: CREAD\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef VWERASE
	CompareConstant(VWERASE,10,1791,architecture)
#else
Msg( "Error: Constant not found: VWERASE\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef VWERASE
	CompareConstant(VWERASE,14,1791,architecture)
#else
Msg( "Error: Constant not found: VWERASE\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef PARENB
	CompareConstant(PARENB,4096,1865,architecture)
#else
Msg( "Error: Constant not found: PARENB\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef PARENB
	CompareConstant(PARENB,0000400,1865,architecture)
#else
Msg( "Error: Constant not found: PARENB\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef VLNEXT
	CompareConstant(VLNEXT,15,1792,architecture)
#else
Msg( "Error: Constant not found: VLNEXT\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef PARODD
	CompareConstant(PARODD,8192,1866,architecture)
#else
Msg( "Error: Constant not found: PARODD\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef PARODD
	CompareConstant(PARODD,0001000,1866,architecture)
#else
Msg( "Error: Constant not found: PARODD\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef VEOL2
	CompareConstant(VEOL2,8,1793,architecture)
#else
Msg( "Error: Constant not found: VEOL2\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef VEOL2
	CompareConstant(VEOL2,16,1793,architecture)
#else
Msg( "Error: Constant not found: VEOL2\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef HUPCL
	CompareConstant(HUPCL,16384,1867,architecture)
#else
Msg( "Error: Constant not found: HUPCL\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef HUPCL
	CompareConstant(HUPCL,0002000,1867,architecture)
#else
Msg( "Error: Constant not found: HUPCL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef IGNBRK
	CompareConstant(IGNBRK,0000001,1794,architecture)
#else
Msg( "Error: Constant not found: IGNBRK\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef CLOCAL
	CompareConstant(CLOCAL,32768,1868,architecture)
#else
Msg( "Error: Constant not found: CLOCAL\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef CLOCAL
	CompareConstant(CLOCAL,0004000,1868,architecture)
#else
Msg( "Error: Constant not found: CLOCAL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef BRKINT
	CompareConstant(BRKINT,0000002,1795,architecture)
#else
Msg( "Error: Constant not found: BRKINT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef IGNPAR
	CompareConstant(IGNPAR,0000004,1796,architecture)
#else
Msg( "Error: Constant not found: IGNPAR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PARMRK
	CompareConstant(PARMRK,0000010,1797,architecture)
#else
Msg( "Error: Constant not found: PARMRK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef INPCK
	CompareConstant(INPCK,0000020,1798,architecture)
#else
Msg( "Error: Constant not found: INPCK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ISTRIP
	CompareConstant(ISTRIP,0000040,1799,architecture)
#else
Msg( "Error: Constant not found: ISTRIP\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef ISIG
	CompareConstant(ISIG,128,1888,architecture)
#else
Msg( "Error: Constant not found: ISIG\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef ISIG
	CompareConstant(ISIG,0000001,1888,architecture)
#else
Msg( "Error: Constant not found: ISIG\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef ICANON
	CompareConstant(ICANON,256,1889,architecture)
#else
Msg( "Error: Constant not found: ICANON\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef ICANON
	CompareConstant(ICANON,0000002,1889,architecture)
#else
Msg( "Error: Constant not found: ICANON\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef XCASE
	CompareConstant(XCASE,16384,1890,architecture)
#else
Msg( "Error: Constant not found: XCASE\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef XCASE
	CompareConstant(XCASE,0000004,1890,architecture)
#else
Msg( "Error: Constant not found: XCASE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ECHO
	CompareConstant(ECHO,0000010,1891,architecture)
#else
Msg( "Error: Constant not found: ECHO\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef ECHOE
	CompareConstant(ECHOE,2,1892,architecture)
#else
Msg( "Error: Constant not found: ECHOE\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef ECHOE
	CompareConstant(ECHOE,0000020,1892,architecture)
#else
Msg( "Error: Constant not found: ECHOE\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef ECHOK
	CompareConstant(ECHOK,4,1893,architecture)
#else
Msg( "Error: Constant not found: ECHOK\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef ECHOK
	CompareConstant(ECHOK,0000040,1893,architecture)
#else
Msg( "Error: Constant not found: ECHOK\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef ECHONL
	CompareConstant(ECHONL,16,1894,architecture)
#else
Msg( "Error: Constant not found: ECHONL\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef ECHONL
	CompareConstant(ECHONL,0000100,1894,architecture)
#else
Msg( "Error: Constant not found: ECHONL\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef NOFLSH
	CompareConstant(NOFLSH,-2147483648,1895,architecture)
#else
Msg( "Error: Constant not found: NOFLSH\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef NOFLSH
	CompareConstant(NOFLSH,0000200,1895,architecture)
#else
Msg( "Error: Constant not found: NOFLSH\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef TOSTOP
	CompareConstant(TOSTOP,4194304,1896,architecture)
#else
Msg( "Error: Constant not found: TOSTOP\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef TOSTOP
	CompareConstant(TOSTOP,0000400,1896,architecture)
#else
Msg( "Error: Constant not found: TOSTOP\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef ECHOCTL
	CompareConstant(ECHOCTL,64,1897,architecture)
#else
Msg( "Error: Constant not found: ECHOCTL\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef ECHOCTL
	CompareConstant(ECHOCTL,0001000,1897,architecture)
#else
Msg( "Error: Constant not found: ECHOCTL\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef ECHOPRT
	CompareConstant(ECHOPRT,32,1898,architecture)
#else
Msg( "Error: Constant not found: ECHOPRT\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef ECHOPRT
	CompareConstant(ECHOPRT,0002000,1898,architecture)
#else
Msg( "Error: Constant not found: ECHOPRT\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef ECHOKE
	CompareConstant(ECHOKE,1,1899,architecture)
#else
Msg( "Error: Constant not found: ECHOKE\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef ECHOKE
	CompareConstant(ECHOKE,0004000,1899,architecture)
#else
Msg( "Error: Constant not found: ECHOKE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef INLCR
	CompareConstant(INLCR,0000100,1800,architecture)
#else
Msg( "Error: Constant not found: INLCR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef IGNCR
	CompareConstant(IGNCR,0000200,1801,architecture)
#else
Msg( "Error: Constant not found: IGNCR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ICRNL
	CompareConstant(ICRNL,0000400,1802,architecture)
#else
Msg( "Error: Constant not found: ICRNL\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef IUCLC
	CompareConstant(IUCLC,4096,1803,architecture)
#else
Msg( "Error: Constant not found: IUCLC\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef IUCLC
	CompareConstant(IUCLC,0001000,1803,architecture)
#else
Msg( "Error: Constant not found: IUCLC\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef IXON
	CompareConstant(IXON,512,1804,architecture)
#else
Msg( "Error: Constant not found: IXON\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef IXON
	CompareConstant(IXON,0002000,1804,architecture)
#else
Msg( "Error: Constant not found: IXON\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef IXANY
	CompareConstant(IXANY,0004000,1805,architecture)
#else
Msg( "Error: Constant not found: IXANY\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef IXOFF
	CompareConstant(IXOFF,1024,1806,architecture)
#else
Msg( "Error: Constant not found: IXOFF\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef IXOFF
	CompareConstant(IXOFF,0010000,1806,architecture)
#else
Msg( "Error: Constant not found: IXOFF\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef IMAXBEL
	CompareConstant(IMAXBEL,0020000,1807,architecture)
#else
Msg( "Error: Constant not found: IMAXBEL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef OPOST
	CompareConstant(OPOST,0000001,1808,architecture)
#else
Msg( "Error: Constant not found: OPOST\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef OLCUC
	CompareConstant(OLCUC,4,1809,architecture)
#else
Msg( "Error: Constant not found: OLCUC\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef OLCUC
	CompareConstant(OLCUC,0000002,1809,architecture)
#else
Msg( "Error: Constant not found: OLCUC\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef ONLCR
	CompareConstant(ONLCR,2,1810,architecture)
#else
Msg( "Error: Constant not found: ONLCR\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef ONLCR
	CompareConstant(ONLCR,0000004,1810,architecture)
#else
Msg( "Error: Constant not found: ONLCR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef OCRNL
	CompareConstant(OCRNL,0000010,1811,architecture)
#else
Msg( "Error: Constant not found: OCRNL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ONOCR
	CompareConstant(ONOCR,0000020,1812,architecture)
#else
Msg( "Error: Constant not found: ONOCR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ONLRET
	CompareConstant(ONLRET,0000040,1813,architecture)
#else
Msg( "Error: Constant not found: ONLRET\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef OFILL
	CompareConstant(OFILL,0000100,1814,architecture)
#else
Msg( "Error: Constant not found: OFILL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef OFDEL
	CompareConstant(OFDEL,0000200,1815,architecture)
#else
Msg( "Error: Constant not found: OFDEL\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef NLDLY
	CompareConstant(NLDLY,768,1816,architecture)
#else
Msg( "Error: Constant not found: NLDLY\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef NLDLY
	CompareConstant(NLDLY,0000400,1816,architecture)
#else
Msg( "Error: Constant not found: NLDLY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef NL0
	CompareConstant(NL0,0000000,1817,architecture)
#else
Msg( "Error: Constant not found: NL0\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef NL1
	CompareConstant(NL1,0000400,1818,architecture)
#else
Msg( "Error: Constant not found: NL1\n");
cnt++;
#endif

#endif

#ifdef __powerpc__
#ifdef CRDLY
	CompareConstant(CRDLY,12288,1819,architecture)
#else
Msg( "Error: Constant not found: CRDLY\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef CRDLY
	CompareConstant(CRDLY,0003000,1819,architecture)
#else
Msg( "Error: Constant not found: CRDLY\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(struct winsize,8, 10301, 2)
#elif __ia64__
CheckTypeSize(struct winsize,8, 10301, 3)
#elif __powerpc__
CheckTypeSize(struct winsize,8, 10301, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10301,0);
Msg("Find size of winsize (10301)\n");
#endif

#ifdef __i386__
CheckTypeSize(speed_t,4, 9186, 2)
#elif __ia64__
CheckTypeSize(speed_t,4, 9186, 3)
#elif __powerpc__
CheckTypeSize(speed_t,4, 9186, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9186,0);
Msg("Find size of speed_t (9186)\n");
#endif

#ifdef __i386__
CheckTypeSize(cc_t,1, 10206, 2)
#elif __ia64__
CheckTypeSize(cc_t,1, 10206, 3)
#elif __powerpc__
CheckTypeSize(cc_t,1, 10206, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10206,0);
Msg("Find size of cc_t (10206)\n");
#endif

#ifdef __i386__
CheckTypeSize(tcflag_t,4, 10207, 2)
#elif __ia64__
CheckTypeSize(tcflag_t,4, 10207, 3)
#elif __powerpc__
CheckTypeSize(tcflag_t,4, 10207, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10207,0);
Msg("Find size of tcflag_t (10207)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct termios,60, 9187, 2)
CheckOffset(struct termios,c_iflag,0,2,34268)
CheckOffset(struct termios,c_oflag,4,2,34269)
CheckOffset(struct termios,c_cflag,8,2,34270)
CheckOffset(struct termios,c_lflag,12,2,34271)
CheckOffset(struct termios,c_line,16,2,34272)
CheckOffset(struct termios,c_cc,17,2,34273)
CheckOffset(struct termios,c_ispeed,52,2,34274)
CheckOffset(struct termios,c_ospeed,56,2,34275)
#elif __ia64__
CheckTypeSize(struct termios,60, 9187, 3)
#elif __powerpc__
CheckTypeSize(struct termios,60, 9187, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9187,0);
Msg("Find size of termios (9187)\n");
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
