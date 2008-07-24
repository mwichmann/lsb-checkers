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

#if defined __s390x__
CheckTypeSize(smRegisterClientMsg,0, 1007964, 12, 1.2, NULL, 1007963, NULL)
#elif defined __x86_64__
CheckTypeSize(smRegisterClientMsg,0, 1007964, 11, 1.2, NULL, 1007963, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smRegisterClientMsg,0, 1007964, 10, 1.2, NULL, 1007963, NULL)
#elif defined __powerpc64__
CheckTypeSize(smRegisterClientMsg,0, 1007964, 9, 1.2, NULL, 1007963, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smRegisterClientMsg,0, 1007964, 6, 1.2, NULL, 1007963, NULL)
#elif defined __ia64__
CheckTypeSize(smRegisterClientMsg,0, 1007964, 3, 1.2, NULL, 1007963, NULL)
#elif defined __i386__
CheckTypeSize(smRegisterClientMsg,0, 1007964, 2, 1.2, NULL, 1007963, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smRegisterClientReplyMsg,0, 1007966, 12, 1.2, NULL, 1007965, NULL)
#elif defined __x86_64__
CheckTypeSize(smRegisterClientReplyMsg,0, 1007966, 11, 1.2, NULL, 1007965, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smRegisterClientReplyMsg,0, 1007966, 10, 1.2, NULL, 1007965, NULL)
#elif defined __powerpc64__
CheckTypeSize(smRegisterClientReplyMsg,0, 1007966, 9, 1.2, NULL, 1007965, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smRegisterClientReplyMsg,0, 1007966, 6, 1.2, NULL, 1007965, NULL)
#elif defined __ia64__
CheckTypeSize(smRegisterClientReplyMsg,0, 1007966, 3, 1.2, NULL, 1007965, NULL)
#elif defined __i386__
CheckTypeSize(smRegisterClientReplyMsg,0, 1007966, 2, 1.2, NULL, 1007965, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smSaveYourselfMsg,0, 1007968, 12, 1.2, NULL, 1007967, NULL)
#elif defined __x86_64__
CheckTypeSize(smSaveYourselfMsg,0, 1007968, 11, 1.2, NULL, 1007967, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smSaveYourselfMsg,0, 1007968, 10, 1.2, NULL, 1007967, NULL)
#elif defined __powerpc64__
CheckTypeSize(smSaveYourselfMsg,0, 1007968, 9, 1.2, NULL, 1007967, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smSaveYourselfMsg,0, 1007968, 6, 1.2, NULL, 1007967, NULL)
#elif defined __ia64__
CheckTypeSize(smSaveYourselfMsg,0, 1007968, 3, 1.2, NULL, 1007967, NULL)
#elif defined __i386__
CheckTypeSize(smSaveYourselfMsg,0, 1007968, 2, 1.2, NULL, 1007967, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smSaveYourselfRequestMsg,0, 1007970, 12, 1.2, NULL, 1007969, NULL)
#elif defined __x86_64__
CheckTypeSize(smSaveYourselfRequestMsg,0, 1007970, 11, 1.2, NULL, 1007969, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smSaveYourselfRequestMsg,0, 1007970, 10, 1.2, NULL, 1007969, NULL)
#elif defined __powerpc64__
CheckTypeSize(smSaveYourselfRequestMsg,0, 1007970, 9, 1.2, NULL, 1007969, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smSaveYourselfRequestMsg,0, 1007970, 6, 1.2, NULL, 1007969, NULL)
#elif defined __ia64__
CheckTypeSize(smSaveYourselfRequestMsg,0, 1007970, 3, 1.2, NULL, 1007969, NULL)
#elif defined __i386__
CheckTypeSize(smSaveYourselfRequestMsg,0, 1007970, 2, 1.2, NULL, 1007969, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smInteractRequestMsg,0, 1007972, 12, 1.2, NULL, 1007971, NULL)
#elif defined __x86_64__
CheckTypeSize(smInteractRequestMsg,0, 1007972, 11, 1.2, NULL, 1007971, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smInteractRequestMsg,0, 1007972, 10, 1.2, NULL, 1007971, NULL)
#elif defined __powerpc64__
CheckTypeSize(smInteractRequestMsg,0, 1007972, 9, 1.2, NULL, 1007971, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smInteractRequestMsg,0, 1007972, 6, 1.2, NULL, 1007971, NULL)
#elif defined __ia64__
CheckTypeSize(smInteractRequestMsg,0, 1007972, 3, 1.2, NULL, 1007971, NULL)
#elif defined __i386__
CheckTypeSize(smInteractRequestMsg,0, 1007972, 2, 1.2, NULL, 1007971, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smInteractMsg,0, 1007974, 12, 1.2, NULL, 1007973, NULL)
#elif defined __x86_64__
CheckTypeSize(smInteractMsg,0, 1007974, 11, 1.2, NULL, 1007973, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smInteractMsg,0, 1007974, 10, 1.2, NULL, 1007973, NULL)
#elif defined __powerpc64__
CheckTypeSize(smInteractMsg,0, 1007974, 9, 1.2, NULL, 1007973, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smInteractMsg,0, 1007974, 6, 1.2, NULL, 1007973, NULL)
#elif defined __ia64__
CheckTypeSize(smInteractMsg,0, 1007974, 3, 1.2, NULL, 1007973, NULL)
#elif defined __i386__
CheckTypeSize(smInteractMsg,0, 1007974, 2, 1.2, NULL, 1007973, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smInteractDoneMsg,0, 1007976, 12, 1.2, NULL, 1007975, NULL)
#elif defined __x86_64__
CheckTypeSize(smInteractDoneMsg,0, 1007976, 11, 1.2, NULL, 1007975, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smInteractDoneMsg,0, 1007976, 10, 1.2, NULL, 1007975, NULL)
#elif defined __powerpc64__
CheckTypeSize(smInteractDoneMsg,0, 1007976, 9, 1.2, NULL, 1007975, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smInteractDoneMsg,0, 1007976, 6, 1.2, NULL, 1007975, NULL)
#elif defined __ia64__
CheckTypeSize(smInteractDoneMsg,0, 1007976, 3, 1.2, NULL, 1007975, NULL)
#elif defined __i386__
CheckTypeSize(smInteractDoneMsg,0, 1007976, 2, 1.2, NULL, 1007975, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smSaveYourselfDoneMsg,0, 1007978, 12, 1.2, NULL, 1007977, NULL)
#elif defined __x86_64__
CheckTypeSize(smSaveYourselfDoneMsg,0, 1007978, 11, 1.2, NULL, 1007977, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smSaveYourselfDoneMsg,0, 1007978, 10, 1.2, NULL, 1007977, NULL)
#elif defined __powerpc64__
CheckTypeSize(smSaveYourselfDoneMsg,0, 1007978, 9, 1.2, NULL, 1007977, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smSaveYourselfDoneMsg,0, 1007978, 6, 1.2, NULL, 1007977, NULL)
#elif defined __ia64__
CheckTypeSize(smSaveYourselfDoneMsg,0, 1007978, 3, 1.2, NULL, 1007977, NULL)
#elif defined __i386__
CheckTypeSize(smSaveYourselfDoneMsg,0, 1007978, 2, 1.2, NULL, 1007977, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smDieMsg,0, 1007980, 12, 1.2, NULL, 1007979, NULL)
#elif defined __x86_64__
CheckTypeSize(smDieMsg,0, 1007980, 11, 1.2, NULL, 1007979, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smDieMsg,0, 1007980, 10, 1.2, NULL, 1007979, NULL)
#elif defined __powerpc64__
CheckTypeSize(smDieMsg,0, 1007980, 9, 1.2, NULL, 1007979, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smDieMsg,0, 1007980, 6, 1.2, NULL, 1007979, NULL)
#elif defined __ia64__
CheckTypeSize(smDieMsg,0, 1007980, 3, 1.2, NULL, 1007979, NULL)
#elif defined __i386__
CheckTypeSize(smDieMsg,0, 1007980, 2, 1.2, NULL, 1007979, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smShutdownCancelledMsg,0, 1007982, 12, 1.2, NULL, 1007981, NULL)
#elif defined __x86_64__
CheckTypeSize(smShutdownCancelledMsg,0, 1007982, 11, 1.2, NULL, 1007981, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smShutdownCancelledMsg,0, 1007982, 10, 1.2, NULL, 1007981, NULL)
#elif defined __powerpc64__
CheckTypeSize(smShutdownCancelledMsg,0, 1007982, 9, 1.2, NULL, 1007981, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smShutdownCancelledMsg,0, 1007982, 6, 1.2, NULL, 1007981, NULL)
#elif defined __ia64__
CheckTypeSize(smShutdownCancelledMsg,0, 1007982, 3, 1.2, NULL, 1007981, NULL)
#elif defined __i386__
CheckTypeSize(smShutdownCancelledMsg,0, 1007982, 2, 1.2, NULL, 1007981, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smCloseConnectionMsg,0, 1007984, 12, 1.2, NULL, 1007983, NULL)
#elif defined __x86_64__
CheckTypeSize(smCloseConnectionMsg,0, 1007984, 11, 1.2, NULL, 1007983, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smCloseConnectionMsg,0, 1007984, 10, 1.2, NULL, 1007983, NULL)
#elif defined __powerpc64__
CheckTypeSize(smCloseConnectionMsg,0, 1007984, 9, 1.2, NULL, 1007983, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smCloseConnectionMsg,0, 1007984, 6, 1.2, NULL, 1007983, NULL)
#elif defined __ia64__
CheckTypeSize(smCloseConnectionMsg,0, 1007984, 3, 1.2, NULL, 1007983, NULL)
#elif defined __i386__
CheckTypeSize(smCloseConnectionMsg,0, 1007984, 2, 1.2, NULL, 1007983, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smSetPropertiesMsg,0, 1007986, 12, 1.2, NULL, 1007985, NULL)
#elif defined __x86_64__
CheckTypeSize(smSetPropertiesMsg,0, 1007986, 11, 1.2, NULL, 1007985, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smSetPropertiesMsg,0, 1007986, 10, 1.2, NULL, 1007985, NULL)
#elif defined __powerpc64__
CheckTypeSize(smSetPropertiesMsg,0, 1007986, 9, 1.2, NULL, 1007985, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smSetPropertiesMsg,0, 1007986, 6, 1.2, NULL, 1007985, NULL)
#elif defined __ia64__
CheckTypeSize(smSetPropertiesMsg,0, 1007986, 3, 1.2, NULL, 1007985, NULL)
#elif defined __i386__
CheckTypeSize(smSetPropertiesMsg,0, 1007986, 2, 1.2, NULL, 1007985, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smDeletePropertiesMsg,0, 1007988, 12, 1.2, NULL, 1007987, NULL)
#elif defined __x86_64__
CheckTypeSize(smDeletePropertiesMsg,0, 1007988, 11, 1.2, NULL, 1007987, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smDeletePropertiesMsg,0, 1007988, 10, 1.2, NULL, 1007987, NULL)
#elif defined __powerpc64__
CheckTypeSize(smDeletePropertiesMsg,0, 1007988, 9, 1.2, NULL, 1007987, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smDeletePropertiesMsg,0, 1007988, 6, 1.2, NULL, 1007987, NULL)
#elif defined __ia64__
CheckTypeSize(smDeletePropertiesMsg,0, 1007988, 3, 1.2, NULL, 1007987, NULL)
#elif defined __i386__
CheckTypeSize(smDeletePropertiesMsg,0, 1007988, 2, 1.2, NULL, 1007987, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smGetPropertiesMsg,0, 1007990, 12, 1.2, NULL, 1007989, NULL)
#elif defined __x86_64__
CheckTypeSize(smGetPropertiesMsg,0, 1007990, 11, 1.2, NULL, 1007989, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smGetPropertiesMsg,0, 1007990, 10, 1.2, NULL, 1007989, NULL)
#elif defined __powerpc64__
CheckTypeSize(smGetPropertiesMsg,0, 1007990, 9, 1.2, NULL, 1007989, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smGetPropertiesMsg,0, 1007990, 6, 1.2, NULL, 1007989, NULL)
#elif defined __ia64__
CheckTypeSize(smGetPropertiesMsg,0, 1007990, 3, 1.2, NULL, 1007989, NULL)
#elif defined __i386__
CheckTypeSize(smGetPropertiesMsg,0, 1007990, 2, 1.2, NULL, 1007989, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smPropertiesReplyMsg,0, 1007992, 12, 1.2, NULL, 1007991, NULL)
#elif defined __x86_64__
CheckTypeSize(smPropertiesReplyMsg,0, 1007992, 11, 1.2, NULL, 1007991, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smPropertiesReplyMsg,0, 1007992, 10, 1.2, NULL, 1007991, NULL)
#elif defined __powerpc64__
CheckTypeSize(smPropertiesReplyMsg,0, 1007992, 9, 1.2, NULL, 1007991, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smPropertiesReplyMsg,0, 1007992, 6, 1.2, NULL, 1007991, NULL)
#elif defined __ia64__
CheckTypeSize(smPropertiesReplyMsg,0, 1007992, 3, 1.2, NULL, 1007991, NULL)
#elif defined __i386__
CheckTypeSize(smPropertiesReplyMsg,0, 1007992, 2, 1.2, NULL, 1007991, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smSaveYourselfPhase2RequestMsg,0, 1007994, 12, 1.2, NULL, 1007993, NULL)
#elif defined __x86_64__
CheckTypeSize(smSaveYourselfPhase2RequestMsg,0, 1007994, 11, 1.2, NULL, 1007993, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smSaveYourselfPhase2RequestMsg,0, 1007994, 10, 1.2, NULL, 1007993, NULL)
#elif defined __powerpc64__
CheckTypeSize(smSaveYourselfPhase2RequestMsg,0, 1007994, 9, 1.2, NULL, 1007993, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smSaveYourselfPhase2RequestMsg,0, 1007994, 6, 1.2, NULL, 1007993, NULL)
#elif defined __ia64__
CheckTypeSize(smSaveYourselfPhase2RequestMsg,0, 1007994, 3, 1.2, NULL, 1007993, NULL)
#elif defined __i386__
CheckTypeSize(smSaveYourselfPhase2RequestMsg,0, 1007994, 2, 1.2, NULL, 1007993, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smSaveYourselfPhase2Msg,0, 1007996, 12, 1.2, NULL, 1007995, NULL)
#elif defined __x86_64__
CheckTypeSize(smSaveYourselfPhase2Msg,0, 1007996, 11, 1.2, NULL, 1007995, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smSaveYourselfPhase2Msg,0, 1007996, 10, 1.2, NULL, 1007995, NULL)
#elif defined __powerpc64__
CheckTypeSize(smSaveYourselfPhase2Msg,0, 1007996, 9, 1.2, NULL, 1007995, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smSaveYourselfPhase2Msg,0, 1007996, 6, 1.2, NULL, 1007995, NULL)
#elif defined __ia64__
CheckTypeSize(smSaveYourselfPhase2Msg,0, 1007996, 3, 1.2, NULL, 1007995, NULL)
#elif defined __i386__
CheckTypeSize(smSaveYourselfPhase2Msg,0, 1007996, 2, 1.2, NULL, 1007995, NULL)
#endif

#if defined __s390x__
CheckTypeSize(smSaveCompleteMsg,0, 1007998, 12, 1.2, NULL, 1007997, NULL)
#elif defined __x86_64__
CheckTypeSize(smSaveCompleteMsg,0, 1007998, 11, 1.2, NULL, 1007997, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(smSaveCompleteMsg,0, 1007998, 10, 1.2, NULL, 1007997, NULL)
#elif defined __powerpc64__
CheckTypeSize(smSaveCompleteMsg,0, 1007998, 9, 1.2, NULL, 1007997, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(smSaveCompleteMsg,0, 1007998, 6, 1.2, NULL, 1007997, NULL)
#elif defined __ia64__
CheckTypeSize(smSaveCompleteMsg,0, 1007998, 3, 1.2, NULL, 1007997, NULL)
#elif defined __i386__
CheckTypeSize(smSaveCompleteMsg,0, 1007998, 2, 1.2, NULL, 1007997, NULL)
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
