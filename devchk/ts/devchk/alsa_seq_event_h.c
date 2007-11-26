/*
 * Test of alsa/seq_event.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "alsa/seq_event.h"



#ifdef TET_TEST
void alsa_seq_event_h()
{
#else
int alsa_seq_event_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in alsa/seq_event.h\n");
#endif

printf("Checking data structures in alsa/seq_event.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_TIME_STAMP_TICK
	CompareConstant(SND_SEQ_TIME_STAMP_TICK,(0<<0),11441,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_TIME_STAMP_TICK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_TIME_STAMP_REAL
	CompareConstant(SND_SEQ_TIME_STAMP_REAL,(1<<0),11442,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_TIME_STAMP_REAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_TIME_STAMP_MASK
	CompareConstant(SND_SEQ_TIME_STAMP_MASK,(1<<0),11443,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_TIME_STAMP_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_TIME_MODE_ABS
	CompareConstant(SND_SEQ_TIME_MODE_ABS,(0<<1),11444,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_TIME_MODE_ABS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_TIME_MODE_REL
	CompareConstant(SND_SEQ_TIME_MODE_REL,(1<<1),11445,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_TIME_MODE_REL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_TIME_MODE_MASK
	CompareConstant(SND_SEQ_TIME_MODE_MASK,(1<<1),11446,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_TIME_MODE_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_EVENT_LENGTH_FIXED
	CompareConstant(SND_SEQ_EVENT_LENGTH_FIXED,(0<<2),11447,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_EVENT_LENGTH_FIXED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_EVENT_LENGTH_VARIABLE
	CompareConstant(SND_SEQ_EVENT_LENGTH_VARIABLE,(1<<2),11448,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_EVENT_LENGTH_VARIABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_EVENT_LENGTH_VARUSR
	CompareConstant(SND_SEQ_EVENT_LENGTH_VARUSR,(2<<2),11449,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_EVENT_LENGTH_VARUSR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_EVENT_LENGTH_MASK
	CompareConstant(SND_SEQ_EVENT_LENGTH_MASK,(3<<2),11450,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_EVENT_LENGTH_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PRIORITY_NORMAL
	CompareConstant(SND_SEQ_PRIORITY_NORMAL,(0<<4),11451,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PRIORITY_NORMAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PRIORITY_HIGH
	CompareConstant(SND_SEQ_PRIORITY_HIGH,(1<<4),11452,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PRIORITY_HIGH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PRIORITY_MASK
	CompareConstant(SND_SEQ_PRIORITY_MASK,(1<<4),11453,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PRIORITY_MASK\n");
cnt++;
#endif

#endif

#if defined __x86_64__
CheckTypeSize(snd_seq_addr_t,2, 27711, 11, 3.2, NULL, 27709, NULL)
#else
Msg("Find size of snd_seq_addr_t (27711)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27709,NULL);\n",architecture,27711,0);
#endif

#if defined __x86_64__
CheckTypeSize(struct snd_seq_real_time,8, 27746, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct snd_seq_real_time,tv_nsec,4,11,75332)
CheckOffset(struct snd_seq_real_time,tv_nsec,4,11,75332)
#else
Msg("Find size of snd_seq_real_time (27746)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,27746,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_seq_event_t,28, 27749, 11, 3.2, NULL, 27746, NULL)
#else
Msg("Find size of snd_seq_event_t (27749)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27746,NULL);\n",architecture,27749,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_seq_event_type_t,1, 27750, 11, 3.2, NULL, 3, NULL)
#else
Msg("Find size of snd_seq_event_type_t (27750)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,3,NULL);\n",architecture,27750,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_seq_instr_cluster_t,4, 27755, 11, 3.2, NULL, 7, NULL)
#else
Msg("Find size of snd_seq_instr_cluster_t (27755)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,7,NULL);\n",architecture,27755,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_seq_instr_t,12, 27756, 11, 3.2, NULL, 27754, NULL)
#else
Msg("Find size of snd_seq_instr_t (27756)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27754,NULL);\n",architecture,27756,0);
#endif

#if defined __x86_64__
CheckTypeSize(union snd_seq_timestamp,8, 27787, 11, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_timestamp on x86-64\n");
CheckOffset(union snd_seq_timestamp,tick,0,11,75337)
CheckOffset(union snd_seq_timestamp,time,0,11,75338)
#else
Msg("Find size of snd_seq_timestamp (27787)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,27787,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_seq_real_time_t,8, 27789, 11, 3.2, NULL, 27787, NULL)
#else
Msg("Find size of snd_seq_real_time_t (27789)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27787,NULL);\n",architecture,27789,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_seq_tick_time_t,4, 27804, 11, 3.2, NULL, 7, NULL)
#else
Msg("Find size of snd_seq_tick_time_t (27804)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,7,NULL);\n",architecture,27804,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_seq_timestamp_t,8, 27806, 11, 3.2, NULL, 27805, NULL)
#else
Msg("Find size of snd_seq_timestamp_t (27806)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27805, NULL);\n",architecture,27806,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/seq_event.h\n\n",pcnt,cnt);
return cnt;
#endif

}
