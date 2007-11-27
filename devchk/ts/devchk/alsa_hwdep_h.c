/*
 * Test of alsa/hwdep.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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

#if defined __x86_64__
CheckTypeSize(snd_hwdep_iface_t,4, 27422, 11, 3.2, NULL, 26343, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_hwdep_iface_t,0, 27422, 10, 3.2, NULL, 26343, NULL)
#elif defined __s390x__
CheckTypeSize(snd_hwdep_iface_t,0, 27422, 12, 3.2, NULL, 26343, NULL)
#elif defined __i386__
CheckTypeSize(snd_hwdep_iface_t,0, 27422, 2, 3.2, NULL, 26343, NULL)
#elif defined __ia64__
CheckTypeSize(snd_hwdep_iface_t,0, 27422, 3, 3.2, NULL, 26343, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_hwdep_iface_t,0, 27422, 6, 3.2, NULL, 26343, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_hwdep_iface_t,0, 27422, 9, 3.2, NULL, 26343, NULL)
#else
Msg("Find size of snd_hwdep_iface_t (27422)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26343,NULL);\n",architecture,27422,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_hwdep_type_t,4, 27431, 11, 3.2, NULL, 26344, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_hwdep_type_t,0, 27431, 10, 3.2, NULL, 26344, NULL)
#elif defined __s390x__
CheckTypeSize(snd_hwdep_type_t,0, 27431, 12, 3.2, NULL, 26344, NULL)
#elif defined __i386__
CheckTypeSize(snd_hwdep_type_t,0, 27431, 2, 3.2, NULL, 26344, NULL)
#elif defined __ia64__
CheckTypeSize(snd_hwdep_type_t,0, 27431, 3, 3.2, NULL, 26344, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_hwdep_type_t,0, 27431, 6, 3.2, NULL, 26344, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_hwdep_type_t,0, 27431, 9, 3.2, NULL, 26344, NULL)
#else
Msg("Find size of snd_hwdep_type_t (27431)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26344, NULL);\n",architecture,27431,0);
#endif

extern int snd_hwdep_close_db(snd_hwdep_t *);
CheckInterfacedef(snd_hwdep_close,snd_hwdep_close_db);
extern int snd_hwdep_info_db(snd_hwdep_t *, snd_hwdep_info_t *);
CheckInterfacedef(snd_hwdep_info,snd_hwdep_info_db);
extern snd_hwdep_iface_t snd_hwdep_info_get_iface_db(const snd_hwdep_info_t *);
CheckInterfacedef(snd_hwdep_info_get_iface,snd_hwdep_info_get_iface_db);
extern const char * snd_hwdep_info_get_name_db(const snd_hwdep_info_t *);
CheckInterfacedef(snd_hwdep_info_get_name,snd_hwdep_info_get_name_db);
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
