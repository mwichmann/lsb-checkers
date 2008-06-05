/*
 * Test of alsa/mixer_abst.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <alsa/global.h>
#include <alsa/output.h>
#include <alsa/input.h>
#include <alsa/conf.h>
#include <alsa/hwdep.h>
#include <alsa/pcm.h>
#include <alsa/rawmidi.h>
#include <alsa/control.h>
#include <alsa/mixer.h>
#include "alsa/mixer_abst.h"



#ifdef TET_TEST
void alsa_mixer_abst_h()
{
#else
int alsa_mixer_abst_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in alsa/mixer_abst.h\n");
#endif

printf("Checking data structures in alsa/mixer_abst.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SM_CAP_GVOLUME
	CompareConstant(SM_CAP_GVOLUME,(1<<1),11232,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SM_CAP_GVOLUME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_CAP_GSWITCH
	CompareConstant(SM_CAP_GSWITCH,(1<<2),11233,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SM_CAP_GSWITCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_CAP_PVOLUME
	CompareConstant(SM_CAP_PVOLUME,(1<<3),11234,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SM_CAP_PVOLUME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_CAP_PVOLUME_JOIN
	CompareConstant(SM_CAP_PVOLUME_JOIN,(1<<4),11235,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SM_CAP_PVOLUME_JOIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_CAP_PSWITCH
	CompareConstant(SM_CAP_PSWITCH,(1<<5),11236,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SM_CAP_PSWITCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_CAP_PSWITCH_JOIN
	CompareConstant(SM_CAP_PSWITCH_JOIN,(1<<6),11237,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SM_CAP_PSWITCH_JOIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_CAP_CVOLUME
	CompareConstant(SM_CAP_CVOLUME,(1<<7),11238,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SM_CAP_CVOLUME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_CAP_CVOLUME_JOIN
	CompareConstant(SM_CAP_CVOLUME_JOIN,(1<<8),11239,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SM_CAP_CVOLUME_JOIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_CAP_CSWITCH
	CompareConstant(SM_CAP_CSWITCH,(1<<9),11240,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SM_CAP_CSWITCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_CAP_CSWITCH_JOIN
	CompareConstant(SM_CAP_CSWITCH_JOIN,(1<<10),11241,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SM_CAP_CSWITCH_JOIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_CAP_CSWITCH_EXCL
	CompareConstant(SM_CAP_CSWITCH_EXCL,(1<<11),11242,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SM_CAP_CSWITCH_EXCL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_CAP_PENUM
	CompareConstant(SM_CAP_PENUM,(1<<12),11243,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SM_CAP_PENUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_CAP_CENUM
	CompareConstant(SM_CAP_CENUM,(1<<13),11244,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SM_CAP_CENUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_OPS_IS_ACTIVE
	CompareConstant(SM_OPS_IS_ACTIVE,0,11245,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SM_OPS_IS_ACTIVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_OPS_IS_MONO
	CompareConstant(SM_OPS_IS_MONO,1,11246,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SM_OPS_IS_MONO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_OPS_IS_CHANNEL
	CompareConstant(SM_OPS_IS_CHANNEL,2,11247,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SM_OPS_IS_CHANNEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_OPS_IS_ENUMERATED
	CompareConstant(SM_OPS_IS_ENUMERATED,3,11248,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SM_OPS_IS_ENUMERATED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SM_OPS_IS_ENUMCNT
	CompareConstant(SM_OPS_IS_ENUMCNT,4,11249,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SM_OPS_IS_ENUMCNT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for sm_selem(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for sm_selem_ops(x) */
#endif

#if defined __s390x__
CheckTypeSize(sm_class_basic_t,32, 27328, 12, 3.2, NULL, 26322, NULL)
#elif defined __x86_64__
CheckTypeSize(sm_class_basic_t,32, 27328, 11, 3.2, NULL, 26322, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(sm_class_basic_t,16, 27328, 10, 3.2, NULL, 26322, NULL)
#elif defined __powerpc64__
CheckTypeSize(sm_class_basic_t,32, 27328, 9, 3.2, NULL, 26322, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(sm_class_basic_t,16, 27328, 6, 3.2, NULL, 26322, NULL)
#elif defined __ia64__
CheckTypeSize(sm_class_basic_t,32, 27328, 3, 3.2, NULL, 26322, NULL)
#elif defined __i386__
CheckTypeSize(sm_class_basic_t,16, 27328, 2, 3.2, NULL, 26322, NULL)
#else
Msg("Find size of sm_class_basic_t (27328)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26322, NULL);\n",architecture,27328,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/mixer_abst.h\n\n",pcnt,cnt);
return cnt;
#endif

}
