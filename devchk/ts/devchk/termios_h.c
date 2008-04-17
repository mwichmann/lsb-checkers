/*
 * Test of termios.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in termios.h\n");
#endif

printf("Checking data structures in termios.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef NCCS
	CompareConstant(NCCS,32,1776,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: NCCS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VINTR
	CompareConstant(VINTR,0,1777,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: VINTR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VQUIT
	CompareConstant(VQUIT,1,1778,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: VQUIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VERASE
	CompareConstant(VERASE,2,1779,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: VERASE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VKILL
	CompareConstant(VKILL,3,1780,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: VKILL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VEOF
	CompareConstant(VEOF,4,1781,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: VEOF\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef VTIME
	CompareConstant(VTIME,7,1782,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VTIME\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef VTIME
	CompareConstant(VTIME,7,1782,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VTIME\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef VTIME
	CompareConstant(VTIME,5,1782,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VTIME\n");
cnt++;
#endif

#elif defined __i386__
#ifdef VTIME
	CompareConstant(VTIME,5,1782,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: VTIME\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef VTIME
	CompareConstant(VTIME,5,1782,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VTIME\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef VTIME
	CompareConstant(VTIME,5,1782,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VTIME\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef VTIME
	CompareConstant(VTIME,5,1782,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VTIME\n");
cnt++;
#endif

#else
Msg( "No definition for VTIME (1782, int) in db\n");
#ifdef VTIME
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1782,%d,'""1.3""',NULL);\n", architecture, VTIME);
#endif
#endif
#if defined __powerpc64__
#ifdef VMIN
	CompareConstant(VMIN,5,1783,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VMIN\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef VMIN
	CompareConstant(VMIN,5,1783,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VMIN\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef VMIN
	CompareConstant(VMIN,6,1783,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VMIN\n");
cnt++;
#endif

#elif defined __i386__
#ifdef VMIN
	CompareConstant(VMIN,6,1783,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: VMIN\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef VMIN
	CompareConstant(VMIN,6,1783,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VMIN\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef VMIN
	CompareConstant(VMIN,6,1783,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VMIN\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef VMIN
	CompareConstant(VMIN,6,1783,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VMIN\n");
cnt++;
#endif

#else
Msg( "No definition for VMIN (1783, int) in db\n");
#ifdef VMIN
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1783,%d,'""1.3""',NULL);\n", architecture, VMIN);
#endif
#endif
#if defined __powerpc64__
#ifdef VSWTC
	CompareConstant(VSWTC,9,1784,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VSWTC\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef VSWTC
	CompareConstant(VSWTC,9,1784,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VSWTC\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef VSWTC
	CompareConstant(VSWTC,7,1784,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VSWTC\n");
cnt++;
#endif

#elif defined __i386__
#ifdef VSWTC
	CompareConstant(VSWTC,7,1784,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: VSWTC\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef VSWTC
	CompareConstant(VSWTC,7,1784,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VSWTC\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef VSWTC
	CompareConstant(VSWTC,7,1784,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VSWTC\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef VSWTC
	CompareConstant(VSWTC,7,1784,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VSWTC\n");
cnt++;
#endif

#else
Msg( "No definition for VSWTC (1784, int) in db\n");
#ifdef VSWTC
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1784,%d,'""1.3""',NULL);\n", architecture, VSWTC);
#endif
#endif
#if defined __powerpc64__
#ifdef VSTART
	CompareConstant(VSTART,13,1785,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VSTART\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef VSTART
	CompareConstant(VSTART,13,1785,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VSTART\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef VSTART
	CompareConstant(VSTART,8,1785,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VSTART\n");
cnt++;
#endif

#elif defined __i386__
#ifdef VSTART
	CompareConstant(VSTART,8,1785,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: VSTART\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef VSTART
	CompareConstant(VSTART,8,1785,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VSTART\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef VSTART
	CompareConstant(VSTART,8,1785,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VSTART\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef VSTART
	CompareConstant(VSTART,8,1785,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VSTART\n");
cnt++;
#endif

#else
Msg( "No definition for VSTART (1785, int) in db\n");
#ifdef VSTART
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1785,%d,'""1.3""',NULL);\n", architecture, VSTART);
#endif
#endif
#if defined __powerpc64__
#ifdef VSTOP
	CompareConstant(VSTOP,14,1786,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VSTOP\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef VSTOP
	CompareConstant(VSTOP,14,1786,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VSTOP\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef VSTOP
	CompareConstant(VSTOP,9,1786,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VSTOP\n");
cnt++;
#endif

#elif defined __i386__
#ifdef VSTOP
	CompareConstant(VSTOP,9,1786,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: VSTOP\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef VSTOP
	CompareConstant(VSTOP,9,1786,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VSTOP\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef VSTOP
	CompareConstant(VSTOP,9,1786,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VSTOP\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef VSTOP
	CompareConstant(VSTOP,9,1786,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VSTOP\n");
cnt++;
#endif

#else
Msg( "No definition for VSTOP (1786, int) in db\n");
#ifdef VSTOP
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1786,%d,'""1.3""',NULL);\n", architecture, VSTOP);
#endif
#endif
#if defined __powerpc64__
#ifdef VSUSP
	CompareConstant(VSUSP,12,1787,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VSUSP\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef VSUSP
	CompareConstant(VSUSP,12,1787,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VSUSP\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef VSUSP
	CompareConstant(VSUSP,10,1787,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VSUSP\n");
cnt++;
#endif

#elif defined __i386__
#ifdef VSUSP
	CompareConstant(VSUSP,10,1787,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: VSUSP\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef VSUSP
	CompareConstant(VSUSP,10,1787,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VSUSP\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef VSUSP
	CompareConstant(VSUSP,10,1787,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VSUSP\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef VSUSP
	CompareConstant(VSUSP,10,1787,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VSUSP\n");
cnt++;
#endif

#else
Msg( "No definition for VSUSP (1787, int) in db\n");
#ifdef VSUSP
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1787,%d,'""1.3""',NULL);\n", architecture, VSUSP);
#endif
#endif
#if defined __powerpc64__
#ifdef VEOL
	CompareConstant(VEOL,6,1788,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VEOL\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef VEOL
	CompareConstant(VEOL,6,1788,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VEOL\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef VEOL
	CompareConstant(VEOL,11,1788,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VEOL\n");
cnt++;
#endif

#elif defined __i386__
#ifdef VEOL
	CompareConstant(VEOL,11,1788,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: VEOL\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef VEOL
	CompareConstant(VEOL,11,1788,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VEOL\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef VEOL
	CompareConstant(VEOL,11,1788,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VEOL\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef VEOL
	CompareConstant(VEOL,11,1788,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VEOL\n");
cnt++;
#endif

#else
Msg( "No definition for VEOL (1788, int) in db\n");
#ifdef VEOL
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1788,%d,'""1.3""',NULL);\n", architecture, VEOL);
#endif
#endif
#if defined __powerpc64__
#ifdef VREPRINT
	CompareConstant(VREPRINT,11,1789,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VREPRINT\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef VREPRINT
	CompareConstant(VREPRINT,11,1789,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VREPRINT\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef VREPRINT
	CompareConstant(VREPRINT,12,1789,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VREPRINT\n");
cnt++;
#endif

#elif defined __i386__
#ifdef VREPRINT
	CompareConstant(VREPRINT,12,1789,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: VREPRINT\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef VREPRINT
	CompareConstant(VREPRINT,12,1789,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VREPRINT\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef VREPRINT
	CompareConstant(VREPRINT,12,1789,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VREPRINT\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef VREPRINT
	CompareConstant(VREPRINT,12,1789,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VREPRINT\n");
cnt++;
#endif

#else
Msg( "No definition for VREPRINT (1789, int) in db\n");
#ifdef VREPRINT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1789,%d,'""1.3""',NULL);\n", architecture, VREPRINT);
#endif
#endif
#if defined __powerpc64__
#ifdef VDISCARD
	CompareConstant(VDISCARD,16,1790,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VDISCARD\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef VDISCARD
	CompareConstant(VDISCARD,16,1790,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VDISCARD\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef VDISCARD
	CompareConstant(VDISCARD,13,1790,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VDISCARD\n");
cnt++;
#endif

#elif defined __i386__
#ifdef VDISCARD
	CompareConstant(VDISCARD,13,1790,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: VDISCARD\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef VDISCARD
	CompareConstant(VDISCARD,13,1790,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VDISCARD\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef VDISCARD
	CompareConstant(VDISCARD,13,1790,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VDISCARD\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef VDISCARD
	CompareConstant(VDISCARD,13,1790,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VDISCARD\n");
cnt++;
#endif

#else
Msg( "No definition for VDISCARD (1790, int) in db\n");
#ifdef VDISCARD
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1790,%d,'""1.3""',NULL);\n", architecture, VDISCARD);
#endif
#endif
#if defined __powerpc64__
#ifdef VWERASE
	CompareConstant(VWERASE,10,1791,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VWERASE\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef VWERASE
	CompareConstant(VWERASE,10,1791,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VWERASE\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef VWERASE
	CompareConstant(VWERASE,14,1791,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VWERASE\n");
cnt++;
#endif

#elif defined __i386__
#ifdef VWERASE
	CompareConstant(VWERASE,14,1791,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: VWERASE\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef VWERASE
	CompareConstant(VWERASE,14,1791,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VWERASE\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef VWERASE
	CompareConstant(VWERASE,14,1791,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VWERASE\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef VWERASE
	CompareConstant(VWERASE,14,1791,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VWERASE\n");
cnt++;
#endif

#else
Msg( "No definition for VWERASE (1791, int) in db\n");
#ifdef VWERASE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1791,%d,'""1.3""',NULL);\n", architecture, VWERASE);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef VLNEXT
	CompareConstant(VLNEXT,15,1792,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: VLNEXT\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef VEOL2
	CompareConstant(VEOL2,8,1793,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VEOL2\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef VEOL2
	CompareConstant(VEOL2,8,1793,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VEOL2\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef VEOL2
	CompareConstant(VEOL2,16,1793,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VEOL2\n");
cnt++;
#endif

#elif defined __i386__
#ifdef VEOL2
	CompareConstant(VEOL2,16,1793,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: VEOL2\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef VEOL2
	CompareConstant(VEOL2,16,1793,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VEOL2\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef VEOL2
	CompareConstant(VEOL2,16,1793,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VEOL2\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef VEOL2
	CompareConstant(VEOL2,16,1793,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VEOL2\n");
cnt++;
#endif

#else
Msg( "No definition for VEOL2 (1793, int) in db\n");
#ifdef VEOL2
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1793,%d,'""1.3""',NULL);\n", architecture, VEOL2);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef IGNBRK
	CompareConstant(IGNBRK,0000001,1794,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: IGNBRK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BRKINT
	CompareConstant(BRKINT,0000002,1795,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: BRKINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGNPAR
	CompareConstant(IGNPAR,0000004,1796,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: IGNPAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PARMRK
	CompareConstant(PARMRK,0000010,1797,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: PARMRK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INPCK
	CompareConstant(INPCK,0000020,1798,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: INPCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ISTRIP
	CompareConstant(ISTRIP,0000040,1799,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: ISTRIP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INLCR
	CompareConstant(INLCR,0000100,1800,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: INLCR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGNCR
	CompareConstant(IGNCR,0000200,1801,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: IGNCR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICRNL
	CompareConstant(ICRNL,0000400,1802,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: ICRNL\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef IUCLC
	CompareConstant(IUCLC,4096,1803,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IUCLC\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef IUCLC
	CompareConstant(IUCLC,4096,1803,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IUCLC\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef IUCLC
	CompareConstant(IUCLC,0001000,1803,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: IUCLC\n");
cnt++;
#endif

#elif defined __i386__
#ifdef IUCLC
	CompareConstant(IUCLC,0001000,1803,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: IUCLC\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef IUCLC
	CompareConstant(IUCLC,512,1803,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: IUCLC\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef IUCLC
	CompareConstant(IUCLC,0001000,1803,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IUCLC\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef IUCLC
	CompareConstant(IUCLC,0001000,1803,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: IUCLC\n");
cnt++;
#endif

#else
Msg( "No definition for IUCLC (1803, int) in db\n");
#ifdef IUCLC
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1803,%d,'""1.3""',NULL);\n", architecture, IUCLC);
#endif
#endif
#if defined __powerpc64__
#ifdef IXON
	CompareConstant(IXON,512,1804,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IXON\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef IXON
	CompareConstant(IXON,512,1804,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IXON\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef IXON
	CompareConstant(IXON,0002000,1804,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: IXON\n");
cnt++;
#endif

#elif defined __i386__
#ifdef IXON
	CompareConstant(IXON,0002000,1804,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: IXON\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef IXON
	CompareConstant(IXON,1024,1804,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: IXON\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef IXON
	CompareConstant(IXON,0002000,1804,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IXON\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef IXON
	CompareConstant(IXON,0002000,1804,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: IXON\n");
cnt++;
#endif

#else
Msg( "No definition for IXON (1804, int) in db\n");
#ifdef IXON
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1804,%d,'""1.3""',NULL);\n", architecture, IXON);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef IXANY
	CompareConstant(IXANY,0004000,1805,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: IXANY\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef IXOFF
	CompareConstant(IXOFF,1024,1806,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IXOFF\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef IXOFF
	CompareConstant(IXOFF,1024,1806,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IXOFF\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef IXOFF
	CompareConstant(IXOFF,0010000,1806,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: IXOFF\n");
cnt++;
#endif

#elif defined __i386__
#ifdef IXOFF
	CompareConstant(IXOFF,0010000,1806,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: IXOFF\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef IXOFF
	CompareConstant(IXOFF,4096,1806,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: IXOFF\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef IXOFF
	CompareConstant(IXOFF,0010000,1806,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IXOFF\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef IXOFF
	CompareConstant(IXOFF,0010000,1806,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: IXOFF\n");
cnt++;
#endif

#else
Msg( "No definition for IXOFF (1806, int) in db\n");
#ifdef IXOFF
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1806,%d,'""1.3""',NULL);\n", architecture, IXOFF);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef IMAXBEL
	CompareConstant(IMAXBEL,0020000,1807,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: IMAXBEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef OPOST
	CompareConstant(OPOST,0000001,1808,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: OPOST\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef OLCUC
	CompareConstant(OLCUC,4,1809,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: OLCUC\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef OLCUC
	CompareConstant(OLCUC,4,1809,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: OLCUC\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef OLCUC
	CompareConstant(OLCUC,0000002,1809,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: OLCUC\n");
cnt++;
#endif

#elif defined __i386__
#ifdef OLCUC
	CompareConstant(OLCUC,0000002,1809,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: OLCUC\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef OLCUC
	CompareConstant(OLCUC,2,1809,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: OLCUC\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef OLCUC
	CompareConstant(OLCUC,0000002,1809,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: OLCUC\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef OLCUC
	CompareConstant(OLCUC,0000002,1809,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: OLCUC\n");
cnt++;
#endif

#else
Msg( "No definition for OLCUC (1809, int) in db\n");
#ifdef OLCUC
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1809,%d,'""1.3""',NULL);\n", architecture, OLCUC);
#endif
#endif
#if defined __powerpc64__
#ifdef ONLCR
	CompareConstant(ONLCR,2,1810,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ONLCR\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef ONLCR
	CompareConstant(ONLCR,2,1810,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ONLCR\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef ONLCR
	CompareConstant(ONLCR,0000004,1810,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ONLCR\n");
cnt++;
#endif

#elif defined __i386__
#ifdef ONLCR
	CompareConstant(ONLCR,0000004,1810,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: ONLCR\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef ONLCR
	CompareConstant(ONLCR,4,1810,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ONLCR\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef ONLCR
	CompareConstant(ONLCR,0000004,1810,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ONLCR\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef ONLCR
	CompareConstant(ONLCR,0000004,1810,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ONLCR\n");
cnt++;
#endif

#else
Msg( "No definition for ONLCR (1810, int) in db\n");
#ifdef ONLCR
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1810,%d,'""1.3""',NULL);\n", architecture, ONLCR);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef OCRNL
	CompareConstant(OCRNL,0000010,1811,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: OCRNL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ONOCR
	CompareConstant(ONOCR,0000020,1812,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: ONOCR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ONLRET
	CompareConstant(ONLRET,0000040,1813,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: ONLRET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef OFILL
	CompareConstant(OFILL,0000100,1814,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: OFILL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef OFDEL
	CompareConstant(OFDEL,0000200,1815,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: OFDEL\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef NLDLY
	CompareConstant(NLDLY,768,1816,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: NLDLY\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef NLDLY
	CompareConstant(NLDLY,768,1816,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NLDLY\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef NLDLY
	CompareConstant(NLDLY,0000400,1816,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: NLDLY\n");
cnt++;
#endif

#elif defined __i386__
#ifdef NLDLY
	CompareConstant(NLDLY,0000400,1816,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: NLDLY\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef NLDLY
	CompareConstant(NLDLY,256,1816,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: NLDLY\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef NLDLY
	CompareConstant(NLDLY,0000400,1816,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: NLDLY\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef NLDLY
	CompareConstant(NLDLY,0000400,1816,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: NLDLY\n");
cnt++;
#endif

#else
Msg( "No definition for NLDLY (1816, int) in db\n");
#ifdef NLDLY
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1816,%d,'""1.3""',NULL);\n", architecture, NLDLY);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef NL0
	CompareConstant(NL0,0000000,1817,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: NL0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NL1
	CompareConstant(NL1,0000400,1818,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: NL1\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef CRDLY
	CompareConstant(CRDLY,12288,1819,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CRDLY\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef CRDLY
	CompareConstant(CRDLY,12288,1819,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CRDLY\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef CRDLY
	CompareConstant(CRDLY,0003000,1819,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CRDLY\n");
cnt++;
#endif

#elif defined __i386__
#ifdef CRDLY
	CompareConstant(CRDLY,0003000,1819,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CRDLY\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef CRDLY
	CompareConstant(CRDLY,1536,1819,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CRDLY\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef CRDLY
	CompareConstant(CRDLY,0003000,1819,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CRDLY\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef CRDLY
	CompareConstant(CRDLY,0003000,1819,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CRDLY\n");
cnt++;
#endif

#else
Msg( "No definition for CRDLY (1819, int) in db\n");
#ifdef CRDLY
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1819,%d,'""1.3""',NULL);\n", architecture, CRDLY);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef CR0
	CompareConstant(CR0,0000000,1820,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CR0\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef CR1
	CompareConstant(CR1,4096,1821,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CR1\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef CR1
	CompareConstant(CR1,4096,1821,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CR1\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef CR1
	CompareConstant(CR1,0001000,1821,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CR1\n");
cnt++;
#endif

#elif defined __i386__
#ifdef CR1
	CompareConstant(CR1,0001000,1821,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CR1\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef CR1
	CompareConstant(CR1,512,1821,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CR1\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef CR1
	CompareConstant(CR1,0001000,1821,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CR1\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef CR1
	CompareConstant(CR1,0001000,1821,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CR1\n");
cnt++;
#endif

#else
Msg( "No definition for CR1 (1821, int) in db\n");
#ifdef CR1
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1821,%d,'""1.3""',NULL);\n", architecture, CR1);
#endif
#endif
#if defined __powerpc64__
#ifdef CR2
	CompareConstant(CR2,8192,1822,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CR2\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef CR2
	CompareConstant(CR2,8192,1822,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CR2\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef CR2
	CompareConstant(CR2,0002000,1822,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CR2\n");
cnt++;
#endif

#elif defined __i386__
#ifdef CR2
	CompareConstant(CR2,0002000,1822,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CR2\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef CR2
	CompareConstant(CR2,1024,1822,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CR2\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef CR2
	CompareConstant(CR2,0002000,1822,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CR2\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef CR2
	CompareConstant(CR2,0002000,1822,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CR2\n");
cnt++;
#endif

#else
Msg( "No definition for CR2 (1822, int) in db\n");
#ifdef CR2
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1822,%d,'""1.3""',NULL);\n", architecture, CR2);
#endif
#endif
#if defined __powerpc64__
#ifdef CR3
	CompareConstant(CR3,12288,1823,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CR3\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef CR3
	CompareConstant(CR3,12288,1823,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CR3\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef CR3
	CompareConstant(CR3,0003000,1823,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CR3\n");
cnt++;
#endif

#elif defined __i386__
#ifdef CR3
	CompareConstant(CR3,0003000,1823,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CR3\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef CR3
	CompareConstant(CR3,1536,1823,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CR3\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef CR3
	CompareConstant(CR3,0003000,1823,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CR3\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef CR3
	CompareConstant(CR3,0003000,1823,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CR3\n");
cnt++;
#endif

#else
Msg( "No definition for CR3 (1823, int) in db\n");
#ifdef CR3
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1823,%d,'""1.3""',NULL);\n", architecture, CR3);
#endif
#endif
#if defined __powerpc64__
#ifdef TABDLY
	CompareConstant(TABDLY,3072,1824,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: TABDLY\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef TABDLY
	CompareConstant(TABDLY,3072,1824,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: TABDLY\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef TABDLY
	CompareConstant(TABDLY,0014000,1824,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: TABDLY\n");
cnt++;
#endif

#elif defined __i386__
#ifdef TABDLY
	CompareConstant(TABDLY,0014000,1824,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: TABDLY\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef TABDLY
	CompareConstant(TABDLY,6144,1824,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: TABDLY\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef TABDLY
	CompareConstant(TABDLY,0014000,1824,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: TABDLY\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef TABDLY
	CompareConstant(TABDLY,0014000,1824,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: TABDLY\n");
cnt++;
#endif

#else
Msg( "No definition for TABDLY (1824, int) in db\n");
#ifdef TABDLY
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1824,%d,'""1.3""',NULL);\n", architecture, TABDLY);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef TAB0
	CompareConstant(TAB0,0000000,1825,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: TAB0\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef TAB1
	CompareConstant(TAB1,1024,1826,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: TAB1\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef TAB1
	CompareConstant(TAB1,1024,1826,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: TAB1\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef TAB1
	CompareConstant(TAB1,0004000,1826,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: TAB1\n");
cnt++;
#endif

#elif defined __i386__
#ifdef TAB1
	CompareConstant(TAB1,0004000,1826,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: TAB1\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef TAB1
	CompareConstant(TAB1,2048,1826,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: TAB1\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef TAB1
	CompareConstant(TAB1,0004000,1826,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: TAB1\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef TAB1
	CompareConstant(TAB1,0004000,1826,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: TAB1\n");
cnt++;
#endif

#else
Msg( "No definition for TAB1 (1826, int) in db\n");
#ifdef TAB1
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1826,%d,'""1.3""',NULL);\n", architecture, TAB1);
#endif
#endif
#if defined __powerpc64__
#ifdef TAB2
	CompareConstant(TAB2,2048,1827,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: TAB2\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef TAB2
	CompareConstant(TAB2,2048,1827,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: TAB2\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef TAB2
	CompareConstant(TAB2,0010000,1827,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: TAB2\n");
cnt++;
#endif

#elif defined __i386__
#ifdef TAB2
	CompareConstant(TAB2,0010000,1827,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: TAB2\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef TAB2
	CompareConstant(TAB2,4096,1827,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: TAB2\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef TAB2
	CompareConstant(TAB2,0010000,1827,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: TAB2\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef TAB2
	CompareConstant(TAB2,0010000,1827,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: TAB2\n");
cnt++;
#endif

#else
Msg( "No definition for TAB2 (1827, int) in db\n");
#ifdef TAB2
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1827,%d,'""1.3""',NULL);\n", architecture, TAB2);
#endif
#endif
#if defined __powerpc64__
#ifdef TAB3
	CompareConstant(TAB3,3072,1828,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: TAB3\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef TAB3
	CompareConstant(TAB3,3072,1828,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: TAB3\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef TAB3
	CompareConstant(TAB3,0014000,1828,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: TAB3\n");
cnt++;
#endif

#elif defined __i386__
#ifdef TAB3
	CompareConstant(TAB3,0014000,1828,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: TAB3\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef TAB3
	CompareConstant(TAB3,6144,1828,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: TAB3\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef TAB3
	CompareConstant(TAB3,0014000,1828,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: TAB3\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef TAB3
	CompareConstant(TAB3,0014000,1828,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: TAB3\n");
cnt++;
#endif

#else
Msg( "No definition for TAB3 (1828, int) in db\n");
#ifdef TAB3
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1828,%d,'""1.3""',NULL);\n", architecture, TAB3);
#endif
#endif
#if defined __powerpc64__
#ifdef BSDLY
	CompareConstant(BSDLY,32768,1829,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: BSDLY\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef BSDLY
	CompareConstant(BSDLY,32768,1829,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BSDLY\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef BSDLY
	CompareConstant(BSDLY,0020000,1829,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: BSDLY\n");
cnt++;
#endif

#elif defined __i386__
#ifdef BSDLY
	CompareConstant(BSDLY,0020000,1829,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: BSDLY\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef BSDLY
	CompareConstant(BSDLY,8192,1829,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: BSDLY\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef BSDLY
	CompareConstant(BSDLY,0020000,1829,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: BSDLY\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef BSDLY
	CompareConstant(BSDLY,0020000,1829,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: BSDLY\n");
cnt++;
#endif

#else
Msg( "No definition for BSDLY (1829, int) in db\n");
#ifdef BSDLY
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1829,%d,'""1.3""',NULL);\n", architecture, BSDLY);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef BS0
	CompareConstant(BS0,0000000,1830,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: BS0\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef BS1
	CompareConstant(BS1,32768,1831,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: BS1\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef BS1
	CompareConstant(BS1,32768,1831,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BS1\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef BS1
	CompareConstant(BS1,0020000,1831,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: BS1\n");
cnt++;
#endif

#elif defined __i386__
#ifdef BS1
	CompareConstant(BS1,0020000,1831,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: BS1\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef BS1
	CompareConstant(BS1,8192,1831,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: BS1\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef BS1
	CompareConstant(BS1,0020000,1831,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: BS1\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef BS1
	CompareConstant(BS1,0020000,1831,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: BS1\n");
cnt++;
#endif

#else
Msg( "No definition for BS1 (1831, int) in db\n");
#ifdef BS1
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1831,%d,'""1.3""',NULL);\n", architecture, BS1);
#endif
#endif
#if defined __powerpc64__
#ifdef FFDLY
	CompareConstant(FFDLY,16384,1832,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: FFDLY\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef FFDLY
	CompareConstant(FFDLY,16384,1832,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FFDLY\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef FFDLY
	CompareConstant(FFDLY,0100000,1832,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: FFDLY\n");
cnt++;
#endif

#elif defined __i386__
#ifdef FFDLY
	CompareConstant(FFDLY,0100000,1832,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: FFDLY\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef FFDLY
	CompareConstant(FFDLY,32768,1832,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: FFDLY\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef FFDLY
	CompareConstant(FFDLY,0100000,1832,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: FFDLY\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef FFDLY
	CompareConstant(FFDLY,0100000,1832,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: FFDLY\n");
cnt++;
#endif

#else
Msg( "No definition for FFDLY (1832, int) in db\n");
#ifdef FFDLY
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1832,%d,'""1.3""',NULL);\n", architecture, FFDLY);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef FF0
	CompareConstant(FF0,0000000,1833,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: FF0\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef FF1
	CompareConstant(FF1,16384,1834,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: FF1\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef FF1
	CompareConstant(FF1,16384,1834,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FF1\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef FF1
	CompareConstant(FF1,0100000,1834,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: FF1\n");
cnt++;
#endif

#elif defined __i386__
#ifdef FF1
	CompareConstant(FF1,0100000,1834,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: FF1\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef FF1
	CompareConstant(FF1,32768,1834,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: FF1\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef FF1
	CompareConstant(FF1,0100000,1834,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: FF1\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef FF1
	CompareConstant(FF1,0100000,1834,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: FF1\n");
cnt++;
#endif

#else
Msg( "No definition for FF1 (1834, int) in db\n");
#ifdef FF1
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1834,%d,'""1.3""',NULL);\n", architecture, FF1);
#endif
#endif
#if defined __powerpc64__
#ifdef VTDLY
	CompareConstant(VTDLY,65536,1835,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VTDLY\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef VTDLY
	CompareConstant(VTDLY,65536,1835,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VTDLY\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef VTDLY
	CompareConstant(VTDLY,0040000,1835,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VTDLY\n");
cnt++;
#endif

#elif defined __i386__
#ifdef VTDLY
	CompareConstant(VTDLY,0040000,1835,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: VTDLY\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef VTDLY
	CompareConstant(VTDLY,16384,1835,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VTDLY\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef VTDLY
	CompareConstant(VTDLY,0040000,1835,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VTDLY\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef VTDLY
	CompareConstant(VTDLY,0040000,1835,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VTDLY\n");
cnt++;
#endif

#else
Msg( "No definition for VTDLY (1835, int) in db\n");
#ifdef VTDLY
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1835,%d,'""1.3""',NULL);\n", architecture, VTDLY);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef VT0
	CompareConstant(VT0,0000000,1836,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: VT0\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef VT1
	CompareConstant(VT1,65536,1837,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VT1\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef VT1
	CompareConstant(VT1,65536,1837,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VT1\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef VT1
	CompareConstant(VT1,0040000,1837,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VT1\n");
cnt++;
#endif

#elif defined __i386__
#ifdef VT1
	CompareConstant(VT1,0040000,1837,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: VT1\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef VT1
	CompareConstant(VT1,16384,1837,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VT1\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef VT1
	CompareConstant(VT1,0040000,1837,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: VT1\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef VT1
	CompareConstant(VT1,0040000,1837,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: VT1\n");
cnt++;
#endif

#else
Msg( "No definition for VT1 (1837, int) in db\n");
#ifdef VT1
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1837,%d,'""1.3""',NULL);\n", architecture, VT1);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef B0
	CompareConstant(B0,0000000,1840,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: B0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef B50
	CompareConstant(B50,0000001,1841,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: B50\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef B75
	CompareConstant(B75,0000002,1842,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: B75\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef B110
	CompareConstant(B110,0000003,1843,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: B110\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef B134
	CompareConstant(B134,0000004,1844,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: B134\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef B150
	CompareConstant(B150,0000005,1845,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: B150\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef B200
	CompareConstant(B200,0000006,1846,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: B200\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef B300
	CompareConstant(B300,0000007,1847,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: B300\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef B600
	CompareConstant(B600,0000010,1848,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: B600\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef B1200
	CompareConstant(B1200,0000011,1849,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: B1200\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef B1800
	CompareConstant(B1800,0000012,1850,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: B1800\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef B2400
	CompareConstant(B2400,0000013,1851,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: B2400\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef B4800
	CompareConstant(B4800,0000014,1852,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: B4800\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef B9600
	CompareConstant(B9600,0000015,1853,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: B9600\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef B19200
	CompareConstant(B19200,0000016,1854,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: B19200\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef B38400
	CompareConstant(B38400,0000017,1855,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: B38400\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef CSIZE
	CompareConstant(CSIZE,768,1858,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CSIZE\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef CSIZE
	CompareConstant(CSIZE,768,1858,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CSIZE\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef CSIZE
	CompareConstant(CSIZE,0000060,1858,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CSIZE\n");
cnt++;
#endif

#elif defined __i386__
#ifdef CSIZE
	CompareConstant(CSIZE,0000060,1858,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CSIZE\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef CSIZE
	CompareConstant(CSIZE,48,1858,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CSIZE\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef CSIZE
	CompareConstant(CSIZE,0000060,1858,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CSIZE\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef CSIZE
	CompareConstant(CSIZE,0000060,1858,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CSIZE\n");
cnt++;
#endif

#else
Msg( "No definition for CSIZE (1858, int) in db\n");
#ifdef CSIZE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1858,%d,'""1.3""',NULL);\n", architecture, CSIZE);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef CS5
	CompareConstant(CS5,0000000,1859,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CS5\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef CS6
	CompareConstant(CS6,256,1860,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CS6\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef CS6
	CompareConstant(CS6,256,1860,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CS6\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef CS6
	CompareConstant(CS6,0000020,1860,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CS6\n");
cnt++;
#endif

#elif defined __i386__
#ifdef CS6
	CompareConstant(CS6,0000020,1860,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CS6\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef CS6
	CompareConstant(CS6,16,1860,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CS6\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef CS6
	CompareConstant(CS6,0000020,1860,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CS6\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef CS6
	CompareConstant(CS6,0000020,1860,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CS6\n");
cnt++;
#endif

#else
Msg( "No definition for CS6 (1860, int) in db\n");
#ifdef CS6
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1860,%d,'""1.3""',NULL);\n", architecture, CS6);
#endif
#endif
#if defined __powerpc64__
#ifdef CS7
	CompareConstant(CS7,512,1861,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CS7\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef CS7
	CompareConstant(CS7,512,1861,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CS7\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef CS7
	CompareConstant(CS7,0000040,1861,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CS7\n");
cnt++;
#endif

#elif defined __i386__
#ifdef CS7
	CompareConstant(CS7,0000040,1861,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CS7\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef CS7
	CompareConstant(CS7,32,1861,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CS7\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef CS7
	CompareConstant(CS7,0000040,1861,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CS7\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef CS7
	CompareConstant(CS7,0000040,1861,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CS7\n");
cnt++;
#endif

#else
Msg( "No definition for CS7 (1861, int) in db\n");
#ifdef CS7
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1861,%d,'""1.3""',NULL);\n", architecture, CS7);
#endif
#endif
#if defined __powerpc64__
#ifdef CS8
	CompareConstant(CS8,768,1862,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CS8\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef CS8
	CompareConstant(CS8,768,1862,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CS8\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef CS8
	CompareConstant(CS8,0000060,1862,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CS8\n");
cnt++;
#endif

#elif defined __i386__
#ifdef CS8
	CompareConstant(CS8,0000060,1862,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CS8\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef CS8
	CompareConstant(CS8,48,1862,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CS8\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef CS8
	CompareConstant(CS8,0000060,1862,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CS8\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef CS8
	CompareConstant(CS8,0000060,1862,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CS8\n");
cnt++;
#endif

#else
Msg( "No definition for CS8 (1862, int) in db\n");
#ifdef CS8
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1862,%d,'""1.3""',NULL);\n", architecture, CS8);
#endif
#endif
#if defined __powerpc64__
#ifdef CSTOPB
	CompareConstant(CSTOPB,1024,1863,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CSTOPB\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef CSTOPB
	CompareConstant(CSTOPB,1024,1863,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CSTOPB\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef CSTOPB
	CompareConstant(CSTOPB,0000100,1863,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CSTOPB\n");
cnt++;
#endif

#elif defined __i386__
#ifdef CSTOPB
	CompareConstant(CSTOPB,0000100,1863,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CSTOPB\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef CSTOPB
	CompareConstant(CSTOPB,64,1863,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CSTOPB\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef CSTOPB
	CompareConstant(CSTOPB,0000100,1863,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CSTOPB\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef CSTOPB
	CompareConstant(CSTOPB,0000100,1863,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CSTOPB\n");
cnt++;
#endif

#else
Msg( "No definition for CSTOPB (1863, int) in db\n");
#ifdef CSTOPB
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1863,%d,'""1.3""',NULL);\n", architecture, CSTOPB);
#endif
#endif
#if defined __powerpc64__
#ifdef CREAD
	CompareConstant(CREAD,2048,1864,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CREAD\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef CREAD
	CompareConstant(CREAD,2048,1864,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CREAD\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef CREAD
	CompareConstant(CREAD,0000200,1864,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CREAD\n");
cnt++;
#endif

#elif defined __i386__
#ifdef CREAD
	CompareConstant(CREAD,0000200,1864,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CREAD\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef CREAD
	CompareConstant(CREAD,128,1864,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CREAD\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef CREAD
	CompareConstant(CREAD,0000200,1864,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CREAD\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef CREAD
	CompareConstant(CREAD,0000200,1864,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CREAD\n");
cnt++;
#endif

#else
Msg( "No definition for CREAD (1864, int) in db\n");
#ifdef CREAD
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1864,%d,'""1.3""',NULL);\n", architecture, CREAD);
#endif
#endif
#if defined __powerpc64__
#ifdef PARENB
	CompareConstant(PARENB,4096,1865,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: PARENB\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef PARENB
	CompareConstant(PARENB,4096,1865,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PARENB\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef PARENB
	CompareConstant(PARENB,0000400,1865,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PARENB\n");
cnt++;
#endif

#elif defined __i386__
#ifdef PARENB
	CompareConstant(PARENB,0000400,1865,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: PARENB\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef PARENB
	CompareConstant(PARENB,256,1865,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PARENB\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef PARENB
	CompareConstant(PARENB,0000400,1865,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: PARENB\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef PARENB
	CompareConstant(PARENB,0000400,1865,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PARENB\n");
cnt++;
#endif

#else
Msg( "No definition for PARENB (1865, int) in db\n");
#ifdef PARENB
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1865,%d,'""1.3""',NULL);\n", architecture, PARENB);
#endif
#endif
#if defined __powerpc64__
#ifdef PARODD
	CompareConstant(PARODD,8192,1866,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: PARODD\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef PARODD
	CompareConstant(PARODD,8192,1866,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PARODD\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef PARODD
	CompareConstant(PARODD,0001000,1866,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PARODD\n");
cnt++;
#endif

#elif defined __i386__
#ifdef PARODD
	CompareConstant(PARODD,0001000,1866,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: PARODD\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef PARODD
	CompareConstant(PARODD,512,1866,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PARODD\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef PARODD
	CompareConstant(PARODD,0001000,1866,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: PARODD\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef PARODD
	CompareConstant(PARODD,0001000,1866,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PARODD\n");
cnt++;
#endif

#else
Msg( "No definition for PARODD (1866, int) in db\n");
#ifdef PARODD
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1866,%d,'""1.3""',NULL);\n", architecture, PARODD);
#endif
#endif
#if defined __powerpc64__
#ifdef HUPCL
	CompareConstant(HUPCL,16384,1867,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: HUPCL\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef HUPCL
	CompareConstant(HUPCL,16384,1867,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: HUPCL\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef HUPCL
	CompareConstant(HUPCL,0002000,1867,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: HUPCL\n");
cnt++;
#endif

#elif defined __i386__
#ifdef HUPCL
	CompareConstant(HUPCL,0002000,1867,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: HUPCL\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef HUPCL
	CompareConstant(HUPCL,1024,1867,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: HUPCL\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef HUPCL
	CompareConstant(HUPCL,0002000,1867,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: HUPCL\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef HUPCL
	CompareConstant(HUPCL,0002000,1867,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: HUPCL\n");
cnt++;
#endif

#else
Msg( "No definition for HUPCL (1867, int) in db\n");
#ifdef HUPCL
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1867,%d,'""1.3""',NULL);\n", architecture, HUPCL);
#endif
#endif
#if defined __powerpc64__
#ifdef CLOCAL
	CompareConstant(CLOCAL,32768,1868,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CLOCAL\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef CLOCAL
	CompareConstant(CLOCAL,32768,1868,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CLOCAL\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef CLOCAL
	CompareConstant(CLOCAL,0004000,1868,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CLOCAL\n");
cnt++;
#endif

#elif defined __i386__
#ifdef CLOCAL
	CompareConstant(CLOCAL,0004000,1868,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CLOCAL\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef CLOCAL
	CompareConstant(CLOCAL,2048,1868,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CLOCAL\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef CLOCAL
	CompareConstant(CLOCAL,0004000,1868,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CLOCAL\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef CLOCAL
	CompareConstant(CLOCAL,0004000,1868,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CLOCAL\n");
cnt++;
#endif

#else
Msg( "No definition for CLOCAL (1868, int) in db\n");
#ifdef CLOCAL
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1868,%d,'""1.3""',NULL);\n", architecture, CLOCAL);
#endif
#endif
#if defined __powerpc64__
#ifdef ISIG
	CompareConstant(ISIG,128,1888,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ISIG\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef ISIG
	CompareConstant(ISIG,128,1888,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ISIG\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef ISIG
	CompareConstant(ISIG,0000001,1888,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ISIG\n");
cnt++;
#endif

#elif defined __i386__
#ifdef ISIG
	CompareConstant(ISIG,0000001,1888,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: ISIG\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef ISIG
	CompareConstant(ISIG,1,1888,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ISIG\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef ISIG
	CompareConstant(ISIG,0000001,1888,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ISIG\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef ISIG
	CompareConstant(ISIG,0000001,1888,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ISIG\n");
cnt++;
#endif

#else
Msg( "No definition for ISIG (1888, int) in db\n");
#ifdef ISIG
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1888,%d,'""1.3""',NULL);\n", architecture, ISIG);
#endif
#endif
#if defined __powerpc64__
#ifdef ICANON
	CompareConstant(ICANON,256,1889,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ICANON\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef ICANON
	CompareConstant(ICANON,256,1889,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ICANON\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef ICANON
	CompareConstant(ICANON,0000002,1889,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ICANON\n");
cnt++;
#endif

#elif defined __i386__
#ifdef ICANON
	CompareConstant(ICANON,0000002,1889,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: ICANON\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef ICANON
	CompareConstant(ICANON,2,1889,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ICANON\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef ICANON
	CompareConstant(ICANON,0000002,1889,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ICANON\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef ICANON
	CompareConstant(ICANON,0000002,1889,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ICANON\n");
cnt++;
#endif

#else
Msg( "No definition for ICANON (1889, int) in db\n");
#ifdef ICANON
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1889,%d,'""1.3""',NULL);\n", architecture, ICANON);
#endif
#endif
#if defined __powerpc64__
#ifdef XCASE
	CompareConstant(XCASE,16384,1890,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: XCASE\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef XCASE
	CompareConstant(XCASE,16384,1890,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XCASE\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef XCASE
	CompareConstant(XCASE,0000004,1890,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: XCASE\n");
cnt++;
#endif

#elif defined __i386__
#ifdef XCASE
	CompareConstant(XCASE,0000004,1890,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XCASE\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef XCASE
	CompareConstant(XCASE,4,1890,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: XCASE\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef XCASE
	CompareConstant(XCASE,0000004,1890,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: XCASE\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef XCASE
	CompareConstant(XCASE,0000004,1890,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: XCASE\n");
cnt++;
#endif

#else
Msg( "No definition for XCASE (1890, int) in db\n");
#ifdef XCASE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1890,%d,'""1.3""',NULL);\n", architecture, XCASE);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef ECHO
	CompareConstant(ECHO,0000010,1891,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: ECHO\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef ECHOE
	CompareConstant(ECHOE,2,1892,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ECHOE\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef ECHOE
	CompareConstant(ECHOE,2,1892,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ECHOE\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef ECHOE
	CompareConstant(ECHOE,0000020,1892,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ECHOE\n");
cnt++;
#endif

#elif defined __i386__
#ifdef ECHOE
	CompareConstant(ECHOE,0000020,1892,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: ECHOE\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef ECHOE
	CompareConstant(ECHOE,16,1892,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ECHOE\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef ECHOE
	CompareConstant(ECHOE,0000020,1892,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ECHOE\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef ECHOE
	CompareConstant(ECHOE,0000020,1892,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ECHOE\n");
cnt++;
#endif

#else
Msg( "No definition for ECHOE (1892, int) in db\n");
#ifdef ECHOE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1892,%d,'""1.3""',NULL);\n", architecture, ECHOE);
#endif
#endif
#if defined __powerpc64__
#ifdef ECHOK
	CompareConstant(ECHOK,4,1893,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ECHOK\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef ECHOK
	CompareConstant(ECHOK,4,1893,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ECHOK\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef ECHOK
	CompareConstant(ECHOK,0000040,1893,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ECHOK\n");
cnt++;
#endif

#elif defined __i386__
#ifdef ECHOK
	CompareConstant(ECHOK,0000040,1893,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: ECHOK\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef ECHOK
	CompareConstant(ECHOK,32,1893,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ECHOK\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef ECHOK
	CompareConstant(ECHOK,0000040,1893,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ECHOK\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef ECHOK
	CompareConstant(ECHOK,0000040,1893,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ECHOK\n");
cnt++;
#endif

#else
Msg( "No definition for ECHOK (1893, int) in db\n");
#ifdef ECHOK
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1893,%d,'""1.3""',NULL);\n", architecture, ECHOK);
#endif
#endif
#if defined __powerpc64__
#ifdef ECHONL
	CompareConstant(ECHONL,16,1894,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ECHONL\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef ECHONL
	CompareConstant(ECHONL,16,1894,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ECHONL\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef ECHONL
	CompareConstant(ECHONL,0000100,1894,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ECHONL\n");
cnt++;
#endif

#elif defined __i386__
#ifdef ECHONL
	CompareConstant(ECHONL,0000100,1894,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: ECHONL\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef ECHONL
	CompareConstant(ECHONL,64,1894,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ECHONL\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef ECHONL
	CompareConstant(ECHONL,0000100,1894,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ECHONL\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef ECHONL
	CompareConstant(ECHONL,0000100,1894,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ECHONL\n");
cnt++;
#endif

#else
Msg( "No definition for ECHONL (1894, int) in db\n");
#ifdef ECHONL
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1894,%d,'""1.3""',NULL);\n", architecture, ECHONL);
#endif
#endif
#if defined __powerpc64__
#ifdef NOFLSH
	CompareConstant(NOFLSH,0x80000000,1895,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: NOFLSH\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef NOFLSH
	CompareConstant(NOFLSH,0x80000000,1895,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NOFLSH\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef NOFLSH
	CompareConstant(NOFLSH,0000200,1895,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: NOFLSH\n");
cnt++;
#endif

#elif defined __i386__
#ifdef NOFLSH
	CompareConstant(NOFLSH,0000200,1895,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: NOFLSH\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef NOFLSH
	CompareConstant(NOFLSH,128,1895,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: NOFLSH\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef NOFLSH
	CompareConstant(NOFLSH,0000200,1895,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: NOFLSH\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef NOFLSH
	CompareConstant(NOFLSH,0000200,1895,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: NOFLSH\n");
cnt++;
#endif

#else
Msg( "No definition for NOFLSH (1895, int) in db\n");
#ifdef NOFLSH
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1895,%d,'""1.3""',NULL);\n", architecture, NOFLSH);
#endif
#endif
#if defined __powerpc64__
#ifdef TOSTOP
	CompareConstant(TOSTOP,4194304,1896,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: TOSTOP\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef TOSTOP
	CompareConstant(TOSTOP,4194304,1896,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: TOSTOP\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef TOSTOP
	CompareConstant(TOSTOP,0000400,1896,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: TOSTOP\n");
cnt++;
#endif

#elif defined __i386__
#ifdef TOSTOP
	CompareConstant(TOSTOP,0000400,1896,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: TOSTOP\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef TOSTOP
	CompareConstant(TOSTOP,256,1896,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: TOSTOP\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef TOSTOP
	CompareConstant(TOSTOP,0000400,1896,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: TOSTOP\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef TOSTOP
	CompareConstant(TOSTOP,0000400,1896,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: TOSTOP\n");
cnt++;
#endif

#else
Msg( "No definition for TOSTOP (1896, int) in db\n");
#ifdef TOSTOP
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1896,%d,'""1.3""',NULL);\n", architecture, TOSTOP);
#endif
#endif
#if defined __powerpc64__
#ifdef ECHOCTL
	CompareConstant(ECHOCTL,64,1897,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ECHOCTL\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef ECHOCTL
	CompareConstant(ECHOCTL,64,1897,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ECHOCTL\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef ECHOCTL
	CompareConstant(ECHOCTL,0001000,1897,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ECHOCTL\n");
cnt++;
#endif

#elif defined __i386__
#ifdef ECHOCTL
	CompareConstant(ECHOCTL,0001000,1897,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: ECHOCTL\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef ECHOCTL
	CompareConstant(ECHOCTL,512,1897,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ECHOCTL\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef ECHOCTL
	CompareConstant(ECHOCTL,0001000,1897,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ECHOCTL\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef ECHOCTL
	CompareConstant(ECHOCTL,0001000,1897,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ECHOCTL\n");
cnt++;
#endif

#else
Msg( "No definition for ECHOCTL (1897, int) in db\n");
#ifdef ECHOCTL
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1897,%d,'""1.3""',NULL);\n", architecture, ECHOCTL);
#endif
#endif
#if defined __powerpc64__
#ifdef ECHOPRT
	CompareConstant(ECHOPRT,32,1898,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ECHOPRT\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef ECHOPRT
	CompareConstant(ECHOPRT,32,1898,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ECHOPRT\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef ECHOPRT
	CompareConstant(ECHOPRT,0002000,1898,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ECHOPRT\n");
cnt++;
#endif

#elif defined __i386__
#ifdef ECHOPRT
	CompareConstant(ECHOPRT,0002000,1898,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: ECHOPRT\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef ECHOPRT
	CompareConstant(ECHOPRT,1024,1898,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ECHOPRT\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef ECHOPRT
	CompareConstant(ECHOPRT,0002000,1898,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ECHOPRT\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef ECHOPRT
	CompareConstant(ECHOPRT,0002000,1898,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ECHOPRT\n");
cnt++;
#endif

#else
Msg( "No definition for ECHOPRT (1898, int) in db\n");
#ifdef ECHOPRT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1898,%d,'""1.3""',NULL);\n", architecture, ECHOPRT);
#endif
#endif
#if defined __powerpc64__
#ifdef ECHOKE
	CompareConstant(ECHOKE,1,1899,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ECHOKE\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef ECHOKE
	CompareConstant(ECHOKE,1,1899,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ECHOKE\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef ECHOKE
	CompareConstant(ECHOKE,0004000,1899,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ECHOKE\n");
cnt++;
#endif

#elif defined __i386__
#ifdef ECHOKE
	CompareConstant(ECHOKE,0004000,1899,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: ECHOKE\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef ECHOKE
	CompareConstant(ECHOKE,2048,1899,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ECHOKE\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef ECHOKE
	CompareConstant(ECHOKE,0004000,1899,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ECHOKE\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef ECHOKE
	CompareConstant(ECHOKE,0004000,1899,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ECHOKE\n");
cnt++;
#endif

#else
Msg( "No definition for ECHOKE (1899, int) in db\n");
#ifdef ECHOKE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1899,%d,'""1.3""',NULL);\n", architecture, ECHOKE);
#endif
#endif
#if defined __powerpc64__
#ifdef FLUSHO
	CompareConstant(FLUSHO,8388608,1900,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: FLUSHO\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef FLUSHO
	CompareConstant(FLUSHO,8388608,1900,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FLUSHO\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef FLUSHO
	CompareConstant(FLUSHO,0010000,1900,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: FLUSHO\n");
cnt++;
#endif

#elif defined __i386__
#ifdef FLUSHO
	CompareConstant(FLUSHO,0010000,1900,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: FLUSHO\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef FLUSHO
	CompareConstant(FLUSHO,4096,1900,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: FLUSHO\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef FLUSHO
	CompareConstant(FLUSHO,0010000,1900,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: FLUSHO\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef FLUSHO
	CompareConstant(FLUSHO,0010000,1900,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: FLUSHO\n");
cnt++;
#endif

#else
Msg( "No definition for FLUSHO (1900, int) in db\n");
#ifdef FLUSHO
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1900,%d,'""1.3""',NULL);\n", architecture, FLUSHO);
#endif
#endif
#if defined __powerpc64__
#ifdef PENDIN
	CompareConstant(PENDIN,536870912,1901,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: PENDIN\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef PENDIN
	CompareConstant(PENDIN,536870912,1901,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PENDIN\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef PENDIN
	CompareConstant(PENDIN,0040000,1901,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PENDIN\n");
cnt++;
#endif

#elif defined __i386__
#ifdef PENDIN
	CompareConstant(PENDIN,0040000,1901,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: PENDIN\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef PENDIN
	CompareConstant(PENDIN,16384,1901,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PENDIN\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef PENDIN
	CompareConstant(PENDIN,0040000,1901,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: PENDIN\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef PENDIN
	CompareConstant(PENDIN,0040000,1901,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PENDIN\n");
cnt++;
#endif

#else
Msg( "No definition for PENDIN (1901, int) in db\n");
#ifdef PENDIN
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1901,%d,'""1.3""',NULL);\n", architecture, PENDIN);
#endif
#endif
#if defined __powerpc64__
#ifdef IEXTEN
	CompareConstant(IEXTEN,1024,1902,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IEXTEN\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef IEXTEN
	CompareConstant(IEXTEN,1024,1902,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IEXTEN\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef IEXTEN
	CompareConstant(IEXTEN,0100000,1902,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: IEXTEN\n");
cnt++;
#endif

#elif defined __i386__
#ifdef IEXTEN
	CompareConstant(IEXTEN,0100000,1902,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: IEXTEN\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef IEXTEN
	CompareConstant(IEXTEN,32768,1902,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: IEXTEN\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef IEXTEN
	CompareConstant(IEXTEN,0100000,1902,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IEXTEN\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef IEXTEN
	CompareConstant(IEXTEN,0100000,1902,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: IEXTEN\n");
cnt++;
#endif

#else
Msg( "No definition for IEXTEN (1902, int) in db\n");
#ifdef IEXTEN
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1902,%d,'""1.3""',NULL);\n", architecture, IEXTEN);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef TCOOFF
	CompareConstant(TCOOFF,0,1903,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: TCOOFF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCOON
	CompareConstant(TCOON,1,1904,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: TCOON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCIOFF
	CompareConstant(TCIOFF,2,1905,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: TCIOFF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCION
	CompareConstant(TCION,3,1906,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: TCION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCIFLUSH
	CompareConstant(TCIFLUSH,0,1907,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: TCIFLUSH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCOFLUSH
	CompareConstant(TCOFLUSH,1,1908,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: TCOFLUSH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCIOFLUSH
	CompareConstant(TCIOFLUSH,2,1909,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: TCIOFLUSH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCSANOW
	CompareConstant(TCSANOW,0,1910,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: TCSANOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCSADRAIN
	CompareConstant(TCSADRAIN,1,1911,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: TCSADRAIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCSAFLUSH
	CompareConstant(TCSAFLUSH,2,1912,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: TCSAFLUSH\n");
cnt++;
#endif

#endif

#if defined __i386__
CheckTypeSize(speed_t,4, 9186, 2, 1.0, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(speed_t,4, 9186, 3, 1.3, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(speed_t,4, 9186, 6, 1.2, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(speed_t,4, 9186, 10, 1.3, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(speed_t,4, 9186, 9, 2.0, NULL, 7, NULL)
#elif defined __s390x__
CheckTypeSize(speed_t,4, 9186, 12, 1.3, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(speed_t,4, 9186, 11, 2.0, NULL, 7, NULL)
#else
Msg("Find size of speed_t (9186)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,7,NULL);\n",architecture,9186,0);
#endif

#if defined __i386__
CheckTypeSize(cc_t,1, 10206, 2, 1.2, NULL, 3, NULL)
#elif defined __ia64__
CheckTypeSize(cc_t,1, 10206, 3, 1.3, NULL, 3, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(cc_t,1, 10206, 6, 1.2, NULL, 3, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(cc_t,1, 10206, 10, 1.3, NULL, 3, NULL)
#elif defined __powerpc64__
CheckTypeSize(cc_t,1, 10206, 9, 2.0, NULL, 3, NULL)
#elif defined __s390x__
CheckTypeSize(cc_t,1, 10206, 12, 1.3, NULL, 3, NULL)
#elif defined __x86_64__
CheckTypeSize(cc_t,1, 10206, 11, 2.0, NULL, 3, NULL)
#else
Msg("Find size of cc_t (10206)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,3,NULL);\n",architecture,10206,0);
#endif

#if defined __i386__
CheckTypeSize(tcflag_t,4, 10207, 2, 1.2, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(tcflag_t,4, 10207, 3, 1.3, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(tcflag_t,4, 10207, 6, 1.2, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(tcflag_t,4, 10207, 10, 1.3, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(tcflag_t,4, 10207, 9, 2.0, NULL, 7, NULL)
#elif defined __s390x__
CheckTypeSize(tcflag_t,4, 10207, 12, 1.3, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(tcflag_t,4, 10207, 11, 2.0, NULL, 7, NULL)
#else
Msg("Find size of tcflag_t (10207)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,7,NULL);\n",architecture,10207,0);
#endif

#if defined __i386__
CheckTypeSize(struct termios,60, 9187, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct termios,c_iflag,4,2,34268)
CheckOffset(struct termios,c_iflag,0,2,34268)
CheckMemberSize(struct termios,c_oflag,4,2,34269)
CheckOffset(struct termios,c_oflag,4,2,34269)
CheckMemberSize(struct termios,c_cflag,4,2,34270)
CheckOffset(struct termios,c_cflag,8,2,34270)
CheckMemberSize(struct termios,c_lflag,4,2,34271)
CheckOffset(struct termios,c_lflag,12,2,34271)
CheckMemberSize(struct termios,c_line,1,2,34272)
CheckOffset(struct termios,c_line,16,2,34272)
CheckMemberSize(struct termios,c_cc,32,2,34273)
CheckOffset(struct termios,c_cc,17,2,34273)
CheckMemberSize(struct termios,c_ispeed,4,2,34274)
CheckOffset(struct termios,c_ispeed,52,2,34274)
CheckMemberSize(struct termios,c_ospeed,4,2,34275)
CheckOffset(struct termios,c_ospeed,56,2,34275)
#elif defined __ia64__
CheckTypeSize(struct termios,60, 9187, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct termios,c_oflag,4,3,34269)
CheckOffset(struct termios,c_oflag,4,3,34269)
CheckMemberSize(struct termios,c_cflag,4,3,34270)
CheckOffset(struct termios,c_cflag,8,3,34270)
CheckMemberSize(struct termios,c_lflag,4,3,34271)
CheckOffset(struct termios,c_lflag,12,3,34271)
CheckMemberSize(struct termios,c_line,1,3,34272)
CheckOffset(struct termios,c_line,16,3,34272)
CheckMemberSize(struct termios,c_cc,32,3,34273)
CheckOffset(struct termios,c_cc,17,3,34273)
CheckMemberSize(struct termios,c_ispeed,4,3,34274)
CheckOffset(struct termios,c_ispeed,52,3,34274)
CheckMemberSize(struct termios,c_ospeed,4,3,34275)
CheckOffset(struct termios,c_ospeed,56,3,34275)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct termios,60, 9187, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct termios,c_oflag,4,6,34269)
CheckOffset(struct termios,c_oflag,4,6,34269)
CheckMemberSize(struct termios,c_cflag,4,6,34270)
CheckOffset(struct termios,c_cflag,8,6,34270)
CheckMemberSize(struct termios,c_lflag,4,6,34271)
CheckOffset(struct termios,c_lflag,12,6,34271)
CheckMemberSize(struct termios,c_line,1,6,34272)
CheckOffset(struct termios,c_line,16,6,34272)
CheckMemberSize(struct termios,c_cc,32,6,34273)
CheckOffset(struct termios,c_cc,17,6,34273)
CheckMemberSize(struct termios,c_ispeed,4,6,34274)
CheckOffset(struct termios,c_ispeed,52,6,34274)
CheckMemberSize(struct termios,c_ospeed,4,6,34275)
CheckOffset(struct termios,c_ospeed,56,6,34275)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct termios,60, 9187, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct termios,c_oflag,4,10,34269)
CheckOffset(struct termios,c_oflag,4,10,34269)
CheckMemberSize(struct termios,c_cflag,4,10,34270)
CheckOffset(struct termios,c_cflag,8,10,34270)
CheckMemberSize(struct termios,c_lflag,4,10,34271)
CheckOffset(struct termios,c_lflag,12,10,34271)
CheckMemberSize(struct termios,c_line,1,10,34272)
CheckOffset(struct termios,c_line,16,10,34272)
CheckMemberSize(struct termios,c_cc,32,10,34273)
CheckOffset(struct termios,c_cc,17,10,34273)
CheckMemberSize(struct termios,c_ispeed,4,10,34274)
CheckOffset(struct termios,c_ispeed,52,10,34274)
CheckMemberSize(struct termios,c_ospeed,4,10,34275)
CheckOffset(struct termios,c_ospeed,56,10,34275)
#elif defined __powerpc64__
CheckTypeSize(struct termios,60, 9187, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct termios,c_oflag,4,9,34269)
CheckOffset(struct termios,c_oflag,4,9,34269)
CheckMemberSize(struct termios,c_cflag,4,9,34270)
CheckOffset(struct termios,c_cflag,8,9,34270)
CheckMemberSize(struct termios,c_lflag,4,9,34271)
CheckOffset(struct termios,c_lflag,12,9,34271)
CheckMemberSize(struct termios,c_line,1,9,34272)
CheckOffset(struct termios,c_line,16,9,34272)
CheckMemberSize(struct termios,c_cc,32,9,34273)
CheckOffset(struct termios,c_cc,17,9,34273)
CheckMemberSize(struct termios,c_ispeed,4,9,34274)
CheckOffset(struct termios,c_ispeed,52,9,34274)
CheckMemberSize(struct termios,c_ospeed,4,9,34275)
CheckOffset(struct termios,c_ospeed,56,9,34275)
#elif defined __s390x__
CheckTypeSize(struct termios,60, 9187, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct termios,c_oflag,4,12,34269)
CheckOffset(struct termios,c_oflag,4,12,34269)
CheckMemberSize(struct termios,c_cflag,4,12,34270)
CheckOffset(struct termios,c_cflag,8,12,34270)
CheckMemberSize(struct termios,c_lflag,4,12,34271)
CheckOffset(struct termios,c_lflag,12,12,34271)
CheckMemberSize(struct termios,c_line,1,12,34272)
CheckOffset(struct termios,c_line,16,12,34272)
CheckMemberSize(struct termios,c_cc,32,12,34273)
CheckOffset(struct termios,c_cc,17,12,34273)
CheckMemberSize(struct termios,c_ispeed,4,12,34274)
CheckOffset(struct termios,c_ispeed,52,12,34274)
CheckMemberSize(struct termios,c_ospeed,4,12,34275)
CheckOffset(struct termios,c_ospeed,56,12,34275)
#elif defined __x86_64__
CheckTypeSize(struct termios,60, 9187, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct termios,c_oflag,4,11,34269)
CheckOffset(struct termios,c_oflag,4,11,34269)
CheckMemberSize(struct termios,c_cflag,4,11,34270)
CheckOffset(struct termios,c_cflag,8,11,34270)
CheckMemberSize(struct termios,c_lflag,4,11,34271)
CheckOffset(struct termios,c_lflag,12,11,34271)
CheckMemberSize(struct termios,c_line,1,11,34272)
CheckOffset(struct termios,c_line,16,11,34272)
CheckMemberSize(struct termios,c_cc,32,11,34273)
CheckOffset(struct termios,c_cc,17,11,34273)
CheckMemberSize(struct termios,c_ispeed,4,11,34274)
CheckOffset(struct termios,c_ispeed,52,11,34274)
CheckMemberSize(struct termios,c_ospeed,4,11,34275)
CheckOffset(struct termios,c_ospeed,56,11,34275)
#else
Msg("Find size of termios (9187)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0, NULL);\n",architecture,9187,0);
#endif

extern speed_t cfgetispeed_db(const struct termios *);
CheckInterfacedef(cfgetispeed,cfgetispeed_db);
extern speed_t cfgetospeed_db(const struct termios *);
CheckInterfacedef(cfgetospeed,cfgetospeed_db);
extern void cfmakeraw_db(struct termios *);
CheckInterfacedef(cfmakeraw,cfmakeraw_db);
extern int cfsetispeed_db(struct termios *, speed_t);
CheckInterfacedef(cfsetispeed,cfsetispeed_db);
extern int cfsetospeed_db(struct termios *, speed_t);
CheckInterfacedef(cfsetospeed,cfsetospeed_db);
extern int cfsetspeed_db(struct termios *, speed_t);
CheckInterfacedef(cfsetspeed,cfsetspeed_db);
extern int tcflow_db(int, int);
CheckInterfacedef(tcflow,tcflow_db);
extern int tcflush_db(int, int);
CheckInterfacedef(tcflush,tcflush_db);
extern pid_t tcgetsid_db(int);
CheckInterfacedef(tcgetsid,tcgetsid_db);
extern int tcsendbreak_db(int, int);
CheckInterfacedef(tcsendbreak,tcsendbreak_db);
extern int tcsetattr_db(int, int, const struct termios *);
CheckInterfacedef(tcsetattr,tcsetattr_db);
extern int tcdrain_db(int);
CheckInterfacedef(tcdrain,tcdrain_db);
extern int tcgetattr_db(int, struct termios *);
CheckInterfacedef(tcgetattr,tcgetattr_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in termios.h\n\n",pcnt,cnt);
return cnt;
#endif

}
