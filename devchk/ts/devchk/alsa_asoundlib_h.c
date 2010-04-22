/*
 * Test of alsa/asoundlib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "alsa/asoundlib.h"



#ifdef TET_TEST
void alsa_asoundlib_h()
{
#else
int alsa_asoundlib_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in alsa/asoundlib.h\n");
#endif

printf("Checking data structures in alsa/asoundlib.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on unistd.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on stdio.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on stdlib.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on string.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on fcntl.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on assert.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on endian.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on sys/poll.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on errno.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on stdarg.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on alsa/global.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on alsa/input.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on alsa/output.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on alsa/error.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on alsa/conf.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on alsa/pcm.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on alsa/rawmidi.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on alsa/timer.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on alsa/hwdep.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on alsa/control.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on alsa/mixer.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on alsa/seq_event.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on alsa/seq.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on alsa/seqmid.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alsa/asoundlib.h depends on alsa/seq_midi_event.h */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/asoundlib.h\n\n",pcnt,cnt);
return cnt;
#endif

}
