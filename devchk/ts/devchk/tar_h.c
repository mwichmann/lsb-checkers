/*
 * Test of tar.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "tar.h"



#ifdef TET_TEST
void tar_h()
{
#else
int tar_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in tar.h\n");
#endif

#if _LSB_DEFAULT_ARCH
#ifdef TSUID
	CompareConstant(TSUID,04000,1750,architecture)
#else
Msg( "Error: Constant not found: TSUID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TSGID
	CompareConstant(TSGID,02000,1751,architecture)
#else
Msg( "Error: Constant not found: TSGID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TSVTX
	CompareConstant(TSVTX,01000,1752,architecture)
#else
Msg( "Error: Constant not found: TSVTX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TUREAD
	CompareConstant(TUREAD,00400,1753,architecture)
#else
Msg( "Error: Constant not found: TUREAD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TUWRITE
	CompareConstant(TUWRITE,00200,1754,architecture)
#else
Msg( "Error: Constant not found: TUWRITE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TUEXEC
	CompareConstant(TUEXEC,00100,1755,architecture)
#else
Msg( "Error: Constant not found: TUEXEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TGREAD
	CompareConstant(TGREAD,00040,1756,architecture)
#else
Msg( "Error: Constant not found: TGREAD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TGWRITE
	CompareConstant(TGWRITE,00020,1757,architecture)
#else
Msg( "Error: Constant not found: TGWRITE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TGEXEC
	CompareConstant(TGEXEC,00010,1758,architecture)
#else
Msg( "Error: Constant not found: TGEXEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TOREAD
	CompareConstant(TOREAD,00004,1759,architecture)
#else
Msg( "Error: Constant not found: TOREAD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TOWRITE
	CompareConstant(TOWRITE,00002,1760,architecture)
#else
Msg( "Error: Constant not found: TOWRITE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TOEXEC
	CompareConstant(TOEXEC,00001,1761,architecture)
#else
Msg( "Error: Constant not found: TOEXEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef REGTYPE
	CompareConstant(REGTYPE,'0',1762,architecture)
#else
Msg( "Error: Constant not found: REGTYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AREGTYPE
	CompareConstant(AREGTYPE,'\0',1763,architecture)
#else
Msg( "Error: Constant not found: AREGTYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LNKTYPE
	CompareConstant(LNKTYPE,'1',1764,architecture)
#else
Msg( "Error: Constant not found: LNKTYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SYMTYPE
	CompareConstant(SYMTYPE,'2',1765,architecture)
#else
Msg( "Error: Constant not found: SYMTYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CHRTYPE
	CompareConstant(CHRTYPE,'3',1766,architecture)
#else
Msg( "Error: Constant not found: CHRTYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BLKTYPE
	CompareConstant(BLKTYPE,'4',1767,architecture)
#else
Msg( "Error: Constant not found: BLKTYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DIRTYPE
	CompareConstant(DIRTYPE,'5',1768,architecture)
#else
Msg( "Error: Constant not found: DIRTYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FIFOTYPE
	CompareConstant(FIFOTYPE,'6',1769,architecture)
#else
Msg( "Error: Constant not found: FIFOTYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CONTTYPE
	CompareConstant(CONTTYPE,'7',1770,architecture)
#else
Msg( "Error: Constant not found: CONTTYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TMAGIC
	CompareStringConstant(TMAGIC,"ustar")
#else
Msg( "Error: Constant not found: TMAGIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TMAGLEN
	CompareConstant(TMAGLEN,6,1772,architecture)
#else
Msg( "Error: Constant not found: TMAGLEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TVERSION
	CompareStringConstant(TVERSION,"00")
#else
Msg( "Error: Constant not found: TVERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TVERSLEN
	CompareConstant(TVERSLEN,2,1774,architecture)
#else
Msg( "Error: Constant not found: TVERSLEN\n");
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
printf("%d tests in tar.h\n",cnt);
return cnt;
#endif

}
