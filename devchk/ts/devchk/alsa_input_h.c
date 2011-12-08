/*
 * Test of alsa/input.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in alsa/input.h\n");
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
Msg("%d tests passed out of %d tests in alsa/input.h\n\n",pcnt,cnt);
return cnt;
#endif

}
