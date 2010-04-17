/*
 * Test of alsa/pcm_extplug.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include <alsa/global.h>
#include <alsa/output.h>
#include <alsa/input.h>
#include <alsa/conf.h>
#include <alsa/hwdep.h>
#include <alsa/pcm.h>
#include <alsa/rawmidi.h>
#include <alsa/control.h>
#include "alsa/pcm_extplug.h"



#ifdef TET_TEST
void alsa_pcm_extplug_h()
{
#else
int alsa_pcm_extplug_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in alsa/pcm_extplug.h\n");
#endif

printf("Checking data structures in alsa/pcm_extplug.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SND_PCM_EXTPLUG_VERSION_MAJOR
	CompareConstant(SND_PCM_EXTPLUG_VERSION_MAJOR,1,11877,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_EXTPLUG_VERSION_MAJOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_PCM_EXTPLUG_VERSION_MINOR
	CompareConstant(SND_PCM_EXTPLUG_VERSION_MINOR,0,11878,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_EXTPLUG_VERSION_MINOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_PCM_EXTPLUG_VERSION_TINY
	CompareConstant(SND_PCM_EXTPLUG_VERSION_TINY,1,11879,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_EXTPLUG_VERSION_TINY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_PCM_EXTPLUG_VERSION
	CompareConstant(SND_PCM_EXTPLUG_VERSION,((SND_PCM_EXTPLUG_VERSION_MAJOR<<16) | (SND_PCM_EXTPLUG_VERSION_MINOR<<8) | (SND_PCM_EXTPLUG_VERSION_TINY)),11880,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_EXTPLUG_VERSION\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(struct snd_pcm_extplug,0, 27525, 1, , NULL, 0, NULL)
Msg("Missing member data for snd_pcm_extplug on All\n");
CheckOffset(struct snd_pcm_extplug,version,0,1,75112)
CheckOffset(struct snd_pcm_extplug,name,0,1,75113)
CheckOffset(struct snd_pcm_extplug,callback,0,1,75114)
CheckOffset(struct snd_pcm_extplug,private_data,0,1,75115)
CheckOffset(struct snd_pcm_extplug,pcm,0,1,75116)
CheckOffset(struct snd_pcm_extplug,stream,0,1,75117)
CheckOffset(struct snd_pcm_extplug,format,0,1,75118)
CheckOffset(struct snd_pcm_extplug,subformat,0,1,75119)
CheckOffset(struct snd_pcm_extplug,channels,0,1,75120)
CheckOffset(struct snd_pcm_extplug,rate,0,1,75121)
CheckOffset(struct snd_pcm_extplug,slave_format,0,1,75122)
CheckOffset(struct snd_pcm_extplug,slave_subformat,0,1,75123)
CheckOffset(struct snd_pcm_extplug,slave_channels,0,1,75124)
#endif

#if 1
CheckTypeSize(struct snd_pcm_extplug_callback,0, 27526, 1, , NULL, 0, NULL)
Msg("Missing member data for snd_pcm_extplug_callback on All\n");
CheckOffset(struct snd_pcm_extplug_callback,transfer,0,1,75125)
CheckOffset(struct snd_pcm_extplug_callback,close,0,1,75126)
CheckOffset(struct snd_pcm_extplug_callback,hw_params,0,1,75127)
CheckOffset(struct snd_pcm_extplug_callback,hw_free,0,1,75128)
CheckOffset(struct snd_pcm_extplug_callback,dump,0,1,75129)
CheckOffset(struct snd_pcm_extplug_callback,init,0,1,75130)
#endif

#if defined __s390x__
CheckTypeSize(snd_pcm_extplug_callback_t,48, 27527, 12, 3.2, NULL, 27526, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_pcm_extplug_callback_t,48, 27527, 11, 3.2, NULL, 27526, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_extplug_callback_t,24, 27527, 10, 3.2, NULL, 27526, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_extplug_callback_t,48, 27527, 9, 3.2, NULL, 27526, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_extplug_callback_t,24, 27527, 6, 3.2, NULL, 27526, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_extplug_callback_t,48, 27527, 3, 3.2, NULL, 27526, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_extplug_callback_t,24, 27527, 2, 3.2, NULL, 27526, NULL)
#else
Msg("Find size of snd_pcm_extplug_callback_t (27527)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27526,NULL);\n",architecture,27527,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_pcm_extplug_t,72, 27530, 12, 3.2, NULL, 27525, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_pcm_extplug_t,72, 27530, 11, 3.2, NULL, 27525, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_extplug_t,52, 27530, 10, 3.2, NULL, 27525, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_extplug_t,72, 27530, 9, 3.2, NULL, 27525, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_extplug_t,52, 27530, 6, 3.2, NULL, 27525, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_extplug_t,72, 27530, 3, 3.2, NULL, 27525, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_extplug_t,52, 27530, 2, 3.2, NULL, 27525, NULL)
#else
Msg("Find size of snd_pcm_extplug_t (27530)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27525, NULL);\n",architecture,27530,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/pcm_extplug.h\n\n",pcnt,cnt);
return cnt;
#endif

}
