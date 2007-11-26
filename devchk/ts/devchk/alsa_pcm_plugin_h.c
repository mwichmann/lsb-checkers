/*
 * Test of alsa/pcm_plugin.h
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
#include "alsa/pcm_plugin.h"



#ifdef TET_TEST
void alsa_pcm_plugin_h()
{
#else
int alsa_pcm_plugin_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in alsa/pcm_plugin.h\n");
#endif

printf("Checking data structures in alsa/pcm_plugin.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SND_PCM_PLUGIN_RATE_MIN
	CompareConstant(SND_PCM_PLUGIN_RATE_MIN,4000,11204,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_PLUGIN_RATE_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_PCM_PLUGIN_RATE_MAX
	CompareConstant(SND_PCM_PLUGIN_RATE_MAX,192000,11205,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_PLUGIN_RATE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_PCM_PLUGIN_ROUTE_FLOAT
	CompareConstant(SND_PCM_PLUGIN_ROUTE_FLOAT,1,11206,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_PLUGIN_ROUTE_FLOAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_PCM_PLUGIN_ROUTE_RESOLUTION
	CompareConstant(SND_PCM_PLUGIN_ROUTE_RESOLUTION,16,11207,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_PLUGIN_ROUTE_RESOLUTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_PCM_PLUGIN_ROUTE_HALF
	CompareConstant(SND_PCM_PLUGIN_ROUTE_HALF,0.5,11208,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_PLUGIN_ROUTE_HALF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_PCM_PLUGIN_ROUTE_FULL
	CompareConstant(SND_PCM_PLUGIN_ROUTE_FULL,1.0,11209,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_PLUGIN_ROUTE_FULL\n");
cnt++;
#endif

#endif

#if defined __x86_64__
CheckTypeSize(snd_pcm_route_ttable_entry_t,4, 27633, 11, 3.2, NULL, 12, NULL)
#else
Msg("Find size of snd_pcm_route_ttable_entry_t (27633)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,12, NULL);\n",architecture,27633,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/pcm_plugin.h\n\n",pcnt,cnt);
return cnt;
#endif

}
