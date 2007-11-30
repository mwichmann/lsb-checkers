/*
 * Test of alsa/mixer.h
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
#include "alsa/mixer.h"



#ifdef TET_TEST
void alsa_mixer_h()
{
#else
int alsa_mixer_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in alsa/mixer.h\n");
#endif

printf("Checking data structures in alsa/mixer.h\n");
#if defined __x86_64__
CheckTypeSize(snd_mixer_elem_type_t,4, 27466, 11, 3.2, NULL, 27489, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_mixer_elem_type_t,4, 27466, 10, 3.2, NULL, 27489, NULL)
#elif defined __s390x__
CheckTypeSize(snd_mixer_elem_type_t,4, 27466, 12, 3.2, NULL, 27489, NULL)
#elif defined __i386__
CheckTypeSize(snd_mixer_elem_type_t,4, 27466, 2, 3.2, NULL, 27489, NULL)
#elif defined __ia64__
CheckTypeSize(snd_mixer_elem_type_t,4, 27466, 3, 3.2, NULL, 27489, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_mixer_elem_type_t,4, 27466, 6, 3.2, NULL, 27489, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_mixer_elem_type_t,4, 27466, 9, 3.2, NULL, 27489, NULL)
#else
Msg("Find size of snd_mixer_elem_type_t (27466)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27489,NULL);\n",architecture,27466,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_mixer_compare_t,8, 27470, 11, 3.2, NULL, 25078, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_mixer_compare_t,4, 27470, 10, 3.2, NULL, 25078, NULL)
#elif defined __s390x__
CheckTypeSize(snd_mixer_compare_t,8, 27470, 12, 3.2, NULL, 25078, NULL)
#elif defined __i386__
CheckTypeSize(snd_mixer_compare_t,4, 27470, 2, 3.2, NULL, 25078, NULL)
#elif defined __ia64__
CheckTypeSize(snd_mixer_compare_t,8, 27470, 3, 3.2, NULL, 25078, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_mixer_compare_t,4, 27470, 6, 3.2, NULL, 25078, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_mixer_compare_t,8, 27470, 9, 3.2, NULL, 25078, NULL)
#else
Msg("Find size of snd_mixer_compare_t (27470)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,25078,NULL);\n",architecture,27470,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_mixer_elem_callback_t,8, 27471, 11, 3.2, NULL, 25077, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_mixer_elem_callback_t,4, 27471, 10, 3.2, NULL, 25077, NULL)
#elif defined __s390x__
CheckTypeSize(snd_mixer_elem_callback_t,8, 27471, 12, 3.2, NULL, 25077, NULL)
#elif defined __i386__
CheckTypeSize(snd_mixer_elem_callback_t,4, 27471, 2, 3.2, NULL, 25077, NULL)
#elif defined __ia64__
CheckTypeSize(snd_mixer_elem_callback_t,8, 27471, 3, 3.2, NULL, 25077, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_mixer_elem_callback_t,4, 27471, 6, 3.2, NULL, 25077, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_mixer_elem_callback_t,8, 27471, 9, 3.2, NULL, 25077, NULL)
#else
Msg("Find size of snd_mixer_elem_callback_t (27471)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,25077,NULL);\n",architecture,27471,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_mixer_callback_t,8, 27475, 11, 3.2, NULL, 25076, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_mixer_callback_t,4, 27475, 10, 3.2, NULL, 25076, NULL)
#elif defined __s390x__
CheckTypeSize(snd_mixer_callback_t,8, 27475, 12, 3.2, NULL, 25076, NULL)
#elif defined __i386__
CheckTypeSize(snd_mixer_callback_t,4, 27475, 2, 3.2, NULL, 25076, NULL)
#elif defined __ia64__
CheckTypeSize(snd_mixer_callback_t,8, 27475, 3, 3.2, NULL, 25076, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_mixer_callback_t,4, 27475, 6, 3.2, NULL, 25076, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_mixer_callback_t,8, 27475, 9, 3.2, NULL, 25076, NULL)
#else
Msg("Find size of snd_mixer_callback_t (27475)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,25076,NULL);\n",architecture,27475,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_mixer_event_t,8, 27476, 11, 3.2, NULL, 25079, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_mixer_event_t,4, 27476, 10, 3.2, NULL, 25079, NULL)
#elif defined __s390x__
CheckTypeSize(snd_mixer_event_t,8, 27476, 12, 3.2, NULL, 25079, NULL)
#elif defined __i386__
CheckTypeSize(snd_mixer_event_t,4, 27476, 2, 3.2, NULL, 25079, NULL)
#elif defined __ia64__
CheckTypeSize(snd_mixer_event_t,8, 27476, 3, 3.2, NULL, 25079, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_mixer_event_t,4, 27476, 6, 3.2, NULL, 25079, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_mixer_event_t,8, 27476, 9, 3.2, NULL, 25079, NULL)
#else
Msg("Find size of snd_mixer_event_t (27476)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,25079,NULL);\n",architecture,27476,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_mixer_selem_channel_id_t,4, 27478, 11, 3.2, NULL, 27474, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_mixer_selem_channel_id_t,4, 27478, 10, 3.2, NULL, 27474, NULL)
#elif defined __s390x__
CheckTypeSize(snd_mixer_selem_channel_id_t,4, 27478, 12, 3.2, NULL, 27474, NULL)
#elif defined __i386__
CheckTypeSize(snd_mixer_selem_channel_id_t,4, 27478, 2, 3.2, NULL, 27474, NULL)
#elif defined __ia64__
CheckTypeSize(snd_mixer_selem_channel_id_t,4, 27478, 3, 3.2, NULL, 27474, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_mixer_selem_channel_id_t,4, 27478, 6, 3.2, NULL, 27474, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_mixer_selem_channel_id_t,4, 27478, 9, 3.2, NULL, 27474, NULL)
#else
Msg("Find size of snd_mixer_selem_channel_id_t (27478)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27474,NULL);\n",architecture,27478,0);
#endif

#if 1
CheckEnum("SND_MIXER_SABSTRACT_NONE",SND_MIXER_SABSTRACT_NONE,0,76240)
CheckEnum("SND_MIXER_SABSTRACT_BASIC",SND_MIXER_SABSTRACT_BASIC,(0) + 1,76241)
#endif

#if defined __x86_64__
CheckTypeSize(struct snd_mixer_selem_regopt,32, 27484, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct snd_mixer_selem_regopt,abstract,4,11,74940)
CheckOffset(struct snd_mixer_selem_regopt,abstract,4,11,74940)
CheckMemberSize(struct snd_mixer_selem_regopt,device,8,11,74941)
CheckOffset(struct snd_mixer_selem_regopt,device,8,11,74941)
CheckMemberSize(struct snd_mixer_selem_regopt,playback_pcm,8,11,74942)
CheckOffset(struct snd_mixer_selem_regopt,playback_pcm,16,11,74942)
CheckMemberSize(struct snd_mixer_selem_regopt,capture_pcm,8,11,74943)
CheckOffset(struct snd_mixer_selem_regopt,capture_pcm,24,11,74943)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct snd_mixer_selem_regopt,20, 27484, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct snd_mixer_selem_regopt,abstract,4,10,74940)
CheckOffset(struct snd_mixer_selem_regopt,abstract,4,10,74940)
CheckMemberSize(struct snd_mixer_selem_regopt,device,4,10,74941)
CheckOffset(struct snd_mixer_selem_regopt,device,8,10,74941)
CheckMemberSize(struct snd_mixer_selem_regopt,playback_pcm,4,10,74942)
CheckOffset(struct snd_mixer_selem_regopt,playback_pcm,12,10,74942)
CheckMemberSize(struct snd_mixer_selem_regopt,capture_pcm,4,10,74943)
CheckOffset(struct snd_mixer_selem_regopt,capture_pcm,16,10,74943)
#elif defined __s390x__
CheckTypeSize(struct snd_mixer_selem_regopt,32, 27484, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct snd_mixer_selem_regopt,abstract,4,12,74940)
CheckOffset(struct snd_mixer_selem_regopt,abstract,4,12,74940)
CheckMemberSize(struct snd_mixer_selem_regopt,device,8,12,74941)
CheckOffset(struct snd_mixer_selem_regopt,device,8,12,74941)
CheckMemberSize(struct snd_mixer_selem_regopt,playback_pcm,8,12,74942)
CheckOffset(struct snd_mixer_selem_regopt,playback_pcm,16,12,74942)
CheckMemberSize(struct snd_mixer_selem_regopt,capture_pcm,8,12,74943)
CheckOffset(struct snd_mixer_selem_regopt,capture_pcm,24,12,74943)
#elif defined __i386__
CheckTypeSize(struct snd_mixer_selem_regopt,20, 27484, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct snd_mixer_selem_regopt,abstract,4,2,74940)
CheckOffset(struct snd_mixer_selem_regopt,abstract,4,2,74940)
CheckMemberSize(struct snd_mixer_selem_regopt,device,4,2,74941)
CheckOffset(struct snd_mixer_selem_regopt,device,8,2,74941)
CheckMemberSize(struct snd_mixer_selem_regopt,playback_pcm,4,2,74942)
CheckOffset(struct snd_mixer_selem_regopt,playback_pcm,12,2,74942)
CheckMemberSize(struct snd_mixer_selem_regopt,capture_pcm,4,2,74943)
CheckOffset(struct snd_mixer_selem_regopt,capture_pcm,16,2,74943)
#elif defined __ia64__
CheckTypeSize(struct snd_mixer_selem_regopt,32, 27484, 3, 3.2, NULL, 0, NULL)
CheckMemberSize(struct snd_mixer_selem_regopt,abstract,4,3,74940)
CheckOffset(struct snd_mixer_selem_regopt,abstract,4,3,74940)
CheckMemberSize(struct snd_mixer_selem_regopt,device,8,3,74941)
CheckOffset(struct snd_mixer_selem_regopt,device,8,3,74941)
CheckMemberSize(struct snd_mixer_selem_regopt,playback_pcm,8,3,74942)
CheckOffset(struct snd_mixer_selem_regopt,playback_pcm,16,3,74942)
CheckMemberSize(struct snd_mixer_selem_regopt,capture_pcm,8,3,74943)
CheckOffset(struct snd_mixer_selem_regopt,capture_pcm,24,3,74943)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct snd_mixer_selem_regopt,20, 27484, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct snd_mixer_selem_regopt,abstract,4,6,74940)
CheckOffset(struct snd_mixer_selem_regopt,abstract,4,6,74940)
CheckMemberSize(struct snd_mixer_selem_regopt,device,4,6,74941)
CheckOffset(struct snd_mixer_selem_regopt,device,8,6,74941)
CheckMemberSize(struct snd_mixer_selem_regopt,playback_pcm,4,6,74942)
CheckOffset(struct snd_mixer_selem_regopt,playback_pcm,12,6,74942)
CheckMemberSize(struct snd_mixer_selem_regopt,capture_pcm,4,6,74943)
CheckOffset(struct snd_mixer_selem_regopt,capture_pcm,16,6,74943)
#elif defined __powerpc64__
CheckTypeSize(struct snd_mixer_selem_regopt,32, 27484, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct snd_mixer_selem_regopt,abstract,4,9,74940)
CheckOffset(struct snd_mixer_selem_regopt,abstract,4,9,74940)
CheckMemberSize(struct snd_mixer_selem_regopt,device,8,9,74941)
CheckOffset(struct snd_mixer_selem_regopt,device,8,9,74941)
CheckMemberSize(struct snd_mixer_selem_regopt,playback_pcm,8,9,74942)
CheckOffset(struct snd_mixer_selem_regopt,playback_pcm,16,9,74942)
CheckMemberSize(struct snd_mixer_selem_regopt,capture_pcm,8,9,74943)
CheckOffset(struct snd_mixer_selem_regopt,capture_pcm,24,9,74943)
#else
Msg("Find size of snd_mixer_selem_regopt (27484)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0, NULL);\n",architecture,27484,0);
#endif

extern int snd_mixer_attach_db(snd_mixer_t *, const char *);
CheckInterfacedef(snd_mixer_attach,snd_mixer_attach_db);
extern int snd_mixer_close_db(snd_mixer_t *);
CheckInterfacedef(snd_mixer_close,snd_mixer_close_db);
extern int snd_mixer_detach_db(snd_mixer_t *, const char *);
CheckInterfacedef(snd_mixer_detach,snd_mixer_detach_db);
extern void * snd_mixer_elem_get_callback_private_db(const snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_elem_get_callback_private,snd_mixer_elem_get_callback_private_db);
extern snd_mixer_elem_type_t snd_mixer_elem_get_type_db(const snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_elem_get_type,snd_mixer_elem_get_type_db);
extern snd_mixer_elem_t * snd_mixer_elem_next_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_elem_next,snd_mixer_elem_next_db);
extern snd_mixer_elem_t * snd_mixer_elem_prev_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_elem_prev,snd_mixer_elem_prev_db);
extern void snd_mixer_elem_set_callback_db(snd_mixer_elem_t *, snd_mixer_elem_callback_t);
CheckInterfacedef(snd_mixer_elem_set_callback,snd_mixer_elem_set_callback_db);
extern void snd_mixer_elem_set_callback_private_db(snd_mixer_elem_t *, void *);
CheckInterfacedef(snd_mixer_elem_set_callback_private,snd_mixer_elem_set_callback_private_db);
extern snd_mixer_elem_t * snd_mixer_find_selem_db(snd_mixer_t *, const snd_mixer_selem_id_t *);
CheckInterfacedef(snd_mixer_find_selem,snd_mixer_find_selem_db);
extern snd_mixer_elem_t * snd_mixer_first_elem_db(snd_mixer_t *);
CheckInterfacedef(snd_mixer_first_elem,snd_mixer_first_elem_db);
extern void snd_mixer_free_db(snd_mixer_t *);
CheckInterfacedef(snd_mixer_free,snd_mixer_free_db);
extern void * snd_mixer_get_callback_private_db(const snd_mixer_t *);
CheckInterfacedef(snd_mixer_get_callback_private,snd_mixer_get_callback_private_db);
extern unsigned int snd_mixer_get_count_db(const snd_mixer_t *);
CheckInterfacedef(snd_mixer_get_count,snd_mixer_get_count_db);
extern int snd_mixer_handle_events_db(snd_mixer_t *);
CheckInterfacedef(snd_mixer_handle_events,snd_mixer_handle_events_db);
extern snd_mixer_elem_t * snd_mixer_last_elem_db(snd_mixer_t *);
CheckInterfacedef(snd_mixer_last_elem,snd_mixer_last_elem_db);
extern int snd_mixer_load_db(snd_mixer_t *);
CheckInterfacedef(snd_mixer_load,snd_mixer_load_db);
extern int snd_mixer_open_db(snd_mixer_t * *, int);
CheckInterfacedef(snd_mixer_open,snd_mixer_open_db);
extern int snd_mixer_poll_descriptors_db(snd_mixer_t *, struct pollfd *, unsigned int);
CheckInterfacedef(snd_mixer_poll_descriptors,snd_mixer_poll_descriptors_db);
extern int snd_mixer_poll_descriptors_count_db(snd_mixer_t *);
CheckInterfacedef(snd_mixer_poll_descriptors_count,snd_mixer_poll_descriptors_count_db);
extern int snd_mixer_poll_descriptors_revents_db(snd_mixer_t *, struct pollfd *, unsigned int, short unsigned int *);
CheckInterfacedef(snd_mixer_poll_descriptors_revents,snd_mixer_poll_descriptors_revents_db);
extern const char * snd_mixer_selem_channel_name_db(snd_mixer_selem_channel_id_t);
CheckInterfacedef(snd_mixer_selem_channel_name,snd_mixer_selem_channel_name_db);
extern int snd_mixer_selem_get_capture_group_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_get_capture_group,snd_mixer_selem_get_capture_group_db);
extern int snd_mixer_selem_get_capture_switch_db(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, int *);
CheckInterfacedef(snd_mixer_selem_get_capture_switch,snd_mixer_selem_get_capture_switch_db);
extern int snd_mixer_selem_get_capture_volume_db(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, long int *);
CheckInterfacedef(snd_mixer_selem_get_capture_volume,snd_mixer_selem_get_capture_volume_db);
extern int snd_mixer_selem_get_capture_volume_range_db(snd_mixer_elem_t *, long int *, long int *);
CheckInterfacedef(snd_mixer_selem_get_capture_volume_range,snd_mixer_selem_get_capture_volume_range_db);
extern int snd_mixer_selem_get_enum_item_db(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, unsigned int *);
CheckInterfacedef(snd_mixer_selem_get_enum_item,snd_mixer_selem_get_enum_item_db);
extern int snd_mixer_selem_get_enum_item_name_db(snd_mixer_elem_t *, unsigned int, size_t, char *);
CheckInterfacedef(snd_mixer_selem_get_enum_item_name,snd_mixer_selem_get_enum_item_name_db);
extern int snd_mixer_selem_get_enum_items_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_get_enum_items,snd_mixer_selem_get_enum_items_db);
extern void snd_mixer_selem_get_id_db(snd_mixer_elem_t *, snd_mixer_selem_id_t *);
CheckInterfacedef(snd_mixer_selem_get_id,snd_mixer_selem_get_id_db);
extern unsigned int snd_mixer_selem_get_index_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_get_index,snd_mixer_selem_get_index_db);
extern const char * snd_mixer_selem_get_name_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_get_name,snd_mixer_selem_get_name_db);
extern int snd_mixer_selem_get_playback_switch_db(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, int *);
CheckInterfacedef(snd_mixer_selem_get_playback_switch,snd_mixer_selem_get_playback_switch_db);
extern int snd_mixer_selem_get_playback_volume_db(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, long int *);
CheckInterfacedef(snd_mixer_selem_get_playback_volume,snd_mixer_selem_get_playback_volume_db);
extern int snd_mixer_selem_get_playback_volume_range_db(snd_mixer_elem_t *, long int *, long int *);
CheckInterfacedef(snd_mixer_selem_get_playback_volume_range,snd_mixer_selem_get_playback_volume_range_db);
extern int snd_mixer_selem_has_capture_channel_db(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t);
CheckInterfacedef(snd_mixer_selem_has_capture_channel,snd_mixer_selem_has_capture_channel_db);
extern int snd_mixer_selem_has_capture_switch_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_has_capture_switch,snd_mixer_selem_has_capture_switch_db);
extern int snd_mixer_selem_has_capture_switch_exclusive_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_has_capture_switch_exclusive,snd_mixer_selem_has_capture_switch_exclusive_db);
extern int snd_mixer_selem_has_capture_switch_joined_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_has_capture_switch_joined,snd_mixer_selem_has_capture_switch_joined_db);
extern int snd_mixer_selem_has_capture_volume_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_has_capture_volume,snd_mixer_selem_has_capture_volume_db);
extern int snd_mixer_selem_has_capture_volume_joined_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_has_capture_volume_joined,snd_mixer_selem_has_capture_volume_joined_db);
extern int snd_mixer_selem_has_common_switch_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_has_common_switch,snd_mixer_selem_has_common_switch_db);
extern int snd_mixer_selem_has_common_volume_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_has_common_volume,snd_mixer_selem_has_common_volume_db);
extern int snd_mixer_selem_has_playback_channel_db(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t);
CheckInterfacedef(snd_mixer_selem_has_playback_channel,snd_mixer_selem_has_playback_channel_db);
extern int snd_mixer_selem_has_playback_switch_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_has_playback_switch,snd_mixer_selem_has_playback_switch_db);
extern int snd_mixer_selem_has_playback_switch_joined_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_has_playback_switch_joined,snd_mixer_selem_has_playback_switch_joined_db);
extern int snd_mixer_selem_has_playback_volume_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_has_playback_volume,snd_mixer_selem_has_playback_volume_db);
extern int snd_mixer_selem_has_playback_volume_joined_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_has_playback_volume_joined,snd_mixer_selem_has_playback_volume_joined_db);
extern void snd_mixer_selem_id_copy_db(snd_mixer_selem_id_t *, const snd_mixer_selem_id_t *);
CheckInterfacedef(snd_mixer_selem_id_copy,snd_mixer_selem_id_copy_db);
extern void snd_mixer_selem_id_free_db(snd_mixer_selem_id_t *);
CheckInterfacedef(snd_mixer_selem_id_free,snd_mixer_selem_id_free_db);
extern unsigned int snd_mixer_selem_id_get_index_db(const snd_mixer_selem_id_t *);
CheckInterfacedef(snd_mixer_selem_id_get_index,snd_mixer_selem_id_get_index_db);
extern const char * snd_mixer_selem_id_get_name_db(const snd_mixer_selem_id_t *);
CheckInterfacedef(snd_mixer_selem_id_get_name,snd_mixer_selem_id_get_name_db);
extern int snd_mixer_selem_id_malloc_db(snd_mixer_selem_id_t * *);
CheckInterfacedef(snd_mixer_selem_id_malloc,snd_mixer_selem_id_malloc_db);
extern void snd_mixer_selem_id_set_index_db(snd_mixer_selem_id_t *, unsigned int);
CheckInterfacedef(snd_mixer_selem_id_set_index,snd_mixer_selem_id_set_index_db);
extern void snd_mixer_selem_id_set_name_db(snd_mixer_selem_id_t *, const char *);
CheckInterfacedef(snd_mixer_selem_id_set_name,snd_mixer_selem_id_set_name_db);
extern size_t snd_mixer_selem_id_sizeof_db(void);
CheckInterfacedef(snd_mixer_selem_id_sizeof,snd_mixer_selem_id_sizeof_db);
extern int snd_mixer_selem_is_active_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_is_active,snd_mixer_selem_is_active_db);
extern int snd_mixer_selem_is_capture_mono_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_is_capture_mono,snd_mixer_selem_is_capture_mono_db);
extern int snd_mixer_selem_is_enum_capture_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_is_enum_capture,snd_mixer_selem_is_enum_capture_db);
extern int snd_mixer_selem_is_enum_playback_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_is_enum_playback,snd_mixer_selem_is_enum_playback_db);
extern int snd_mixer_selem_is_enumerated_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_is_enumerated,snd_mixer_selem_is_enumerated_db);
extern int snd_mixer_selem_is_playback_mono_db(snd_mixer_elem_t *);
CheckInterfacedef(snd_mixer_selem_is_playback_mono,snd_mixer_selem_is_playback_mono_db);
extern int snd_mixer_selem_register_db(snd_mixer_t *, struct snd_mixer_selem_regopt *, snd_mixer_class_t * *);
CheckInterfacedef(snd_mixer_selem_register,snd_mixer_selem_register_db);
extern int snd_mixer_selem_set_capture_switch_db(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, int);
CheckInterfacedef(snd_mixer_selem_set_capture_switch,snd_mixer_selem_set_capture_switch_db);
extern int snd_mixer_selem_set_capture_switch_all_db(snd_mixer_elem_t *, int);
CheckInterfacedef(snd_mixer_selem_set_capture_switch_all,snd_mixer_selem_set_capture_switch_all_db);
extern int snd_mixer_selem_set_capture_volume_db(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, long int);
CheckInterfacedef(snd_mixer_selem_set_capture_volume,snd_mixer_selem_set_capture_volume_db);
extern int snd_mixer_selem_set_capture_volume_all_db(snd_mixer_elem_t *, long int);
CheckInterfacedef(snd_mixer_selem_set_capture_volume_all,snd_mixer_selem_set_capture_volume_all_db);
extern int snd_mixer_selem_set_capture_volume_range_db(snd_mixer_elem_t *, long int, long int);
CheckInterfacedef(snd_mixer_selem_set_capture_volume_range,snd_mixer_selem_set_capture_volume_range_db);
extern int snd_mixer_selem_set_enum_item_db(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, unsigned int);
CheckInterfacedef(snd_mixer_selem_set_enum_item,snd_mixer_selem_set_enum_item_db);
extern int snd_mixer_selem_set_playback_switch_db(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, int);
CheckInterfacedef(snd_mixer_selem_set_playback_switch,snd_mixer_selem_set_playback_switch_db);
extern int snd_mixer_selem_set_playback_switch_all_db(snd_mixer_elem_t *, int);
CheckInterfacedef(snd_mixer_selem_set_playback_switch_all,snd_mixer_selem_set_playback_switch_all_db);
extern int snd_mixer_selem_set_playback_volume_db(snd_mixer_elem_t *, snd_mixer_selem_channel_id_t, long int);
CheckInterfacedef(snd_mixer_selem_set_playback_volume,snd_mixer_selem_set_playback_volume_db);
extern int snd_mixer_selem_set_playback_volume_all_db(snd_mixer_elem_t *, long int);
CheckInterfacedef(snd_mixer_selem_set_playback_volume_all,snd_mixer_selem_set_playback_volume_all_db);
extern int snd_mixer_selem_set_playback_volume_range_db(snd_mixer_elem_t *, long int, long int);
CheckInterfacedef(snd_mixer_selem_set_playback_volume_range,snd_mixer_selem_set_playback_volume_range_db);
extern void snd_mixer_set_callback_db(snd_mixer_t *, snd_mixer_callback_t);
CheckInterfacedef(snd_mixer_set_callback,snd_mixer_set_callback_db);
extern void snd_mixer_set_callback_private_db(snd_mixer_t *, void *);
CheckInterfacedef(snd_mixer_set_callback_private,snd_mixer_set_callback_private_db);
extern int snd_mixer_wait_db(snd_mixer_t *, int);
CheckInterfacedef(snd_mixer_wait,snd_mixer_wait_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/mixer.h\n\n",pcnt,cnt);
return cnt;
#endif

}
