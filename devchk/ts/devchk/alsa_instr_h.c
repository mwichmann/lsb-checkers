/*
 * Test of alsa/instr.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <alsa/global.h>
#include <alsa/output.h>
#include <alsa/input.h>
#include <alsa/conf.h>
#include <alsa/hwdep.h>
#include <alsa/pcm.h>
#include <alsa/rawmidi.h>
#include <alsa/control.h>
#include <alsa/seq_event.h>
#include "alsa/instr.h"



#ifdef TET_TEST
void alsa_instr_h()
{
#else
int alsa_instr_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in alsa/instr.h\n");
#endif

printf("Checking data structures in alsa/instr.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_ATYPE_DATA
	CompareConstant(SND_SEQ_INSTR_ATYPE_DATA,0,11376,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_ATYPE_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_ATYPE_ALIAS
	CompareConstant(SND_SEQ_INSTR_ATYPE_ALIAS,1,11377,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_ATYPE_ALIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_ID_DLS1
	CompareConstant(SND_SEQ_INSTR_ID_DLS1,"DLS1",11378,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_ID_DLS1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_ID_DLS2
	CompareConstant(SND_SEQ_INSTR_ID_DLS2,"DLS2",11379,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_ID_DLS2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for SND_SEQ_INSTR_ID_SIMPLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SND_SEQ_INSTR_ID_SOUNDFONT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SND_SEQ_INSTR_ID_GUS_PATCH */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SND_SEQ_INSTR_ID_INTERWAVE */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_ID_OPL2_3
	CompareConstant(SND_SEQ_INSTR_ID_OPL2_3,"OPL2/3 FM",11384,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_ID_OPL2_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_ID_OPL4
	CompareConstant(SND_SEQ_INSTR_ID_OPL4,"OPL4",11385,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_ID_OPL4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_TYPE0_DLS1
	CompareConstant(SND_SEQ_INSTR_TYPE0_DLS1,(1<<0),11386,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_TYPE0_DLS1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_TYPE0_DLS2
	CompareConstant(SND_SEQ_INSTR_TYPE0_DLS2,(1<<1),11387,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_TYPE0_DLS2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_TYPE1_SIMPLE
	CompareConstant(SND_SEQ_INSTR_TYPE1_SIMPLE,(1<<0),11388,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_TYPE1_SIMPLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_TYPE1_SOUNDFONT
	CompareConstant(SND_SEQ_INSTR_TYPE1_SOUNDFONT,(1<<1),11389,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_TYPE1_SOUNDFONT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_TYPE1_GUS_PATCH
	CompareConstant(SND_SEQ_INSTR_TYPE1_GUS_PATCH,(1<<2),11390,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_TYPE1_GUS_PATCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_TYPE1_INTERWAVE
	CompareConstant(SND_SEQ_INSTR_TYPE1_INTERWAVE,(1<<3),11391,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_TYPE1_INTERWAVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_TYPE2_OPL2_3
	CompareConstant(SND_SEQ_INSTR_TYPE2_OPL2_3,(1<<0),11392,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_TYPE2_OPL2_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_TYPE2_OPL4
	CompareConstant(SND_SEQ_INSTR_TYPE2_OPL4,(1<<1),11393,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_TYPE2_OPL4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_PUT_CMD_CREATE
	CompareConstant(SND_SEQ_INSTR_PUT_CMD_CREATE,0,11394,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_PUT_CMD_CREATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_PUT_CMD_REPLACE
	CompareConstant(SND_SEQ_INSTR_PUT_CMD_REPLACE,1,11395,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_PUT_CMD_REPLACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_PUT_CMD_MODIFY
	CompareConstant(SND_SEQ_INSTR_PUT_CMD_MODIFY,2,11396,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_PUT_CMD_MODIFY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_PUT_CMD_ADD
	CompareConstant(SND_SEQ_INSTR_PUT_CMD_ADD,3,11397,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_PUT_CMD_ADD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_PUT_CMD_REMOVE
	CompareConstant(SND_SEQ_INSTR_PUT_CMD_REMOVE,4,11398,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_PUT_CMD_REMOVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_GET_CMD_FULL
	CompareConstant(SND_SEQ_INSTR_GET_CMD_FULL,0,11399,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_GET_CMD_FULL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_GET_CMD_PARTIAL
	CompareConstant(SND_SEQ_INSTR_GET_CMD_PARTIAL,1,11400,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_GET_CMD_PARTIAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_QUERY_FOLLOW_ALIAS
	CompareConstant(SND_SEQ_INSTR_QUERY_FOLLOW_ALIAS,(1<<0),11401,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_QUERY_FOLLOW_ALIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_FREE_CMD_ALL
	CompareConstant(SND_SEQ_INSTR_FREE_CMD_ALL,0,11402,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_FREE_CMD_ALL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_FREE_CMD_PRIVATE
	CompareConstant(SND_SEQ_INSTR_FREE_CMD_PRIVATE,1,11403,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_FREE_CMD_PRIVATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_FREE_CMD_CLUSTER
	CompareConstant(SND_SEQ_INSTR_FREE_CMD_CLUSTER,2,11404,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_FREE_CMD_CLUSTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_INSTR_FREE_CMD_SINGLE
	CompareConstant(SND_SEQ_INSTR_FREE_CMD_SINGLE,3,11405,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_INSTR_FREE_CMD_SINGLE\n");
cnt++;
#endif

#endif

#if defined __x86_64__
CheckTypeSize(snd_instr_fm_t,1, 27444, 11, 3.2, NULL, 11, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_instr_fm_t,0, 27444, 10, 3.2, NULL, 11, NULL)
#elif defined __s390x__
CheckTypeSize(snd_instr_fm_t,0, 27444, 12, 3.2, NULL, 11, NULL)
#elif defined __i386__
CheckTypeSize(snd_instr_fm_t,0, 27444, 2, 3.2, NULL, 11, NULL)
#elif defined __ia64__
CheckTypeSize(snd_instr_fm_t,0, 27444, 3, 3.2, NULL, 11, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_instr_fm_t,0, 27444, 6, 3.2, NULL, 11, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_instr_fm_t,0, 27444, 9, 3.2, NULL, 11, NULL)
#else
Msg("Find size of snd_instr_fm_t (27444)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,11,NULL);\n",architecture,27444,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_instr_iwffff_t,1, 27450, 11, 3.2, NULL, 11, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_instr_iwffff_t,0, 27450, 10, 3.2, NULL, 11, NULL)
#elif defined __s390x__
CheckTypeSize(snd_instr_iwffff_t,0, 27450, 12, 3.2, NULL, 11, NULL)
#elif defined __i386__
CheckTypeSize(snd_instr_iwffff_t,0, 27450, 2, 3.2, NULL, 11, NULL)
#elif defined __ia64__
CheckTypeSize(snd_instr_iwffff_t,0, 27450, 3, 3.2, NULL, 11, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_instr_iwffff_t,0, 27450, 6, 3.2, NULL, 11, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_instr_iwffff_t,0, 27450, 9, 3.2, NULL, 11, NULL)
#else
Msg("Find size of snd_instr_iwffff_t (27450)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,11,NULL);\n",architecture,27450,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_instr_simple_t,1, 27453, 11, 3.2, NULL, 11, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_instr_simple_t,0, 27453, 10, 3.2, NULL, 11, NULL)
#elif defined __s390x__
CheckTypeSize(snd_instr_simple_t,0, 27453, 12, 3.2, NULL, 11, NULL)
#elif defined __i386__
CheckTypeSize(snd_instr_simple_t,0, 27453, 2, 3.2, NULL, 11, NULL)
#elif defined __ia64__
CheckTypeSize(snd_instr_simple_t,0, 27453, 3, 3.2, NULL, 11, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_instr_simple_t,0, 27453, 6, 3.2, NULL, 11, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_instr_simple_t,0, 27453, 9, 3.2, NULL, 11, NULL)
#else
Msg("Find size of snd_instr_simple_t (27453)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,11,NULL);\n",architecture,27453,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/instr.h\n\n",pcnt,cnt);
return cnt;
#endif

}
