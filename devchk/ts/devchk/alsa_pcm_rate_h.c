/*
 * Test of alsa/pcm_rate.h
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
#include "alsa/pcm_rate.h"



#ifdef TET_TEST
void alsa_pcm_rate_h()
{
#else
int alsa_pcm_rate_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in alsa/pcm_rate.h\n");
#endif

printf("Checking data structures in alsa/pcm_rate.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SND_PCM_RATE_PLUGIN_VERSION
	CompareConstant(SND_PCM_RATE_PLUGIN_VERSION,0x010001,11367,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_RATE_PLUGIN_VERSION\n");
cnt++;
#endif

#endif

#if defined __x86_64__
CheckTypeSize(snd_pcm_rate_ops_t,72, 27617, 11, 3.2, NULL, 27615, NULL)
#else
Msg("Find size of snd_pcm_rate_ops_t (27617)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27615, NULL);\n",architecture,27617,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/pcm_rate.h\n\n",pcnt,cnt);
return cnt;
#endif

}
