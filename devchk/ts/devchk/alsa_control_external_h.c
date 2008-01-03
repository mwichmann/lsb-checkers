/*
 * Test of alsa/control_external.h
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
#include "alsa/control_external.h"



#ifdef TET_TEST
void alsa_control_external_h()
{
#else
int alsa_control_external_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in alsa/control_external.h\n");
#endif

printf("Checking data structures in alsa/control_external.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_EXT_VERSION_MAJOR
	CompareConstant(SND_CTL_EXT_VERSION_MAJOR,1,11199,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_EXT_VERSION_MAJOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_EXT_VERSION_MINOR
	CompareConstant(SND_CTL_EXT_VERSION_MINOR,0,11200,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_EXT_VERSION_MINOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_EXT_VERSION_TINY
	CompareConstant(SND_CTL_EXT_VERSION_TINY,0,11201,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_EXT_VERSION_TINY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_EXT_VERSION
	CompareConstant(SND_CTL_EXT_VERSION,((SND_CTL_EXT_VERSION_MAJOR<<16) | (SND_CTL_EXT_VERSION_MINOR<<8) | (SND_CTL_EXT_VERSION_TINY)),11202,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_EXT_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_EXT_KEY_NOT_FOUND
	CompareConstant(SND_CTL_EXT_KEY_NOT_FOUND,(snd_ctl_ext_key_t)(-1),11203,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_EXT_KEY_NOT_FOUND\n");
cnt++;
#endif

#endif

#if defined __i386__
CheckTypeSize(snd_ctl_ext_callback_t,100, 27381, 2, 3.2, NULL, 27380, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_ctl_ext_callback_t,100, 27381, 6, 3.2, NULL, 27380, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_ctl_ext_callback_t,100, 27381, 10, 3.2, NULL, 27380, NULL)
#elif defined __ia64__
CheckTypeSize(snd_ctl_ext_callback_t,200, 27381, 3, 3.2, NULL, 27380, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_ctl_ext_callback_t,200, 27381, 9, 3.2, NULL, 27380, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_ctl_ext_callback_t,200, 27381, 11, 3.2, NULL, 27380, NULL)
#elif defined __s390x__
CheckTypeSize(snd_ctl_ext_callback_t,200, 27381, 12, 3.2, NULL, 27380, NULL)
#else
Msg("Find size of snd_ctl_ext_callback_t (27381)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27380,NULL);\n",architecture,27381,0);
#endif

#if defined __i386__
CheckTypeSize(snd_ctl_ext_key_t,4, 27382, 2, 3.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(snd_ctl_ext_key_t,8, 27382, 3, 3.2, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_ctl_ext_key_t,8, 27382, 9, 3.2, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_ctl_ext_key_t,8, 27382, 11, 3.2, NULL, 11186, NULL)
#elif defined __s390x__
CheckTypeSize(snd_ctl_ext_key_t,8, 27382, 12, 3.2, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_ctl_ext_key_t,4, 27382, 10, 3.2, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_ctl_ext_key_t,4, 27382, 6, 3.2, NULL, 11186, NULL)
#else
Msg("Find size of snd_ctl_ext_key_t (27382)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,11186,NULL);\n",architecture,27382,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_ctl_ext_t,272, 27384, 11, 3.2, NULL, 27379, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_ctl_ext_t,256, 27384, 10, 3.2, NULL, 27379, NULL)
#elif defined __s390x__
CheckTypeSize(snd_ctl_ext_t,272, 27384, 12, 3.2, NULL, 27379, NULL)
#elif defined __i386__
CheckTypeSize(snd_ctl_ext_t,256, 27384, 2, 3.2, NULL, 27379, NULL)
#elif defined __ia64__
CheckTypeSize(snd_ctl_ext_t,272, 27384, 3, 3.2, NULL, 27379, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_ctl_ext_t,256, 27384, 6, 3.2, NULL, 27379, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_ctl_ext_t,272, 27384, 9, 3.2, NULL, 27379, NULL)
#else
Msg("Find size of snd_ctl_ext_t (27384)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27379, NULL);\n",architecture,27384,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/control_external.h\n\n",pcnt,cnt);
return cnt;
#endif

}
