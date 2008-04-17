/*
 * Test of alsa/input.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "alsa/input.h"



#ifdef TET_TEST
void alsa_input_h()
{
#else
int alsa_input_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in alsa/input.h\n");
#endif

printf("Checking data structures in alsa/input.h\n");
extern int snd_input_buffer_open_db(snd_input_t * *, const char *, ssize_t);
CheckInterfacedef(snd_input_buffer_open,snd_input_buffer_open_db);
extern int snd_input_close_db(snd_input_t *);
CheckInterfacedef(snd_input_close,snd_input_close_db);
extern int snd_input_stdio_attach_db(snd_input_t * *, FILE *, int);
CheckInterfacedef(snd_input_stdio_attach,snd_input_stdio_attach_db);
extern int snd_input_stdio_open_db(snd_input_t * *, const char *, const char *);
CheckInterfacedef(snd_input_stdio_open,snd_input_stdio_open_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/input.h\n\n",pcnt,cnt);
return cnt;
#endif

}
