/*
 * Test of tar.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef TSUID
	CompareConstant(TSUID,04000)
#else
Msg( "Error: Constant not found: TSUID\n");
cnt++;
#endif

#ifdef TSGID
	CompareConstant(TSGID,02000)
#else
Msg( "Error: Constant not found: TSGID\n");
cnt++;
#endif

#ifdef TSVTX
	CompareConstant(TSVTX,01000)
#else
Msg( "Error: Constant not found: TSVTX\n");
cnt++;
#endif

#ifdef TUREAD
	CompareConstant(TUREAD,00400)
#else
Msg( "Error: Constant not found: TUREAD\n");
cnt++;
#endif

#ifdef TUWRITE
	CompareConstant(TUWRITE,00200)
#else
Msg( "Error: Constant not found: TUWRITE\n");
cnt++;
#endif

#ifdef TUEXEC
	CompareConstant(TUEXEC,00100)
#else
Msg( "Error: Constant not found: TUEXEC\n");
cnt++;
#endif

#ifdef TGREAD
	CompareConstant(TGREAD,00040)
#else
Msg( "Error: Constant not found: TGREAD\n");
cnt++;
#endif

#ifdef TGWRITE
	CompareConstant(TGWRITE,00020)
#else
Msg( "Error: Constant not found: TGWRITE\n");
cnt++;
#endif

#ifdef TGEXEC
	CompareConstant(TGEXEC,00010)
#else
Msg( "Error: Constant not found: TGEXEC\n");
cnt++;
#endif

#ifdef TOREAD
	CompareConstant(TOREAD,00004)
#else
Msg( "Error: Constant not found: TOREAD\n");
cnt++;
#endif

#ifdef TOWRITE
	CompareConstant(TOWRITE,00002)
#else
Msg( "Error: Constant not found: TOWRITE\n");
cnt++;
#endif

#ifdef TOEXEC
	CompareConstant(TOEXEC,00001)
#else
Msg( "Error: Constant not found: TOEXEC\n");
cnt++;
#endif

#ifdef REGTYPE
	CompareConstant(REGTYPE,'0')
#else
Msg( "Error: Constant not found: REGTYPE\n");
cnt++;
#endif

#ifdef AREGTYPE
	CompareConstant(AREGTYPE,'\0')
#else
Msg( "Error: Constant not found: AREGTYPE\n");
cnt++;
#endif

#ifdef LNKTYPE
	CompareConstant(LNKTYPE,'1')
#else
Msg( "Error: Constant not found: LNKTYPE\n");
cnt++;
#endif

#ifdef SYMTYPE
	CompareConstant(SYMTYPE,'2')
#else
Msg( "Error: Constant not found: SYMTYPE\n");
cnt++;
#endif

#ifdef CHRTYPE
	CompareConstant(CHRTYPE,'3')
#else
Msg( "Error: Constant not found: CHRTYPE\n");
cnt++;
#endif

#ifdef BLKTYPE
	CompareConstant(BLKTYPE,'4')
#else
Msg( "Error: Constant not found: BLKTYPE\n");
cnt++;
#endif

#ifdef DIRTYPE
	CompareConstant(DIRTYPE,'5')
#else
Msg( "Error: Constant not found: DIRTYPE\n");
cnt++;
#endif

#ifdef FIFOTYPE
	CompareConstant(FIFOTYPE,'6')
#else
Msg( "Error: Constant not found: FIFOTYPE\n");
cnt++;
#endif

#ifdef CONTTYPE
	CompareConstant(CONTTYPE,'7')
#else
Msg( "Error: Constant not found: CONTTYPE\n");
cnt++;
#endif

#ifdef TMAGLEN
	CompareConstant(TMAGLEN,6)
#else
Msg( "Error: Constant not found: TMAGLEN\n");
cnt++;
#endif

#ifdef TVERSLEN
	CompareConstant(TVERSLEN,2)
#else
Msg( "Error: Constant not found: TVERSLEN\n");
cnt++;
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
