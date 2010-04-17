/*
 * Test of alsa/global.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "alsa/global.h"



#ifdef TET_TEST
void alsa_global_h()
{
#else
int alsa_global_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in alsa/global.h\n");
#endif

printf("Checking data structures in alsa/global.h\n");
#if defined __s390x__
CheckTypeSize(snd_async_callback_t,8, 27339, 12, 3.2, NULL, 25115, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_async_callback_t,8, 27339, 11, 3.2, NULL, 25115, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_async_callback_t,4, 27339, 10, 3.2, NULL, 25115, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_async_callback_t,8, 27339, 9, 3.2, NULL, 25115, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_async_callback_t,4, 27339, 6, 3.2, NULL, 25115, NULL)
#elif defined __ia64__
CheckTypeSize(snd_async_callback_t,8, 27339, 3, 3.2, NULL, 25115, NULL)
#elif defined __i386__
CheckTypeSize(snd_async_callback_t,4, 27339, 2, 3.2, NULL, 25115, NULL)
#else
Msg("Find size of snd_async_callback_t (27339)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,25115,NULL);\n",architecture,27339,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_htimestamp_t,16, 27415, 12, 3.2, NULL, 7018, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_htimestamp_t,16, 27415, 11, 3.2, NULL, 7018, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_htimestamp_t,8, 27415, 10, 3.2, NULL, 7018, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_htimestamp_t,16, 27415, 9, 3.2, NULL, 7018, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_htimestamp_t,8, 27415, 6, 3.2, NULL, 7018, NULL)
#elif defined __ia64__
CheckTypeSize(snd_htimestamp_t,16, 27415, 3, 3.2, NULL, 7018, NULL)
#elif defined __i386__
CheckTypeSize(snd_htimestamp_t,8, 27415, 2, 3.2, NULL, 7018, NULL)
#else
Msg("Find size of snd_htimestamp_t (27415)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,7018,NULL);\n",architecture,27415,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_timestamp_t,16, 27848, 12, 3.2, NULL, 9858, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_timestamp_t,16, 27848, 11, 3.2, NULL, 9858, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_timestamp_t,8, 27848, 10, 3.2, NULL, 9858, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_timestamp_t,16, 27848, 9, 3.2, NULL, 9858, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_timestamp_t,8, 27848, 6, 3.2, NULL, 9858, NULL)
#elif defined __ia64__
CheckTypeSize(snd_timestamp_t,16, 27848, 3, 3.2, NULL, 9858, NULL)
#elif defined __i386__
CheckTypeSize(snd_timestamp_t,8, 27848, 2, 3.2, NULL, 9858, NULL)
#else
Msg("Find size of snd_timestamp_t (27848)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,9858, NULL);\n",architecture,27848,0);
#endif

#if defined __s390x__
/* S390X */
typedef void (*snd_async_callback_t_db)(snd_async_handler_t *);
CheckFunctionTypedef(snd_async_callback_t,snd_async_callback_t_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*snd_async_callback_t_db)(snd_async_handler_t *);
CheckFunctionTypedef(snd_async_callback_t,snd_async_callback_t_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*snd_async_callback_t_db)(snd_async_handler_t *);
CheckFunctionTypedef(snd_async_callback_t,snd_async_callback_t_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*snd_async_callback_t_db)(snd_async_handler_t *);
CheckFunctionTypedef(snd_async_callback_t,snd_async_callback_t_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*snd_async_callback_t_db)(snd_async_handler_t *);
CheckFunctionTypedef(snd_async_callback_t,snd_async_callback_t_db);
#elif defined __ia64__
/* IA64 */
typedef void (*snd_async_callback_t_db)(snd_async_handler_t *);
CheckFunctionTypedef(snd_async_callback_t,snd_async_callback_t_db);
#elif defined __i386__
/* IA32 */
typedef void (*snd_async_callback_t_db)(snd_async_handler_t *);
CheckFunctionTypedef(snd_async_callback_t,snd_async_callback_t_db);
#endif

extern const char * snd_asoundlib_version_db(void);
CheckInterfacedef(snd_asoundlib_version,snd_asoundlib_version_db);
extern int snd_async_add_handler_db(snd_async_handler_t * *, int, snd_async_callback_t, void *);
CheckInterfacedef(snd_async_add_handler,snd_async_add_handler_db);
extern int snd_async_del_handler_db(snd_async_handler_t *);
CheckInterfacedef(snd_async_del_handler,snd_async_del_handler_db);
extern void * snd_async_handler_get_callback_private_db(snd_async_handler_t *);
CheckInterfacedef(snd_async_handler_get_callback_private,snd_async_handler_get_callback_private_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/global.h\n\n",pcnt,cnt);
return cnt;
#endif

}
