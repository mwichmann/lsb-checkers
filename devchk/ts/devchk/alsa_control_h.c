/*
 * Test of alsa/control.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <sys/poll.h>
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

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
CheckTypeSize(struct snd_aes_iec958,0, 27333, 1, , NULL, 0, NULL)
Msg("Missing member data for snd_aes_iec958 on All\n");
CheckOffset(struct snd_aes_iec958,status,0,1,74881)
CheckOffset(struct snd_aes_iec958,subcode,0,1,74882)
CheckOffset(struct snd_aes_iec958,pad,0,1,74883)
CheckOffset(struct snd_aes_iec958,dig_subframe,0,1,74884)
#endif

#if 1
CheckTypeSize(snd_aes_iec958_t,176, 27335, 1, 3.2, NULL, 27333, NULL)
#endif

#if defined __s390x__
CheckTypeSize(snd_ctl_elem_iface_t,4, 27364, 12, 3.2, NULL, 26333, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_ctl_elem_iface_t,4, 27364, 11, 3.2, NULL, 26333, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_ctl_elem_iface_t,4, 27364, 10, 3.2, NULL, 26333, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_ctl_elem_iface_t,4, 27364, 9, 3.2, NULL, 26333, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_ctl_elem_iface_t,4, 27364, 6, 3.2, NULL, 26333, NULL)
#elif defined __ia64__
CheckTypeSize(snd_ctl_elem_iface_t,4, 27364, 3, 3.2, NULL, 26333, NULL)
#elif defined __i386__
CheckTypeSize(snd_ctl_elem_iface_t,4, 27364, 2, 3.2, NULL, 26333, NULL)
#else
Msg("Find size of snd_ctl_elem_iface_t (27364)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26333,NULL);\n",architecture,27364,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_ctl_elem_type_t,4, 27371, 12, 3.2, NULL, 26335, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_ctl_elem_type_t,4, 27371, 11, 3.2, NULL, 26335, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_ctl_elem_type_t,4, 27371, 10, 3.2, NULL, 26335, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_ctl_elem_type_t,4, 27371, 9, 3.2, NULL, 26335, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_ctl_elem_type_t,4, 27371, 6, 3.2, NULL, 26335, NULL)
#elif defined __ia64__
CheckTypeSize(snd_ctl_elem_type_t,4, 27371, 3, 3.2, NULL, 26335, NULL)
#elif defined __i386__
CheckTypeSize(snd_ctl_elem_type_t,4, 27371, 2, 3.2, NULL, 26335, NULL)
#else
Msg("Find size of snd_ctl_elem_type_t (27371)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26335,NULL);\n",architecture,27371,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_ctl_event_type_t,4, 27378, 12, 3.2, NULL, 26337, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_ctl_event_type_t,4, 27378, 11, 3.2, NULL, 26337, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_ctl_event_type_t,4, 27378, 10, 3.2, NULL, 26337, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_ctl_event_type_t,4, 27378, 9, 3.2, NULL, 26337, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_ctl_event_type_t,4, 27378, 6, 3.2, NULL, 26337, NULL)
#elif defined __ia64__
CheckTypeSize(snd_ctl_event_type_t,4, 27378, 3, 3.2, NULL, 26337, NULL)
#elif defined __i386__
CheckTypeSize(snd_ctl_event_type_t,4, 27378, 2, 3.2, NULL, 26337, NULL)
#else
Msg("Find size of snd_ctl_event_type_t (27378)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26337,NULL);\n",architecture,27378,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_ctl_type_t,4, 27396, 12, 3.2, NULL, 26339, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_ctl_type_t,4, 27396, 11, 3.2, NULL, 26339, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_ctl_type_t,4, 27396, 10, 3.2, NULL, 26339, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_ctl_type_t,4, 27396, 9, 3.2, NULL, 26339, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_ctl_type_t,4, 27396, 6, 3.2, NULL, 26339, NULL)
#elif defined __ia64__
CheckTypeSize(snd_ctl_type_t,4, 27396, 3, 3.2, NULL, 26339, NULL)
#elif defined __i386__
CheckTypeSize(snd_ctl_type_t,4, 27396, 2, 3.2, NULL, 26339, NULL)
#else
Msg("Find size of snd_ctl_type_t (27396)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26339,NULL);\n",architecture,27396,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_hctl_compare_t,8, 27410, 12, 3.2, NULL, 26107, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_hctl_compare_t,8, 27410, 11, 3.2, NULL, 26107, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_hctl_compare_t,4, 27410, 10, 3.2, NULL, 26107, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_hctl_compare_t,8, 27410, 9, 3.2, NULL, 26107, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_hctl_compare_t,4, 27410, 6, 3.2, NULL, 26107, NULL)
#elif defined __ia64__
CheckTypeSize(snd_hctl_compare_t,8, 27410, 3, 3.2, NULL, 26107, NULL)
#elif defined __i386__
CheckTypeSize(snd_hctl_compare_t,4, 27410, 2, 3.2, NULL, 26107, NULL)
#else
Msg("Find size of snd_hctl_compare_t (27410)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26107,NULL);\n",architecture,27410,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_hctl_callback_t,8, 27413, 12, 3.2, NULL, 26108, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_hctl_callback_t,8, 27413, 11, 3.2, NULL, 26108, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_hctl_callback_t,4, 27413, 10, 3.2, NULL, 26108, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_hctl_callback_t,8, 27413, 9, 3.2, NULL, 26108, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_hctl_callback_t,4, 27413, 6, 3.2, NULL, 26108, NULL)
#elif defined __ia64__
CheckTypeSize(snd_hctl_callback_t,8, 27413, 3, 3.2, NULL, 26108, NULL)
#elif defined __i386__
CheckTypeSize(snd_hctl_callback_t,4, 27413, 2, 3.2, NULL, 26108, NULL)
#else
Msg("Find size of snd_hctl_callback_t (27413)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26108,NULL);\n",architecture,27413,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_hctl_elem_callback_t,8, 27708, 12, 3.2, NULL, 26109, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_hctl_elem_callback_t,8, 27708, 11, 3.2, NULL, 26109, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_hctl_elem_callback_t,4, 27708, 10, 3.2, NULL, 26109, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_hctl_elem_callback_t,8, 27708, 9, 3.2, NULL, 26109, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_hctl_elem_callback_t,4, 27708, 6, 3.2, NULL, 26109, NULL)
#elif defined __ia64__
CheckTypeSize(snd_hctl_elem_callback_t,8, 27708, 3, 3.2, NULL, 26109, NULL)
#elif defined __i386__
CheckTypeSize(snd_hctl_elem_callback_t,4, 27708, 2, 3.2, NULL, 26109, NULL)
#else
Msg("Find size of snd_hctl_elem_callback_t (27708)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26109, NULL);\n",architecture,27708,0);
#endif

#if defined __s390x__
/* S390X */
typedef int (*snd_hctl_compare_t_db)(const snd_hctl_elem_t *, const snd_hctl_elem_t *);
CheckFunctionTypedef(snd_hctl_compare_t,snd_hctl_compare_t_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*snd_hctl_compare_t_db)(const snd_hctl_elem_t *, const snd_hctl_elem_t *);
CheckFunctionTypedef(snd_hctl_compare_t,snd_hctl_compare_t_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*snd_hctl_compare_t_db)(const snd_hctl_elem_t *, const snd_hctl_elem_t *);
CheckFunctionTypedef(snd_hctl_compare_t,snd_hctl_compare_t_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*snd_hctl_compare_t_db)(const snd_hctl_elem_t *, const snd_hctl_elem_t *);
CheckFunctionTypedef(snd_hctl_compare_t,snd_hctl_compare_t_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*snd_hctl_compare_t_db)(const snd_hctl_elem_t *, const snd_hctl_elem_t *);
CheckFunctionTypedef(snd_hctl_compare_t,snd_hctl_compare_t_db);
#elif defined __ia64__
/* IA64 */
typedef int (*snd_hctl_compare_t_db)(const snd_hctl_elem_t *, const snd_hctl_elem_t *);
CheckFunctionTypedef(snd_hctl_compare_t,snd_hctl_compare_t_db);
#elif defined __i386__
/* IA32 */
typedef int (*snd_hctl_compare_t_db)(const snd_hctl_elem_t *, const snd_hctl_elem_t *);
CheckFunctionTypedef(snd_hctl_compare_t,snd_hctl_compare_t_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*snd_hctl_callback_t_db)(snd_hctl_t *, unsigned int, snd_hctl_elem_t *);
CheckFunctionTypedef(snd_hctl_callback_t,snd_hctl_callback_t_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*snd_hctl_callback_t_db)(snd_hctl_t *, unsigned int, snd_hctl_elem_t *);
CheckFunctionTypedef(snd_hctl_callback_t,snd_hctl_callback_t_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*snd_hctl_callback_t_db)(snd_hctl_t *, unsigned int, snd_hctl_elem_t *);
CheckFunctionTypedef(snd_hctl_callback_t,snd_hctl_callback_t_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*snd_hctl_callback_t_db)(snd_hctl_t *, unsigned int, snd_hctl_elem_t *);
CheckFunctionTypedef(snd_hctl_callback_t,snd_hctl_callback_t_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*snd_hctl_callback_t_db)(snd_hctl_t *, unsigned int, snd_hctl_elem_t *);
CheckFunctionTypedef(snd_hctl_callback_t,snd_hctl_callback_t_db);
#elif defined __ia64__
/* IA64 */
typedef int (*snd_hctl_callback_t_db)(snd_hctl_t *, unsigned int, snd_hctl_elem_t *);
CheckFunctionTypedef(snd_hctl_callback_t,snd_hctl_callback_t_db);
#elif defined __i386__
/* IA32 */
typedef int (*snd_hctl_callback_t_db)(snd_hctl_t *, unsigned int, snd_hctl_elem_t *);
CheckFunctionTypedef(snd_hctl_callback_t,snd_hctl_callback_t_db);
#elif defined __s390x__
/* S390X */
typedef int (*snd_hctl_elem_callback_t_db)(snd_hctl_elem_t *, unsigned int);
CheckFunctionTypedef(snd_hctl_elem_callback_t,snd_hctl_elem_callback_t_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*snd_hctl_elem_callback_t_db)(snd_hctl_elem_t *, unsigned int);
CheckFunctionTypedef(snd_hctl_elem_callback_t,snd_hctl_elem_callback_t_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*snd_hctl_elem_callback_t_db)(snd_hctl_elem_t *, unsigned int);
CheckFunctionTypedef(snd_hctl_elem_callback_t,snd_hctl_elem_callback_t_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*snd_hctl_elem_callback_t_db)(snd_hctl_elem_t *, unsigned int);
CheckFunctionTypedef(snd_hctl_elem_callback_t,snd_hctl_elem_callback_t_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*snd_hctl_elem_callback_t_db)(snd_hctl_elem_t *, unsigned int);
CheckFunctionTypedef(snd_hctl_elem_callback_t,snd_hctl_elem_callback_t_db);
#elif defined __ia64__
/* IA64 */
typedef int (*snd_hctl_elem_callback_t_db)(snd_hctl_elem_t *, unsigned int);
CheckFunctionTypedef(snd_hctl_elem_callback_t,snd_hctl_elem_callback_t_db);
#elif defined __i386__
/* IA32 */
typedef int (*snd_hctl_elem_callback_t_db)(snd_hctl_elem_t *, unsigned int);
CheckFunctionTypedef(snd_hctl_elem_callback_t,snd_hctl_elem_callback_t_db);
#endif

extern int snd_async_add_ctl_handler_db(snd_async_handler_t * *, snd_ctl_t *, snd_async_callback_t, void *);
CheckInterfacedef(snd_async_add_ctl_handler,snd_async_add_ctl_handler_db);
extern snd_ctl_t * snd_async_handler_get_ctl_db(snd_async_handler_t *);
CheckInterfacedef(snd_async_handler_get_ctl,snd_async_handler_get_ctl_db);
extern int snd_card_get_index_db(const char *);
CheckInterfacedef(snd_card_get_index,snd_card_get_index_db);
extern int snd_card_get_longname_db(int, char * *);
CheckInterfacedef(snd_card_get_longname,snd_card_get_longname_db);
extern int snd_card_get_name_db(int, char * *);
CheckInterfacedef(snd_card_get_name,snd_card_get_name_db);
extern int snd_card_load_db(int);
CheckInterfacedef(snd_card_load,snd_card_load_db);
extern int snd_card_next_db(int *);
CheckInterfacedef(snd_card_next,snd_card_next_db);
extern int snd_ctl_card_info_db(snd_ctl_t *, snd_ctl_card_info_t *);
CheckInterfacedef(snd_ctl_card_info,snd_ctl_card_info_db);
extern void snd_ctl_card_info_clear_db(snd_ctl_card_info_t *);
CheckInterfacedef(snd_ctl_card_info_clear,snd_ctl_card_info_clear_db);
extern void snd_ctl_card_info_copy_db(snd_ctl_card_info_t *, const snd_ctl_card_info_t *);
CheckInterfacedef(snd_ctl_card_info_copy,snd_ctl_card_info_copy_db);
extern void snd_ctl_card_info_free_db(snd_ctl_card_info_t *);
CheckInterfacedef(snd_ctl_card_info_free,snd_ctl_card_info_free_db);
extern const char * snd_ctl_card_info_get_components_db(const snd_ctl_card_info_t *);
CheckInterfacedef(snd_ctl_card_info_get_components,snd_ctl_card_info_get_components_db);
extern const char * snd_ctl_card_info_get_driver_db(const snd_ctl_card_info_t *);
CheckInterfacedef(snd_ctl_card_info_get_driver,snd_ctl_card_info_get_driver_db);
extern const char * snd_ctl_card_info_get_id_db(const snd_ctl_card_info_t *);
CheckInterfacedef(snd_ctl_card_info_get_id,snd_ctl_card_info_get_id_db);
extern const char * snd_ctl_card_info_get_longname_db(const snd_ctl_card_info_t *);
CheckInterfacedef(snd_ctl_card_info_get_longname,snd_ctl_card_info_get_longname_db);
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
extern int snd_ctl_elem_add_boolean_db(snd_ctl_t *, const snd_ctl_elem_id_t *, unsigned int);
CheckInterfacedef(snd_ctl_elem_add_boolean,snd_ctl_elem_add_boolean_db);
extern int snd_ctl_elem_add_iec958_db(snd_ctl_t *, const snd_ctl_elem_id_t *);
CheckInterfacedef(snd_ctl_elem_add_iec958,snd_ctl_elem_add_iec958_db);
extern int snd_ctl_elem_add_integer_db(snd_ctl_t *, const snd_ctl_elem_id_t *, unsigned int, long int, long int, long int);
CheckInterfacedef(snd_ctl_elem_add_integer,snd_ctl_elem_add_integer_db);
extern void snd_ctl_elem_id_clear_db(snd_ctl_elem_id_t *);
CheckInterfacedef(snd_ctl_elem_id_clear,snd_ctl_elem_id_clear_db);
extern void snd_ctl_elem_id_copy_db(snd_ctl_elem_id_t *, const snd_ctl_elem_id_t *);
CheckInterfacedef(snd_ctl_elem_id_copy,snd_ctl_elem_id_copy_db);
extern void snd_ctl_elem_id_free_db(snd_ctl_elem_id_t *);
CheckInterfacedef(snd_ctl_elem_id_free,snd_ctl_elem_id_free_db);
extern unsigned int snd_ctl_elem_id_get_device_db(const snd_ctl_elem_id_t *);
CheckInterfacedef(snd_ctl_elem_id_get_device,snd_ctl_elem_id_get_device_db);
extern unsigned int snd_ctl_elem_id_get_index_db(const snd_ctl_elem_id_t *);
CheckInterfacedef(snd_ctl_elem_id_get_index,snd_ctl_elem_id_get_index_db);
extern snd_ctl_elem_iface_t snd_ctl_elem_id_get_interface_db(const snd_ctl_elem_id_t *);
CheckInterfacedef(snd_ctl_elem_id_get_interface,snd_ctl_elem_id_get_interface_db);
extern const char * snd_ctl_elem_id_get_name_db(const snd_ctl_elem_id_t *);
CheckInterfacedef(snd_ctl_elem_id_get_name,snd_ctl_elem_id_get_name_db);
extern unsigned int snd_ctl_elem_id_get_numid_db(const snd_ctl_elem_id_t *);
CheckInterfacedef(snd_ctl_elem_id_get_numid,snd_ctl_elem_id_get_numid_db);
extern unsigned int snd_ctl_elem_id_get_subdevice_db(const snd_ctl_elem_id_t *);
CheckInterfacedef(snd_ctl_elem_id_get_subdevice,snd_ctl_elem_id_get_subdevice_db);
extern int snd_ctl_elem_id_malloc_db(snd_ctl_elem_id_t * *);
CheckInterfacedef(snd_ctl_elem_id_malloc,snd_ctl_elem_id_malloc_db);
extern void snd_ctl_elem_id_set_device_db(snd_ctl_elem_id_t *, unsigned int);
CheckInterfacedef(snd_ctl_elem_id_set_device,snd_ctl_elem_id_set_device_db);
extern void snd_ctl_elem_id_set_index_db(snd_ctl_elem_id_t *, unsigned int);
CheckInterfacedef(snd_ctl_elem_id_set_index,snd_ctl_elem_id_set_index_db);
extern void snd_ctl_elem_id_set_interface_db(snd_ctl_elem_id_t *, snd_ctl_elem_iface_t);
CheckInterfacedef(snd_ctl_elem_id_set_interface,snd_ctl_elem_id_set_interface_db);
extern void snd_ctl_elem_id_set_name_db(snd_ctl_elem_id_t *, const char *);
CheckInterfacedef(snd_ctl_elem_id_set_name,snd_ctl_elem_id_set_name_db);
extern void snd_ctl_elem_id_set_numid_db(snd_ctl_elem_id_t *, unsigned int);
CheckInterfacedef(snd_ctl_elem_id_set_numid,snd_ctl_elem_id_set_numid_db);
extern void snd_ctl_elem_id_set_subdevice_db(snd_ctl_elem_id_t *, unsigned int);
CheckInterfacedef(snd_ctl_elem_id_set_subdevice,snd_ctl_elem_id_set_subdevice_db);
extern size_t snd_ctl_elem_id_sizeof_db(void);
CheckInterfacedef(snd_ctl_elem_id_sizeof,snd_ctl_elem_id_sizeof_db);
extern const char * snd_ctl_elem_iface_name_db(snd_ctl_elem_iface_t);
CheckInterfacedef(snd_ctl_elem_iface_name,snd_ctl_elem_iface_name_db);
extern int snd_ctl_elem_info_db(snd_ctl_t *, snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info,snd_ctl_elem_info_db);
extern void snd_ctl_elem_info_clear_db(snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_clear,snd_ctl_elem_info_clear_db);
extern void snd_ctl_elem_info_copy_db(snd_ctl_elem_info_t *, const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_copy,snd_ctl_elem_info_copy_db);
extern void snd_ctl_elem_info_free_db(snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_free,snd_ctl_elem_info_free_db);
extern unsigned int snd_ctl_elem_info_get_count_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_get_count,snd_ctl_elem_info_get_count_db);
extern void snd_ctl_elem_info_get_id_db(const snd_ctl_elem_info_t *, snd_ctl_elem_id_t *);
CheckInterfacedef(snd_ctl_elem_info_get_id,snd_ctl_elem_info_get_id_db);
extern const char * snd_ctl_elem_info_get_item_name_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_get_item_name,snd_ctl_elem_info_get_item_name_db);
extern unsigned int snd_ctl_elem_info_get_items_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_get_items,snd_ctl_elem_info_get_items_db);
extern long long int snd_ctl_elem_info_get_max64_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_get_max64,snd_ctl_elem_info_get_max64_db);
extern long int snd_ctl_elem_info_get_max_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_get_max,snd_ctl_elem_info_get_max_db);
extern long long int snd_ctl_elem_info_get_min64_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_get_min64,snd_ctl_elem_info_get_min64_db);
extern long int snd_ctl_elem_info_get_min_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_get_min,snd_ctl_elem_info_get_min_db);
extern const char * snd_ctl_elem_info_get_name_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_get_name,snd_ctl_elem_info_get_name_db);
extern unsigned int snd_ctl_elem_info_get_numid_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_get_numid,snd_ctl_elem_info_get_numid_db);
extern long long int snd_ctl_elem_info_get_step64_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_get_step64,snd_ctl_elem_info_get_step64_db);
extern long int snd_ctl_elem_info_get_step_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_get_step,snd_ctl_elem_info_get_step_db);
extern snd_ctl_elem_type_t snd_ctl_elem_info_get_type_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_get_type,snd_ctl_elem_info_get_type_db);
extern int snd_ctl_elem_info_is_inactive_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_is_inactive,snd_ctl_elem_info_is_inactive_db);
extern int snd_ctl_elem_info_is_locked_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_is_locked,snd_ctl_elem_info_is_locked_db);
extern int snd_ctl_elem_info_is_readable_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_is_readable,snd_ctl_elem_info_is_readable_db);
extern int snd_ctl_elem_info_is_user_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_is_user,snd_ctl_elem_info_is_user_db);
extern int snd_ctl_elem_info_is_volatile_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_is_volatile,snd_ctl_elem_info_is_volatile_db);
extern int snd_ctl_elem_info_is_writable_db(const snd_ctl_elem_info_t *);
CheckInterfacedef(snd_ctl_elem_info_is_writable,snd_ctl_elem_info_is_writable_db);
extern int snd_ctl_elem_info_malloc_db(snd_ctl_elem_info_t * *);
CheckInterfacedef(snd_ctl_elem_info_malloc,snd_ctl_elem_info_malloc_db);
extern void snd_ctl_elem_info_set_id_db(snd_ctl_elem_info_t *, const snd_ctl_elem_id_t *);
CheckInterfacedef(snd_ctl_elem_info_set_id,snd_ctl_elem_info_set_id_db);
extern void snd_ctl_elem_info_set_item_db(snd_ctl_elem_info_t *, unsigned int);
CheckInterfacedef(snd_ctl_elem_info_set_item,snd_ctl_elem_info_set_item_db);
extern size_t snd_ctl_elem_info_sizeof_db(void);
CheckInterfacedef(snd_ctl_elem_info_sizeof,snd_ctl_elem_info_sizeof_db);
extern int snd_ctl_elem_list_db(snd_ctl_t *, snd_ctl_elem_list_t *);
CheckInterfacedef(snd_ctl_elem_list,snd_ctl_elem_list_db);
extern int snd_ctl_elem_list_alloc_space_db(snd_ctl_elem_list_t *, unsigned int);
CheckInterfacedef(snd_ctl_elem_list_alloc_space,snd_ctl_elem_list_alloc_space_db);
extern void snd_ctl_elem_list_clear_db(snd_ctl_elem_list_t *);
CheckInterfacedef(snd_ctl_elem_list_clear,snd_ctl_elem_list_clear_db);
extern void snd_ctl_elem_list_copy_db(snd_ctl_elem_list_t *, const snd_ctl_elem_list_t *);
CheckInterfacedef(snd_ctl_elem_list_copy,snd_ctl_elem_list_copy_db);
extern void snd_ctl_elem_list_free_db(snd_ctl_elem_list_t *);
CheckInterfacedef(snd_ctl_elem_list_free,snd_ctl_elem_list_free_db);
extern void snd_ctl_elem_list_free_space_db(snd_ctl_elem_list_t *);
CheckInterfacedef(snd_ctl_elem_list_free_space,snd_ctl_elem_list_free_space_db);
extern unsigned int snd_ctl_elem_list_get_count_db(const snd_ctl_elem_list_t *);
CheckInterfacedef(snd_ctl_elem_list_get_count,snd_ctl_elem_list_get_count_db);
extern void snd_ctl_elem_list_get_id_db(const snd_ctl_elem_list_t *, unsigned int, snd_ctl_elem_id_t *);
CheckInterfacedef(snd_ctl_elem_list_get_id,snd_ctl_elem_list_get_id_db);
extern const char * snd_ctl_elem_list_get_name_db(const snd_ctl_elem_list_t *, unsigned int);
CheckInterfacedef(snd_ctl_elem_list_get_name,snd_ctl_elem_list_get_name_db);
extern unsigned int snd_ctl_elem_list_get_used_db(const snd_ctl_elem_list_t *);
CheckInterfacedef(snd_ctl_elem_list_get_used,snd_ctl_elem_list_get_used_db);
extern int snd_ctl_elem_list_malloc_db(snd_ctl_elem_list_t * *);
CheckInterfacedef(snd_ctl_elem_list_malloc,snd_ctl_elem_list_malloc_db);
extern void snd_ctl_elem_list_set_offset_db(snd_ctl_elem_list_t *, unsigned int);
CheckInterfacedef(snd_ctl_elem_list_set_offset,snd_ctl_elem_list_set_offset_db);
extern size_t snd_ctl_elem_list_sizeof_db(void);
CheckInterfacedef(snd_ctl_elem_list_sizeof,snd_ctl_elem_list_sizeof_db);
extern int snd_ctl_elem_read_db(snd_ctl_t *, snd_ctl_elem_value_t *);
CheckInterfacedef(snd_ctl_elem_read,snd_ctl_elem_read_db);
extern int snd_ctl_elem_remove_db(snd_ctl_t *, snd_ctl_elem_id_t *);
CheckInterfacedef(snd_ctl_elem_remove,snd_ctl_elem_remove_db);
extern const char * snd_ctl_elem_type_name_db(snd_ctl_elem_type_t);
CheckInterfacedef(snd_ctl_elem_type_name,snd_ctl_elem_type_name_db);
extern void snd_ctl_elem_value_clear_db(snd_ctl_elem_value_t *);
CheckInterfacedef(snd_ctl_elem_value_clear,snd_ctl_elem_value_clear_db);
extern void snd_ctl_elem_value_copy_db(snd_ctl_elem_value_t *, const snd_ctl_elem_value_t *);
CheckInterfacedef(snd_ctl_elem_value_copy,snd_ctl_elem_value_copy_db);
extern void snd_ctl_elem_value_free_db(snd_ctl_elem_value_t *);
CheckInterfacedef(snd_ctl_elem_value_free,snd_ctl_elem_value_free_db);
extern int snd_ctl_elem_value_get_boolean_db(const snd_ctl_elem_value_t *, unsigned int);
CheckInterfacedef(snd_ctl_elem_value_get_boolean,snd_ctl_elem_value_get_boolean_db);
extern unsigned char snd_ctl_elem_value_get_byte_db(const snd_ctl_elem_value_t *, unsigned int);
CheckInterfacedef(snd_ctl_elem_value_get_byte,snd_ctl_elem_value_get_byte_db);
extern const void * snd_ctl_elem_value_get_bytes_db(const snd_ctl_elem_value_t *);
CheckInterfacedef(snd_ctl_elem_value_get_bytes,snd_ctl_elem_value_get_bytes_db);
extern unsigned int snd_ctl_elem_value_get_enumerated_db(const snd_ctl_elem_value_t *, unsigned int);
CheckInterfacedef(snd_ctl_elem_value_get_enumerated,snd_ctl_elem_value_get_enumerated_db);
extern void snd_ctl_elem_value_get_id_db(const snd_ctl_elem_value_t *, snd_ctl_elem_id_t *);
CheckInterfacedef(snd_ctl_elem_value_get_id,snd_ctl_elem_value_get_id_db);
extern void snd_ctl_elem_value_get_iec958_db(const snd_ctl_elem_value_t *, snd_aes_iec958_t *);
CheckInterfacedef(snd_ctl_elem_value_get_iec958,snd_ctl_elem_value_get_iec958_db);
extern long long int snd_ctl_elem_value_get_integer64_db(const snd_ctl_elem_value_t *, unsigned int);
CheckInterfacedef(snd_ctl_elem_value_get_integer64,snd_ctl_elem_value_get_integer64_db);
extern long int snd_ctl_elem_value_get_integer_db(const snd_ctl_elem_value_t *, unsigned int);
CheckInterfacedef(snd_ctl_elem_value_get_integer,snd_ctl_elem_value_get_integer_db);
extern int snd_ctl_elem_value_malloc_db(snd_ctl_elem_value_t * *);
CheckInterfacedef(snd_ctl_elem_value_malloc,snd_ctl_elem_value_malloc_db);
extern void snd_ctl_elem_value_set_boolean_db(snd_ctl_elem_value_t *, unsigned int, long int);
CheckInterfacedef(snd_ctl_elem_value_set_boolean,snd_ctl_elem_value_set_boolean_db);
extern void snd_ctl_elem_value_set_byte_db(snd_ctl_elem_value_t *, unsigned int, unsigned char);
CheckInterfacedef(snd_ctl_elem_value_set_byte,snd_ctl_elem_value_set_byte_db);
extern void snd_ctl_elem_value_set_enumerated_db(snd_ctl_elem_value_t *, unsigned int, unsigned int);
CheckInterfacedef(snd_ctl_elem_value_set_enumerated,snd_ctl_elem_value_set_enumerated_db);
extern void snd_ctl_elem_value_set_id_db(snd_ctl_elem_value_t *, const snd_ctl_elem_id_t *);
CheckInterfacedef(snd_ctl_elem_value_set_id,snd_ctl_elem_value_set_id_db);
extern void snd_ctl_elem_value_set_iec958_db(snd_ctl_elem_value_t *, const snd_aes_iec958_t *);
CheckInterfacedef(snd_ctl_elem_value_set_iec958,snd_ctl_elem_value_set_iec958_db);
extern void snd_ctl_elem_value_set_integer64_db(snd_ctl_elem_value_t *, unsigned int, long long int);
CheckInterfacedef(snd_ctl_elem_value_set_integer64,snd_ctl_elem_value_set_integer64_db);
extern void snd_ctl_elem_value_set_integer_db(snd_ctl_elem_value_t *, unsigned int, long int);
CheckInterfacedef(snd_ctl_elem_value_set_integer,snd_ctl_elem_value_set_integer_db);
extern size_t snd_ctl_elem_value_sizeof_db(void);
CheckInterfacedef(snd_ctl_elem_value_sizeof,snd_ctl_elem_value_sizeof_db);
extern int snd_ctl_elem_write_db(snd_ctl_t *, snd_ctl_elem_value_t *);
CheckInterfacedef(snd_ctl_elem_write,snd_ctl_elem_write_db);
extern void snd_ctl_event_clear_db(snd_ctl_event_t *);
CheckInterfacedef(snd_ctl_event_clear,snd_ctl_event_clear_db);
extern void snd_ctl_event_copy_db(snd_ctl_event_t *, const snd_ctl_event_t *);
CheckInterfacedef(snd_ctl_event_copy,snd_ctl_event_copy_db);
extern void snd_ctl_event_elem_get_id_db(const snd_ctl_event_t *, snd_ctl_elem_id_t *);
CheckInterfacedef(snd_ctl_event_elem_get_id,snd_ctl_event_elem_get_id_db);
extern unsigned int snd_ctl_event_elem_get_mask_db(const snd_ctl_event_t *);
CheckInterfacedef(snd_ctl_event_elem_get_mask,snd_ctl_event_elem_get_mask_db);
extern void snd_ctl_event_free_db(snd_ctl_event_t *);
CheckInterfacedef(snd_ctl_event_free,snd_ctl_event_free_db);
extern int snd_ctl_event_malloc_db(snd_ctl_event_t * *);
CheckInterfacedef(snd_ctl_event_malloc,snd_ctl_event_malloc_db);
extern size_t snd_ctl_event_sizeof_db(void);
CheckInterfacedef(snd_ctl_event_sizeof,snd_ctl_event_sizeof_db);
extern int snd_ctl_hwdep_info_db(snd_ctl_t *, snd_hwdep_info_t *);
CheckInterfacedef(snd_ctl_hwdep_info,snd_ctl_hwdep_info_db);
extern int snd_ctl_hwdep_next_device_db(snd_ctl_t *, int *);
CheckInterfacedef(snd_ctl_hwdep_next_device,snd_ctl_hwdep_next_device_db);
extern const char * snd_ctl_name_db(snd_ctl_t *);
CheckInterfacedef(snd_ctl_name,snd_ctl_name_db);
extern int snd_ctl_nonblock_db(snd_ctl_t *, int);
CheckInterfacedef(snd_ctl_nonblock,snd_ctl_nonblock_db);
extern int snd_ctl_open_db(snd_ctl_t * *, const char *, int);
CheckInterfacedef(snd_ctl_open,snd_ctl_open_db);
extern int snd_ctl_pcm_info_db(snd_ctl_t *, snd_pcm_info_t *);
CheckInterfacedef(snd_ctl_pcm_info,snd_ctl_pcm_info_db);
extern int snd_ctl_pcm_next_device_db(snd_ctl_t *, int *);
CheckInterfacedef(snd_ctl_pcm_next_device,snd_ctl_pcm_next_device_db);
extern int snd_ctl_poll_descriptors_db(snd_ctl_t *, struct pollfd *, unsigned int);
CheckInterfacedef(snd_ctl_poll_descriptors,snd_ctl_poll_descriptors_db);
extern int snd_ctl_poll_descriptors_count_db(snd_ctl_t *);
CheckInterfacedef(snd_ctl_poll_descriptors_count,snd_ctl_poll_descriptors_count_db);
extern int snd_ctl_rawmidi_info_db(snd_ctl_t *, snd_rawmidi_info_t *);
CheckInterfacedef(snd_ctl_rawmidi_info,snd_ctl_rawmidi_info_db);
extern int snd_ctl_rawmidi_next_device_db(snd_ctl_t *, int *);
CheckInterfacedef(snd_ctl_rawmidi_next_device,snd_ctl_rawmidi_next_device_db);
extern int snd_ctl_read_db(snd_ctl_t *, snd_ctl_event_t *);
CheckInterfacedef(snd_ctl_read,snd_ctl_read_db);
extern int snd_ctl_subscribe_events_db(snd_ctl_t *, int);
CheckInterfacedef(snd_ctl_subscribe_events,snd_ctl_subscribe_events_db);
extern int snd_hctl_close_db(snd_hctl_t *);
CheckInterfacedef(snd_hctl_close,snd_hctl_close_db);
extern void * snd_hctl_elem_get_callback_private_db(const snd_hctl_elem_t *);
CheckInterfacedef(snd_hctl_elem_get_callback_private,snd_hctl_elem_get_callback_private_db);
extern void snd_hctl_elem_get_id_db(const snd_hctl_elem_t *, snd_ctl_elem_id_t *);
CheckInterfacedef(snd_hctl_elem_get_id,snd_hctl_elem_get_id_db);
extern int snd_hctl_elem_info_db(snd_hctl_elem_t *, snd_ctl_elem_info_t *);
CheckInterfacedef(snd_hctl_elem_info,snd_hctl_elem_info_db);
extern snd_hctl_elem_t * snd_hctl_elem_next_db(snd_hctl_elem_t *);
CheckInterfacedef(snd_hctl_elem_next,snd_hctl_elem_next_db);
extern snd_hctl_elem_t * snd_hctl_elem_prev_db(snd_hctl_elem_t *);
CheckInterfacedef(snd_hctl_elem_prev,snd_hctl_elem_prev_db);
extern int snd_hctl_elem_read_db(snd_hctl_elem_t *, snd_ctl_elem_value_t *);
CheckInterfacedef(snd_hctl_elem_read,snd_hctl_elem_read_db);
extern void snd_hctl_elem_set_callback_db(snd_hctl_elem_t *, snd_hctl_elem_callback_t);
CheckInterfacedef(snd_hctl_elem_set_callback,snd_hctl_elem_set_callback_db);
extern void snd_hctl_elem_set_callback_private_db(snd_hctl_elem_t *, void *);
CheckInterfacedef(snd_hctl_elem_set_callback_private,snd_hctl_elem_set_callback_private_db);
extern int snd_hctl_elem_write_db(snd_hctl_elem_t *, snd_ctl_elem_value_t *);
CheckInterfacedef(snd_hctl_elem_write,snd_hctl_elem_write_db);
extern snd_hctl_elem_t * snd_hctl_find_elem_db(snd_hctl_t *, const snd_ctl_elem_id_t *);
CheckInterfacedef(snd_hctl_find_elem,snd_hctl_find_elem_db);
extern snd_hctl_elem_t * snd_hctl_first_elem_db(snd_hctl_t *);
CheckInterfacedef(snd_hctl_first_elem,snd_hctl_first_elem_db);
extern int snd_hctl_free_db(snd_hctl_t *);
CheckInterfacedef(snd_hctl_free,snd_hctl_free_db);
extern void * snd_hctl_get_callback_private_db(snd_hctl_t *);
CheckInterfacedef(snd_hctl_get_callback_private,snd_hctl_get_callback_private_db);
extern unsigned int snd_hctl_get_count_db(snd_hctl_t *);
CheckInterfacedef(snd_hctl_get_count,snd_hctl_get_count_db);
extern int snd_hctl_handle_events_db(snd_hctl_t *);
CheckInterfacedef(snd_hctl_handle_events,snd_hctl_handle_events_db);
extern snd_hctl_elem_t * snd_hctl_last_elem_db(snd_hctl_t *);
CheckInterfacedef(snd_hctl_last_elem,snd_hctl_last_elem_db);
extern int snd_hctl_load_db(snd_hctl_t *);
CheckInterfacedef(snd_hctl_load,snd_hctl_load_db);
extern int snd_hctl_nonblock_db(snd_hctl_t *, int);
CheckInterfacedef(snd_hctl_nonblock,snd_hctl_nonblock_db);
extern int snd_hctl_open_db(snd_hctl_t * *, const char *, int);
CheckInterfacedef(snd_hctl_open,snd_hctl_open_db);
extern void snd_hctl_set_callback_db(snd_hctl_t *, snd_hctl_callback_t);
CheckInterfacedef(snd_hctl_set_callback,snd_hctl_set_callback_db);
extern void snd_hctl_set_callback_private_db(snd_hctl_t *, void *);
CheckInterfacedef(snd_hctl_set_callback_private,snd_hctl_set_callback_private_db);
extern int snd_hctl_wait_db(snd_hctl_t *, int);
CheckInterfacedef(snd_hctl_wait,snd_hctl_wait_db);
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
