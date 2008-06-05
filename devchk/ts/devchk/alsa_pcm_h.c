/*
 * Test of alsa/pcm.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <sys/poll.h>
#include <alsa/global.h>
#include <alsa/output.h>
#include <alsa/input.h>
#include <alsa/conf.h>
#include "alsa/pcm.h"



#ifdef TET_TEST
void alsa_pcm_h()
{
#else
int alsa_pcm_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in alsa/pcm.h\n");
#endif

printf("Checking data structures in alsa/pcm.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SND_PCM_NONBLOCK
	CompareConstant(SND_PCM_NONBLOCK,0x0001,11356,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_NONBLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_PCM_ASYNC
	CompareConstant(SND_PCM_ASYNC,0x0002,11357,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_ASYNC\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(snd_pcm_access_t,4, 27504, 12, 3.2, NULL, 26364, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_pcm_access_t,4, 27504, 11, 3.2, NULL, 26364, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_access_t,4, 27504, 10, 3.2, NULL, 26364, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_access_t,4, 27504, 9, 3.2, NULL, 26364, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_access_t,4, 27504, 6, 3.2, NULL, 26364, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_access_t,4, 27504, 3, 3.2, NULL, 26364, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_access_t,4, 27504, 2, 3.2, NULL, 26364, NULL)
#else
Msg("Find size of snd_pcm_access_t (27504)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26364,NULL);\n",architecture,27504,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_pcm_channel_area_t,16, 27512, 12, 3.2, NULL, 26366, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_pcm_channel_area_t,16, 27512, 11, 3.2, NULL, 26366, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_channel_area_t,12, 27512, 10, 3.2, NULL, 26366, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_channel_area_t,16, 27512, 9, 3.2, NULL, 26366, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_channel_area_t,12, 27512, 6, 3.2, NULL, 26366, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_channel_area_t,16, 27512, 3, 3.2, NULL, 26366, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_channel_area_t,12, 27512, 2, 3.2, NULL, 26366, NULL)
#else
Msg("Find size of snd_pcm_channel_area_t (27512)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26366,NULL);\n",architecture,27512,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_pcm_class_t,4, 27515, 12, 3.2, NULL, 26368, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_pcm_class_t,4, 27515, 11, 3.2, NULL, 26368, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_class_t,4, 27515, 10, 3.2, NULL, 26368, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_class_t,4, 27515, 9, 3.2, NULL, 26368, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_class_t,4, 27515, 6, 3.2, NULL, 26368, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_class_t,4, 27515, 3, 3.2, NULL, 26368, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_class_t,4, 27515, 2, 3.2, NULL, 26368, NULL)
#else
Msg("Find size of snd_pcm_class_t (27515)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26368,NULL);\n",architecture,27515,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_pcm_format_t,4, 27540, 12, 3.2, NULL, 26370, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_pcm_format_t,4, 27540, 11, 3.2, NULL, 26370, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_format_t,4, 27540, 10, 3.2, NULL, 26370, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_format_t,4, 27540, 9, 3.2, NULL, 26370, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_format_t,4, 27540, 6, 3.2, NULL, 26370, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_format_t,4, 27540, 3, 3.2, NULL, 26370, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_format_t,4, 27540, 2, 3.2, NULL, 26370, NULL)
#else
Msg("Find size of snd_pcm_format_t (27540)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26370,NULL);\n",architecture,27540,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_pcm_hook_func_t,8, 27546, 12, 3.2, NULL, 25747, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_pcm_hook_func_t,8, 27546, 11, 3.2, NULL, 25747, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_hook_func_t,4, 27546, 10, 3.2, NULL, 25747, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_hook_func_t,8, 27546, 9, 3.2, NULL, 25747, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_hook_func_t,4, 27546, 6, 3.2, NULL, 25747, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_hook_func_t,8, 27546, 3, 3.2, NULL, 25747, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_hook_func_t,4, 27546, 2, 3.2, NULL, 25747, NULL)
#else
Msg("Find size of snd_pcm_hook_func_t (27546)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,25747,NULL);\n",architecture,27546,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_pcm_hook_type_t,4, 27547, 12, 3.2, NULL, 26372, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_pcm_hook_type_t,4, 27547, 11, 3.2, NULL, 26372, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_hook_type_t,4, 27547, 10, 3.2, NULL, 26372, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_hook_type_t,4, 27547, 9, 3.2, NULL, 26372, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_hook_type_t,4, 27547, 6, 3.2, NULL, 26372, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_hook_type_t,4, 27547, 3, 3.2, NULL, 26372, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_hook_type_t,4, 27547, 2, 3.2, NULL, 26372, NULL)
#else
Msg("Find size of snd_pcm_hook_type_t (27547)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26372,NULL);\n",architecture,27547,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_pcm_scope_ops_t,56, 27637, 12, 3.2, NULL, 26379, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_pcm_scope_ops_t,56, 27637, 11, 3.2, NULL, 26379, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_scope_ops_t,28, 27637, 10, 3.2, NULL, 26379, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_scope_ops_t,56, 27637, 9, 3.2, NULL, 26379, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_scope_ops_t,28, 27637, 6, 3.2, NULL, 26379, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_scope_ops_t,56, 27637, 3, 3.2, NULL, 26379, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_scope_ops_t,28, 27637, 2, 3.2, NULL, 26379, NULL)
#else
Msg("Find size of snd_pcm_scope_ops_t (27637)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26379,NULL);\n",architecture,27637,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_pcm_sframes_t,8, 27644, 12, 3.2, NULL, 8, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_pcm_sframes_t,8, 27644, 11, 3.2, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_sframes_t,4, 27644, 10, 3.2, NULL, 8, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_sframes_t,8, 27644, 9, 3.2, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_sframes_t,4, 27644, 6, 3.2, NULL, 8, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_sframes_t,8, 27644, 3, 3.2, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_sframes_t,4, 27644, 2, 3.2, NULL, 8, NULL)
#else
Msg("Find size of snd_pcm_sframes_t (27644)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,8,NULL);\n",architecture,27644,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_pcm_start_t,4, 27658, 12, 3.2, NULL, 26381, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_pcm_start_t,4, 27658, 11, 3.2, NULL, 26381, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_start_t,4, 27658, 10, 3.2, NULL, 26381, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_start_t,4, 27658, 9, 3.2, NULL, 26381, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_start_t,4, 27658, 6, 3.2, NULL, 26381, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_start_t,4, 27658, 3, 3.2, NULL, 26381, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_start_t,4, 27658, 2, 3.2, NULL, 26381, NULL)
#else
Msg("Find size of snd_pcm_start_t (27658)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26381,NULL);\n",architecture,27658,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_pcm_state_t,4, 27659, 12, 3.2, NULL, 26382, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_pcm_state_t,4, 27659, 11, 3.2, NULL, 26382, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_state_t,4, 27659, 10, 3.2, NULL, 26382, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_state_t,4, 27659, 9, 3.2, NULL, 26382, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_state_t,4, 27659, 6, 3.2, NULL, 26382, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_state_t,4, 27659, 3, 3.2, NULL, 26382, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_state_t,4, 27659, 2, 3.2, NULL, 26382, NULL)
#else
Msg("Find size of snd_pcm_state_t (27659)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26382,NULL);\n",architecture,27659,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_pcm_stream_t,4, 27663, 12, 3.2, NULL, 26383, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_pcm_stream_t,4, 27663, 11, 3.2, NULL, 26383, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_stream_t,4, 27663, 10, 3.2, NULL, 26383, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_stream_t,4, 27663, 9, 3.2, NULL, 26383, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_stream_t,4, 27663, 6, 3.2, NULL, 26383, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_stream_t,4, 27663, 3, 3.2, NULL, 26383, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_stream_t,4, 27663, 2, 3.2, NULL, 26383, NULL)
#else
Msg("Find size of snd_pcm_stream_t (27663)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26383,NULL);\n",architecture,27663,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_pcm_subclass_t,4, 27664, 12, 3.2, NULL, 26384, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_pcm_subclass_t,4, 27664, 11, 3.2, NULL, 26384, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_subclass_t,4, 27664, 10, 3.2, NULL, 26384, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_subclass_t,4, 27664, 9, 3.2, NULL, 26384, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_subclass_t,4, 27664, 6, 3.2, NULL, 26384, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_subclass_t,4, 27664, 3, 3.2, NULL, 26384, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_subclass_t,4, 27664, 2, 3.2, NULL, 26384, NULL)
#else
Msg("Find size of snd_pcm_subclass_t (27664)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26384,NULL);\n",architecture,27664,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_pcm_subformat_t,4, 27669, 12, 3.2, NULL, 26385, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_pcm_subformat_t,4, 27669, 11, 3.2, NULL, 26385, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_subformat_t,4, 27669, 10, 3.2, NULL, 26385, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_subformat_t,4, 27669, 9, 3.2, NULL, 26385, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_subformat_t,4, 27669, 6, 3.2, NULL, 26385, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_subformat_t,4, 27669, 3, 3.2, NULL, 26385, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_subformat_t,4, 27669, 2, 3.2, NULL, 26385, NULL)
#else
Msg("Find size of snd_pcm_subformat_t (27669)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26385,NULL);\n",architecture,27669,0);
#endif

#if 1
CheckTypeSize(snd_pcm_sync_id_t,16, 27673, 1, 3.2, NULL, 26386, NULL)
#endif

#if defined __s390x__
CheckTypeSize(snd_pcm_tstamp_t,4, 27678, 12, 3.2, NULL, 26387, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_pcm_tstamp_t,4, 27678, 11, 3.2, NULL, 26387, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_tstamp_t,4, 27678, 10, 3.2, NULL, 26387, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_tstamp_t,4, 27678, 9, 3.2, NULL, 26387, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_tstamp_t,4, 27678, 6, 3.2, NULL, 26387, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_tstamp_t,4, 27678, 3, 3.2, NULL, 26387, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_tstamp_t,4, 27678, 2, 3.2, NULL, 26387, NULL)
#else
Msg("Find size of snd_pcm_tstamp_t (27678)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26387,NULL);\n",architecture,27678,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_pcm_type_t,4, 27679, 12, 3.2, NULL, 26388, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_pcm_type_t,4, 27679, 11, 3.2, NULL, 26388, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_type_t,4, 27679, 10, 3.2, NULL, 26388, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_type_t,4, 27679, 9, 3.2, NULL, 26388, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_type_t,4, 27679, 6, 3.2, NULL, 26388, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_type_t,4, 27679, 3, 3.2, NULL, 26388, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_type_t,4, 27679, 2, 3.2, NULL, 26388, NULL)
#else
Msg("Find size of snd_pcm_type_t (27679)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26388,NULL);\n",architecture,27679,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_pcm_uframes_t,8, 27681, 12, 3.2, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_pcm_uframes_t,8, 27681, 11, 3.2, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_uframes_t,4, 27681, 10, 3.2, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_uframes_t,8, 27681, 9, 3.2, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_uframes_t,4, 27681, 6, 3.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_uframes_t,8, 27681, 3, 3.2, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_uframes_t,4, 27681, 2, 3.2, NULL, 11186, NULL)
#else
Msg("Find size of snd_pcm_uframes_t (27681)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,11186,NULL);\n",architecture,27681,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_pcm_xrun_t,4, 27683, 12, 3.2, NULL, 26389, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_pcm_xrun_t,4, 27683, 11, 3.2, NULL, 26389, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_xrun_t,4, 27683, 10, 3.2, NULL, 26389, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_xrun_t,4, 27683, 9, 3.2, NULL, 26389, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_xrun_t,4, 27683, 6, 3.2, NULL, 26389, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_xrun_t,4, 27683, 3, 3.2, NULL, 26389, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_xrun_t,4, 27683, 2, 3.2, NULL, 26389, NULL)
#else
Msg("Find size of snd_pcm_xrun_t (27683)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26389,NULL);\n",architecture,27683,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_spcm_duplex_type_t,4, 27811, 12, 3.2, NULL, 26397, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_spcm_duplex_type_t,4, 27811, 11, 3.2, NULL, 26397, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_spcm_duplex_type_t,4, 27811, 10, 3.2, NULL, 26397, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_spcm_duplex_type_t,4, 27811, 9, 3.2, NULL, 26397, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_spcm_duplex_type_t,4, 27811, 6, 3.2, NULL, 26397, NULL)
#elif defined __ia64__
CheckTypeSize(snd_spcm_duplex_type_t,4, 27811, 3, 3.2, NULL, 26397, NULL)
#elif defined __i386__
CheckTypeSize(snd_spcm_duplex_type_t,4, 27811, 2, 3.2, NULL, 26397, NULL)
#else
Msg("Find size of snd_spcm_duplex_type_t (27811)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26397,NULL);\n",architecture,27811,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_spcm_latency_t,4, 27812, 12, 3.2, NULL, 26398, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_spcm_latency_t,4, 27812, 11, 3.2, NULL, 26398, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_spcm_latency_t,4, 27812, 10, 3.2, NULL, 26398, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_spcm_latency_t,4, 27812, 9, 3.2, NULL, 26398, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_spcm_latency_t,4, 27812, 6, 3.2, NULL, 26398, NULL)
#elif defined __ia64__
CheckTypeSize(snd_spcm_latency_t,4, 27812, 3, 3.2, NULL, 26398, NULL)
#elif defined __i386__
CheckTypeSize(snd_spcm_latency_t,4, 27812, 2, 3.2, NULL, 26398, NULL)
#else
Msg("Find size of snd_spcm_latency_t (27812)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26398,NULL);\n",architecture,27812,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_spcm_xrun_type_t,4, 27813, 12, 3.2, NULL, 26399, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_spcm_xrun_type_t,4, 27813, 11, 3.2, NULL, 26399, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_spcm_xrun_type_t,4, 27813, 10, 3.2, NULL, 26399, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_spcm_xrun_type_t,4, 27813, 9, 3.2, NULL, 26399, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_spcm_xrun_type_t,4, 27813, 6, 3.2, NULL, 26399, NULL)
#elif defined __ia64__
CheckTypeSize(snd_spcm_xrun_type_t,4, 27813, 3, 3.2, NULL, 26399, NULL)
#elif defined __i386__
CheckTypeSize(snd_spcm_xrun_type_t,4, 27813, 2, 3.2, NULL, 26399, NULL)
#else
Msg("Find size of snd_spcm_xrun_type_t (27813)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26399, NULL);\n",architecture,27813,0);
#endif

extern int snd_async_add_pcm_handler_db(snd_async_handler_t * *, snd_pcm_t *, snd_async_callback_t, void *);
CheckInterfacedef(snd_async_add_pcm_handler,snd_async_add_pcm_handler_db);
extern snd_pcm_t * snd_async_handler_get_pcm_db(snd_async_handler_t *);
CheckInterfacedef(snd_async_handler_get_pcm,snd_async_handler_get_pcm_db);
extern void snd_pcm_access_mask_any_db(snd_pcm_access_mask_t *);
CheckInterfacedef(snd_pcm_access_mask_any,snd_pcm_access_mask_any_db);
extern void snd_pcm_access_mask_copy_db(snd_pcm_access_mask_t *, const snd_pcm_access_mask_t *);
CheckInterfacedef(snd_pcm_access_mask_copy,snd_pcm_access_mask_copy_db);
extern void snd_pcm_access_mask_free_db(snd_pcm_access_mask_t *);
CheckInterfacedef(snd_pcm_access_mask_free,snd_pcm_access_mask_free_db);
extern int snd_pcm_access_mask_malloc_db(snd_pcm_access_mask_t * *);
CheckInterfacedef(snd_pcm_access_mask_malloc,snd_pcm_access_mask_malloc_db);
extern void snd_pcm_access_mask_none_db(snd_pcm_access_mask_t *);
CheckInterfacedef(snd_pcm_access_mask_none,snd_pcm_access_mask_none_db);
extern void snd_pcm_access_mask_set_db(snd_pcm_access_mask_t *, snd_pcm_access_t);
CheckInterfacedef(snd_pcm_access_mask_set,snd_pcm_access_mask_set_db);
extern size_t snd_pcm_access_mask_sizeof_db(void);
CheckInterfacedef(snd_pcm_access_mask_sizeof,snd_pcm_access_mask_sizeof_db);
extern int snd_pcm_access_mask_test_db(const snd_pcm_access_mask_t *, snd_pcm_access_t);
CheckInterfacedef(snd_pcm_access_mask_test,snd_pcm_access_mask_test_db);
extern const char * snd_pcm_access_name_db(snd_pcm_access_t);
CheckInterfacedef(snd_pcm_access_name,snd_pcm_access_name_db);
extern int snd_pcm_area_copy_db(const snd_pcm_channel_area_t *, snd_pcm_uframes_t, const snd_pcm_channel_area_t *, snd_pcm_uframes_t, unsigned int, snd_pcm_format_t);
CheckInterfacedef(snd_pcm_area_copy,snd_pcm_area_copy_db);
extern int snd_pcm_area_silence_db(const snd_pcm_channel_area_t *, snd_pcm_uframes_t, unsigned int, snd_pcm_format_t);
CheckInterfacedef(snd_pcm_area_silence,snd_pcm_area_silence_db);
extern int snd_pcm_areas_copy_db(const snd_pcm_channel_area_t *, snd_pcm_uframes_t, const snd_pcm_channel_area_t *, snd_pcm_uframes_t, unsigned int, snd_pcm_uframes_t, snd_pcm_format_t);
CheckInterfacedef(snd_pcm_areas_copy,snd_pcm_areas_copy_db);
extern int snd_pcm_areas_silence_db(const snd_pcm_channel_area_t *, snd_pcm_uframes_t, unsigned int, snd_pcm_uframes_t, snd_pcm_format_t);
CheckInterfacedef(snd_pcm_areas_silence,snd_pcm_areas_silence_db);
extern snd_pcm_sframes_t snd_pcm_avail_update_db(snd_pcm_t *);
CheckInterfacedef(snd_pcm_avail_update,snd_pcm_avail_update_db);
extern snd_pcm_format_t snd_pcm_build_linear_format_db(int, int, int, int);
CheckInterfacedef(snd_pcm_build_linear_format,snd_pcm_build_linear_format_db);
extern snd_pcm_sframes_t snd_pcm_bytes_to_frames_db(snd_pcm_t *, ssize_t);
CheckInterfacedef(snd_pcm_bytes_to_frames,snd_pcm_bytes_to_frames_db);
extern long int snd_pcm_bytes_to_samples_db(snd_pcm_t *, ssize_t);
CheckInterfacedef(snd_pcm_bytes_to_samples,snd_pcm_bytes_to_samples_db);
extern int snd_pcm_close_db(snd_pcm_t *);
CheckInterfacedef(snd_pcm_close,snd_pcm_close_db);
extern int snd_pcm_delay_db(snd_pcm_t *, snd_pcm_sframes_t *);
CheckInterfacedef(snd_pcm_delay,snd_pcm_delay_db);
extern int snd_pcm_drain_db(snd_pcm_t *);
CheckInterfacedef(snd_pcm_drain,snd_pcm_drain_db);
extern int snd_pcm_drop_db(snd_pcm_t *);
CheckInterfacedef(snd_pcm_drop,snd_pcm_drop_db);
extern int snd_pcm_dump_db(snd_pcm_t *, snd_output_t *);
CheckInterfacedef(snd_pcm_dump,snd_pcm_dump_db);
extern int snd_pcm_format_big_endian_db(snd_pcm_format_t);
CheckInterfacedef(snd_pcm_format_big_endian,snd_pcm_format_big_endian_db);
extern int snd_pcm_format_cpu_endian_db(snd_pcm_format_t);
CheckInterfacedef(snd_pcm_format_cpu_endian,snd_pcm_format_cpu_endian_db);
extern const char * snd_pcm_format_description_db(snd_pcm_format_t);
CheckInterfacedef(snd_pcm_format_description,snd_pcm_format_description_db);
extern int snd_pcm_format_float_db(snd_pcm_format_t);
CheckInterfacedef(snd_pcm_format_float,snd_pcm_format_float_db);
extern int snd_pcm_format_linear_db(snd_pcm_format_t);
CheckInterfacedef(snd_pcm_format_linear,snd_pcm_format_linear_db);
extern int snd_pcm_format_little_endian_db(snd_pcm_format_t);
CheckInterfacedef(snd_pcm_format_little_endian,snd_pcm_format_little_endian_db);
extern void snd_pcm_format_mask_any_db(snd_pcm_format_mask_t *);
CheckInterfacedef(snd_pcm_format_mask_any,snd_pcm_format_mask_any_db);
extern void snd_pcm_format_mask_copy_db(snd_pcm_format_mask_t *, const snd_pcm_format_mask_t *);
CheckInterfacedef(snd_pcm_format_mask_copy,snd_pcm_format_mask_copy_db);
extern void snd_pcm_format_mask_free_db(snd_pcm_format_mask_t *);
CheckInterfacedef(snd_pcm_format_mask_free,snd_pcm_format_mask_free_db);
extern int snd_pcm_format_mask_malloc_db(snd_pcm_format_mask_t * *);
CheckInterfacedef(snd_pcm_format_mask_malloc,snd_pcm_format_mask_malloc_db);
extern void snd_pcm_format_mask_none_db(snd_pcm_format_mask_t *);
CheckInterfacedef(snd_pcm_format_mask_none,snd_pcm_format_mask_none_db);
extern void snd_pcm_format_mask_set_db(snd_pcm_format_mask_t *, snd_pcm_format_t);
CheckInterfacedef(snd_pcm_format_mask_set,snd_pcm_format_mask_set_db);
extern size_t snd_pcm_format_mask_sizeof_db(void);
CheckInterfacedef(snd_pcm_format_mask_sizeof,snd_pcm_format_mask_sizeof_db);
extern int snd_pcm_format_mask_test_db(const snd_pcm_format_mask_t *, snd_pcm_format_t);
CheckInterfacedef(snd_pcm_format_mask_test,snd_pcm_format_mask_test_db);
extern const char * snd_pcm_format_name_db(snd_pcm_format_t);
CheckInterfacedef(snd_pcm_format_name,snd_pcm_format_name_db);
extern int snd_pcm_format_physical_width_db(snd_pcm_format_t);
CheckInterfacedef(snd_pcm_format_physical_width,snd_pcm_format_physical_width_db);
extern int snd_pcm_format_set_silence_db(snd_pcm_format_t, void *, unsigned int);
CheckInterfacedef(snd_pcm_format_set_silence,snd_pcm_format_set_silence_db);
extern int snd_pcm_format_signed_db(snd_pcm_format_t);
CheckInterfacedef(snd_pcm_format_signed,snd_pcm_format_signed_db);
extern ssize_t snd_pcm_format_size_db(snd_pcm_format_t, size_t);
CheckInterfacedef(snd_pcm_format_size,snd_pcm_format_size_db);
extern int snd_pcm_format_unsigned_db(snd_pcm_format_t);
CheckInterfacedef(snd_pcm_format_unsigned,snd_pcm_format_unsigned_db);
extern snd_pcm_format_t snd_pcm_format_value_db(const char *);
CheckInterfacedef(snd_pcm_format_value,snd_pcm_format_value_db);
extern int snd_pcm_format_width_db(snd_pcm_format_t);
CheckInterfacedef(snd_pcm_format_width,snd_pcm_format_width_db);
extern ssize_t snd_pcm_frames_to_bytes_db(snd_pcm_t *, snd_pcm_sframes_t);
CheckInterfacedef(snd_pcm_frames_to_bytes,snd_pcm_frames_to_bytes_db);
extern int snd_pcm_hw_free_db(snd_pcm_t *);
CheckInterfacedef(snd_pcm_hw_free,snd_pcm_hw_free_db);
extern int snd_pcm_hw_params_db(snd_pcm_t *, snd_pcm_hw_params_t *);
CheckInterfacedef(snd_pcm_hw_params,snd_pcm_hw_params_db);
extern int snd_pcm_hw_params_any_db(snd_pcm_t *, snd_pcm_hw_params_t *);
CheckInterfacedef(snd_pcm_hw_params_any,snd_pcm_hw_params_any_db);
extern int snd_pcm_hw_params_can_mmap_sample_resolution_db(const snd_pcm_hw_params_t *);
CheckInterfacedef(snd_pcm_hw_params_can_mmap_sample_resolution,snd_pcm_hw_params_can_mmap_sample_resolution_db);
extern int snd_pcm_hw_params_can_pause_db(const snd_pcm_hw_params_t *);
CheckInterfacedef(snd_pcm_hw_params_can_pause,snd_pcm_hw_params_can_pause_db);
extern int snd_pcm_hw_params_can_resume_db(const snd_pcm_hw_params_t *);
CheckInterfacedef(snd_pcm_hw_params_can_resume,snd_pcm_hw_params_can_resume_db);
extern int snd_pcm_hw_params_can_sync_start_db(const snd_pcm_hw_params_t *);
CheckInterfacedef(snd_pcm_hw_params_can_sync_start,snd_pcm_hw_params_can_sync_start_db);
extern void snd_pcm_hw_params_copy_db(snd_pcm_hw_params_t *, const snd_pcm_hw_params_t *);
CheckInterfacedef(snd_pcm_hw_params_copy,snd_pcm_hw_params_copy_db);
extern int snd_pcm_hw_params_current_db(snd_pcm_t *, snd_pcm_hw_params_t *);
CheckInterfacedef(snd_pcm_hw_params_current,snd_pcm_hw_params_current_db);
extern int snd_pcm_hw_params_dump_db(snd_pcm_hw_params_t *, snd_output_t *);
CheckInterfacedef(snd_pcm_hw_params_dump,snd_pcm_hw_params_dump_db);
extern void snd_pcm_hw_params_free_db(snd_pcm_hw_params_t *);
CheckInterfacedef(snd_pcm_hw_params_free,snd_pcm_hw_params_free_db);
extern int snd_pcm_hw_params_get_access_mask_db(snd_pcm_hw_params_t *, snd_pcm_access_mask_t *);
CheckInterfacedef(snd_pcm_hw_params_get_access_mask,snd_pcm_hw_params_get_access_mask_db);
extern void snd_pcm_hw_params_get_format_mask_db(snd_pcm_hw_params_t *, snd_pcm_format_mask_t *);
CheckInterfacedef(snd_pcm_hw_params_get_format_mask,snd_pcm_hw_params_get_format_mask_db);
extern int snd_pcm_hw_params_get_rate_numden_db(const snd_pcm_hw_params_t *, unsigned int *, unsigned int *);
CheckInterfacedef(snd_pcm_hw_params_get_rate_numden,snd_pcm_hw_params_get_rate_numden_db);
extern int snd_pcm_hw_params_get_rate_resample_db(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *);
CheckInterfacedef(snd_pcm_hw_params_get_rate_resample,snd_pcm_hw_params_get_rate_resample_db);
extern int snd_pcm_hw_params_get_sbits_db(const snd_pcm_hw_params_t *);
CheckInterfacedef(snd_pcm_hw_params_get_sbits,snd_pcm_hw_params_get_sbits_db);
extern int snd_pcm_hw_params_is_double_db(const snd_pcm_hw_params_t *);
CheckInterfacedef(snd_pcm_hw_params_is_double,snd_pcm_hw_params_is_double_db);
extern int snd_pcm_hw_params_is_half_duplex_db(const snd_pcm_hw_params_t *);
CheckInterfacedef(snd_pcm_hw_params_is_half_duplex,snd_pcm_hw_params_is_half_duplex_db);
extern int snd_pcm_hw_params_is_joint_duplex_db(const snd_pcm_hw_params_t *);
CheckInterfacedef(snd_pcm_hw_params_is_joint_duplex,snd_pcm_hw_params_is_joint_duplex_db);
extern int snd_pcm_hw_params_malloc_db(snd_pcm_hw_params_t * *);
CheckInterfacedef(snd_pcm_hw_params_malloc,snd_pcm_hw_params_malloc_db);
extern int snd_pcm_hw_params_set_access_db(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_access_t);
CheckInterfacedef(snd_pcm_hw_params_set_access,snd_pcm_hw_params_set_access_db);
extern int snd_pcm_hw_params_set_access_mask_db(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_access_mask_t *);
CheckInterfacedef(snd_pcm_hw_params_set_access_mask,snd_pcm_hw_params_set_access_mask_db);
extern int snd_pcm_hw_params_set_buffer_size_db(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t);
CheckInterfacedef(snd_pcm_hw_params_set_buffer_size,snd_pcm_hw_params_set_buffer_size_db);
extern int snd_pcm_hw_params_set_buffer_time_db(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int, int);
CheckInterfacedef(snd_pcm_hw_params_set_buffer_time,snd_pcm_hw_params_set_buffer_time_db);
extern int snd_pcm_hw_params_set_channels_db(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int);
CheckInterfacedef(snd_pcm_hw_params_set_channels,snd_pcm_hw_params_set_channels_db);
extern int snd_pcm_hw_params_set_format_db(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_format_t);
CheckInterfacedef(snd_pcm_hw_params_set_format,snd_pcm_hw_params_set_format_db);
extern int snd_pcm_hw_params_set_format_mask_db(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_format_mask_t *);
CheckInterfacedef(snd_pcm_hw_params_set_format_mask,snd_pcm_hw_params_set_format_mask_db);
extern int snd_pcm_hw_params_set_period_size_db(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t, int);
CheckInterfacedef(snd_pcm_hw_params_set_period_size,snd_pcm_hw_params_set_period_size_db);
extern int snd_pcm_hw_params_set_period_time_db(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int, int);
CheckInterfacedef(snd_pcm_hw_params_set_period_time,snd_pcm_hw_params_set_period_time_db);
extern int snd_pcm_hw_params_set_periods_db(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int, int);
CheckInterfacedef(snd_pcm_hw_params_set_periods,snd_pcm_hw_params_set_periods_db);
extern int snd_pcm_hw_params_set_periods_integer_db(snd_pcm_t *, snd_pcm_hw_params_t *);
CheckInterfacedef(snd_pcm_hw_params_set_periods_integer,snd_pcm_hw_params_set_periods_integer_db);
extern int snd_pcm_hw_params_set_rate_db(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int, int);
CheckInterfacedef(snd_pcm_hw_params_set_rate,snd_pcm_hw_params_set_rate_db);
extern int snd_pcm_hw_params_set_rate_resample_db(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int);
CheckInterfacedef(snd_pcm_hw_params_set_rate_resample,snd_pcm_hw_params_set_rate_resample_db);
extern size_t snd_pcm_hw_params_sizeof_db(void);
CheckInterfacedef(snd_pcm_hw_params_sizeof,snd_pcm_hw_params_sizeof_db);
extern int snd_pcm_hw_params_test_access_db(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_access_t);
CheckInterfacedef(snd_pcm_hw_params_test_access,snd_pcm_hw_params_test_access_db);
extern int snd_pcm_hw_params_test_buffer_size_db(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t);
CheckInterfacedef(snd_pcm_hw_params_test_buffer_size,snd_pcm_hw_params_test_buffer_size_db);
extern int snd_pcm_hw_params_test_buffer_time_db(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int, int);
CheckInterfacedef(snd_pcm_hw_params_test_buffer_time,snd_pcm_hw_params_test_buffer_time_db);
extern int snd_pcm_hw_params_test_channels_db(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int);
CheckInterfacedef(snd_pcm_hw_params_test_channels,snd_pcm_hw_params_test_channels_db);
extern int snd_pcm_hw_params_test_format_db(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_format_t);
CheckInterfacedef(snd_pcm_hw_params_test_format,snd_pcm_hw_params_test_format_db);
extern int snd_pcm_hw_params_test_period_size_db(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t, int);
CheckInterfacedef(snd_pcm_hw_params_test_period_size,snd_pcm_hw_params_test_period_size_db);
extern int snd_pcm_hw_params_test_period_time_db(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int, int);
CheckInterfacedef(snd_pcm_hw_params_test_period_time,snd_pcm_hw_params_test_period_time_db);
extern int snd_pcm_hw_params_test_periods_db(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int, int);
CheckInterfacedef(snd_pcm_hw_params_test_periods,snd_pcm_hw_params_test_periods_db);
extern int snd_pcm_hw_params_test_rate_db(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int, int);
CheckInterfacedef(snd_pcm_hw_params_test_rate,snd_pcm_hw_params_test_rate_db);
extern int snd_pcm_hwsync_db(snd_pcm_t *);
CheckInterfacedef(snd_pcm_hwsync,snd_pcm_hwsync_db);
extern int snd_pcm_info_db(snd_pcm_t *, snd_pcm_info_t *);
CheckInterfacedef(snd_pcm_info,snd_pcm_info_db);
extern void snd_pcm_info_copy_db(snd_pcm_info_t *, const snd_pcm_info_t *);
CheckInterfacedef(snd_pcm_info_copy,snd_pcm_info_copy_db);
extern void snd_pcm_info_free_db(snd_pcm_info_t *);
CheckInterfacedef(snd_pcm_info_free,snd_pcm_info_free_db);
extern int snd_pcm_info_get_card_db(const snd_pcm_info_t *);
CheckInterfacedef(snd_pcm_info_get_card,snd_pcm_info_get_card_db);
extern snd_pcm_class_t snd_pcm_info_get_class_db(const snd_pcm_info_t *);
CheckInterfacedef(snd_pcm_info_get_class,snd_pcm_info_get_class_db);
extern unsigned int snd_pcm_info_get_device_db(const snd_pcm_info_t *);
CheckInterfacedef(snd_pcm_info_get_device,snd_pcm_info_get_device_db);
extern const char * snd_pcm_info_get_id_db(const snd_pcm_info_t *);
CheckInterfacedef(snd_pcm_info_get_id,snd_pcm_info_get_id_db);
extern const char * snd_pcm_info_get_name_db(const snd_pcm_info_t *);
CheckInterfacedef(snd_pcm_info_get_name,snd_pcm_info_get_name_db);
extern snd_pcm_stream_t snd_pcm_info_get_stream_db(const snd_pcm_info_t *);
CheckInterfacedef(snd_pcm_info_get_stream,snd_pcm_info_get_stream_db);
extern unsigned int snd_pcm_info_get_subdevice_db(const snd_pcm_info_t *);
CheckInterfacedef(snd_pcm_info_get_subdevice,snd_pcm_info_get_subdevice_db);
extern const char * snd_pcm_info_get_subdevice_name_db(const snd_pcm_info_t *);
CheckInterfacedef(snd_pcm_info_get_subdevice_name,snd_pcm_info_get_subdevice_name_db);
extern unsigned int snd_pcm_info_get_subdevices_avail_db(const snd_pcm_info_t *);
CheckInterfacedef(snd_pcm_info_get_subdevices_avail,snd_pcm_info_get_subdevices_avail_db);
extern unsigned int snd_pcm_info_get_subdevices_count_db(const snd_pcm_info_t *);
CheckInterfacedef(snd_pcm_info_get_subdevices_count,snd_pcm_info_get_subdevices_count_db);
extern int snd_pcm_info_malloc_db(snd_pcm_info_t * *);
CheckInterfacedef(snd_pcm_info_malloc,snd_pcm_info_malloc_db);
extern void snd_pcm_info_set_device_db(snd_pcm_info_t *, unsigned int);
CheckInterfacedef(snd_pcm_info_set_device,snd_pcm_info_set_device_db);
extern void snd_pcm_info_set_stream_db(snd_pcm_info_t *, snd_pcm_stream_t);
CheckInterfacedef(snd_pcm_info_set_stream,snd_pcm_info_set_stream_db);
extern void snd_pcm_info_set_subdevice_db(snd_pcm_info_t *, unsigned int);
CheckInterfacedef(snd_pcm_info_set_subdevice,snd_pcm_info_set_subdevice_db);
extern size_t snd_pcm_info_sizeof_db(void);
CheckInterfacedef(snd_pcm_info_sizeof,snd_pcm_info_sizeof_db);
extern int snd_pcm_link_db(snd_pcm_t *, snd_pcm_t *);
CheckInterfacedef(snd_pcm_link,snd_pcm_link_db);
extern int snd_pcm_mmap_begin_db(snd_pcm_t *, const snd_pcm_channel_area_t * *, snd_pcm_uframes_t *, snd_pcm_uframes_t *);
CheckInterfacedef(snd_pcm_mmap_begin,snd_pcm_mmap_begin_db);
extern snd_pcm_sframes_t snd_pcm_mmap_commit_db(snd_pcm_t *, snd_pcm_uframes_t, snd_pcm_uframes_t);
CheckInterfacedef(snd_pcm_mmap_commit,snd_pcm_mmap_commit_db);
extern snd_pcm_sframes_t snd_pcm_mmap_readi_db(snd_pcm_t *, void *, snd_pcm_uframes_t);
CheckInterfacedef(snd_pcm_mmap_readi,snd_pcm_mmap_readi_db);
extern snd_pcm_sframes_t snd_pcm_mmap_readn_db(snd_pcm_t *, void * *, snd_pcm_uframes_t);
CheckInterfacedef(snd_pcm_mmap_readn,snd_pcm_mmap_readn_db);
extern snd_pcm_sframes_t snd_pcm_mmap_writei_db(snd_pcm_t *, const void *, snd_pcm_uframes_t);
CheckInterfacedef(snd_pcm_mmap_writei,snd_pcm_mmap_writei_db);
extern snd_pcm_sframes_t snd_pcm_mmap_writen_db(snd_pcm_t *, void * *, snd_pcm_uframes_t);
CheckInterfacedef(snd_pcm_mmap_writen,snd_pcm_mmap_writen_db);
extern const char * snd_pcm_name_db(snd_pcm_t *);
CheckInterfacedef(snd_pcm_name,snd_pcm_name_db);
extern int snd_pcm_nonblock_db(snd_pcm_t *, int);
CheckInterfacedef(snd_pcm_nonblock,snd_pcm_nonblock_db);
extern int snd_pcm_open_db(snd_pcm_t * *, const char *, snd_pcm_stream_t, int);
CheckInterfacedef(snd_pcm_open,snd_pcm_open_db);
extern int snd_pcm_open_lconf_db(snd_pcm_t * *, const char *, snd_pcm_stream_t, int, snd_config_t *);
CheckInterfacedef(snd_pcm_open_lconf,snd_pcm_open_lconf_db);
extern int snd_pcm_pause_db(snd_pcm_t *, int);
CheckInterfacedef(snd_pcm_pause,snd_pcm_pause_db);
extern int snd_pcm_poll_descriptors_db(snd_pcm_t *, struct pollfd *, unsigned int);
CheckInterfacedef(snd_pcm_poll_descriptors,snd_pcm_poll_descriptors_db);
extern int snd_pcm_poll_descriptors_count_db(snd_pcm_t *);
CheckInterfacedef(snd_pcm_poll_descriptors_count,snd_pcm_poll_descriptors_count_db);
extern int snd_pcm_poll_descriptors_revents_db(snd_pcm_t *, struct pollfd *, unsigned int, short unsigned int *);
CheckInterfacedef(snd_pcm_poll_descriptors_revents,snd_pcm_poll_descriptors_revents_db);
extern int snd_pcm_prepare_db(snd_pcm_t *);
CheckInterfacedef(snd_pcm_prepare,snd_pcm_prepare_db);
extern snd_pcm_sframes_t snd_pcm_readi_db(snd_pcm_t *, void *, snd_pcm_uframes_t);
CheckInterfacedef(snd_pcm_readi,snd_pcm_readi_db);
extern snd_pcm_sframes_t snd_pcm_readn_db(snd_pcm_t *, void * *, snd_pcm_uframes_t);
CheckInterfacedef(snd_pcm_readn,snd_pcm_readn_db);
extern int snd_pcm_recover_db(snd_pcm_t *, int, int);
CheckInterfacedef(snd_pcm_recover,snd_pcm_recover_db);
extern int snd_pcm_reset_db(snd_pcm_t *);
CheckInterfacedef(snd_pcm_reset,snd_pcm_reset_db);
extern int snd_pcm_resume_db(snd_pcm_t *);
CheckInterfacedef(snd_pcm_resume,snd_pcm_resume_db);
extern snd_pcm_sframes_t snd_pcm_rewind_db(snd_pcm_t *, snd_pcm_uframes_t);
CheckInterfacedef(snd_pcm_rewind,snd_pcm_rewind_db);
extern ssize_t snd_pcm_samples_to_bytes_db(snd_pcm_t *, long int);
CheckInterfacedef(snd_pcm_samples_to_bytes,snd_pcm_samples_to_bytes_db);
extern int snd_pcm_start_db(snd_pcm_t *);
CheckInterfacedef(snd_pcm_start,snd_pcm_start_db);
extern snd_pcm_state_t snd_pcm_state_db(snd_pcm_t *);
CheckInterfacedef(snd_pcm_state,snd_pcm_state_db);
extern const char * snd_pcm_state_name_db(snd_pcm_state_t);
CheckInterfacedef(snd_pcm_state_name,snd_pcm_state_name_db);
extern int snd_pcm_status_db(snd_pcm_t *, snd_pcm_status_t *);
CheckInterfacedef(snd_pcm_status,snd_pcm_status_db);
extern void snd_pcm_status_copy_db(snd_pcm_status_t *, const snd_pcm_status_t *);
CheckInterfacedef(snd_pcm_status_copy,snd_pcm_status_copy_db);
extern int snd_pcm_status_dump_db(snd_pcm_status_t *, snd_output_t *);
CheckInterfacedef(snd_pcm_status_dump,snd_pcm_status_dump_db);
extern void snd_pcm_status_free_db(snd_pcm_status_t *);
CheckInterfacedef(snd_pcm_status_free,snd_pcm_status_free_db);
extern snd_pcm_uframes_t snd_pcm_status_get_avail_db(const snd_pcm_status_t *);
CheckInterfacedef(snd_pcm_status_get_avail,snd_pcm_status_get_avail_db);
extern snd_pcm_uframes_t snd_pcm_status_get_avail_max_db(const snd_pcm_status_t *);
CheckInterfacedef(snd_pcm_status_get_avail_max,snd_pcm_status_get_avail_max_db);
extern snd_pcm_sframes_t snd_pcm_status_get_delay_db(const snd_pcm_status_t *);
CheckInterfacedef(snd_pcm_status_get_delay,snd_pcm_status_get_delay_db);
extern snd_pcm_state_t snd_pcm_status_get_state_db(const snd_pcm_status_t *);
CheckInterfacedef(snd_pcm_status_get_state,snd_pcm_status_get_state_db);
extern void snd_pcm_status_get_trigger_tstamp_db(const snd_pcm_status_t *, snd_timestamp_t *);
CheckInterfacedef(snd_pcm_status_get_trigger_tstamp,snd_pcm_status_get_trigger_tstamp_db);
extern void snd_pcm_status_get_tstamp_db(const snd_pcm_status_t *, snd_timestamp_t *);
CheckInterfacedef(snd_pcm_status_get_tstamp,snd_pcm_status_get_tstamp_db);
extern int snd_pcm_status_malloc_db(snd_pcm_status_t * *);
CheckInterfacedef(snd_pcm_status_malloc,snd_pcm_status_malloc_db);
extern size_t snd_pcm_status_sizeof_db(void);
CheckInterfacedef(snd_pcm_status_sizeof,snd_pcm_status_sizeof_db);
extern snd_pcm_stream_t snd_pcm_stream_db(snd_pcm_t *);
CheckInterfacedef(snd_pcm_stream,snd_pcm_stream_db);
extern const char * snd_pcm_stream_name_db(snd_pcm_stream_t);
CheckInterfacedef(snd_pcm_stream_name,snd_pcm_stream_name_db);
extern int snd_pcm_sw_params_db(snd_pcm_t *, snd_pcm_sw_params_t *);
CheckInterfacedef(snd_pcm_sw_params,snd_pcm_sw_params_db);
extern void snd_pcm_sw_params_copy_db(snd_pcm_sw_params_t *, const snd_pcm_sw_params_t *);
CheckInterfacedef(snd_pcm_sw_params_copy,snd_pcm_sw_params_copy_db);
extern int snd_pcm_sw_params_current_db(snd_pcm_t *, snd_pcm_sw_params_t *);
CheckInterfacedef(snd_pcm_sw_params_current,snd_pcm_sw_params_current_db);
extern int snd_pcm_sw_params_dump_db(snd_pcm_sw_params_t *, snd_output_t *);
CheckInterfacedef(snd_pcm_sw_params_dump,snd_pcm_sw_params_dump_db);
extern void snd_pcm_sw_params_free_db(snd_pcm_sw_params_t *);
CheckInterfacedef(snd_pcm_sw_params_free,snd_pcm_sw_params_free_db);
extern int snd_pcm_sw_params_get_boundary_db(const snd_pcm_sw_params_t *, snd_pcm_uframes_t *);
CheckInterfacedef(snd_pcm_sw_params_get_boundary,snd_pcm_sw_params_get_boundary_db);
extern int snd_pcm_sw_params_malloc_db(snd_pcm_sw_params_t * *);
CheckInterfacedef(snd_pcm_sw_params_malloc,snd_pcm_sw_params_malloc_db);
extern int snd_pcm_sw_params_set_avail_min_db(snd_pcm_t *, snd_pcm_sw_params_t *, snd_pcm_uframes_t);
CheckInterfacedef(snd_pcm_sw_params_set_avail_min,snd_pcm_sw_params_set_avail_min_db);
extern int snd_pcm_sw_params_set_silence_size_db(snd_pcm_t *, snd_pcm_sw_params_t *, snd_pcm_uframes_t);
CheckInterfacedef(snd_pcm_sw_params_set_silence_size,snd_pcm_sw_params_set_silence_size_db);
extern int snd_pcm_sw_params_set_silence_threshold_db(snd_pcm_t *, snd_pcm_sw_params_t *, snd_pcm_uframes_t);
CheckInterfacedef(snd_pcm_sw_params_set_silence_threshold,snd_pcm_sw_params_set_silence_threshold_db);
extern int snd_pcm_sw_params_set_start_threshold_db(snd_pcm_t *, snd_pcm_sw_params_t *, snd_pcm_uframes_t);
CheckInterfacedef(snd_pcm_sw_params_set_start_threshold,snd_pcm_sw_params_set_start_threshold_db);
extern int snd_pcm_sw_params_set_stop_threshold_db(snd_pcm_t *, snd_pcm_sw_params_t *, snd_pcm_uframes_t);
CheckInterfacedef(snd_pcm_sw_params_set_stop_threshold,snd_pcm_sw_params_set_stop_threshold_db);
extern int snd_pcm_sw_params_set_tstamp_mode_db(snd_pcm_t *, snd_pcm_sw_params_t *, snd_pcm_tstamp_t);
CheckInterfacedef(snd_pcm_sw_params_set_tstamp_mode,snd_pcm_sw_params_set_tstamp_mode_db);
extern int snd_pcm_sw_params_set_xfer_align_db(snd_pcm_t *, snd_pcm_sw_params_t *, snd_pcm_uframes_t);
CheckInterfacedef(snd_pcm_sw_params_set_xfer_align,snd_pcm_sw_params_set_xfer_align_db);
extern size_t snd_pcm_sw_params_sizeof_db(void);
CheckInterfacedef(snd_pcm_sw_params_sizeof,snd_pcm_sw_params_sizeof_db);
extern snd_pcm_type_t snd_pcm_type_db(snd_pcm_t *);
CheckInterfacedef(snd_pcm_type,snd_pcm_type_db);
extern int snd_pcm_unlink_db(snd_pcm_t *);
CheckInterfacedef(snd_pcm_unlink,snd_pcm_unlink_db);
extern int snd_pcm_wait_db(snd_pcm_t *, int);
CheckInterfacedef(snd_pcm_wait,snd_pcm_wait_db);
extern snd_pcm_sframes_t snd_pcm_writei_db(snd_pcm_t *, const void *, snd_pcm_uframes_t);
CheckInterfacedef(snd_pcm_writei,snd_pcm_writei_db);
extern snd_pcm_sframes_t snd_pcm_writen_db(snd_pcm_t *, void * *, snd_pcm_uframes_t);
CheckInterfacedef(snd_pcm_writen,snd_pcm_writen_db);
extern int snd_pcm_hw_params_get_rate_min_db(const snd_pcm_hw_params_t *, unsigned int *, int *);
CheckInterfacedef(snd_pcm_hw_params_get_rate_min,snd_pcm_hw_params_get_rate_min_db);
extern int snd_pcm_sw_params_get_avail_min_db(const snd_pcm_sw_params_t *, snd_pcm_uframes_t *);
CheckInterfacedef(snd_pcm_sw_params_get_avail_min,snd_pcm_sw_params_get_avail_min_db);
extern int snd_pcm_hw_params_get_period_time_db(const snd_pcm_hw_params_t *, unsigned int *, int *);
CheckInterfacedef(snd_pcm_hw_params_get_period_time,snd_pcm_hw_params_get_period_time_db);
extern int snd_pcm_hw_params_set_buffer_time_near_db(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
CheckInterfacedef(snd_pcm_hw_params_set_buffer_time_near,snd_pcm_hw_params_set_buffer_time_near_db);
extern int snd_pcm_hw_params_get_format_db(const snd_pcm_hw_params_t *, snd_pcm_format_t *);
CheckInterfacedef(snd_pcm_hw_params_get_format,snd_pcm_hw_params_get_format_db);
extern int snd_pcm_hw_params_get_channels_min_db(const snd_pcm_hw_params_t *, unsigned int *);
CheckInterfacedef(snd_pcm_hw_params_get_channels_min,snd_pcm_hw_params_get_channels_min_db);
extern int snd_pcm_sw_params_get_start_threshold_db(const snd_pcm_sw_params_t *, snd_pcm_uframes_t *);
CheckInterfacedef(snd_pcm_sw_params_get_start_threshold,snd_pcm_sw_params_get_start_threshold_db);
extern int snd_pcm_hw_params_set_period_time_near_db(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
CheckInterfacedef(snd_pcm_hw_params_set_period_time_near,snd_pcm_hw_params_set_period_time_near_db);
extern int snd_pcm_hw_params_set_channels_near_db(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *);
CheckInterfacedef(snd_pcm_hw_params_set_channels_near,snd_pcm_hw_params_set_channels_near_db);
extern int snd_pcm_hw_params_get_rate_max_db(const snd_pcm_hw_params_t *, unsigned int *, int *);
CheckInterfacedef(snd_pcm_hw_params_get_rate_max,snd_pcm_hw_params_get_rate_max_db);
extern int snd_pcm_hw_params_get_period_size_db(const snd_pcm_hw_params_t *, snd_pcm_uframes_t *, int *);
CheckInterfacedef(snd_pcm_hw_params_get_period_size,snd_pcm_hw_params_get_period_size_db);
extern int snd_pcm_hw_params_get_period_time_max_db(const snd_pcm_hw_params_t *, unsigned int *, int *);
CheckInterfacedef(snd_pcm_hw_params_get_period_time_max,snd_pcm_hw_params_get_period_time_max_db);
extern int snd_pcm_hw_params_get_buffer_size_db(const snd_pcm_hw_params_t *, snd_pcm_uframes_t *);
CheckInterfacedef(snd_pcm_hw_params_get_buffer_size,snd_pcm_hw_params_get_buffer_size_db);
extern int snd_pcm_sw_params_get_silence_threshold_db(const snd_pcm_sw_params_t *, snd_pcm_uframes_t *);
CheckInterfacedef(snd_pcm_sw_params_get_silence_threshold,snd_pcm_sw_params_get_silence_threshold_db);
extern int snd_pcm_hw_params_get_access_db(const snd_pcm_hw_params_t *, snd_pcm_access_t *);
CheckInterfacedef(snd_pcm_hw_params_get_access,snd_pcm_hw_params_get_access_db);
extern int snd_pcm_hw_params_get_buffer_time_min_db(const snd_pcm_hw_params_t *, unsigned int *, int *);
CheckInterfacedef(snd_pcm_hw_params_get_buffer_time_min,snd_pcm_hw_params_get_buffer_time_min_db);
extern int snd_pcm_hw_params_get_buffer_time_db(const snd_pcm_hw_params_t *, unsigned int *, int *);
CheckInterfacedef(snd_pcm_hw_params_get_buffer_time,snd_pcm_hw_params_get_buffer_time_db);
extern int snd_pcm_hw_params_get_rate_db(const snd_pcm_hw_params_t *, unsigned int *, int *);
CheckInterfacedef(snd_pcm_hw_params_get_rate,snd_pcm_hw_params_get_rate_db);
extern int snd_pcm_sw_params_get_stop_threshold_db(const snd_pcm_sw_params_t *, snd_pcm_uframes_t *);
CheckInterfacedef(snd_pcm_sw_params_get_stop_threshold,snd_pcm_sw_params_get_stop_threshold_db);
extern int snd_pcm_hw_params_get_period_size_max_db(const snd_pcm_hw_params_t *, snd_pcm_uframes_t *, int *);
CheckInterfacedef(snd_pcm_hw_params_get_period_size_max,snd_pcm_hw_params_get_period_size_max_db);
extern int snd_pcm_hw_params_get_buffer_size_min_db(const snd_pcm_hw_params_t *, snd_pcm_uframes_t *);
CheckInterfacedef(snd_pcm_hw_params_get_buffer_size_min,snd_pcm_hw_params_get_buffer_size_min_db);
extern const char * snd_pcm_type_name_db(snd_pcm_type_t);
CheckInterfacedef(snd_pcm_type_name,snd_pcm_type_name_db);
extern int snd_pcm_sw_params_get_silence_size_db(const snd_pcm_sw_params_t *, snd_pcm_uframes_t *);
CheckInterfacedef(snd_pcm_sw_params_get_silence_size,snd_pcm_sw_params_get_silence_size_db);
extern int snd_pcm_hw_params_get_periods_db(const snd_pcm_hw_params_t *, unsigned int *, int *);
CheckInterfacedef(snd_pcm_hw_params_get_periods,snd_pcm_hw_params_get_periods_db);
extern int snd_pcm_hw_params_get_buffer_size_max_db(const snd_pcm_hw_params_t *, snd_pcm_uframes_t *);
CheckInterfacedef(snd_pcm_hw_params_get_buffer_size_max,snd_pcm_hw_params_get_buffer_size_max_db);
extern int snd_pcm_sw_params_get_tstamp_mode_db(const snd_pcm_sw_params_t *, snd_pcm_tstamp_t *);
CheckInterfacedef(snd_pcm_sw_params_get_tstamp_mode,snd_pcm_sw_params_get_tstamp_mode_db);
extern int snd_pcm_hw_params_set_period_size_near_db(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t *, int *);
CheckInterfacedef(snd_pcm_hw_params_set_period_size_near,snd_pcm_hw_params_set_period_size_near_db);
extern int snd_pcm_hw_params_get_buffer_time_max_db(const snd_pcm_hw_params_t *, unsigned int *, int *);
CheckInterfacedef(snd_pcm_hw_params_get_buffer_time_max,snd_pcm_hw_params_get_buffer_time_max_db);
extern int snd_pcm_hw_params_get_period_time_min_db(const snd_pcm_hw_params_t *, unsigned int *, int *);
CheckInterfacedef(snd_pcm_hw_params_get_period_time_min,snd_pcm_hw_params_get_period_time_min_db);
extern int snd_pcm_hw_params_set_periods_near_db(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
CheckInterfacedef(snd_pcm_hw_params_set_periods_near,snd_pcm_hw_params_set_periods_near_db);
extern snd_pcm_sframes_t snd_pcm_forward_db(snd_pcm_t *, snd_pcm_uframes_t);
CheckInterfacedef(snd_pcm_forward,snd_pcm_forward_db);
extern int snd_pcm_hw_params_set_rate_near_db(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
CheckInterfacedef(snd_pcm_hw_params_set_rate_near,snd_pcm_hw_params_set_rate_near_db);
extern int snd_pcm_hw_params_get_period_size_min_db(const snd_pcm_hw_params_t *, snd_pcm_uframes_t *, int *);
CheckInterfacedef(snd_pcm_hw_params_get_period_size_min,snd_pcm_hw_params_get_period_size_min_db);
extern int snd_pcm_hw_params_get_periods_min_db(const snd_pcm_hw_params_t *, unsigned int *, int *);
CheckInterfacedef(snd_pcm_hw_params_get_periods_min,snd_pcm_hw_params_get_periods_min_db);
extern int snd_pcm_hw_params_get_channels_db(const snd_pcm_hw_params_t *, unsigned int *);
CheckInterfacedef(snd_pcm_hw_params_get_channels,snd_pcm_hw_params_get_channels_db);
extern int snd_pcm_hw_params_get_channels_max_db(const snd_pcm_hw_params_t *, unsigned int *);
CheckInterfacedef(snd_pcm_hw_params_get_channels_max,snd_pcm_hw_params_get_channels_max_db);
extern int snd_pcm_hw_params_get_periods_max_db(const snd_pcm_hw_params_t *, unsigned int *, int *);
CheckInterfacedef(snd_pcm_hw_params_get_periods_max,snd_pcm_hw_params_get_periods_max_db);
extern int snd_pcm_hw_params_set_buffer_size_near_db(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t *);
CheckInterfacedef(snd_pcm_hw_params_set_buffer_size_near,snd_pcm_hw_params_set_buffer_size_near_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/pcm.h\n\n",pcnt,cnt);
return cnt;
#endif

}
