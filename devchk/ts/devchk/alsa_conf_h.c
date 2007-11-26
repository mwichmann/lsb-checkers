/*
 * Test of alsa/conf.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <alsa/input.h>
#include <alsa/output.h>
#include "alsa/conf.h"



#ifdef TET_TEST
void alsa_conf_h()
{
#else
int alsa_conf_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in alsa/conf.h\n");
#endif

printf("Checking data structures in alsa/conf.h\n");
#if defined __x86_64__
CheckTypeSize(snd_config_iterator_t,8, 27347, 11, 3.2, NULL, 26326, NULL)
#else
Msg("Find size of snd_config_iterator_t (27347)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26326,NULL);\n",architecture,27347,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_config_type_t,4, 27352, 11, 3.2, NULL, 26328, NULL)
#else
Msg("Find size of snd_config_type_t (27352)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26328,NULL);\n",architecture,27352,0);
#endif

#if defined __x86_64__
CheckTypeSize(snd_devname_t,24, 27400, 11, 3.2, NULL, 27397, NULL)
#else
Msg("Find size of snd_devname_t (27400)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,27397, NULL);\n",architecture,27400,0);
#endif

extern int snd_config_add_db(snd_config_t *, snd_config_t *);
CheckInterfacedef(snd_config_add,snd_config_add_db);
extern int snd_config_copy_db(snd_config_t * *, snd_config_t *);
CheckInterfacedef(snd_config_copy,snd_config_copy_db);
extern int snd_config_delete_db(snd_config_t *);
CheckInterfacedef(snd_config_delete,snd_config_delete_db);
extern int snd_config_get_ascii_db(const snd_config_t *, char * *);
CheckInterfacedef(snd_config_get_ascii,snd_config_get_ascii_db);
extern int snd_config_get_id_db(const snd_config_t *, const char * *);
CheckInterfacedef(snd_config_get_id,snd_config_get_id_db);
extern int snd_config_get_integer_db(const snd_config_t *, long int *);
CheckInterfacedef(snd_config_get_integer,snd_config_get_integer_db);
extern int snd_config_get_string_db(const snd_config_t *, const char * *);
CheckInterfacedef(snd_config_get_string,snd_config_get_string_db);
extern snd_config_type_t snd_config_get_type_db(const snd_config_t *);
CheckInterfacedef(snd_config_get_type,snd_config_get_type_db);
extern int snd_config_imake_integer_db(snd_config_t * *, const char *, const long int);
CheckInterfacedef(snd_config_imake_integer,snd_config_imake_integer_db);
extern snd_config_iterator_t snd_config_iterator_end_db(const snd_config_t *);
CheckInterfacedef(snd_config_iterator_end,snd_config_iterator_end_db);
extern snd_config_t * snd_config_iterator_entry_db(const snd_config_iterator_t);
CheckInterfacedef(snd_config_iterator_entry,snd_config_iterator_entry_db);
extern snd_config_iterator_t snd_config_iterator_first_db(const snd_config_t *);
CheckInterfacedef(snd_config_iterator_first,snd_config_iterator_first_db);
extern snd_config_iterator_t snd_config_iterator_next_db(const snd_config_iterator_t);
CheckInterfacedef(snd_config_iterator_next,snd_config_iterator_next_db);
extern int snd_config_search_db(snd_config_t *, const char *, snd_config_t * *);
CheckInterfacedef(snd_config_search,snd_config_search_db);
extern int snd_config_update_db(void);
CheckInterfacedef(snd_config_update,snd_config_update_db);
extern int snd_config_update_free_global_db(void);
CheckInterfacedef(snd_config_update_free_global,snd_config_update_free_global_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/conf.h\n\n",pcnt,cnt);
return cnt;
#endif

}
