/*
 * Test of X11/SM/SMproto.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/SM/SMproto.h"



#ifdef TET_TEST
void X11_SM_SMproto_h()
{
#else
int X11_SM_SMproto_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/SM/SMproto.h\n");
#endif

printf("Checking data structures in X11/SM/SMproto.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef sz_smSaveYourselfPhase2Msg
	CompareConstant(sz_smSaveYourselfPhase2Msg,8,13725,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_smSaveYourselfPhase2Msg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_smSaveCompleteMsg
	CompareConstant(sz_smSaveCompleteMsg,8,13726,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_smSaveCompleteMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_smCloseConnectionMsg
	CompareConstant(sz_smCloseConnectionMsg,8,13727,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_smCloseConnectionMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_smRegisterClientReplyMsg
	CompareConstant(sz_smRegisterClientReplyMsg,8,13728,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_smRegisterClientReplyMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_smRegisterClientMsg
	CompareConstant(sz_smRegisterClientMsg,8,13729,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_smRegisterClientMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_smInteractMsg
	CompareConstant(sz_smInteractMsg,8,13730,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_smInteractMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_smInteractRequestMsg
	CompareConstant(sz_smInteractRequestMsg,8,13731,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_smInteractRequestMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_smSetPropertiesMsg
	CompareConstant(sz_smSetPropertiesMsg,8,13732,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_smSetPropertiesMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_smSaveYourselfDoneMsg
	CompareConstant(sz_smSaveYourselfDoneMsg,8,13733,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_smSaveYourselfDoneMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_smSaveYourselfMsg
	CompareConstant(sz_smSaveYourselfMsg,16,13734,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_smSaveYourselfMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_smGetPropertiesMsg
	CompareConstant(sz_smGetPropertiesMsg,8,13735,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_smGetPropertiesMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_smDieMsg
	CompareConstant(sz_smDieMsg,8,13736,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_smDieMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_smInteractDoneMsg
	CompareConstant(sz_smInteractDoneMsg,8,13737,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_smInteractDoneMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_smShutdownCancelledMsg
	CompareConstant(sz_smShutdownCancelledMsg,8,13738,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_smShutdownCancelledMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_smPropertiesReplyMsg
	CompareConstant(sz_smPropertiesReplyMsg,8,13739,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_smPropertiesReplyMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_smDeletePropertiesMsg
	CompareConstant(sz_smDeletePropertiesMsg,8,13740,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_smDeletePropertiesMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_smSaveYourselfRequestMsg
	CompareConstant(sz_smSaveYourselfRequestMsg,16,13741,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_smSaveYourselfRequestMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_smSaveYourselfPhase2RequestMsg
	CompareConstant(sz_smSaveYourselfPhase2RequestMsg,8,13742,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_smSaveYourselfPhase2RequestMsg\n");
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
printf("%d tests passed out of %d tests in X11/SM/SMproto.h\n\n",pcnt,cnt);
return cnt;
#endif

}
