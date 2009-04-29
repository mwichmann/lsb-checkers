/*
 * Test of alsa/hwdep.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <sys/poll.h>
#include "alsa/hwdep.h"



#ifdef TET_TEST
void alsa_hwdep_h()
{
#else
int alsa_hwdep_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in alsa/hwdep.h\n");
#endif

printf("Checking data structures in alsa/hwdep.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for SND_HWDEP_OPEN_READ */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SND_HWDEP_OPEN_WRITE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SND_HWDEP_OPEN_DUPLEX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SND_HWDEP_OPEN_NONBLOCK */
#endif

#if defined __s390x__
CheckTypeSize(snd_hwdep_iface_t,4, 27422, 12, 3.2, NULL, 26343, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_hwdep_iface_t,4, 27422, 11, 3.2, NULL, 26343, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_hwdep_iface_t,4, 27422, 10, 3.2, NULL, 26343, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_hwdep_iface_t,4, 27422, 9, 3.2, NULL, 26343, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_hwdep_iface_t,4, 27422, 6, 3.2, NULL, 26343, NULL)
#elif defined __ia64__
CheckTypeSize(snd_hwdep_iface_t,4, 27422, 3, 3.2, NULL, 26343, NULL)
#elif defined __i386__
CheckTypeSize(snd_hwdep_iface_t,4, 27422, 2, 3.2, NULL, 26343, NULL)
#else
Msg("Find size of snd_hwdep_iface_t (27422)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26343,NULL);\n",architecture,27422,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_hwdep_type_t,4, 27431, 12, 3.2, NULL, 26344, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_hwdep_type_t,4, 27431, 11, 3.2, NULL, 26344, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_hwdep_type_t,4, 27431, 10, 3.2, NULL, 26344, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_hwdep_type_t,4, 27431, 9, 3.2, NULL, 26344, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_hwdep_type_t,4, 27431, 6, 3.2, NULL, 26344, NULL)
#elif defined __ia64__
CheckTypeSize(snd_hwdep_type_t,4, 27431, 3, 3.2, NULL, 26344, NULL)
#elif defined __i386__
CheckTypeSize(snd_hwdep_type_t,4, 27431, 2, 3.2, NULL, 26344, NULL)
#else
Msg("Find size of snd_hwdep_type_t (27431)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26344, NULL);\n",architecture,27431,0);
#endif

extern int snd_hwdep_close_db(snd_hwdep_t *);
CheckInterfacedef(snd_hwdep_close,snd_hwdep_close_db);
extern void snd_hwdep_dsp_image_copy_db(snd_hwdep_dsp_image_t *, const snd_hwdep_dsp_image_t *);
CheckInterfacedef(snd_hwdep_dsp_image_copy,snd_hwdep_dsp_image_copy_db);
extern void snd_hwdep_dsp_image_free_db(snd_hwdep_dsp_image_t *);
CheckInterfacedef(snd_hwdep_dsp_image_free,snd_hwdep_dsp_image_free_db);
extern const void * snd_hwdep_dsp_image_get_image_db(const snd_hwdep_dsp_image_t *);
CheckInterfacedef(snd_hwdep_dsp_image_get_image,snd_hwdep_dsp_image_get_image_db);
extern unsigned int snd_hwdep_dsp_image_get_index_db(const snd_hwdep_dsp_image_t *);
CheckInterfacedef(snd_hwdep_dsp_image_get_index,snd_hwdep_dsp_image_get_index_db);
extern size_t snd_hwdep_dsp_image_get_length_db(const snd_hwdep_dsp_image_t *);
CheckInterfacedef(snd_hwdep_dsp_image_get_length,snd_hwdep_dsp_image_get_length_db);
extern const char * snd_hwdep_dsp_image_get_name_db(const snd_hwdep_dsp_image_t *);
CheckInterfacedef(snd_hwdep_dsp_image_get_name,snd_hwdep_dsp_image_get_name_db);
extern int snd_hwdep_dsp_image_malloc_db(snd_hwdep_dsp_image_t * *);
CheckInterfacedef(snd_hwdep_dsp_image_malloc,snd_hwdep_dsp_image_malloc_db);
extern void snd_hwdep_dsp_image_set_image_db(snd_hwdep_dsp_image_t *, void *);
CheckInterfacedef(snd_hwdep_dsp_image_set_image,snd_hwdep_dsp_image_set_image_db);
extern void snd_hwdep_dsp_image_set_index_db(snd_hwdep_dsp_image_t *, unsigned int);
CheckInterfacedef(snd_hwdep_dsp_image_set_index,snd_hwdep_dsp_image_set_index_db);
extern void snd_hwdep_dsp_image_set_length_db(snd_hwdep_dsp_image_t *, size_t);
CheckInterfacedef(snd_hwdep_dsp_image_set_length,snd_hwdep_dsp_image_set_length_db);
extern void snd_hwdep_dsp_image_set_name_db(snd_hwdep_dsp_image_t *, const char *);
CheckInterfacedef(snd_hwdep_dsp_image_set_name,snd_hwdep_dsp_image_set_name_db);
extern size_t snd_hwdep_dsp_image_sizeof_db(void);
CheckInterfacedef(snd_hwdep_dsp_image_sizeof,snd_hwdep_dsp_image_sizeof_db);
extern int snd_hwdep_dsp_load_db(snd_hwdep_t *, snd_hwdep_dsp_image_t *);
CheckInterfacedef(snd_hwdep_dsp_load,snd_hwdep_dsp_load_db);
extern int snd_hwdep_dsp_status_db(snd_hwdep_t *, snd_hwdep_dsp_status_t *);
CheckInterfacedef(snd_hwdep_dsp_status,snd_hwdep_dsp_status_db);
extern void snd_hwdep_dsp_status_copy_db(snd_hwdep_dsp_status_t *, const snd_hwdep_dsp_status_t *);
CheckInterfacedef(snd_hwdep_dsp_status_copy,snd_hwdep_dsp_status_copy_db);
extern void snd_hwdep_dsp_status_free_db(snd_hwdep_dsp_status_t *);
CheckInterfacedef(snd_hwdep_dsp_status_free,snd_hwdep_dsp_status_free_db);
extern unsigned int snd_hwdep_dsp_status_get_chip_ready_db(const snd_hwdep_dsp_status_t *);
CheckInterfacedef(snd_hwdep_dsp_status_get_chip_ready,snd_hwdep_dsp_status_get_chip_ready_db);
extern unsigned int snd_hwdep_dsp_status_get_dsp_loaded_db(const snd_hwdep_dsp_status_t *);
CheckInterfacedef(snd_hwdep_dsp_status_get_dsp_loaded,snd_hwdep_dsp_status_get_dsp_loaded_db);
extern const char * snd_hwdep_dsp_status_get_id_db(const snd_hwdep_dsp_status_t *);
CheckInterfacedef(snd_hwdep_dsp_status_get_id,snd_hwdep_dsp_status_get_id_db);
extern unsigned int snd_hwdep_dsp_status_get_num_dsps_db(const snd_hwdep_dsp_status_t *);
CheckInterfacedef(snd_hwdep_dsp_status_get_num_dsps,snd_hwdep_dsp_status_get_num_dsps_db);
extern unsigned int snd_hwdep_dsp_status_get_version_db(const snd_hwdep_dsp_status_t *);
CheckInterfacedef(snd_hwdep_dsp_status_get_version,snd_hwdep_dsp_status_get_version_db);
extern int snd_hwdep_dsp_status_malloc_db(snd_hwdep_dsp_status_t * *);
CheckInterfacedef(snd_hwdep_dsp_status_malloc,snd_hwdep_dsp_status_malloc_db);
extern size_t snd_hwdep_dsp_status_sizeof_db(void);
CheckInterfacedef(snd_hwdep_dsp_status_sizeof,snd_hwdep_dsp_status_sizeof_db);
extern int snd_hwdep_info_db(snd_hwdep_t *, snd_hwdep_info_t *);
CheckInterfacedef(snd_hwdep_info,snd_hwdep_info_db);
extern void snd_hwdep_info_copy_db(snd_hwdep_info_t *, const snd_hwdep_info_t *);
CheckInterfacedef(snd_hwdep_info_copy,snd_hwdep_info_copy_db);
extern void snd_hwdep_info_free_db(snd_hwdep_info_t *);
CheckInterfacedef(snd_hwdep_info_free,snd_hwdep_info_free_db);
extern int snd_hwdep_info_get_card_db(const snd_hwdep_info_t *);
CheckInterfacedef(snd_hwdep_info_get_card,snd_hwdep_info_get_card_db);
extern unsigned int snd_hwdep_info_get_device_db(const snd_hwdep_info_t *);
CheckInterfacedef(snd_hwdep_info_get_device,snd_hwdep_info_get_device_db);
extern const char * snd_hwdep_info_get_id_db(const snd_hwdep_info_t *);
CheckInterfacedef(snd_hwdep_info_get_id,snd_hwdep_info_get_id_db);
extern snd_hwdep_iface_t snd_hwdep_info_get_iface_db(const snd_hwdep_info_t *);
CheckInterfacedef(snd_hwdep_info_get_iface,snd_hwdep_info_get_iface_db);
extern const char * snd_hwdep_info_get_name_db(const snd_hwdep_info_t *);
CheckInterfacedef(snd_hwdep_info_get_name,snd_hwdep_info_get_name_db);
extern int snd_hwdep_info_malloc_db(snd_hwdep_info_t * *);
CheckInterfacedef(snd_hwdep_info_malloc,snd_hwdep_info_malloc_db);
extern void snd_hwdep_info_set_device_db(snd_hwdep_info_t *, unsigned int);
CheckInterfacedef(snd_hwdep_info_set_device,snd_hwdep_info_set_device_db);
extern size_t snd_hwdep_info_sizeof_db(void);
CheckInterfacedef(snd_hwdep_info_sizeof,snd_hwdep_info_sizeof_db);
extern int snd_hwdep_ioctl_db(snd_hwdep_t *, unsigned int, void *);
CheckInterfacedef(snd_hwdep_ioctl,snd_hwdep_ioctl_db);
extern int snd_hwdep_open_db(snd_hwdep_t * *, const char *, int);
CheckInterfacedef(snd_hwdep_open,snd_hwdep_open_db);
extern int snd_hwdep_poll_descriptors_db(snd_hwdep_t *, struct pollfd *, unsigned int);
CheckInterfacedef(snd_hwdep_poll_descriptors,snd_hwdep_poll_descriptors_db);
extern ssize_t snd_hwdep_read_db(snd_hwdep_t *, void *, size_t);
CheckInterfacedef(snd_hwdep_read,snd_hwdep_read_db);
extern ssize_t snd_hwdep_write_db(snd_hwdep_t *, const void *, size_t);
CheckInterfacedef(snd_hwdep_write,snd_hwdep_write_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/hwdep.h\n\n",pcnt,cnt);
return cnt;
#endif

}
