/*
 * Test of alsa/global.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#ifdef TET_TEST
Msg("Checking data structures in alsa/global.h\n");
#endif

printf("Checking data structures in alsa/global.h\n");
#if defined __x86_64__
CheckTypeSize(snd_async_callback_t,8, 27339, 11, 3.2, NULL, 25115, NULL)
#else
Msg("Find size of snd_async_callback_t (27339)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,25115,NULL);\n",architecture,27339,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_htimestamp_t,16, 27415, 11, 3.2, NULL, 7018, NULL)
#else
Msg("Find size of snd_htimestamp_t (27415)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,7018,NULL);\n",architecture,27415,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_timestamp_t,16, 27848, 11, 3.2, NULL, 9858, NULL)
#else
Msg("Find size of snd_timestamp_t (27848)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,9858, NULL);\n",architecture,27848,0);
#endif

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
