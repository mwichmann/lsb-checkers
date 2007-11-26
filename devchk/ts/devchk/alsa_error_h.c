/*
 * Test of alsa/error.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "alsa/error.h"



#ifdef TET_TEST
void alsa_error_h()
{
#else
int alsa_error_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in alsa/error.h\n");
#endif

printf("Checking data structures in alsa/error.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SND_ERROR_BEGIN
	CompareConstant(SND_ERROR_BEGIN,500000,11222,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_ERROR_BEGIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_ERROR_INCOMPATIBLE_VERSION
	CompareConstant(SND_ERROR_INCOMPATIBLE_VERSION,(SND_ERROR_BEGIN+0),11223,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_ERROR_INCOMPATIBLE_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SND_ERROR_ALISP_NIL
	CompareConstant(SND_ERROR_ALISP_NIL,(SND_ERROR_BEGIN+1),11224,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SND_ERROR_ALISP_NIL\n");
cnt++;
#endif

#endif

#if defined __x86_64__
CheckTypeSize(snd_lib_error_handler_t,8, 27459, 11, 3.2, NULL, 25000, NULL)
#else
Msg("Find size of snd_lib_error_handler_t (27459)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,25000, NULL);\n",architecture,27459,0);
#endif

extern int snd_lib_error_set_handler_db(snd_lib_error_handler_t);
CheckInterfacedef(snd_lib_error_set_handler,snd_lib_error_set_handler_db);
extern const char * snd_strerror_db(int);
CheckInterfacedef(snd_strerror,snd_strerror_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/error.h\n\n",pcnt,cnt);
return cnt;
#endif

}
