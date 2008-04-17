/*
 * Test of alsa/seqmid.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
#include <alsa/seq.h>
#include "alsa/seqmid.h"



#ifdef TET_TEST
void alsa_seqmid_h()
{
#else
int alsa_seqmid_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in alsa/seqmid.h\n");
#endif

printf("Checking data structures in alsa/seqmid.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_clear(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_set_tag(ev,t) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_set_dest(ev,c,p) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_set_subs(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_set_broadcast(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_set_source(ev,p) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_set_direct(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_set_fixed(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_set_keypress(ev,ch,key,vel) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_set_controller(ev,ch,cc,val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_set_pgmchange(ev,ch,val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_set_pitchbend(ev,ch,val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_set_chanpress(ev,ch,val) */
#endif

extern int snd_seq_connect_from_db(snd_seq_t *, int, int, int);
CheckInterfacedef(snd_seq_connect_from,snd_seq_connect_from_db);
extern int snd_seq_connect_to_db(snd_seq_t *, int, int, int);
CheckInterfacedef(snd_seq_connect_to,snd_seq_connect_to_db);
extern int snd_seq_control_queue_db(snd_seq_t *, int, int, int, snd_seq_event_t *);
CheckInterfacedef(snd_seq_control_queue,snd_seq_control_queue_db);
extern int snd_seq_create_simple_port_db(snd_seq_t *, const char *, unsigned int, unsigned int);
CheckInterfacedef(snd_seq_create_simple_port,snd_seq_create_simple_port_db);
extern int snd_seq_delete_simple_port_db(snd_seq_t *, int);
CheckInterfacedef(snd_seq_delete_simple_port,snd_seq_delete_simple_port_db);
extern int snd_seq_disconnect_from_db(snd_seq_t *, int, int, int);
CheckInterfacedef(snd_seq_disconnect_from,snd_seq_disconnect_from_db);
extern int snd_seq_disconnect_to_db(snd_seq_t *, int, int, int);
CheckInterfacedef(snd_seq_disconnect_to,snd_seq_disconnect_to_db);
extern int snd_seq_parse_address_db(snd_seq_t *, snd_seq_addr_t *, const char *);
CheckInterfacedef(snd_seq_parse_address,snd_seq_parse_address_db);
extern int snd_seq_set_client_name_db(snd_seq_t *, const char *);
CheckInterfacedef(snd_seq_set_client_name,snd_seq_set_client_name_db);
extern int snd_seq_sync_output_queue_db(snd_seq_t *);
CheckInterfacedef(snd_seq_sync_output_queue,snd_seq_sync_output_queue_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/seqmid.h\n\n",pcnt,cnt);
return cnt;
#endif

}
