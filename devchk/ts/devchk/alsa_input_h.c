/*
 * Test of alsa/input.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
