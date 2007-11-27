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
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_seq_addr_t,0, 27711, 10, 3.2, NULL, 27709, NULL)
#elif defined __s390x__
CheckTypeSize(snd_seq_addr_t,0, 27711, 12, 3.2, NULL, 27709, NULL)
#elif defined __i386__
CheckTypeSize(snd_seq_addr_t,0, 27711, 2, 3.2, NULL, 27709, NULL)
#elif defined __ia64__
CheckTypeSize(snd_seq_addr_t,0, 27711, 3, 3.2, NULL, 27709, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_seq_addr_t,0, 27711, 6, 3.2, NULL, 27709, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_seq_addr_t,0, 27711, 9, 3.2, NULL, 27709, NULL)
#else
Msg("Find size of snd_seq_addr_t (27711)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27709,NULL);\n",architecture,27711,0);
#endif

#if defined __x86_64__
CheckTypeSize(struct snd_seq_real_time,8, 27746, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct snd_seq_real_time,tv_nsec,4,11,75332)
CheckOffset(struct snd_seq_real_time,tv_nsec,4,11,75332)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct snd_seq_real_time,0, 27746, 10, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_real_time on S390\n");
CheckOffset(struct snd_seq_real_time,tv_sec,0,10,75331)
CheckOffset(struct snd_seq_real_time,tv_nsec,0,10,75332)
#elif defined __s390x__
CheckTypeSize(struct snd_seq_real_time,0, 27746, 12, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_real_time on S390X\n");
CheckOffset(struct snd_seq_real_time,tv_sec,0,12,75331)
CheckOffset(struct snd_seq_real_time,tv_nsec,0,12,75332)
#elif defined __i386__
CheckTypeSize(struct snd_seq_real_time,0, 27746, 2, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_real_time on IA32\n");
CheckOffset(struct snd_seq_real_time,tv_sec,0,2,75331)
CheckOffset(struct snd_seq_real_time,tv_nsec,0,2,75332)
#elif defined __ia64__
CheckTypeSize(struct snd_seq_real_time,0, 27746, 3, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_real_time on IA64\n");
CheckOffset(struct snd_seq_real_time,tv_sec,0,3,75331)
CheckOffset(struct snd_seq_real_time,tv_nsec,0,3,75332)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct snd_seq_real_time,0, 27746, 6, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_real_time on PPC32\n");
CheckOffset(struct snd_seq_real_time,tv_sec,0,6,75331)
CheckOffset(struct snd_seq_real_time,tv_nsec,0,6,75332)
#elif defined __powerpc64__
CheckTypeSize(struct snd_seq_real_time,0, 27746, 9, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_real_time on PPC64\n");
CheckOffset(struct snd_seq_real_time,tv_sec,0,9,75331)
CheckOffset(struct snd_seq_real_time,tv_nsec,0,9,75332)
#else
Msg("Find size of snd_seq_real_time (27746)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,27746,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_seq_event_t,28, 27749, 11, 3.2, NULL, 27746, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_seq_event_t,0, 27749, 10, 3.2, NULL, 27746, NULL)
#elif defined __s390x__
CheckTypeSize(snd_seq_event_t,0, 27749, 12, 3.2, NULL, 27746, NULL)
#elif defined __i386__
CheckTypeSize(snd_seq_event_t,0, 27749, 2, 3.2, NULL, 27746, NULL)
#elif defined __ia64__
CheckTypeSize(snd_seq_event_t,0, 27749, 3, 3.2, NULL, 27746, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_seq_event_t,0, 27749, 6, 3.2, NULL, 27746, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_seq_event_t,0, 27749, 9, 3.2, NULL, 27746, NULL)
#else
Msg("Find size of snd_seq_event_t (27749)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27746,NULL);\n",architecture,27749,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_seq_event_type_t,1, 27750, 11, 3.2, NULL, 3, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_seq_event_type_t,0, 27750, 10, 3.2, NULL, 3, NULL)
#elif defined __s390x__
CheckTypeSize(snd_seq_event_type_t,0, 27750, 12, 3.2, NULL, 3, NULL)
#elif defined __i386__
CheckTypeSize(snd_seq_event_type_t,0, 27750, 2, 3.2, NULL, 3, NULL)
#elif defined __ia64__
CheckTypeSize(snd_seq_event_type_t,0, 27750, 3, 3.2, NULL, 3, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_seq_event_type_t,0, 27750, 6, 3.2, NULL, 3, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_seq_event_type_t,0, 27750, 9, 3.2, NULL, 3, NULL)
#else
Msg("Find size of snd_seq_event_type_t (27750)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,3,NULL);\n",architecture,27750,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_seq_instr_cluster_t,4, 27755, 11, 3.2, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_seq_instr_cluster_t,0, 27755, 10, 3.2, NULL, 7, NULL)
#elif defined __s390x__
CheckTypeSize(snd_seq_instr_cluster_t,0, 27755, 12, 3.2, NULL, 7, NULL)
#elif defined __i386__
CheckTypeSize(snd_seq_instr_cluster_t,0, 27755, 2, 3.2, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(snd_seq_instr_cluster_t,0, 27755, 3, 3.2, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_seq_instr_cluster_t,0, 27755, 6, 3.2, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_seq_instr_cluster_t,0, 27755, 9, 3.2, NULL, 7, NULL)
#else
Msg("Find size of snd_seq_instr_cluster_t (27755)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,7,NULL);\n",architecture,27755,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_seq_instr_t,12, 27756, 11, 3.2, NULL, 27754, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_seq_instr_t,0, 27756, 10, 3.2, NULL, 27754, NULL)
#elif defined __s390x__
CheckTypeSize(snd_seq_instr_t,0, 27756, 12, 3.2, NULL, 27754, NULL)
#elif defined __i386__
CheckTypeSize(snd_seq_instr_t,0, 27756, 2, 3.2, NULL, 27754, NULL)
#elif defined __ia64__
CheckTypeSize(snd_seq_instr_t,0, 27756, 3, 3.2, NULL, 27754, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_seq_instr_t,0, 27756, 6, 3.2, NULL, 27754, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_seq_instr_t,0, 27756, 9, 3.2, NULL, 27754, NULL)
#else
Msg("Find size of snd_seq_instr_t (27756)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27754,NULL);\n",architecture,27756,0);
#endif

#if defined __x86_64__
CheckTypeSize(union snd_seq_timestamp,8, 27787, 11, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_timestamp on x86-64\n");
CheckOffset(union snd_seq_timestamp,tick,0,11,75337)
CheckOffset(union snd_seq_timestamp,time,0,11,75338)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(union snd_seq_timestamp,0, 27787, 10, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_timestamp on S390\n");
CheckOffset(union snd_seq_timestamp,tick,0,10,75337)
CheckOffset(union snd_seq_timestamp,time,0,10,75338)
#elif defined __s390x__
CheckTypeSize(union snd_seq_timestamp,0, 27787, 12, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_timestamp on S390X\n");
CheckOffset(union snd_seq_timestamp,tick,0,12,75337)
CheckOffset(union snd_seq_timestamp,time,0,12,75338)
#elif defined __i386__
CheckTypeSize(union snd_seq_timestamp,0, 27787, 2, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_timestamp on IA32\n");
CheckOffset(union snd_seq_timestamp,tick,0,2,75337)
CheckOffset(union snd_seq_timestamp,time,0,2,75338)
#elif defined __ia64__
CheckTypeSize(union snd_seq_timestamp,0, 27787, 3, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_timestamp on IA64\n");
CheckOffset(union snd_seq_timestamp,tick,0,3,75337)
CheckOffset(union snd_seq_timestamp,time,0,3,75338)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(union snd_seq_timestamp,0, 27787, 6, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_timestamp on PPC32\n");
CheckOffset(union snd_seq_timestamp,tick,0,6,75337)
CheckOffset(union snd_seq_timestamp,time,0,6,75338)
#elif defined __powerpc64__
CheckTypeSize(union snd_seq_timestamp,0, 27787, 9, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_timestamp on PPC64\n");
CheckOffset(union snd_seq_timestamp,tick,0,9,75337)
CheckOffset(union snd_seq_timestamp,time,0,9,75338)
#else
Msg("Find size of snd_seq_timestamp (27787)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,27787,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_seq_real_time_t,8, 27789, 11, 3.2, NULL, 27787, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_seq_real_time_t,0, 27789, 10, 3.2, NULL, 27787, NULL)
#elif defined __s390x__
CheckTypeSize(snd_seq_real_time_t,0, 27789, 12, 3.2, NULL, 27787, NULL)
#elif defined __i386__
CheckTypeSize(snd_seq_real_time_t,0, 27789, 2, 3.2, NULL, 27787, NULL)
#elif defined __ia64__
CheckTypeSize(snd_seq_real_time_t,0, 27789, 3, 3.2, NULL, 27787, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_seq_real_time_t,0, 27789, 6, 3.2, NULL, 27787, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_seq_real_time_t,0, 27789, 9, 3.2, NULL, 27787, NULL)
#else
Msg("Find size of snd_seq_real_time_t (27789)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27787,NULL);\n",architecture,27789,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_seq_tick_time_t,4, 27804, 11, 3.2, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_seq_tick_time_t,0, 27804, 10, 3.2, NULL, 7, NULL)
#elif defined __s390x__
CheckTypeSize(snd_seq_tick_time_t,0, 27804, 12, 3.2, NULL, 7, NULL)
#elif defined __i386__
CheckTypeSize(snd_seq_tick_time_t,0, 27804, 2, 3.2, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(snd_seq_tick_time_t,0, 27804, 3, 3.2, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_seq_tick_time_t,0, 27804, 6, 3.2, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_seq_tick_time_t,0, 27804, 9, 3.2, NULL, 7, NULL)
#else
Msg("Find size of snd_seq_tick_time_t (27804)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,7,NULL);\n",architecture,27804,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_seq_timestamp_t,8, 27806, 11, 3.2, NULL, 27805, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_seq_timestamp_t,0, 27806, 10, 3.2, NULL, 27805, NULL)
#elif defined __s390x__
CheckTypeSize(snd_seq_timestamp_t,0, 27806, 12, 3.2, NULL, 27805, NULL)
#elif defined __i386__
CheckTypeSize(snd_seq_timestamp_t,0, 27806, 2, 3.2, NULL, 27805, NULL)
#elif defined __ia64__
CheckTypeSize(snd_seq_timestamp_t,0, 27806, 3, 3.2, NULL, 27805, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_seq_timestamp_t,0, 27806, 6, 3.2, NULL, 27805, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_seq_timestamp_t,0, 27806, 9, 3.2, NULL, 27805, NULL)
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
