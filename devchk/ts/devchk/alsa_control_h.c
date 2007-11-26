/*
 * Test of alsa/control.h
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
#include "alsa/control.h"



#ifdef TET_TEST
void alsa_control_h()
{
#else
int alsa_control_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in alsa/control.h\n");
#endif

printf("Checking data structures in alsa/control.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_EVENT_MASK_REMOVE
	CompareConstant(SND_CTL_EVENT_MASK_REMOVE,(~0U),11465,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_EVENT_MASK_REMOVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_EVENT_MASK_VALUE
	CompareConstant(SND_CTL_EVENT_MASK_VALUE,(1<<0),11466,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_EVENT_MASK_VALUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_EVENT_MASK_INFO
	CompareConstant(SND_CTL_EVENT_MASK_INFO,(1<<1),11467,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_EVENT_MASK_INFO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_EVENT_MASK_ADD
	CompareConstant(SND_CTL_EVENT_MASK_ADD,(1<<2),11468,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_EVENT_MASK_ADD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_EVENT_MASK_TLV
	CompareConstant(SND_CTL_EVENT_MASK_TLV,(1<<3),11469,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_EVENT_MASK_TLV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_POWER_MASK
	CompareConstant(SND_CTL_POWER_MASK,0xff00,11482,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_POWER_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_POWER_D0
	CompareConstant(SND_CTL_POWER_D0,0x0000,11483,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_POWER_D0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_POWER_D1
	CompareConstant(SND_CTL_POWER_D1,0x0100,11484,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_POWER_D1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_POWER_D2
	CompareConstant(SND_CTL_POWER_D2,0x0200,11485,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_POWER_D2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_POWER_D3
	CompareConstant(SND_CTL_POWER_D3,0x0300,11486,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_POWER_D3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_POWER_D3hot
	CompareConstant(SND_CTL_POWER_D3hot,(SND_CTL_POWER_D3|0x0000),11487,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_POWER_D3hot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_POWER_D3cold
	CompareConstant(SND_CTL_POWER_D3cold,(SND_CTL_POWER_D3|0x0001),11488,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_POWER_D3cold\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_TLVT_CONTAINER
	CompareConstant(SND_CTL_TLVT_CONTAINER,0x0000,11489,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_TLVT_CONTAINER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_TLVT_DB_SCALE
	CompareConstant(SND_CTL_TLVT_DB_SCALE,0x0001,11490,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_TLVT_DB_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_TLVT_DB_LINEAR
	CompareConstant(SND_CTL_TLVT_DB_LINEAR,0x0002,11491,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_TLVT_DB_LINEAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_TLVT_DB_RANGE
	CompareConstant(SND_CTL_TLVT_DB_RANGE,0x0003,11492,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_TLVT_DB_RANGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_TLV_DB_GAIN_MUTE
	CompareConstant(SND_CTL_TLV_DB_GAIN_MUTE,-9999999,11493,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_TLV_DB_GAIN_MUTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_NONBLOCK
	CompareConstant(SND_CTL_NONBLOCK,0x0001,11494,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_NONBLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_ASYNC
	CompareConstant(SND_CTL_ASYNC,0x0002,11495,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_ASYNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_CTL_READONLY
	CompareConstant(SND_CTL_READONLY,0x0004,11496,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_CTL_READONLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SCTL_NOFREE
	CompareConstant(SND_SCTL_NOFREE,0x0001,11497,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SCTL_NOFREE\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(snd_aes_iec958_t,176, 27335, 1, 3.2, NULL, 27333, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(snd_ctl_elem_iface_t,4, 27364, 11, 3.2, NULL, 26333, NULL)
#else
Msg("Find size of snd_ctl_elem_iface_t (27364)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26333,NULL);\n",architecture,27364,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_ctl_elem_type_t,4, 27371, 11, 3.2, NULL, 26335, NULL)
#else
Msg("Find size of snd_ctl_elem_type_t (27371)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26335,NULL);\n",architecture,27371,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_ctl_event_type_t,4, 27378, 11, 3.2, NULL, 26337, NULL)
#else
Msg("Find size of snd_ctl_event_type_t (27378)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26337,NULL);\n",architecture,27378,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_ctl_type_t,4, 27396, 11, 3.2, NULL, 26339, NULL)
#else
Msg("Find size of snd_ctl_type_t (27396)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26339,NULL);\n",architecture,27396,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_hctl_compare_t,8, 27410, 11, 3.2, NULL, 26107, NULL)
#else
Msg("Find size of snd_hctl_compare_t (27410)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26107,NULL);\n",architecture,27410,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_hctl_callback_t,8, 27413, 11, 3.2, NULL, 26108, NULL)
#else
Msg("Find size of snd_hctl_callback_t (27413)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26108,NULL);\n",architecture,27413,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_hctl_elem_callback_t,8, 27708, 11, 3.2, NULL, 26109, NULL)
#else
Msg("Find size of snd_hctl_elem_callback_t (27708)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26109, NULL);\n",architecture,27708,0);
#endif

extern int snd_card_get_longname_db(int, char * *);
CheckInterfacedef(snd_card_get_longname,snd_card_get_longname_db);
extern int snd_card_get_name_db(int, char * *);
CheckInterfacedef(snd_card_get_name,snd_card_get_name_db);
extern int snd_card_next_db(int *);
CheckInterfacedef(snd_card_next,snd_card_next_db);
extern int snd_ctl_card_info_db(snd_ctl_t *, snd_ctl_card_info_t *);
CheckInterfacedef(snd_ctl_card_info,snd_ctl_card_info_db);
extern void snd_ctl_card_info_free_db(snd_ctl_card_info_t *);
CheckInterfacedef(snd_ctl_card_info_free,snd_ctl_card_info_free_db);
extern const char * snd_ctl_card_info_get_id_db(const snd_ctl_card_info_t *);
CheckInterfacedef(snd_ctl_card_info_get_id,snd_ctl_card_info_get_id_db);
extern const char * snd_ctl_card_info_get_mixername_db(const snd_ctl_card_info_t *);
CheckInterfacedef(snd_ctl_card_info_get_mixername,snd_ctl_card_info_get_mixername_db);
extern const char * snd_ctl_card_info_get_name_db(const snd_ctl_card_info_t *);
CheckInterfacedef(snd_ctl_card_info_get_name,snd_ctl_card_info_get_name_db);
extern int snd_ctl_card_info_malloc_db(snd_ctl_card_info_t * *);
CheckInterfacedef(snd_ctl_card_info_malloc,snd_ctl_card_info_malloc_db);
extern size_t snd_ctl_card_info_sizeof_db(void);
CheckInterfacedef(snd_ctl_card_info_sizeof,snd_ctl_card_info_sizeof_db);
extern int snd_ctl_close_db(snd_ctl_t *);
CheckInterfacedef(snd_ctl_close,snd_ctl_close_db);
extern void snd_ctl_elem_id_clear_db(snd_ctl_elem_id_t *);
CheckInterfacedef(snd_ctl_elem_id_clear,snd_ctl_elem_id_clear_db);
extern void snd_ctl_elem_id_free_db(snd_ctl_elem_id_t *);
CheckInterfacedef(snd_ctl_elem_id_free,snd_ctl_elem_id_free_db);
extern int snd_ctl_elem_id_malloc_db(snd_ctl_elem_id_t * *);
CheckInterfacedef(snd_ctl_elem_id_malloc,snd_ctl_elem_id_malloc_db);
extern void snd_ctl_elem_id_set_interface_db(snd_ctl_elem_id_t *, snd_ctl_elem_iface_t);
CheckInterfacedef(snd_ctl_elem_id_set_interface,snd_ctl_elem_id_set_interface_db);
extern void snd_ctl_elem_id_set_name_db(snd_ctl_elem_id_t *, const char *);
CheckInterfacedef(snd_ctl_elem_id_set_name,snd_ctl_elem_id_set_name_db);
extern void snd_ctl_elem_info_clear_db(snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_clear,snd_ctl_elem_info_clear_db);
extern void snd_ctl_elem_info_free_db(snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_free,snd_ctl_elem_info_free_db);
extern unsigned int snd_ctl_elem_info_get_count_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_get_count,snd_ctl_elem_info_get_count_db);
extern long int snd_ctl_elem_info_get_max_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_get_max,snd_ctl_elem_info_get_max_db);
extern long int snd_ctl_elem_info_get_min_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_get_min,snd_ctl_elem_info_get_min_db);
extern long int snd_ctl_elem_info_get_step_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_get_step,snd_ctl_elem_info_get_step_db);
extern int snd_ctl_elem_info_is_readable_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_is_readable,snd_ctl_elem_info_is_readable_db);
extern int snd_ctl_elem_info_malloc_db(snd_ctl_elem_info_t * *);
CheckInterfacedef(snd_ctl_elem_info_malloc,snd_ctl_elem_info_malloc_db);
extern void snd_ctl_elem_value_clear_db(snd_ctl_elem_value_t *);
CheckInterfacedef(snd_ctl_elem_value_clear,snd_ctl_elem_value_clear_db);
extern void snd_ctl_elem_value_free_db(snd_ctl_elem_value_t *);
CheckInterfacedef(snd_ctl_elem_value_free,snd_ctl_elem_value_free_db);
extern long int snd_ctl_elem_value_get_integer_db(const snd_ctl_elem_value_t *, unsigned int);
CheckInterfacedef(snd_ctl_elem_value_get_integer,snd_ctl_elem_value_get_integer_db);
extern int snd_ctl_elem_value_malloc_db(snd_ctl_elem_value_t * *);
CheckInterfacedef(snd_ctl_elem_value_malloc,snd_ctl_elem_value_malloc_db);
extern void snd_ctl_elem_value_set_integer_db(snd_ctl_elem_value_t *, unsigned int, long int);
CheckInterfacedef(snd_ctl_elem_value_set_integer,snd_ctl_elem_value_set_integer_db);
extern int snd_ctl_hwdep_info_db(snd_ctl_t *, snd_hwdep_info_t *);
CheckInterfacedef(snd_ctl_hwdep_info,snd_ctl_hwdep_info_db);
extern int snd_ctl_hwdep_next_device_db(snd_ctl_t *, int *);
CheckInterfacedef(snd_ctl_hwdep_next_device,snd_ctl_hwdep_next_device_db);
extern const char * snd_ctl_name_db(snd_ctl_t *);
CheckInterfacedef(snd_ctl_name,snd_ctl_name_db);
extern int snd_ctl_open_db(snd_ctl_t * *, const char *, int);
CheckInterfacedef(snd_ctl_open,snd_ctl_open_db);
extern int snd_ctl_pcm_info_db(snd_ctl_t *, snd_pcm_info_t *);
CheckInterfacedef(snd_ctl_pcm_info,snd_ctl_pcm_info_db);
extern int snd_ctl_pcm_next_device_db(snd_ctl_t *, int *);
CheckInterfacedef(snd_ctl_pcm_next_device,snd_ctl_pcm_next_device_db);
extern int snd_ctl_rawmidi_info_db(snd_ctl_t *, snd_rawmidi_info_t *);
CheckInterfacedef(snd_ctl_rawmidi_info,snd_ctl_rawmidi_info_db);
extern int snd_ctl_rawmidi_next_device_db(snd_ctl_t *, int *);
CheckInterfacedef(snd_ctl_rawmidi_next_device,snd_ctl_rawmidi_next_device_db);
extern int snd_hctl_close_db(snd_hctl_t *);
CheckInterfacedef(snd_hctl_close,snd_hctl_close_db);
extern int snd_hctl_elem_info_db(snd_hctl_elem_t *, snd_ctl_elem_info_t *);
CheckInterfacedef(snd_hctl_elem_info,snd_hctl_elem_info_db);
extern int snd_hctl_elem_read_db(snd_hctl_elem_t *, snd_ctl_elem_value_t *);
CheckInterfacedef(snd_hctl_elem_read,snd_hctl_elem_read_db);
extern int snd_hctl_elem_write_db(snd_hctl_elem_t *, snd_ctl_elem_value_t *);
CheckInterfacedef(snd_hctl_elem_write,snd_hctl_elem_write_db);
extern snd_hctl_elem_t * snd_hctl_find_elem_db(snd_hctl_t *, const snd_ctl_elem_id_t *);
CheckInterfacedef(snd_hctl_find_elem,snd_hctl_find_elem_db);
extern int snd_hctl_free_db(snd_hctl_t *);
CheckInterfacedef(snd_hctl_free,snd_hctl_free_db);
extern int snd_hctl_load_db(snd_hctl_t *);
CheckInterfacedef(snd_hctl_load,snd_hctl_load_db);
extern int snd_hctl_open_db(snd_hctl_t * *, const char *, int);
CheckInterfacedef(snd_hctl_open,snd_hctl_open_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/control.h\n\n",pcnt,cnt);
return cnt;
#endif

}
