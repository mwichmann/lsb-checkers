/*
 * Test of alsa/output.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in alsa/output.h\n");
#endif

printf("Checking data structures in alsa/output.h\n");
extern int snd_output_buffer_open_db(snd_output_t * *);
CheckInterfacedef(snd_output_buffer_open,snd_output_buffer_open_db);
extern size_t snd_output_buffer_string_db(snd_output_t *, char * *);
CheckInterfacedef(snd_output_buffer_string,snd_output_buffer_string_db);
extern int snd_output_close_db(snd_output_t *);
CheckInterfacedef(snd_output_close,snd_output_close_db);
extern int snd_output_putc_db(snd_output_t *, int);
CheckInterfacedef(snd_output_putc,snd_output_putc_db);
extern int snd_output_puts_db(snd_output_t *, const char *);
CheckInterfacedef(snd_output_puts,snd_output_puts_db);
extern int snd_output_stdio_attach_db(snd_output_t * *, FILE *, int);
CheckInterfacedef(snd_output_stdio_attach,snd_output_stdio_attach_db);
extern int snd_output_stdio_open_db(snd_output_t * *, const char *, const char *);
CheckInterfacedef(snd_output_stdio_open,snd_output_stdio_open_db);
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
