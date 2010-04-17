/*
 * Test of alsa/seq_event.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

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

#if 1
CheckTypeSize(struct snd_seq_addr,0, 27709, 1, , NULL, 0, NULL)
Msg("Missing member data for snd_seq_addr on All\n");
CheckOffset(struct snd_seq_addr,client,0,1,75226)
CheckOffset(struct snd_seq_addr,port,0,1,75227)
#endif

#if defined __s390x__
CheckTypeSize(snd_seq_addr_t,2, 27711, 12, 3.2, NULL, 27709, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_seq_addr_t,2, 27711, 11, 3.2, NULL, 27709, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_seq_addr_t,2, 27711, 10, 3.2, NULL, 27709, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_seq_addr_t,2, 27711, 9, 3.2, NULL, 27709, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_seq_addr_t,2, 27711, 6, 3.2, NULL, 27709, NULL)
#elif defined __ia64__
CheckTypeSize(snd_seq_addr_t,2, 27711, 3, 3.2, NULL, 27709, NULL)
#elif defined __i386__
CheckTypeSize(snd_seq_addr_t,2, 27711, 2, 3.2, NULL, 27709, NULL)
#else
Msg("Find size of snd_seq_addr_t (27711)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27709,NULL);\n",architecture,27711,0);
#endif

#if 1
CheckTypeSize(struct snd_seq_connect,0, 27720, 1, , NULL, 0, NULL)
Msg("Missing member data for snd_seq_connect on All\n");
CheckOffset(struct snd_seq_connect,sender,0,1,75229)
CheckOffset(struct snd_seq_connect,dest,0,1,75230)
#endif

#if 1
CheckTypeSize(snd_seq_connect_t,4, 27721, 1, 3.2, NULL, 27720, NULL)
#endif

#if 1
CheckTypeSize(struct snd_seq_ev_ctrl,0, 27724, 1, , NULL, 0, NULL)
Msg("Missing member data for snd_seq_ev_ctrl on All\n");
CheckOffset(struct snd_seq_ev_ctrl,channel,0,1,75232)
CheckOffset(struct snd_seq_ev_ctrl,unused,0,1,75233)
CheckOffset(struct snd_seq_ev_ctrl,param,0,1,75234)
CheckOffset(struct snd_seq_ev_ctrl,value,0,1,75235)
#endif

#if 1
CheckTypeSize(snd_seq_ev_ctrl_t,12, 27725, 1, 3.2, NULL, 27724, NULL)
#endif

#if 1
CheckTypeSize(struct snd_seq_ev_ext,0, 27726, 1, , NULL, 0, '(packed)')
Msg("Missing member data for snd_seq_ev_ext on All\n");
CheckOffset(struct snd_seq_ev_ext,len,0,1,75236)
CheckOffset(struct snd_seq_ev_ext,ptr,0,1,75237)
#endif

#if defined __s390x__
CheckTypeSize(snd_seq_ev_ext_t,12, 27727, 12, 3.2, NULL, 27726, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_seq_ev_ext_t,12, 27727, 11, 3.2, NULL, 27726, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_seq_ev_ext_t,8, 27727, 10, 3.2, NULL, 27726, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_seq_ev_ext_t,12, 27727, 9, 3.2, NULL, 27726, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_seq_ev_ext_t,8, 27727, 6, 3.2, NULL, 27726, NULL)
#elif defined __ia64__
CheckTypeSize(snd_seq_ev_ext_t,12, 27727, 3, 3.2, NULL, 27726, NULL)
#elif defined __i386__
CheckTypeSize(snd_seq_ev_ext_t,8, 27727, 2, 3.2, NULL, 27726, NULL)
#else
Msg("Find size of snd_seq_ev_ext_t (27727)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27726,NULL);\n",architecture,27727,0);
#endif

#if 1
CheckTypeSize(struct snd_seq_ev_note,0, 27732, 1, , NULL, 0, NULL)
Msg("Missing member data for snd_seq_ev_note on All\n");
CheckOffset(struct snd_seq_ev_note,channel,0,1,75241)
CheckOffset(struct snd_seq_ev_note,note,0,1,75242)
CheckOffset(struct snd_seq_ev_note,velocity,0,1,75243)
CheckOffset(struct snd_seq_ev_note,off_velocity,0,1,75244)
CheckOffset(struct snd_seq_ev_note,duration,0,1,75245)
#endif

#if 1
CheckTypeSize(snd_seq_ev_note_t,8, 27733, 1, 3.2, NULL, 27732, NULL)
#endif

#if 1
CheckTypeSize(struct snd_seq_ev_queue_control,0, 27734, 1, , NULL, 0, NULL)
Msg("Missing member data for snd_seq_ev_queue_control on All\n");
CheckOffset(struct snd_seq_ev_queue_control,queue,0,1,75246)
CheckOffset(struct snd_seq_ev_queue_control,unused,0,1,75247)
CheckOffset(struct snd_seq_ev_queue_control,param,0,1,75248)
#endif

#if 1
CheckTypeSize(snd_seq_ev_queue_control_t,12, 27735, 1, 3.2, NULL, 27734, NULL)
#endif

#if 1
CheckTypeSize(struct snd_seq_ev_raw32,0, 27736, 1, , NULL, 0, NULL)
Msg("Missing member data for snd_seq_ev_raw32 on All\n");
CheckOffset(struct snd_seq_ev_raw32,d,0,1,75261)
#endif

#if 1
CheckTypeSize(snd_seq_ev_raw32_t,12, 27737, 1, 3.2, NULL, 27736, NULL)
#endif

#if 1
CheckTypeSize(struct snd_seq_ev_raw8,0, 27738, 1, , NULL, 0, NULL)
Msg("Missing member data for snd_seq_ev_raw8 on All\n");
CheckOffset(struct snd_seq_ev_raw8,d,0,1,75262)
#endif

#if 1
CheckTypeSize(snd_seq_ev_raw8_t,12, 27739, 1, 3.2, NULL, 27738, NULL)
#endif

#if defined __s390x__
CheckTypeSize(struct snd_seq_real_time,8, 27746, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct snd_seq_real_time,tv_nsec,4,12,75332)
CheckOffset(struct snd_seq_real_time,tv_nsec,4,12,75332)
#elif defined __x86_64__
CheckTypeSize(struct snd_seq_real_time,8, 27746, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct snd_seq_real_time,tv_nsec,4,11,75332)
CheckOffset(struct snd_seq_real_time,tv_nsec,4,11,75332)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct snd_seq_real_time,8, 27746, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct snd_seq_real_time,tv_nsec,4,10,75332)
CheckOffset(struct snd_seq_real_time,tv_nsec,4,10,75332)
#elif defined __powerpc64__
CheckTypeSize(struct snd_seq_real_time,8, 27746, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct snd_seq_real_time,tv_nsec,4,9,75332)
CheckOffset(struct snd_seq_real_time,tv_nsec,4,9,75332)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct snd_seq_real_time,8, 27746, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct snd_seq_real_time,tv_nsec,4,6,75332)
CheckOffset(struct snd_seq_real_time,tv_nsec,4,6,75332)
#elif defined __ia64__
CheckTypeSize(struct snd_seq_real_time,8, 27746, 3, 3.2, NULL, 0, NULL)
CheckMemberSize(struct snd_seq_real_time,tv_nsec,4,3,75332)
CheckOffset(struct snd_seq_real_time,tv_nsec,4,3,75332)
#elif defined __i386__
CheckTypeSize(struct snd_seq_real_time,8, 27746, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct snd_seq_real_time,tv_nsec,4,2,75332)
CheckOffset(struct snd_seq_real_time,tv_nsec,4,2,75332)
#else
Msg("Find size of snd_seq_real_time (27746)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,27746,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_seq_event_t,28, 27749, 12, 3.2, NULL, 27746, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_seq_event_t,28, 27749, 11, 3.2, NULL, 27746, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_seq_event_t,28, 27749, 10, 3.2, NULL, 27746, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_seq_event_t,28, 27749, 9, 3.2, NULL, 27746, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_seq_event_t,28, 27749, 6, 3.2, NULL, 27746, NULL)
#elif defined __ia64__
CheckTypeSize(snd_seq_event_t,28, 27749, 3, 3.2, NULL, 27746, NULL)
#elif defined __i386__
CheckTypeSize(snd_seq_event_t,28, 27749, 2, 3.2, NULL, 27746, NULL)
#else
Msg("Find size of snd_seq_event_t (27749)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27746,NULL);\n",architecture,27749,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_seq_event_type_t,1, 27750, 12, 3.2, NULL, 3, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_seq_event_type_t,1, 27750, 11, 3.2, NULL, 3, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_seq_event_type_t,1, 27750, 10, 3.2, NULL, 3, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_seq_event_type_t,1, 27750, 9, 3.2, NULL, 3, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_seq_event_type_t,1, 27750, 6, 3.2, NULL, 3, NULL)
#elif defined __ia64__
CheckTypeSize(snd_seq_event_type_t,1, 27750, 3, 3.2, NULL, 3, NULL)
#elif defined __i386__
CheckTypeSize(snd_seq_event_type_t,1, 27750, 2, 3.2, NULL, 3, NULL)
#else
Msg("Find size of snd_seq_event_type_t (27750)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,3,NULL);\n",architecture,27750,0);
#endif

#if 1
CheckTypeSize(struct snd_seq_queue_skew,8, 27775, 1, 3.2, NULL, 0, NULL)
CheckMemberSize(struct snd_seq_queue_skew,base,4,1,75330)
CheckOffset(struct snd_seq_queue_skew,base,4,1,75330)
#endif

#if 1
CheckTypeSize(snd_seq_queue_skew_t,8, 27776, 1, 3.2, NULL, 27775, NULL)
#endif

#if defined __s390x__
CheckTypeSize(union snd_seq_timestamp,8, 27787, 12, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_timestamp on S390X\n");
CheckOffset(union snd_seq_timestamp,tick,0,12,75337)
CheckOffset(union snd_seq_timestamp,time,0,12,75338)
#elif defined __x86_64__
CheckTypeSize(union snd_seq_timestamp,8, 27787, 11, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_timestamp on x86-64\n");
CheckOffset(union snd_seq_timestamp,tick,0,11,75337)
CheckOffset(union snd_seq_timestamp,time,0,11,75338)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(union snd_seq_timestamp,8, 27787, 10, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_timestamp on S390\n");
CheckOffset(union snd_seq_timestamp,tick,0,10,75337)
CheckOffset(union snd_seq_timestamp,time,0,10,75338)
#elif defined __powerpc64__
CheckTypeSize(union snd_seq_timestamp,8, 27787, 9, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_timestamp on PPC64\n");
CheckOffset(union snd_seq_timestamp,tick,0,9,75337)
CheckOffset(union snd_seq_timestamp,time,0,9,75338)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(union snd_seq_timestamp,8, 27787, 6, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_timestamp on PPC32\n");
CheckOffset(union snd_seq_timestamp,tick,0,6,75337)
CheckOffset(union snd_seq_timestamp,time,0,6,75338)
#elif defined __ia64__
CheckTypeSize(union snd_seq_timestamp,8, 27787, 3, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_timestamp on IA64\n");
CheckOffset(union snd_seq_timestamp,tick,0,3,75337)
CheckOffset(union snd_seq_timestamp,time,0,3,75338)
#elif defined __i386__
CheckTypeSize(union snd_seq_timestamp,8, 27787, 2, 3.2, NULL, 0, NULL)
Msg("Missing member data for snd_seq_timestamp on IA32\n");
CheckOffset(union snd_seq_timestamp,tick,0,2,75337)
CheckOffset(union snd_seq_timestamp,time,0,2,75338)
#else
Msg("Find size of snd_seq_timestamp (27787)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,27787,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_seq_real_time_t,8, 27789, 12, 3.2, NULL, 27787, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_seq_real_time_t,8, 27789, 11, 3.2, NULL, 27787, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_seq_real_time_t,8, 27789, 10, 3.2, NULL, 27787, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_seq_real_time_t,8, 27789, 9, 3.2, NULL, 27787, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_seq_real_time_t,8, 27789, 6, 3.2, NULL, 27787, NULL)
#elif defined __ia64__
CheckTypeSize(snd_seq_real_time_t,8, 27789, 3, 3.2, NULL, 27787, NULL)
#elif defined __i386__
CheckTypeSize(snd_seq_real_time_t,8, 27789, 2, 3.2, NULL, 27787, NULL)
#else
Msg("Find size of snd_seq_real_time_t (27789)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27787,NULL);\n",architecture,27789,0);
#endif

#if 1
CheckTypeSize(struct snd_seq_result,8, 27793, 1, 3.2, NULL, 0, NULL)
CheckMemberSize(struct snd_seq_result,result,4,1,75334)
CheckOffset(struct snd_seq_result,result,4,1,75334)
#endif

#if 1
CheckTypeSize(snd_seq_result_t,8, 27794, 1, 3.2, NULL, 27793, NULL)
#endif

#if defined __s390x__
CheckTypeSize(snd_seq_tick_time_t,4, 27804, 12, 3.2, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_seq_tick_time_t,4, 27804, 11, 3.2, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_seq_tick_time_t,4, 27804, 10, 3.2, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_seq_tick_time_t,4, 27804, 9, 3.2, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_seq_tick_time_t,4, 27804, 6, 3.2, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(snd_seq_tick_time_t,4, 27804, 3, 3.2, NULL, 7, NULL)
#elif defined __i386__
CheckTypeSize(snd_seq_tick_time_t,4, 27804, 2, 3.2, NULL, 7, NULL)
#else
Msg("Find size of snd_seq_tick_time_t (27804)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,7,NULL);\n",architecture,27804,0);
#endif

#if 1
CheckTypeSize(struct snd_seq_event,0, 27805, 1, , NULL, 0, NULL)
Msg("Missing member data for snd_seq_event on All\n");
CheckOffset(struct snd_seq_event,type,0,1,75285)
CheckOffset(struct snd_seq_event,flags,0,1,75286)
CheckOffset(struct snd_seq_event,tag,0,1,75287)
CheckOffset(struct snd_seq_event,queue,0,1,75288)
CheckOffset(struct snd_seq_event,time,0,1,75289)
CheckOffset(struct snd_seq_event,source,0,1,75290)
CheckOffset(struct snd_seq_event,dest,0,1,75291)
CheckOffset(struct snd_seq_event,data,0,1,75292)
#endif

#if defined __s390x__
CheckTypeSize(snd_seq_timestamp_t,8, 27806, 12, 3.2, NULL, 27805, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_seq_timestamp_t,8, 27806, 11, 3.2, NULL, 27805, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_seq_timestamp_t,8, 27806, 10, 3.2, NULL, 27805, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_seq_timestamp_t,8, 27806, 9, 3.2, NULL, 27805, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_seq_timestamp_t,8, 27806, 6, 3.2, NULL, 27805, NULL)
#elif defined __ia64__
CheckTypeSize(snd_seq_timestamp_t,8, 27806, 3, 3.2, NULL, 27805, NULL)
#elif defined __i386__
CheckTypeSize(snd_seq_timestamp_t,8, 27806, 2, 3.2, NULL, 27805, NULL)
#else
Msg("Find size of snd_seq_timestamp_t (27806)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27805,NULL);\n",architecture,27806,0);
#endif

#if 1
CheckEnum("SND_SEQ_EVENT_SYSTEM",SND_SEQ_EVENT_SYSTEM,0,219260)
CheckEnum("SND_SEQ_EVENT_RESULT",SND_SEQ_EVENT_RESULT,(0) + 1,219261)
CheckEnum("SND_SEQ_EVENT_NOTE",SND_SEQ_EVENT_NOTE,((0) + 1) + 1,219262)
CheckEnum("SND_SEQ_EVENT_NOTEON",SND_SEQ_EVENT_NOTEON,(((0) + 1) + 1) + 1,219263)
CheckEnum("SND_SEQ_EVENT_NOTEOFF",SND_SEQ_EVENT_NOTEOFF,((((0) + 1) + 1) + 1) + 1,219264)
CheckEnum("SND_SEQ_EVENT_KEYPRESS",SND_SEQ_EVENT_KEYPRESS,(((((0) + 1) + 1) + 1) + 1) + 1,219265)
CheckEnum("SND_SEQ_EVENT_CONTROLLER",SND_SEQ_EVENT_CONTROLLER,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,219266)
CheckEnum("SND_SEQ_EVENT_PGMCHANGE",SND_SEQ_EVENT_PGMCHANGE,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219267)
CheckEnum("SND_SEQ_EVENT_CHANPRESS",SND_SEQ_EVENT_CHANPRESS,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219268)
CheckEnum("SND_SEQ_EVENT_PITCHBEND",SND_SEQ_EVENT_PITCHBEND,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219269)
CheckEnum("SND_SEQ_EVENT_CONTROL14",SND_SEQ_EVENT_CONTROL14,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219270)
CheckEnum("SND_SEQ_EVENT_NONREGPARAM",SND_SEQ_EVENT_NONREGPARAM,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219271)
CheckEnum("SND_SEQ_EVENT_REGPARAM",SND_SEQ_EVENT_REGPARAM,((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219272)
CheckEnum("SND_SEQ_EVENT_SONGPOS",SND_SEQ_EVENT_SONGPOS,(((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219273)
CheckEnum("SND_SEQ_EVENT_SONGSEL",SND_SEQ_EVENT_SONGSEL,((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219274)
CheckEnum("SND_SEQ_EVENT_QFRAME",SND_SEQ_EVENT_QFRAME,(((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219275)
CheckEnum("SND_SEQ_EVENT_TIMESIGN",SND_SEQ_EVENT_TIMESIGN,((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219276)
CheckEnum("SND_SEQ_EVENT_KEYSIGN",SND_SEQ_EVENT_KEYSIGN,(((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219277)
CheckEnum("SND_SEQ_EVENT_START",SND_SEQ_EVENT_START,((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219278)
CheckEnum("SND_SEQ_EVENT_CONTINUE",SND_SEQ_EVENT_CONTINUE,(((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219279)
CheckEnum("SND_SEQ_EVENT_STOP",SND_SEQ_EVENT_STOP,((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219280)
CheckEnum("SND_SEQ_EVENT_SETPOS_TICK",SND_SEQ_EVENT_SETPOS_TICK,(((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219281)
CheckEnum("SND_SEQ_EVENT_SETPOS_TIME",SND_SEQ_EVENT_SETPOS_TIME,((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219282)
CheckEnum("SND_SEQ_EVENT_TEMPO",SND_SEQ_EVENT_TEMPO,(((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219283)
CheckEnum("SND_SEQ_EVENT_CLOCK",SND_SEQ_EVENT_CLOCK,((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219284)
CheckEnum("SND_SEQ_EVENT_TICK",SND_SEQ_EVENT_TICK,(((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219285)
CheckEnum("SND_SEQ_EVENT_QUEUE_SKEW",SND_SEQ_EVENT_QUEUE_SKEW,((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219286)
CheckEnum("SND_SEQ_EVENT_SYNC_POS",SND_SEQ_EVENT_SYNC_POS,(((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219287)
CheckEnum("SND_SEQ_EVENT_TUNE_REQUEST",SND_SEQ_EVENT_TUNE_REQUEST,((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219288)
CheckEnum("SND_SEQ_EVENT_RESET",SND_SEQ_EVENT_RESET,(((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219289)
CheckEnum("SND_SEQ_EVENT_SENSING",SND_SEQ_EVENT_SENSING,((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219290)
CheckEnum("SND_SEQ_EVENT_ECHO",SND_SEQ_EVENT_ECHO,(((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219291)
CheckEnum("SND_SEQ_EVENT_OSS",SND_SEQ_EVENT_OSS,((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219292)
CheckEnum("SND_SEQ_EVENT_CLIENT_START",SND_SEQ_EVENT_CLIENT_START,(((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219293)
CheckEnum("SND_SEQ_EVENT_CLIENT_EXIT",SND_SEQ_EVENT_CLIENT_EXIT,((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219294)
CheckEnum("SND_SEQ_EVENT_CLIENT_CHANGE",SND_SEQ_EVENT_CLIENT_CHANGE,(((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219295)
CheckEnum("SND_SEQ_EVENT_PORT_START",SND_SEQ_EVENT_PORT_START,((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219296)
CheckEnum("SND_SEQ_EVENT_PORT_EXIT",SND_SEQ_EVENT_PORT_EXIT,(((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219297)
CheckEnum("SND_SEQ_EVENT_PORT_CHANGE",SND_SEQ_EVENT_PORT_CHANGE,((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219298)
CheckEnum("SND_SEQ_EVENT_PORT_SUBSCRIBED",SND_SEQ_EVENT_PORT_SUBSCRIBED,(((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219299)
CheckEnum("SND_SEQ_EVENT_PORT_UNSUBSCRIBED",SND_SEQ_EVENT_PORT_UNSUBSCRIBED,((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219300)
CheckEnum("SND_SEQ_EVENT_USR0",SND_SEQ_EVENT_USR0,(((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219301)
CheckEnum("SND_SEQ_EVENT_USR1",SND_SEQ_EVENT_USR1,((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219302)
CheckEnum("SND_SEQ_EVENT_USR2",SND_SEQ_EVENT_USR2,(((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219303)
CheckEnum("SND_SEQ_EVENT_USR3",SND_SEQ_EVENT_USR3,((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219304)
CheckEnum("SND_SEQ_EVENT_USR4",SND_SEQ_EVENT_USR4,(((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219305)
CheckEnum("SND_SEQ_EVENT_USR5",SND_SEQ_EVENT_USR5,((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219306)
CheckEnum("SND_SEQ_EVENT_USR6",SND_SEQ_EVENT_USR6,(((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219307)
CheckEnum("SND_SEQ_EVENT_USR7",SND_SEQ_EVENT_USR7,((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219308)
CheckEnum("SND_SEQ_EVENT_USR8",SND_SEQ_EVENT_USR8,(((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219309)
CheckEnum("SND_SEQ_EVENT_USR9",SND_SEQ_EVENT_USR9,((((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219310)
CheckEnum("SND_SEQ_EVENT_SYSEX",SND_SEQ_EVENT_SYSEX,(((((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219311)
CheckEnum("SND_SEQ_EVENT_BOUNCE",SND_SEQ_EVENT_BOUNCE,((((((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219312)
CheckEnum("SND_SEQ_EVENT_USR_VAR0",SND_SEQ_EVENT_USR_VAR0,(((((((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219313)
CheckEnum("SND_SEQ_EVENT_USR_VAR1",SND_SEQ_EVENT_USR_VAR1,((((((((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219314)
CheckEnum("SND_SEQ_EVENT_USR_VAR2",SND_SEQ_EVENT_USR_VAR2,(((((((((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219315)
CheckEnum("SND_SEQ_EVENT_USR_VAR3",SND_SEQ_EVENT_USR_VAR3,((((((((((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219316)
CheckEnum("SND_SEQ_EVENT_USR_VAR4",SND_SEQ_EVENT_USR_VAR4,(((((((((((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219317)
CheckEnum("SND_SEQ_EVENT_NONE",SND_SEQ_EVENT_NONE,((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,219318)
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
