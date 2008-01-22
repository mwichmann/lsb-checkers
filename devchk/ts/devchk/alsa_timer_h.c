/*
 * Test of alsa/timer.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <sys/poll.h>
#include <alsa/global.h>
#include <alsa/output.h>
#include <alsa/input.h>
#include <alsa/conf.h>
#include "alsa/timer.h"



#ifdef TET_TEST
void alsa_timer_h()
{
#else
int alsa_timer_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in alsa/timer.h\n");
#endif

printf("Checking data structures in alsa/timer.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SND_TIMER_GLOBAL_SYSTEM
	CompareConstant(SND_TIMER_GLOBAL_SYSTEM,0,11413,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_TIMER_GLOBAL_SYSTEM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_TIMER_GLOBAL_RTC
	CompareConstant(SND_TIMER_GLOBAL_RTC,1,11414,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_TIMER_GLOBAL_RTC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_TIMER_GLOBAL_HPET
	CompareConstant(SND_TIMER_GLOBAL_HPET,2,11415,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_TIMER_GLOBAL_HPET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_TIMER_OPEN_NONBLOCK
	CompareConstant(SND_TIMER_OPEN_NONBLOCK,(1<<0),11416,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_TIMER_OPEN_NONBLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_TIMER_OPEN_TREAD
	CompareConstant(SND_TIMER_OPEN_TREAD,(1<<1),11417,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_TIMER_OPEN_TREAD\n");
cnt++;
#endif

#endif

#if defined __x86_64__
CheckTypeSize(snd_timer_type_t,4, 27846, 11, 3.2, NULL, 26405, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_timer_type_t,4, 27846, 10, 3.2, NULL, 26405, NULL)
#elif defined __s390x__
CheckTypeSize(snd_timer_type_t,4, 27846, 12, 3.2, NULL, 26405, NULL)
#elif defined __i386__
CheckTypeSize(snd_timer_type_t,4, 27846, 2, 3.2, NULL, 26405, NULL)
#elif defined __ia64__
CheckTypeSize(snd_timer_type_t,4, 27846, 3, 3.2, NULL, 26405, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_timer_type_t,4, 27846, 6, 3.2, NULL, 26405, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_timer_type_t,4, 27846, 9, 3.2, NULL, 26405, NULL)
#else
Msg("Find size of snd_timer_type_t (27846)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26405, NULL);\n",architecture,27846,0);
#endif

extern int snd_timer_close_db(snd_timer_t *);
CheckInterfacedef(snd_timer_close,snd_timer_close_db);
extern int snd_timer_continue_db(snd_timer_t *);
CheckInterfacedef(snd_timer_continue,snd_timer_continue_db);
extern void snd_timer_id_copy_db(snd_timer_id_t *, const snd_timer_id_t *);
CheckInterfacedef(snd_timer_id_copy,snd_timer_id_copy_db);
extern void snd_timer_id_free_db(snd_timer_id_t *);
CheckInterfacedef(snd_timer_id_free,snd_timer_id_free_db);
extern int snd_timer_id_get_card_db(snd_timer_id_t *);
CheckInterfacedef(snd_timer_id_get_card,snd_timer_id_get_card_db);
extern int snd_timer_id_get_class_db(snd_timer_id_t *);
CheckInterfacedef(snd_timer_id_get_class,snd_timer_id_get_class_db);
extern int snd_timer_id_get_device_db(snd_timer_id_t *);
CheckInterfacedef(snd_timer_id_get_device,snd_timer_id_get_device_db);
extern int snd_timer_id_get_sclass_db(snd_timer_id_t *);
CheckInterfacedef(snd_timer_id_get_sclass,snd_timer_id_get_sclass_db);
extern int snd_timer_id_get_subdevice_db(snd_timer_id_t *);
CheckInterfacedef(snd_timer_id_get_subdevice,snd_timer_id_get_subdevice_db);
extern int snd_timer_id_malloc_db(snd_timer_id_t * *);
CheckInterfacedef(snd_timer_id_malloc,snd_timer_id_malloc_db);
extern void snd_timer_id_set_card_db(snd_timer_id_t *, int);
CheckInterfacedef(snd_timer_id_set_card,snd_timer_id_set_card_db);
extern void snd_timer_id_set_class_db(snd_timer_id_t *, int);
CheckInterfacedef(snd_timer_id_set_class,snd_timer_id_set_class_db);
extern void snd_timer_id_set_device_db(snd_timer_id_t *, int);
CheckInterfacedef(snd_timer_id_set_device,snd_timer_id_set_device_db);
extern void snd_timer_id_set_sclass_db(snd_timer_id_t *, int);
CheckInterfacedef(snd_timer_id_set_sclass,snd_timer_id_set_sclass_db);
extern void snd_timer_id_set_subdevice_db(snd_timer_id_t *, int);
CheckInterfacedef(snd_timer_id_set_subdevice,snd_timer_id_set_subdevice_db);
extern size_t snd_timer_id_sizeof_db(void);
CheckInterfacedef(snd_timer_id_sizeof,snd_timer_id_sizeof_db);
extern int snd_timer_info_db(snd_timer_t *, snd_timer_info_t *);
CheckInterfacedef(snd_timer_info,snd_timer_info_db);
extern void snd_timer_info_copy_db(snd_timer_info_t *, const snd_timer_info_t *);
CheckInterfacedef(snd_timer_info_copy,snd_timer_info_copy_db);
extern void snd_timer_info_free_db(snd_timer_info_t *);
CheckInterfacedef(snd_timer_info_free,snd_timer_info_free_db);
extern int snd_timer_info_get_card_db(snd_timer_info_t *);
CheckInterfacedef(snd_timer_info_get_card,snd_timer_info_get_card_db);
extern const char * snd_timer_info_get_id_db(snd_timer_info_t *);
CheckInterfacedef(snd_timer_info_get_id,snd_timer_info_get_id_db);
extern const char * snd_timer_info_get_name_db(snd_timer_info_t *);
CheckInterfacedef(snd_timer_info_get_name,snd_timer_info_get_name_db);
extern long int snd_timer_info_get_resolution_db(snd_timer_info_t *);
CheckInterfacedef(snd_timer_info_get_resolution,snd_timer_info_get_resolution_db);
extern int snd_timer_info_malloc_db(snd_timer_info_t * *);
CheckInterfacedef(snd_timer_info_malloc,snd_timer_info_malloc_db);
extern size_t snd_timer_info_sizeof_db(void);
CheckInterfacedef(snd_timer_info_sizeof,snd_timer_info_sizeof_db);
extern int snd_timer_open_db(snd_timer_t * *, const char *, int);
CheckInterfacedef(snd_timer_open,snd_timer_open_db);
extern int snd_timer_params_db(snd_timer_t *, snd_timer_params_t *);
CheckInterfacedef(snd_timer_params,snd_timer_params_db);
extern long int snd_timer_params_get_ticks_db(snd_timer_params_t *);
CheckInterfacedef(snd_timer_params_get_ticks,snd_timer_params_get_ticks_db);
extern int snd_timer_params_malloc_db(snd_timer_params_t * *);
CheckInterfacedef(snd_timer_params_malloc,snd_timer_params_malloc_db);
extern int snd_timer_params_set_auto_start_db(snd_timer_params_t *, int);
CheckInterfacedef(snd_timer_params_set_auto_start,snd_timer_params_set_auto_start_db);
extern void snd_timer_params_set_ticks_db(snd_timer_params_t *, long int);
CheckInterfacedef(snd_timer_params_set_ticks,snd_timer_params_set_ticks_db);
extern int snd_timer_poll_descriptors_db(snd_timer_t *, struct pollfd *, unsigned int);
CheckInterfacedef(snd_timer_poll_descriptors,snd_timer_poll_descriptors_db);
extern int snd_timer_poll_descriptors_count_db(snd_timer_t *);
CheckInterfacedef(snd_timer_poll_descriptors_count,snd_timer_poll_descriptors_count_db);
extern ssize_t snd_timer_read_db(snd_timer_t *, void *, size_t);
CheckInterfacedef(snd_timer_read,snd_timer_read_db);
extern int snd_timer_start_db(snd_timer_t *);
CheckInterfacedef(snd_timer_start,snd_timer_start_db);
extern int snd_timer_status_db(snd_timer_t *, snd_timer_status_t *);
CheckInterfacedef(snd_timer_status,snd_timer_status_db);
extern int snd_timer_stop_db(snd_timer_t *);
CheckInterfacedef(snd_timer_stop,snd_timer_stop_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/timer.h\n\n",pcnt,cnt);
return cnt;
#endif

}
