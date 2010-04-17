/*
 * Test of alsa/control_external.h
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

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

#if 1
CheckTypeSize(struct snd_ctl_ext,0, 27379, 1, , NULL, 0, NULL)
Msg("Missing member data for snd_ctl_ext on All\n");
CheckOffset(struct snd_ctl_ext,version,0,1,74885)
CheckOffset(struct snd_ctl_ext,card_idx,0,1,74886)
CheckOffset(struct snd_ctl_ext,id,0,1,74887)
CheckOffset(struct snd_ctl_ext,driver,0,1,74888)
CheckOffset(struct snd_ctl_ext,name,0,1,74889)
CheckOffset(struct snd_ctl_ext,longname,0,1,74890)
CheckOffset(struct snd_ctl_ext,mixername,0,1,74891)
CheckOffset(struct snd_ctl_ext,poll_fd,0,1,74892)
CheckOffset(struct snd_ctl_ext,callback,0,1,74893)
CheckOffset(struct snd_ctl_ext,private_data,0,1,74894)
CheckOffset(struct snd_ctl_ext,handle,0,1,74895)
CheckOffset(struct snd_ctl_ext,nonblock,0,1,74896)
CheckOffset(struct snd_ctl_ext,subscribed,0,1,74897)
#endif

#if 1
CheckTypeSize(struct snd_ctl_ext_callback,0, 27380, 1, , NULL, 0, NULL)
Msg("Missing member data for snd_ctl_ext_callback on All\n");
CheckOffset(struct snd_ctl_ext_callback,close,0,1,74898)
CheckOffset(struct snd_ctl_ext_callback,elem_count,0,1,74899)
CheckOffset(struct snd_ctl_ext_callback,elem_list,0,1,74900)
CheckOffset(struct snd_ctl_ext_callback,find_elem,0,1,74901)
CheckOffset(struct snd_ctl_ext_callback,free_key,0,1,74902)
CheckOffset(struct snd_ctl_ext_callback,get_attribute,0,1,74903)
CheckOffset(struct snd_ctl_ext_callback,get_integer_info,0,1,74904)
CheckOffset(struct snd_ctl_ext_callback,get_integer64_info,0,1,74905)
CheckOffset(struct snd_ctl_ext_callback,get_enumerated_info,0,1,74906)
CheckOffset(struct snd_ctl_ext_callback,get_enumerated_name,0,1,74907)
CheckOffset(struct snd_ctl_ext_callback,read_integer,0,1,74908)
CheckOffset(struct snd_ctl_ext_callback,read_integer64,0,1,74909)
CheckOffset(struct snd_ctl_ext_callback,read_enumerated,0,1,74910)
CheckOffset(struct snd_ctl_ext_callback,read_bytes,0,1,74911)
CheckOffset(struct snd_ctl_ext_callback,read_iec958,0,1,74912)
CheckOffset(struct snd_ctl_ext_callback,write_integer,0,1,74913)
CheckOffset(struct snd_ctl_ext_callback,write_integer64,0,1,74914)
CheckOffset(struct snd_ctl_ext_callback,write_enumerated,0,1,74915)
CheckOffset(struct snd_ctl_ext_callback,write_bytes,0,1,74916)
CheckOffset(struct snd_ctl_ext_callback,write_iec958,0,1,74917)
CheckOffset(struct snd_ctl_ext_callback,subscribe_events,0,1,74918)
CheckOffset(struct snd_ctl_ext_callback,read_event,0,1,74919)
CheckOffset(struct snd_ctl_ext_callback,poll_descriptors_count,0,1,74920)
CheckOffset(struct snd_ctl_ext_callback,poll_descriptors,0,1,74921)
CheckOffset(struct snd_ctl_ext_callback,poll_revents,0,1,74922)
#endif

#if defined __s390x__
CheckTypeSize(snd_ctl_ext_callback_t,200, 27381, 12, 3.2, NULL, 27380, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_ctl_ext_callback_t,200, 27381, 11, 3.2, NULL, 27380, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_ctl_ext_callback_t,100, 27381, 10, 3.2, NULL, 27380, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_ctl_ext_callback_t,200, 27381, 9, 3.2, NULL, 27380, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_ctl_ext_callback_t,100, 27381, 6, 3.2, NULL, 27380, NULL)
#elif defined __ia64__
CheckTypeSize(snd_ctl_ext_callback_t,200, 27381, 3, 3.2, NULL, 27380, NULL)
#elif defined __i386__
CheckTypeSize(snd_ctl_ext_callback_t,100, 27381, 2, 3.2, NULL, 27380, NULL)
#else
Msg("Find size of snd_ctl_ext_callback_t (27381)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27380,NULL);\n",architecture,27381,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_ctl_ext_key_t,8, 27382, 12, 3.2, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_ctl_ext_key_t,8, 27382, 11, 3.2, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_ctl_ext_key_t,4, 27382, 10, 3.2, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_ctl_ext_key_t,8, 27382, 9, 3.2, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_ctl_ext_key_t,4, 27382, 6, 3.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(snd_ctl_ext_key_t,8, 27382, 3, 3.2, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(snd_ctl_ext_key_t,4, 27382, 2, 3.2, NULL, 11186, NULL)
#else
Msg("Find size of snd_ctl_ext_key_t (27382)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,11186,NULL);\n",architecture,27382,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_ctl_ext_t,272, 27384, 12, 3.2, NULL, 27379, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_ctl_ext_t,272, 27384, 11, 3.2, NULL, 27379, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_ctl_ext_t,256, 27384, 10, 3.2, NULL, 27379, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_ctl_ext_t,272, 27384, 9, 3.2, NULL, 27379, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_ctl_ext_t,256, 27384, 6, 3.2, NULL, 27379, NULL)
#elif defined __ia64__
CheckTypeSize(snd_ctl_ext_t,272, 27384, 3, 3.2, NULL, 27379, NULL)
#elif defined __i386__
CheckTypeSize(snd_ctl_ext_t,256, 27384, 2, 3.2, NULL, 27379, NULL)
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
