/*
 * Test of alsa/output.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "alsa/output.h"



#ifdef TET_TEST
void alsa_output_h()
{
#else
int alsa_output_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in alsa/output.h\n");
#endif

printf("Checking data structures in alsa/output.h\n");
extern int snd_output_close_db(snd_output_t *);
CheckInterfacedef(snd_output_close,snd_output_close_db);
extern int snd_output_stdio_attach_db(snd_output_t * *, FILE *, int);
CheckInterfacedef(snd_output_stdio_attach,snd_output_stdio_attach_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/output.h\n\n",pcnt,cnt);
return cnt;
#endif

}
