/*
 * Test of alsa/pcm_ioplug.h
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
#include "alsa/pcm_ioplug.h"



#ifdef TET_TEST
void alsa_pcm_ioplug_h()
{
#else
int alsa_pcm_ioplug_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in alsa/pcm_ioplug.h\n");
#endif

printf("Checking data structures in alsa/pcm_ioplug.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SND_PCM_IOPLUG_FLAG_LISTED
	CompareConstant(SND_PCM_IOPLUG_FLAG_LISTED,(1<<0),11435,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_IOPLUG_FLAG_LISTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_PCM_IOPLUG_VERSION_MAJOR
	CompareConstant(SND_PCM_IOPLUG_VERSION_MAJOR,1,11436,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_IOPLUG_VERSION_MAJOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_PCM_IOPLUG_VERSION_MINOR
	CompareConstant(SND_PCM_IOPLUG_VERSION_MINOR,0,11437,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_IOPLUG_VERSION_MINOR\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef SND_PCM_IOPLUG_VERSION_TINY
	CompareConstant(SND_PCM_IOPLUG_VERSION_TINY,0,11438,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_IOPLUG_VERSION_TINY\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef SND_PCM_IOPLUG_VERSION_TINY
	CompareConstant(SND_PCM_IOPLUG_VERSION_TINY,0,11438,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_IOPLUG_VERSION_TINY\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef SND_PCM_IOPLUG_VERSION_TINY
	CompareConstant(SND_PCM_IOPLUG_VERSION_TINY,0,11438,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_IOPLUG_VERSION_TINY\n");
cnt++;
#endif

#elif defined __i386__
#ifdef SND_PCM_IOPLUG_VERSION_TINY
	CompareConstant(SND_PCM_IOPLUG_VERSION_TINY,0,11438,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_IOPLUG_VERSION_TINY\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef SND_PCM_IOPLUG_VERSION_TINY
	CompareConstant(SND_PCM_IOPLUG_VERSION_TINY,0,11438,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_IOPLUG_VERSION_TINY\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef SND_PCM_IOPLUG_VERSION_TINY
	CompareConstant(SND_PCM_IOPLUG_VERSION_TINY,0,11438,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_IOPLUG_VERSION_TINY\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef SND_PCM_IOPLUG_VERSION_TINY
	CompareConstant(SND_PCM_IOPLUG_VERSION_TINY,0,11438,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_IOPLUG_VERSION_TINY\n");
cnt++;
#endif

#else
Msg( "No definition for SND_PCM_IOPLUG_VERSION_TINY (11438, int) in db\n");
#ifdef SND_PCM_IOPLUG_VERSION_TINY
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,11438,%d,'""3.2""',NULL);\n", architecture, SND_PCM_IOPLUG_VERSION_TINY);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef SND_PCM_IOPLUG_VERSION
	CompareConstant(SND_PCM_IOPLUG_VERSION,((SND_PCM_IOPLUG_VERSION_MAJOR<<16) | (SND_PCM_IOPLUG_VERSION_MINOR<<8) | (SND_PCM_IOPLUG_VERSION_TINY)),11439,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_PCM_IOPLUG_VERSION\n");
cnt++;
#endif

#endif

#if defined __x86_64__
CheckTypeSize(snd_pcm_ioplug_callback_t,128, 27567, 11, 3.2, NULL, 27566, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_ioplug_callback_t,64, 27567, 10, 3.2, NULL, 27566, NULL)
#elif defined __s390x__
CheckTypeSize(snd_pcm_ioplug_callback_t,128, 27567, 12, 3.2, NULL, 27566, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_ioplug_callback_t,64, 27567, 2, 3.2, NULL, 27566, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_ioplug_callback_t,128, 27567, 3, 3.2, NULL, 27566, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_ioplug_callback_t,64, 27567, 6, 3.2, NULL, 27566, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_ioplug_callback_t,128, 27567, 9, 3.2, NULL, 27566, NULL)
#else
Msg("Find size of snd_pcm_ioplug_callback_t (27567)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27566,NULL);\n",architecture,27567,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_pcm_ioplug_t,120, 27570, 11, 3.2, NULL, 27565, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_pcm_ioplug_t,80, 27570, 10, 3.2, NULL, 27565, NULL)
#elif defined __s390x__
CheckTypeSize(snd_pcm_ioplug_t,120, 27570, 12, 3.2, NULL, 27565, NULL)
#elif defined __i386__
CheckTypeSize(snd_pcm_ioplug_t,80, 27570, 2, 3.2, NULL, 27565, NULL)
#elif defined __ia64__
CheckTypeSize(snd_pcm_ioplug_t,120, 27570, 3, 3.2, NULL, 27565, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_pcm_ioplug_t,80, 27570, 6, 3.2, NULL, 27565, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_pcm_ioplug_t,120, 27570, 9, 3.2, NULL, 27565, NULL)
#else
Msg("Find size of snd_pcm_ioplug_t (27570)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27565, NULL);\n",architecture,27570,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/pcm_ioplug.h\n\n",pcnt,cnt);
return cnt;
#endif

}
