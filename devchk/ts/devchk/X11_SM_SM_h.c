/*
 * Test of X11/SM/SM.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "X11/SM/SM.h"



#ifdef TET_TEST
void X11_SM_SM_h()
{
#else
int X11_SM_SM_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/SM/SM.h\n");
#endif

printf("Checking data structures in X11/SM/SM.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SM_SaveYourselfPhase2
	CompareConstant(SM_SaveYourselfPhase2,17,13678,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SM_SaveYourselfPhase2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmSaveLocal
	CompareConstant(SmSaveLocal,1,13679,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmSaveLocal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmCurrentDirectory
	CompareStringConstant(SmCurrentDirectory,"CurrentDirectory",13680,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmCurrentDirectory\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmSaveGlobal
	CompareConstant(SmSaveGlobal,0,13681,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmSaveGlobal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_SaveYourselfRequest
	CompareConstant(SM_SaveYourselfRequest,4,13682,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SM_SaveYourselfRequest\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmARRAY8
	CompareStringConstant(SmARRAY8,"ARRAY8",13683,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmARRAY8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmDialogNormal
	CompareConstant(SmDialogNormal,1,13684,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmDialogNormal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmRestartStyleHint
	CompareStringConstant(SmRestartStyleHint,"RestartStyleHint",13685,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmRestartStyleHint\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_InteractRequest
	CompareConstant(SM_InteractRequest,5,13686,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SM_InteractRequest\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmDialogError
	CompareConstant(SmDialogError,0,13687,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmDialogError\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmInteractStyleAny
	CompareConstant(SmInteractStyleAny,2,13688,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmInteractStyleAny\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_Die
	CompareConstant(SM_Die,9,13689,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SM_Die\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_PropertiesReply
	CompareConstant(SM_PropertiesReply,15,13690,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SM_PropertiesReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmDiscardCommand
	CompareStringConstant(SmDiscardCommand,"DiscardCommand",13691,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmDiscardCommand\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_Error
	CompareConstant(SM_Error,0,13692,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SM_Error\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_DeleteProperties
	CompareConstant(SM_DeleteProperties,13,13693,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SM_DeleteProperties\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmResignCommand
	CompareStringConstant(SmResignCommand,"ResignCommand",13694,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmResignCommand\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmRestartNever
	CompareConstant(SmRestartNever,3,13695,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmRestartNever\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmInteractStyleErrors
	CompareConstant(SmInteractStyleErrors,1,13696,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmInteractStyleErrors\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmProgram
	CompareStringConstant(SmProgram,"Program",13697,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmProgram\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmProcessID
	CompareStringConstant(SmProcessID,"ProcessID",13698,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmProcessID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmProtoMajor
	CompareConstant(SmProtoMajor,1,13699,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmProtoMajor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmRestartCommand
	CompareStringConstant(SmRestartCommand,"RestartCommand",13700,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmRestartCommand\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmRestartIfRunning
	CompareConstant(SmRestartIfRunning,0,13701,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmRestartIfRunning\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmRestartImmediately
	CompareConstant(SmRestartImmediately,2,13702,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmRestartImmediately\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmCloneCommand
	CompareStringConstant(SmCloneCommand,"CloneCommand",13703,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmCloneCommand\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_GetProperties
	CompareConstant(SM_GetProperties,14,13704,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SM_GetProperties\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_Interact
	CompareConstant(SM_Interact,6,13705,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SM_Interact\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_SaveComplete
	CompareConstant(SM_SaveComplete,18,13706,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SM_SaveComplete\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_SaveYourselfDone
	CompareConstant(SM_SaveYourselfDone,8,13707,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SM_SaveYourselfDone\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmRestartAnyway
	CompareConstant(SmRestartAnyway,1,13708,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmRestartAnyway\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_InteractDone
	CompareConstant(SM_InteractDone,7,13709,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SM_InteractDone\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmSaveBoth
	CompareConstant(SmSaveBoth,2,13710,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmSaveBoth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmEnvironment
	CompareStringConstant(SmEnvironment,"Environment",13711,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmEnvironment\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_SaveYourselfPhase2Request
	CompareConstant(SM_SaveYourselfPhase2Request,16,13712,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SM_SaveYourselfPhase2Request\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmLISTofARRAY8
	CompareStringConstant(SmLISTofARRAY8,"LISTofARRAY8",13713,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmLISTofARRAY8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmShutdownCommand
	CompareStringConstant(SmShutdownCommand,"ShutdownCommand",13714,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmShutdownCommand\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmCARD8
	CompareStringConstant(SmCARD8,"CARD8",13715,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmCARD8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_RegisterClientReply
	CompareConstant(SM_RegisterClientReply,2,13716,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SM_RegisterClientReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_SaveYourself
	CompareConstant(SM_SaveYourself,3,13717,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SM_SaveYourself\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_CloseConnection
	CompareConstant(SM_CloseConnection,11,13718,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SM_CloseConnection\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_RegisterClient
	CompareConstant(SM_RegisterClient,1,13719,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SM_RegisterClient\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_SetProperties
	CompareConstant(SM_SetProperties,12,13720,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SM_SetProperties\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmProtoMinor
	CompareConstant(SmProtoMinor,0,13721,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmProtoMinor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_ShutdownCancelled
	CompareConstant(SM_ShutdownCancelled,10,13722,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SM_ShutdownCancelled\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmInteractStyleNone
	CompareConstant(SmInteractStyleNone,0,13723,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmInteractStyleNone\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SmUserID
	CompareStringConstant(SmUserID,"UserID",13724,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SmUserID\n");
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
printf("%d tests passed out of %d tests in X11/SM/SM.h\n\n",pcnt,cnt);
return cnt;
#endif

}
