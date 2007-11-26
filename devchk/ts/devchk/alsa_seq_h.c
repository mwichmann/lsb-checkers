/*
 * Test of alsa/seq.h
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
#include "alsa/seq.h"



#ifdef TET_TEST
void alsa_seq_h()
{
#else
int alsa_seq_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in alsa/seq.h\n");
#endif

printf("Checking data structures in alsa/seq.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_OPEN_OUTPUT
	CompareConstant(SND_SEQ_OPEN_OUTPUT,1,11270,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_OPEN_OUTPUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_OPEN_INPUT
	CompareConstant(SND_SEQ_OPEN_INPUT,2,11271,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_OPEN_INPUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for SND_SEQ_OPEN_DUPLEX */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_NONBLOCK
	CompareConstant(SND_SEQ_NONBLOCK,0x0001,11273,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_NONBLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_ADDRESS_UNKNOWN
	CompareConstant(SND_SEQ_ADDRESS_UNKNOWN,253,11274,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_ADDRESS_UNKNOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_ADDRESS_SUBSCRIBERS
	CompareConstant(SND_SEQ_ADDRESS_SUBSCRIBERS,254,11275,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_ADDRESS_SUBSCRIBERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_ADDRESS_BROADCAST
	CompareConstant(SND_SEQ_ADDRESS_BROADCAST,255,11276,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_ADDRESS_BROADCAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_CLIENT_SYSTEM
	CompareConstant(SND_SEQ_CLIENT_SYSTEM,0,11277,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_CLIENT_SYSTEM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_SYSTEM_TIMER
	CompareConstant(SND_SEQ_PORT_SYSTEM_TIMER,0,11281,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_SYSTEM_TIMER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_SYSTEM_ANNOUNCE
	CompareConstant(SND_SEQ_PORT_SYSTEM_ANNOUNCE,1,11282,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_SYSTEM_ANNOUNCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_CAP_READ
	CompareConstant(SND_SEQ_PORT_CAP_READ,(1<<0),11283,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_CAP_READ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_CAP_WRITE
	CompareConstant(SND_SEQ_PORT_CAP_WRITE,(1<<1),11284,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_CAP_WRITE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_CAP_SYNC_READ
	CompareConstant(SND_SEQ_PORT_CAP_SYNC_READ,(1<<2),11285,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_CAP_SYNC_READ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_CAP_SYNC_WRITE
	CompareConstant(SND_SEQ_PORT_CAP_SYNC_WRITE,(1<<3),11286,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_CAP_SYNC_WRITE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_CAP_DUPLEX
	CompareConstant(SND_SEQ_PORT_CAP_DUPLEX,(1<<4),11287,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_CAP_DUPLEX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_CAP_SUBS_READ
	CompareConstant(SND_SEQ_PORT_CAP_SUBS_READ,(1<<5),11288,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_CAP_SUBS_READ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_CAP_SUBS_WRITE
	CompareConstant(SND_SEQ_PORT_CAP_SUBS_WRITE,(1<<6),11289,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_CAP_SUBS_WRITE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_CAP_NO_EXPORT
	CompareConstant(SND_SEQ_PORT_CAP_NO_EXPORT,(1<<7),11290,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_CAP_NO_EXPORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_TYPE_SPECIFIC
	CompareConstant(SND_SEQ_PORT_TYPE_SPECIFIC,(1<<0),11291,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_TYPE_SPECIFIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_TYPE_MIDI_GENERIC
	CompareConstant(SND_SEQ_PORT_TYPE_MIDI_GENERIC,(1<<1),11292,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_TYPE_MIDI_GENERIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_TYPE_MIDI_GM
	CompareConstant(SND_SEQ_PORT_TYPE_MIDI_GM,(1<<2),11293,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_TYPE_MIDI_GM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_TYPE_MIDI_GS
	CompareConstant(SND_SEQ_PORT_TYPE_MIDI_GS,(1<<3),11294,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_TYPE_MIDI_GS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_TYPE_MIDI_XG
	CompareConstant(SND_SEQ_PORT_TYPE_MIDI_XG,(1<<4),11295,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_TYPE_MIDI_XG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_TYPE_MIDI_MT32
	CompareConstant(SND_SEQ_PORT_TYPE_MIDI_MT32,(1<<5),11296,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_TYPE_MIDI_MT32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_TYPE_MIDI_GM2
	CompareConstant(SND_SEQ_PORT_TYPE_MIDI_GM2,(1<<6),11297,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_TYPE_MIDI_GM2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_TYPE_SYNTH
	CompareConstant(SND_SEQ_PORT_TYPE_SYNTH,(1<<10),11298,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_TYPE_SYNTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_TYPE_DIRECT_SAMPLE
	CompareConstant(SND_SEQ_PORT_TYPE_DIRECT_SAMPLE,(1<<11),11299,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_TYPE_DIRECT_SAMPLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_TYPE_SAMPLE
	CompareConstant(SND_SEQ_PORT_TYPE_SAMPLE,(1<<12),11300,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_TYPE_SAMPLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_TYPE_HARDWARE
	CompareConstant(SND_SEQ_PORT_TYPE_HARDWARE,(1<<16),11301,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_TYPE_HARDWARE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_TYPE_SOFTWARE
	CompareConstant(SND_SEQ_PORT_TYPE_SOFTWARE,(1<<17),11302,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_TYPE_SOFTWARE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_TYPE_SYNTHESIZER
	CompareConstant(SND_SEQ_PORT_TYPE_SYNTHESIZER,(1<<18),11303,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_TYPE_SYNTHESIZER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_TYPE_PORT
	CompareConstant(SND_SEQ_PORT_TYPE_PORT,(1<<19),11304,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_TYPE_PORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_PORT_TYPE_APPLICATION
	CompareConstant(SND_SEQ_PORT_TYPE_APPLICATION,(1<<20),11305,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_PORT_TYPE_APPLICATION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_QUEUE_DIRECT
	CompareConstant(SND_SEQ_QUEUE_DIRECT,253,11309,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_QUEUE_DIRECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_REMOVE_INPUT
	CompareConstant(SND_SEQ_REMOVE_INPUT,(1<<0),11314,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_REMOVE_INPUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_REMOVE_OUTPUT
	CompareConstant(SND_SEQ_REMOVE_OUTPUT,(1<<1),11315,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_REMOVE_OUTPUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_REMOVE_DEST
	CompareConstant(SND_SEQ_REMOVE_DEST,(1<<2),11316,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_REMOVE_DEST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_REMOVE_DEST_CHANNEL
	CompareConstant(SND_SEQ_REMOVE_DEST_CHANNEL,(1<<3),11317,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_REMOVE_DEST_CHANNEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_REMOVE_TIME_BEFORE
	CompareConstant(SND_SEQ_REMOVE_TIME_BEFORE,(1<<4),11318,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_REMOVE_TIME_BEFORE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_REMOVE_TIME_AFTER
	CompareConstant(SND_SEQ_REMOVE_TIME_AFTER,(1<<5),11319,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_REMOVE_TIME_AFTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_REMOVE_TIME_TICK
	CompareConstant(SND_SEQ_REMOVE_TIME_TICK,(1<<6),11320,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_REMOVE_TIME_TICK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_REMOVE_EVENT_TYPE
	CompareConstant(SND_SEQ_REMOVE_EVENT_TYPE,(1<<7),11321,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_REMOVE_EVENT_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_REMOVE_IGNORE_OFF
	CompareConstant(SND_SEQ_REMOVE_IGNORE_OFF,(1<<8),11322,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_REMOVE_IGNORE_OFF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_SEQ_REMOVE_TAG_MATCH
	CompareConstant(SND_SEQ_REMOVE_TAG_MATCH,(1<<9),11323,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_SEQ_REMOVE_TAG_MATCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for _SND_SEQ_TYPE(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _SND_SEQ_TYPE_OPT(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_type_check(ev,x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_result_type(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_note_type(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_control_type(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_channel_type(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_queue_type(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_message_type(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_subscribe_type(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_sample_type(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_user_type(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_instr_type(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_fixed_type(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_variable_type(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_varusr_type(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_reserved(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_prior(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_length_type(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_fixed(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_variable(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_varusr(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_timestamp_type(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_tick(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_real(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_timemode_type(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_abstime(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_reltime(ev) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for snd_seq_ev_is_direct(ev) */
#endif

#if defined __x86_64__
CheckTypeSize(snd_seq_client_type_t,4, 27719, 11, 3.2, NULL, 27718, NULL)
#else
Msg("Find size of snd_seq_client_type_t (27719)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27718,NULL);\n",architecture,27719,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_seq_query_subs_type_t,4, 27766, 11, 3.2, NULL, 26446, NULL)
#else
Msg("Find size of snd_seq_query_subs_type_t (27766)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26446,NULL);\n",architecture,27766,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_seq_queue_timer_type_t,4, 27786, 11, 3.2, NULL, 26447, NULL)
#else
Msg("Find size of snd_seq_queue_timer_type_t (27786)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26447,NULL);\n",architecture,27786,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_seq_type_t,4, 27807, 11, 3.2, NULL, 26395, NULL)
#else
Msg("Find size of snd_seq_type_t (27807)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26395, NULL);\n",architecture,27807,0);
#endif

extern int snd_seq_alloc_queue_db(snd_seq_t *);
CheckInterfacedef(snd_seq_alloc_queue,snd_seq_alloc_queue_db);
extern int snd_seq_client_id_db(snd_seq_t *);
CheckInterfacedef(snd_seq_client_id,snd_seq_client_id_db);
extern int snd_seq_client_info_get_client_db(const snd_seq_client_info_t *);
CheckInterfacedef(snd_seq_client_info_get_client,snd_seq_client_info_get_client_db);
extern const char * snd_seq_client_info_get_name_db(snd_seq_client_info_t *);
CheckInterfacedef(snd_seq_client_info_get_name,snd_seq_client_info_get_name_db);
extern snd_seq_client_type_t snd_seq_client_info_get_type_db(const snd_seq_client_info_t *);
CheckInterfacedef(snd_seq_client_info_get_type,snd_seq_client_info_get_type_db);
extern void snd_seq_client_info_set_client_db(snd_seq_client_info_t *, int);
CheckInterfacedef(snd_seq_client_info_set_client,snd_seq_client_info_set_client_db);
extern void snd_seq_client_info_set_name_db(snd_seq_client_info_t *, const char *);
CheckInterfacedef(snd_seq_client_info_set_name,snd_seq_client_info_set_name_db);
extern size_t snd_seq_client_info_sizeof_db(void);
CheckInterfacedef(snd_seq_client_info_sizeof,snd_seq_client_info_sizeof_db);
extern int snd_seq_close_db(snd_seq_t *);
CheckInterfacedef(snd_seq_close,snd_seq_close_db);
extern int snd_seq_create_port_db(snd_seq_t *, snd_seq_port_info_t *);
CheckInterfacedef(snd_seq_create_port,snd_seq_create_port_db);
extern int snd_seq_delete_port_db(snd_seq_t *, int);
CheckInterfacedef(snd_seq_delete_port,snd_seq_delete_port_db);
extern int snd_seq_drain_output_db(snd_seq_t *);
CheckInterfacedef(snd_seq_drain_output,snd_seq_drain_output_db);
extern int snd_seq_event_input_db(snd_seq_t *, snd_seq_event_t * *);
CheckInterfacedef(snd_seq_event_input,snd_seq_event_input_db);
extern int snd_seq_event_input_pending_db(snd_seq_t *, int);
CheckInterfacedef(snd_seq_event_input_pending,snd_seq_event_input_pending_db);
extern ssize_t snd_seq_event_length_db(snd_seq_event_t *);
CheckInterfacedef(snd_seq_event_length,snd_seq_event_length_db);
extern int snd_seq_event_output_db(snd_seq_t *, snd_seq_event_t *);
CheckInterfacedef(snd_seq_event_output,snd_seq_event_output_db);
extern int snd_seq_event_output_direct_db(snd_seq_t *, snd_seq_event_t *);
CheckInterfacedef(snd_seq_event_output_direct,snd_seq_event_output_direct_db);
extern int snd_seq_free_event_db(snd_seq_event_t *);
CheckInterfacedef(snd_seq_free_event,snd_seq_free_event_db);
extern int snd_seq_free_queue_db(snd_seq_t *, int);
CheckInterfacedef(snd_seq_free_queue,snd_seq_free_queue_db);
extern int snd_seq_get_any_client_info_db(snd_seq_t *, int, snd_seq_client_info_t *);
CheckInterfacedef(snd_seq_get_any_client_info,snd_seq_get_any_client_info_db);
extern int snd_seq_get_any_port_info_db(snd_seq_t *, int, int, snd_seq_port_info_t *);
CheckInterfacedef(snd_seq_get_any_port_info,snd_seq_get_any_port_info_db);
extern int snd_seq_get_client_info_db(snd_seq_t *, snd_seq_client_info_t *);
CheckInterfacedef(snd_seq_get_client_info,snd_seq_get_client_info_db);
extern int snd_seq_get_port_info_db(snd_seq_t *, int, snd_seq_port_info_t *);
CheckInterfacedef(snd_seq_get_port_info,snd_seq_get_port_info_db);
extern int snd_seq_open_db(snd_seq_t * *, const char *, int, int);
CheckInterfacedef(snd_seq_open,snd_seq_open_db);
extern int snd_seq_poll_descriptors_db(snd_seq_t *, struct pollfd *, unsigned int, short int);
CheckInterfacedef(snd_seq_poll_descriptors,snd_seq_poll_descriptors_db);
extern int snd_seq_poll_descriptors_count_db(snd_seq_t *, short int);
CheckInterfacedef(snd_seq_poll_descriptors_count,snd_seq_poll_descriptors_count_db);
extern int snd_seq_poll_descriptors_revents_db(snd_seq_t *, struct pollfd *, unsigned int, short unsigned int *);
CheckInterfacedef(snd_seq_poll_descriptors_revents,snd_seq_poll_descriptors_revents_db);
extern void snd_seq_port_info_free_db(snd_seq_port_info_t *);
CheckInterfacedef(snd_seq_port_info_free,snd_seq_port_info_free_db);
extern const snd_seq_addr_t * snd_seq_port_info_get_addr_db(const snd_seq_port_info_t *);
CheckInterfacedef(snd_seq_port_info_get_addr,snd_seq_port_info_get_addr_db);
extern unsigned int snd_seq_port_info_get_capability_db(const snd_seq_port_info_t *);
CheckInterfacedef(snd_seq_port_info_get_capability,snd_seq_port_info_get_capability_db);
extern int snd_seq_port_info_get_client_db(const snd_seq_port_info_t *);
CheckInterfacedef(snd_seq_port_info_get_client,snd_seq_port_info_get_client_db);
extern const char * snd_seq_port_info_get_name_db(const snd_seq_port_info_t *);
CheckInterfacedef(snd_seq_port_info_get_name,snd_seq_port_info_get_name_db);
extern int snd_seq_port_info_get_port_db(const snd_seq_port_info_t *);
CheckInterfacedef(snd_seq_port_info_get_port,snd_seq_port_info_get_port_db);
extern unsigned int snd_seq_port_info_get_type_db(const snd_seq_port_info_t *);
CheckInterfacedef(snd_seq_port_info_get_type,snd_seq_port_info_get_type_db);
extern int snd_seq_port_info_malloc_db(snd_seq_port_info_t * *);
CheckInterfacedef(snd_seq_port_info_malloc,snd_seq_port_info_malloc_db);
extern void snd_seq_port_info_set_capability_db(snd_seq_port_info_t *, unsigned int);
CheckInterfacedef(snd_seq_port_info_set_capability,snd_seq_port_info_set_capability_db);
extern void snd_seq_port_info_set_client_db(snd_seq_port_info_t *, int);
CheckInterfacedef(snd_seq_port_info_set_client,snd_seq_port_info_set_client_db);
extern void snd_seq_port_info_set_midi_channels_db(snd_seq_port_info_t *, int);
CheckInterfacedef(snd_seq_port_info_set_midi_channels,snd_seq_port_info_set_midi_channels_db);
extern void snd_seq_port_info_set_name_db(snd_seq_port_info_t *, const char *);
CheckInterfacedef(snd_seq_port_info_set_name,snd_seq_port_info_set_name_db);
extern void snd_seq_port_info_set_port_db(snd_seq_port_info_t *, int);
CheckInterfacedef(snd_seq_port_info_set_port,snd_seq_port_info_set_port_db);
extern void snd_seq_port_info_set_port_specified_db(snd_seq_port_info_t *, int);
CheckInterfacedef(snd_seq_port_info_set_port_specified,snd_seq_port_info_set_port_specified_db);
extern void snd_seq_port_info_set_type_db(snd_seq_port_info_t *, unsigned int);
CheckInterfacedef(snd_seq_port_info_set_type,snd_seq_port_info_set_type_db);
extern size_t snd_seq_port_info_sizeof_db(void);
CheckInterfacedef(snd_seq_port_info_sizeof,snd_seq_port_info_sizeof_db);
extern void snd_seq_port_subscribe_copy_db(snd_seq_port_subscribe_t *, const snd_seq_port_subscribe_t *);
CheckInterfacedef(snd_seq_port_subscribe_copy,snd_seq_port_subscribe_copy_db);
extern void snd_seq_port_subscribe_free_db(snd_seq_port_subscribe_t *);
CheckInterfacedef(snd_seq_port_subscribe_free,snd_seq_port_subscribe_free_db);
extern const snd_seq_addr_t * snd_seq_port_subscribe_get_dest_db(const snd_seq_port_subscribe_t *);
CheckInterfacedef(snd_seq_port_subscribe_get_dest,snd_seq_port_subscribe_get_dest_db);
extern int snd_seq_port_subscribe_get_exclusive_db(const snd_seq_port_subscribe_t *);
CheckInterfacedef(snd_seq_port_subscribe_get_exclusive,snd_seq_port_subscribe_get_exclusive_db);
extern int snd_seq_port_subscribe_get_queue_db(const snd_seq_port_subscribe_t *);
CheckInterfacedef(snd_seq_port_subscribe_get_queue,snd_seq_port_subscribe_get_queue_db);
extern const snd_seq_addr_t * snd_seq_port_subscribe_get_sender_db(const snd_seq_port_subscribe_t *);
CheckInterfacedef(snd_seq_port_subscribe_get_sender,snd_seq_port_subscribe_get_sender_db);
extern int snd_seq_port_subscribe_get_time_real_db(const snd_seq_port_subscribe_t *);
CheckInterfacedef(snd_seq_port_subscribe_get_time_real,snd_seq_port_subscribe_get_time_real_db);
extern int snd_seq_port_subscribe_get_time_update_db(const snd_seq_port_subscribe_t *);
CheckInterfacedef(snd_seq_port_subscribe_get_time_update,snd_seq_port_subscribe_get_time_update_db);
extern int snd_seq_port_subscribe_malloc_db(snd_seq_port_subscribe_t * *);
CheckInterfacedef(snd_seq_port_subscribe_malloc,snd_seq_port_subscribe_malloc_db);
extern void snd_seq_port_subscribe_set_dest_db(snd_seq_port_subscribe_t *, const snd_seq_addr_t *);
CheckInterfacedef(snd_seq_port_subscribe_set_dest,snd_seq_port_subscribe_set_dest_db);
extern void snd_seq_port_subscribe_set_exclusive_db(snd_seq_port_subscribe_t *, int);
CheckInterfacedef(snd_seq_port_subscribe_set_exclusive,snd_seq_port_subscribe_set_exclusive_db);
extern void snd_seq_port_subscribe_set_queue_db(snd_seq_port_subscribe_t *, int);
CheckInterfacedef(snd_seq_port_subscribe_set_queue,snd_seq_port_subscribe_set_queue_db);
extern void snd_seq_port_subscribe_set_sender_db(snd_seq_port_subscribe_t *, const snd_seq_addr_t *);
CheckInterfacedef(snd_seq_port_subscribe_set_sender,snd_seq_port_subscribe_set_sender_db);
extern void snd_seq_port_subscribe_set_time_real_db(snd_seq_port_subscribe_t *, int);
CheckInterfacedef(snd_seq_port_subscribe_set_time_real,snd_seq_port_subscribe_set_time_real_db);
extern void snd_seq_port_subscribe_set_time_update_db(snd_seq_port_subscribe_t *, int);
CheckInterfacedef(snd_seq_port_subscribe_set_time_update,snd_seq_port_subscribe_set_time_update_db);
extern size_t snd_seq_port_subscribe_sizeof_db(void);
CheckInterfacedef(snd_seq_port_subscribe_sizeof,snd_seq_port_subscribe_sizeof_db);
extern int snd_seq_query_next_client_db(snd_seq_t *, snd_seq_client_info_t *);
CheckInterfacedef(snd_seq_query_next_client,snd_seq_query_next_client_db);
extern int snd_seq_query_next_port_db(snd_seq_t *, snd_seq_port_info_t *);
CheckInterfacedef(snd_seq_query_next_port,snd_seq_query_next_port_db);
extern int snd_seq_query_port_subscribers_db(snd_seq_t *, snd_seq_query_subscribe_t *);
CheckInterfacedef(snd_seq_query_port_subscribers,snd_seq_query_port_subscribers_db);
extern const snd_seq_addr_t * snd_seq_query_subscribe_get_addr_db(const snd_seq_query_subscribe_t *);
CheckInterfacedef(snd_seq_query_subscribe_get_addr,snd_seq_query_subscribe_get_addr_db);
extern int snd_seq_query_subscribe_get_exclusive_db(const snd_seq_query_subscribe_t *);
CheckInterfacedef(snd_seq_query_subscribe_get_exclusive,snd_seq_query_subscribe_get_exclusive_db);
extern int snd_seq_query_subscribe_get_index_db(const snd_seq_query_subscribe_t *);
CheckInterfacedef(snd_seq_query_subscribe_get_index,snd_seq_query_subscribe_get_index_db);
extern int snd_seq_query_subscribe_get_queue_db(const snd_seq_query_subscribe_t *);
CheckInterfacedef(snd_seq_query_subscribe_get_queue,snd_seq_query_subscribe_get_queue_db);
extern const snd_seq_addr_t * snd_seq_query_subscribe_get_root_db(const snd_seq_query_subscribe_t *);
CheckInterfacedef(snd_seq_query_subscribe_get_root,snd_seq_query_subscribe_get_root_db);
extern int snd_seq_query_subscribe_get_time_real_db(const snd_seq_query_subscribe_t *);
CheckInterfacedef(snd_seq_query_subscribe_get_time_real,snd_seq_query_subscribe_get_time_real_db);
extern int snd_seq_query_subscribe_get_time_update_db(const snd_seq_query_subscribe_t *);
CheckInterfacedef(snd_seq_query_subscribe_get_time_update,snd_seq_query_subscribe_get_time_update_db);
extern void snd_seq_query_subscribe_set_index_db(snd_seq_query_subscribe_t *, int);
CheckInterfacedef(snd_seq_query_subscribe_set_index,snd_seq_query_subscribe_set_index_db);
extern void snd_seq_query_subscribe_set_root_db(snd_seq_query_subscribe_t *, const snd_seq_addr_t *);
CheckInterfacedef(snd_seq_query_subscribe_set_root,snd_seq_query_subscribe_set_root_db);
extern void snd_seq_query_subscribe_set_type_db(snd_seq_query_subscribe_t *, snd_seq_query_subs_type_t);
CheckInterfacedef(snd_seq_query_subscribe_set_type,snd_seq_query_subscribe_set_type_db);
extern size_t snd_seq_query_subscribe_sizeof_db(void);
CheckInterfacedef(snd_seq_query_subscribe_sizeof,snd_seq_query_subscribe_sizeof_db);
extern void snd_seq_queue_tempo_set_ppq_db(snd_seq_queue_tempo_t *, int);
CheckInterfacedef(snd_seq_queue_tempo_set_ppq,snd_seq_queue_tempo_set_ppq_db);
extern void snd_seq_queue_tempo_set_tempo_db(snd_seq_queue_tempo_t *, unsigned int);
CheckInterfacedef(snd_seq_queue_tempo_set_tempo,snd_seq_queue_tempo_set_tempo_db);
extern size_t snd_seq_queue_tempo_sizeof_db(void);
CheckInterfacedef(snd_seq_queue_tempo_sizeof,snd_seq_queue_tempo_sizeof_db);
extern int snd_seq_set_client_info_db(snd_seq_t *, snd_seq_client_info_t *);
CheckInterfacedef(snd_seq_set_client_info,snd_seq_set_client_info_db);
extern int snd_seq_set_port_info_db(snd_seq_t *, int, snd_seq_port_info_t *);
CheckInterfacedef(snd_seq_set_port_info,snd_seq_set_port_info_db);
extern int snd_seq_set_queue_tempo_db(snd_seq_t *, int, snd_seq_queue_tempo_t *);
CheckInterfacedef(snd_seq_set_queue_tempo,snd_seq_set_queue_tempo_db);
extern int snd_seq_subscribe_port_db(snd_seq_t *, snd_seq_port_subscribe_t *);
CheckInterfacedef(snd_seq_subscribe_port,snd_seq_subscribe_port_db);
extern int snd_seq_unsubscribe_port_db(snd_seq_t *, snd_seq_port_subscribe_t *);
CheckInterfacedef(snd_seq_unsubscribe_port,snd_seq_unsubscribe_port_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/seq.h\n\n",pcnt,cnt);
return cnt;
#endif

}
