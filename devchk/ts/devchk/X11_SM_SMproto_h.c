/*
 * Test of X11/SM/SMproto.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

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

#if defined __s390x__
CheckTypeSize(smRegisterClientMsg,0, 35876, 12, 1.2, NULL, 35875, NULL)
#elif defined __x86_64__
CheckTypeSize(smRegisterClientMsg,0, 35876, 11, 1.2, NULL, 35875, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smRegisterClientMsg,0, 35876, 10, 1.2, NULL, 35875, NULL)
#elif defined __powerpc64__
CheckTypeSize(smRegisterClientMsg,0, 35876, 9, 1.2, NULL, 35875, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smRegisterClientMsg,0, 35876, 6, 1.2, NULL, 35875, NULL)
#elif defined __ia64__
CheckTypeSize(smRegisterClientMsg,0, 35876, 3, 1.2, NULL, 35875, NULL)
#elif defined __i386__
CheckTypeSize(smRegisterClientMsg,0, 35876, 2, 1.2, NULL, 35875, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smRegisterClientReplyMsg,0, 35878, 12, 1.2, NULL, 35877, NULL)
#elif defined __x86_64__
CheckTypeSize(smRegisterClientReplyMsg,0, 35878, 11, 1.2, NULL, 35877, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smRegisterClientReplyMsg,0, 35878, 10, 1.2, NULL, 35877, NULL)
#elif defined __powerpc64__
CheckTypeSize(smRegisterClientReplyMsg,0, 35878, 9, 1.2, NULL, 35877, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smRegisterClientReplyMsg,0, 35878, 6, 1.2, NULL, 35877, NULL)
#elif defined __ia64__
CheckTypeSize(smRegisterClientReplyMsg,0, 35878, 3, 1.2, NULL, 35877, NULL)
#elif defined __i386__
CheckTypeSize(smRegisterClientReplyMsg,0, 35878, 2, 1.2, NULL, 35877, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smSaveYourselfMsg,0, 35880, 12, 1.2, NULL, 35879, NULL)
#elif defined __x86_64__
CheckTypeSize(smSaveYourselfMsg,0, 35880, 11, 1.2, NULL, 35879, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smSaveYourselfMsg,0, 35880, 10, 1.2, NULL, 35879, NULL)
#elif defined __powerpc64__
CheckTypeSize(smSaveYourselfMsg,0, 35880, 9, 1.2, NULL, 35879, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smSaveYourselfMsg,0, 35880, 6, 1.2, NULL, 35879, NULL)
#elif defined __ia64__
CheckTypeSize(smSaveYourselfMsg,0, 35880, 3, 1.2, NULL, 35879, NULL)
#elif defined __i386__
CheckTypeSize(smSaveYourselfMsg,0, 35880, 2, 1.2, NULL, 35879, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smSaveYourselfRequestMsg,0, 35882, 12, 1.2, NULL, 35881, NULL)
#elif defined __x86_64__
CheckTypeSize(smSaveYourselfRequestMsg,0, 35882, 11, 1.2, NULL, 35881, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smSaveYourselfRequestMsg,0, 35882, 10, 1.2, NULL, 35881, NULL)
#elif defined __powerpc64__
CheckTypeSize(smSaveYourselfRequestMsg,0, 35882, 9, 1.2, NULL, 35881, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smSaveYourselfRequestMsg,0, 35882, 6, 1.2, NULL, 35881, NULL)
#elif defined __ia64__
CheckTypeSize(smSaveYourselfRequestMsg,0, 35882, 3, 1.2, NULL, 35881, NULL)
#elif defined __i386__
CheckTypeSize(smSaveYourselfRequestMsg,0, 35882, 2, 1.2, NULL, 35881, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smInteractRequestMsg,0, 35884, 12, 1.2, NULL, 35883, NULL)
#elif defined __x86_64__
CheckTypeSize(smInteractRequestMsg,0, 35884, 11, 1.2, NULL, 35883, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smInteractRequestMsg,0, 35884, 10, 1.2, NULL, 35883, NULL)
#elif defined __powerpc64__
CheckTypeSize(smInteractRequestMsg,0, 35884, 9, 1.2, NULL, 35883, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smInteractRequestMsg,0, 35884, 6, 1.2, NULL, 35883, NULL)
#elif defined __ia64__
CheckTypeSize(smInteractRequestMsg,0, 35884, 3, 1.2, NULL, 35883, NULL)
#elif defined __i386__
CheckTypeSize(smInteractRequestMsg,0, 35884, 2, 1.2, NULL, 35883, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smInteractMsg,0, 35886, 12, 1.2, NULL, 35885, NULL)
#elif defined __x86_64__
CheckTypeSize(smInteractMsg,0, 35886, 11, 1.2, NULL, 35885, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smInteractMsg,0, 35886, 10, 1.2, NULL, 35885, NULL)
#elif defined __powerpc64__
CheckTypeSize(smInteractMsg,0, 35886, 9, 1.2, NULL, 35885, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smInteractMsg,0, 35886, 6, 1.2, NULL, 35885, NULL)
#elif defined __ia64__
CheckTypeSize(smInteractMsg,0, 35886, 3, 1.2, NULL, 35885, NULL)
#elif defined __i386__
CheckTypeSize(smInteractMsg,0, 35886, 2, 1.2, NULL, 35885, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smInteractDoneMsg,0, 35888, 12, 1.2, NULL, 35887, NULL)
#elif defined __x86_64__
CheckTypeSize(smInteractDoneMsg,0, 35888, 11, 1.2, NULL, 35887, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smInteractDoneMsg,0, 35888, 10, 1.2, NULL, 35887, NULL)
#elif defined __powerpc64__
CheckTypeSize(smInteractDoneMsg,0, 35888, 9, 1.2, NULL, 35887, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smInteractDoneMsg,0, 35888, 6, 1.2, NULL, 35887, NULL)
#elif defined __ia64__
CheckTypeSize(smInteractDoneMsg,0, 35888, 3, 1.2, NULL, 35887, NULL)
#elif defined __i386__
CheckTypeSize(smInteractDoneMsg,0, 35888, 2, 1.2, NULL, 35887, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smSaveYourselfDoneMsg,0, 35890, 12, 1.2, NULL, 35889, NULL)
#elif defined __x86_64__
CheckTypeSize(smSaveYourselfDoneMsg,0, 35890, 11, 1.2, NULL, 35889, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smSaveYourselfDoneMsg,0, 35890, 10, 1.2, NULL, 35889, NULL)
#elif defined __powerpc64__
CheckTypeSize(smSaveYourselfDoneMsg,0, 35890, 9, 1.2, NULL, 35889, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smSaveYourselfDoneMsg,0, 35890, 6, 1.2, NULL, 35889, NULL)
#elif defined __ia64__
CheckTypeSize(smSaveYourselfDoneMsg,0, 35890, 3, 1.2, NULL, 35889, NULL)
#elif defined __i386__
CheckTypeSize(smSaveYourselfDoneMsg,0, 35890, 2, 1.2, NULL, 35889, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smDieMsg,0, 35892, 12, 1.2, NULL, 35891, NULL)
#elif defined __x86_64__
CheckTypeSize(smDieMsg,0, 35892, 11, 1.2, NULL, 35891, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smDieMsg,0, 35892, 10, 1.2, NULL, 35891, NULL)
#elif defined __powerpc64__
CheckTypeSize(smDieMsg,0, 35892, 9, 1.2, NULL, 35891, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smDieMsg,0, 35892, 6, 1.2, NULL, 35891, NULL)
#elif defined __ia64__
CheckTypeSize(smDieMsg,0, 35892, 3, 1.2, NULL, 35891, NULL)
#elif defined __i386__
CheckTypeSize(smDieMsg,0, 35892, 2, 1.2, NULL, 35891, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smShutdownCancelledMsg,0, 35894, 12, 1.2, NULL, 35893, NULL)
#elif defined __x86_64__
CheckTypeSize(smShutdownCancelledMsg,0, 35894, 11, 1.2, NULL, 35893, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smShutdownCancelledMsg,0, 35894, 10, 1.2, NULL, 35893, NULL)
#elif defined __powerpc64__
CheckTypeSize(smShutdownCancelledMsg,0, 35894, 9, 1.2, NULL, 35893, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smShutdownCancelledMsg,0, 35894, 6, 1.2, NULL, 35893, NULL)
#elif defined __ia64__
CheckTypeSize(smShutdownCancelledMsg,0, 35894, 3, 1.2, NULL, 35893, NULL)
#elif defined __i386__
CheckTypeSize(smShutdownCancelledMsg,0, 35894, 2, 1.2, NULL, 35893, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smCloseConnectionMsg,0, 35896, 12, 1.2, NULL, 35895, NULL)
#elif defined __x86_64__
CheckTypeSize(smCloseConnectionMsg,0, 35896, 11, 1.2, NULL, 35895, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smCloseConnectionMsg,0, 35896, 10, 1.2, NULL, 35895, NULL)
#elif defined __powerpc64__
CheckTypeSize(smCloseConnectionMsg,0, 35896, 9, 1.2, NULL, 35895, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smCloseConnectionMsg,0, 35896, 6, 1.2, NULL, 35895, NULL)
#elif defined __ia64__
CheckTypeSize(smCloseConnectionMsg,0, 35896, 3, 1.2, NULL, 35895, NULL)
#elif defined __i386__
CheckTypeSize(smCloseConnectionMsg,0, 35896, 2, 1.2, NULL, 35895, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smSetPropertiesMsg,0, 35898, 12, 1.2, NULL, 35897, NULL)
#elif defined __x86_64__
CheckTypeSize(smSetPropertiesMsg,0, 35898, 11, 1.2, NULL, 35897, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smSetPropertiesMsg,0, 35898, 10, 1.2, NULL, 35897, NULL)
#elif defined __powerpc64__
CheckTypeSize(smSetPropertiesMsg,0, 35898, 9, 1.2, NULL, 35897, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smSetPropertiesMsg,0, 35898, 6, 1.2, NULL, 35897, NULL)
#elif defined __ia64__
CheckTypeSize(smSetPropertiesMsg,0, 35898, 3, 1.2, NULL, 35897, NULL)
#elif defined __i386__
CheckTypeSize(smSetPropertiesMsg,0, 35898, 2, 1.2, NULL, 35897, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smDeletePropertiesMsg,0, 35900, 12, 1.2, NULL, 35899, NULL)
#elif defined __x86_64__
CheckTypeSize(smDeletePropertiesMsg,0, 35900, 11, 1.2, NULL, 35899, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smDeletePropertiesMsg,0, 35900, 10, 1.2, NULL, 35899, NULL)
#elif defined __powerpc64__
CheckTypeSize(smDeletePropertiesMsg,0, 35900, 9, 1.2, NULL, 35899, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smDeletePropertiesMsg,0, 35900, 6, 1.2, NULL, 35899, NULL)
#elif defined __ia64__
CheckTypeSize(smDeletePropertiesMsg,0, 35900, 3, 1.2, NULL, 35899, NULL)
#elif defined __i386__
CheckTypeSize(smDeletePropertiesMsg,0, 35900, 2, 1.2, NULL, 35899, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smGetPropertiesMsg,0, 35902, 12, 1.2, NULL, 35901, NULL)
#elif defined __x86_64__
CheckTypeSize(smGetPropertiesMsg,0, 35902, 11, 1.2, NULL, 35901, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smGetPropertiesMsg,0, 35902, 10, 1.2, NULL, 35901, NULL)
#elif defined __powerpc64__
CheckTypeSize(smGetPropertiesMsg,0, 35902, 9, 1.2, NULL, 35901, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smGetPropertiesMsg,0, 35902, 6, 1.2, NULL, 35901, NULL)
#elif defined __ia64__
CheckTypeSize(smGetPropertiesMsg,0, 35902, 3, 1.2, NULL, 35901, NULL)
#elif defined __i386__
CheckTypeSize(smGetPropertiesMsg,0, 35902, 2, 1.2, NULL, 35901, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smPropertiesReplyMsg,0, 35904, 12, 1.2, NULL, 35903, NULL)
#elif defined __x86_64__
CheckTypeSize(smPropertiesReplyMsg,0, 35904, 11, 1.2, NULL, 35903, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smPropertiesReplyMsg,0, 35904, 10, 1.2, NULL, 35903, NULL)
#elif defined __powerpc64__
CheckTypeSize(smPropertiesReplyMsg,0, 35904, 9, 1.2, NULL, 35903, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smPropertiesReplyMsg,0, 35904, 6, 1.2, NULL, 35903, NULL)
#elif defined __ia64__
CheckTypeSize(smPropertiesReplyMsg,0, 35904, 3, 1.2, NULL, 35903, NULL)
#elif defined __i386__
CheckTypeSize(smPropertiesReplyMsg,0, 35904, 2, 1.2, NULL, 35903, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smSaveYourselfPhase2RequestMsg,0, 35906, 12, 1.2, NULL, 35905, NULL)
#elif defined __x86_64__
CheckTypeSize(smSaveYourselfPhase2RequestMsg,0, 35906, 11, 1.2, NULL, 35905, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smSaveYourselfPhase2RequestMsg,0, 35906, 10, 1.2, NULL, 35905, NULL)
#elif defined __powerpc64__
CheckTypeSize(smSaveYourselfPhase2RequestMsg,0, 35906, 9, 1.2, NULL, 35905, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smSaveYourselfPhase2RequestMsg,0, 35906, 6, 1.2, NULL, 35905, NULL)
#elif defined __ia64__
CheckTypeSize(smSaveYourselfPhase2RequestMsg,0, 35906, 3, 1.2, NULL, 35905, NULL)
#elif defined __i386__
CheckTypeSize(smSaveYourselfPhase2RequestMsg,0, 35906, 2, 1.2, NULL, 35905, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smSaveYourselfPhase2Msg,0, 35908, 12, 1.2, NULL, 35907, NULL)
#elif defined __x86_64__
CheckTypeSize(smSaveYourselfPhase2Msg,0, 35908, 11, 1.2, NULL, 35907, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smSaveYourselfPhase2Msg,0, 35908, 10, 1.2, NULL, 35907, NULL)
#elif defined __powerpc64__
CheckTypeSize(smSaveYourselfPhase2Msg,0, 35908, 9, 1.2, NULL, 35907, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smSaveYourselfPhase2Msg,0, 35908, 6, 1.2, NULL, 35907, NULL)
#elif defined __ia64__
CheckTypeSize(smSaveYourselfPhase2Msg,0, 35908, 3, 1.2, NULL, 35907, NULL)
#elif defined __i386__
CheckTypeSize(smSaveYourselfPhase2Msg,0, 35908, 2, 1.2, NULL, 35907, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smSaveCompleteMsg,0, 35910, 12, 1.2, NULL, 35909, NULL)
#elif defined __x86_64__
CheckTypeSize(smSaveCompleteMsg,0, 35910, 11, 1.2, NULL, 35909, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smSaveCompleteMsg,0, 35910, 10, 1.2, NULL, 35909, NULL)
#elif defined __powerpc64__
CheckTypeSize(smSaveCompleteMsg,0, 35910, 9, 1.2, NULL, 35909, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smSaveCompleteMsg,0, 35910, 6, 1.2, NULL, 35909, NULL)
#elif defined __ia64__
CheckTypeSize(smSaveCompleteMsg,0, 35910, 3, 1.2, NULL, 35909, NULL)
#elif defined __i386__
CheckTypeSize(smSaveCompleteMsg,0, 35910, 2, 1.2, NULL, 35909, NULL)
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
