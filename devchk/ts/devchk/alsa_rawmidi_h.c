/*
 * Test of alsa/rawmidi.h
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
#include "alsa/rawmidi.h"



#ifdef TET_TEST
void alsa_rawmidi_h()
{
#else
int alsa_rawmidi_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in alsa/rawmidi.h\n");
#endif

printf("Checking data structures in alsa/rawmidi.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SND_RAWMIDI_APPEND
	CompareConstant(SND_RAWMIDI_APPEND,0x0001,11457,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_RAWMIDI_APPEND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_RAWMIDI_NONBLOCK
	CompareConstant(SND_RAWMIDI_NONBLOCK,0x0002,11458,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_RAWMIDI_NONBLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_RAWMIDI_SYNC
	CompareConstant(SND_RAWMIDI_SYNC,0x0004,11459,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_RAWMIDI_SYNC\n");
cnt++;
#endif

#endif

#if defined __x86_64__
CheckTypeSize(snd_rawmidi_stream_t,4, 27697, 11, 3.2, NULL, 26391, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_rawmidi_stream_t,4, 27697, 10, 3.2, NULL, 26391, NULL)
#elif defined __s390x__
CheckTypeSize(snd_rawmidi_stream_t,4, 27697, 12, 3.2, NULL, 26391, NULL)
#elif defined __i386__
CheckTypeSize(snd_rawmidi_stream_t,4, 27697, 2, 3.2, NULL, 26391, NULL)
#elif defined __ia64__
CheckTypeSize(snd_rawmidi_stream_t,4, 27697, 3, 3.2, NULL, 26391, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_rawmidi_stream_t,4, 27697, 6, 3.2, NULL, 26391, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_rawmidi_stream_t,4, 27697, 9, 3.2, NULL, 26391, NULL)
#else
Msg("Find size of snd_rawmidi_stream_t (27697)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26391,NULL);\n",architecture,27697,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_rawmidi_type_t,4, 27701, 11, 3.2, NULL, 26392, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_rawmidi_type_t,4, 27701, 10, 3.2, NULL, 26392, NULL)
#elif defined __s390x__
CheckTypeSize(snd_rawmidi_type_t,4, 27701, 12, 3.2, NULL, 26392, NULL)
#elif defined __i386__
CheckTypeSize(snd_rawmidi_type_t,4, 27701, 2, 3.2, NULL, 26392, NULL)
#elif defined __ia64__
CheckTypeSize(snd_rawmidi_type_t,4, 27701, 3, 3.2, NULL, 26392, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_rawmidi_type_t,4, 27701, 6, 3.2, NULL, 26392, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_rawmidi_type_t,4, 27701, 9, 3.2, NULL, 26392, NULL)
#else
Msg("Find size of snd_rawmidi_type_t (27701)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26392, NULL);\n",architecture,27701,0);
#endif

extern int snd_rawmidi_close_db(snd_rawmidi_t *);
CheckInterfacedef(snd_rawmidi_close,snd_rawmidi_close_db);
extern int snd_rawmidi_drain_db(snd_rawmidi_t *);
CheckInterfacedef(snd_rawmidi_drain,snd_rawmidi_drain_db);
extern int snd_rawmidi_drop_db(snd_rawmidi_t *);
CheckInterfacedef(snd_rawmidi_drop,snd_rawmidi_drop_db);
extern void snd_rawmidi_info_free_db(snd_rawmidi_info_t *);
CheckInterfacedef(snd_rawmidi_info_free,snd_rawmidi_info_free_db);
extern const char * snd_rawmidi_info_get_id_db(const snd_rawmidi_info_t *);
CheckInterfacedef(snd_rawmidi_info_get_id,snd_rawmidi_info_get_id_db);
extern const char * snd_rawmidi_info_get_name_db(const snd_rawmidi_info_t *);
CheckInterfacedef(snd_rawmidi_info_get_name,snd_rawmidi_info_get_name_db);
extern unsigned int snd_rawmidi_info_get_subdevices_count_db(const snd_rawmidi_info_t *);
CheckInterfacedef(snd_rawmidi_info_get_subdevices_count,snd_rawmidi_info_get_subdevices_count_db);
extern int snd_rawmidi_info_malloc_db(snd_rawmidi_info_t * *);
CheckInterfacedef(snd_rawmidi_info_malloc,snd_rawmidi_info_malloc_db);
extern void snd_rawmidi_info_set_device_db(snd_rawmidi_info_t *, unsigned int);
CheckInterfacedef(snd_rawmidi_info_set_device,snd_rawmidi_info_set_device_db);
extern void snd_rawmidi_info_set_stream_db(snd_rawmidi_info_t *, snd_rawmidi_stream_t);
CheckInterfacedef(snd_rawmidi_info_set_stream,snd_rawmidi_info_set_stream_db);
extern void snd_rawmidi_info_set_subdevice_db(snd_rawmidi_info_t *, unsigned int);
CheckInterfacedef(snd_rawmidi_info_set_subdevice,snd_rawmidi_info_set_subdevice_db);
extern int snd_rawmidi_nonblock_db(snd_rawmidi_t *, int);
CheckInterfacedef(snd_rawmidi_nonblock,snd_rawmidi_nonblock_db);
extern int snd_rawmidi_open_db(snd_rawmidi_t * *, snd_rawmidi_t * *, const char *, int);
CheckInterfacedef(snd_rawmidi_open,snd_rawmidi_open_db);
extern int snd_rawmidi_poll_descriptors_db(snd_rawmidi_t *, struct pollfd *, unsigned int);
CheckInterfacedef(snd_rawmidi_poll_descriptors,snd_rawmidi_poll_descriptors_db);
extern int snd_rawmidi_poll_descriptors_count_db(snd_rawmidi_t *);
CheckInterfacedef(snd_rawmidi_poll_descriptors_count,snd_rawmidi_poll_descriptors_count_db);
extern int snd_rawmidi_poll_descriptors_revents_db(snd_rawmidi_t *, struct pollfd *, unsigned int, short unsigned int *);
CheckInterfacedef(snd_rawmidi_poll_descriptors_revents,snd_rawmidi_poll_descriptors_revents_db);
extern ssize_t snd_rawmidi_read_db(snd_rawmidi_t *, void *, size_t);
CheckInterfacedef(snd_rawmidi_read,snd_rawmidi_read_db);
extern ssize_t snd_rawmidi_write_db(snd_rawmidi_t *, const void *, size_t);
CheckInterfacedef(snd_rawmidi_write,snd_rawmidi_write_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/rawmidi.h\n\n",pcnt,cnt);
return cnt;
#endif

}
