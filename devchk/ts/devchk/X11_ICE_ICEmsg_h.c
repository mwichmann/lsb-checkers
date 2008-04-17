/*
 * Test of X11/ICE/ICEmsg.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/ICE/ICEmsg.h"



#ifdef TET_TEST
void X11_ICE_ICEmsg_h()
{
#else
int X11_ICE_ICEmsg_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/ICE/ICEmsg.h\n");
#endif

printf("Checking data structures in X11/ICE/ICEmsg.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for IceReadSimpleMessage(_iceConn,_msgType,_pMsg) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IceGetHeader(_iceConn,_major,_minor,_headerSize,_msgType,_pMsg) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IceGetHeaderExtra(_iceConn,_major,_minor,_headerSize,_extra,_msgType,_pMsg,_pData) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IceValidIO(_iceConn) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IceSendData(_iceConn,_bytes,_data) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IceWriteData16(_iceConn,_bytes,_data) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IceDisposeCompleteMessage(_iceConn,_pData) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IceWriteData(_iceConn,_bytes,_data) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IceReadData16(_iceConn,_swap,_bytes,_pData) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IceReadCompleteMessage(_iceConn,_headerSize,_msgType,_pMsg,_pData) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IceReadData(_iceConn,_bytes,_pData) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IceWritePad(_iceConn,_bytes) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IceReadPad(_iceConn,_bytes) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IceErrorHeader(_iceConn,_offendingMajorOpcode,_offendingMinorOpcode,_offendingSequenceNum,_severity,_errorClass,_dataLength) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IceReadMessageHeader(_iceConn,_headerSize,_msgType,_pMsg) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IceWriteData32(_iceConn,_bytes,_data) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IceSimpleMessage(_iceConn,_major,_minor) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IceReadData32(_iceConn,_swap,_bytes,_pData) */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/ICE/ICEmsg.h\n\n",pcnt,cnt);
return cnt;
#endif

}
