/*
 * Test of alsa/seq_midi_event.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <alsa/global.h>
#include <alsa/output.h>
#include <alsa/input.h>
#include <alsa/conf.h>
#include <alsa/hwdep.h>
#include <alsa/pcm.h>
#include <alsa/rawmidi.h>
#include <alsa/control.h>
#include <alsa/seq_event.h>
#include <alsa/timer.h>
#include "alsa/seq_midi_event.h"



#ifdef TET_TEST
void alsa_seq_midi_event_h()
{
#else
int alsa_seq_midi_event_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in alsa/seq_midi_event.h\n");
#endif

printf("Checking data structures in alsa/seq_midi_event.h\n");
extern long int snd_midi_event_decode_db(snd_midi_event_t *, unsigned char *, long int, const snd_seq_event_t *);
CheckInterfacedef(snd_midi_event_decode,snd_midi_event_decode_db);
extern long int snd_midi_event_encode_db(snd_midi_event_t *, const unsigned char *, long int, snd_seq_event_t *);
CheckInterfacedef(snd_midi_event_encode,snd_midi_event_encode_db);
extern int snd_midi_event_encode_byte_db(snd_midi_event_t *, int, snd_seq_event_t *);
CheckInterfacedef(snd_midi_event_encode_byte,snd_midi_event_encode_byte_db);
extern void snd_midi_event_free_db(snd_midi_event_t *);
CheckInterfacedef(snd_midi_event_free,snd_midi_event_free_db);
extern void snd_midi_event_init_db(snd_midi_event_t *);
CheckInterfacedef(snd_midi_event_init,snd_midi_event_init_db);
extern int snd_midi_event_new_db(size_t, snd_midi_event_t * *);
CheckInterfacedef(snd_midi_event_new,snd_midi_event_new_db);
extern void snd_midi_event_reset_encode_db(snd_midi_event_t *);
CheckInterfacedef(snd_midi_event_reset_encode,snd_midi_event_reset_encode_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/seq_midi_event.h\n\n",pcnt,cnt);
return cnt;
#endif

}
