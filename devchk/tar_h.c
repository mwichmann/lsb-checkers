/*
 * Test of tar.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "tar.h"



int tar_h()
{
int cnt=0;
#ifdef TOEXEC
CompareConstant(TOEXEC,00001)
#else
Msg( "Warning: Constant not found: TOEXEC\n");
#endif
#ifdef TOWRITE
CompareConstant(TOWRITE,00002)
#else
Msg( "Warning: Constant not found: TOWRITE\n");
#endif
#ifdef TOREAD
CompareConstant(TOREAD,00004)
#else
Msg( "Warning: Constant not found: TOREAD\n");
#endif
#ifdef TGEXEC
CompareConstant(TGEXEC,00010)
#else
Msg( "Warning: Constant not found: TGEXEC\n");
#endif
#ifdef TGWRITE
CompareConstant(TGWRITE,00020)
#else
Msg( "Warning: Constant not found: TGWRITE\n");
#endif
#ifdef TGREAD
CompareConstant(TGREAD,00040)
#else
Msg( "Warning: Constant not found: TGREAD\n");
#endif
#ifdef TUEXEC
CompareConstant(TUEXEC,00100)
#else
Msg( "Warning: Constant not found: TUEXEC\n");
#endif
#ifdef TUWRITE
CompareConstant(TUWRITE,00200)
#else
Msg( "Warning: Constant not found: TUWRITE\n");
#endif
#ifdef TUREAD
CompareConstant(TUREAD,00400)
#else
Msg( "Warning: Constant not found: TUREAD\n");
#endif
#ifdef TSVTX
CompareConstant(TSVTX,01000)
#else
Msg( "Warning: Constant not found: TSVTX\n");
#endif
#ifdef TSGID
CompareConstant(TSGID,02000)
#else
Msg( "Warning: Constant not found: TSGID\n");
#endif
#ifdef TSUID
CompareConstant(TSUID,04000)
#else
Msg( "Warning: Constant not found: TSUID\n");
#endif
#ifdef CONTTYPE
CompareConstant(CONTTYPE,'7')
#else
Msg( "Warning: Constant not found: CONTTYPE\n");
#endif
#ifdef FIFOTYPE
CompareConstant(FIFOTYPE,'6')
#else
Msg( "Warning: Constant not found: FIFOTYPE\n");
#endif
#ifdef DIRTYPE
CompareConstant(DIRTYPE,'5')
#else
Msg( "Warning: Constant not found: DIRTYPE\n");
#endif
#ifdef BLKTYPE
CompareConstant(BLKTYPE,'4')
#else
Msg( "Warning: Constant not found: BLKTYPE\n");
#endif
#ifdef CHRTYPE
CompareConstant(CHRTYPE,'3')
#else
Msg( "Warning: Constant not found: CHRTYPE\n");
#endif
#ifdef SYMTYPE
CompareConstant(SYMTYPE,'2')
#else
Msg( "Warning: Constant not found: SYMTYPE\n");
#endif
#ifdef LNKTYPE
CompareConstant(LNKTYPE,'1')
#else
Msg( "Warning: Constant not found: LNKTYPE\n");
#endif
#ifdef AREGTYPE
CompareConstant(AREGTYPE,'\0')
#else
Msg( "Warning: Constant not found: AREGTYPE\n");
#endif
#ifdef REGTYPE
CompareConstant(REGTYPE,'0')
#else
Msg( "Warning: Constant not found: REGTYPE\n");
#endif
#ifdef TVERSLEN
CompareConstant(TVERSLEN,2)
#else
Msg( "Warning: Constant not found: TVERSLEN\n");
#endif
#ifdef TVERSION
CompareConstant(TVERSION,"00")
#else
Msg( "Warning: Constant not found: TVERSION\n");
#endif
#ifdef TMAGLEN
CompareConstant(TMAGLEN,6)
#else
Msg( "Warning: Constant not found: TMAGLEN\n");
#endif
#ifdef TMAGIC
CompareConstant(TMAGIC,"ustar")
#else
Msg( "Warning: Constant not found: TMAGIC\n");
#endif
printf("%d tests in tar.h\n",cnt);
return cnt;
}
