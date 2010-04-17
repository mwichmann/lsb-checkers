/*
 * Test of alsa/error.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

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

#if defined __s390x__
CheckTypeSize(snd_lib_error_handler_t,8, 27459, 12, 3.2, NULL, 25000, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_lib_error_handler_t,8, 27459, 11, 3.2, NULL, 25000, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_lib_error_handler_t,4, 27459, 10, 3.2, NULL, 25000, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_lib_error_handler_t,8, 27459, 9, 3.2, NULL, 25000, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_lib_error_handler_t,4, 27459, 6, 3.2, NULL, 25000, NULL)
#elif defined __ia64__
CheckTypeSize(snd_lib_error_handler_t,8, 27459, 3, 3.2, NULL, 25000, NULL)
#elif defined __i386__
CheckTypeSize(snd_lib_error_handler_t,4, 27459, 2, 3.2, NULL, 25000, NULL)
#else
Msg("Find size of snd_lib_error_handler_t (27459)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,25000, NULL);\n",architecture,27459,0);
#endif

#if defined __s390x__
/* S390X */
typedef void (*snd_lib_error_handler_t_db)(const char *, int, const char *, int, const char *, ...);
CheckFunctionTypedef(snd_lib_error_handler_t,snd_lib_error_handler_t_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*snd_lib_error_handler_t_db)(const char *, int, const char *, int, const char *, ...);
CheckFunctionTypedef(snd_lib_error_handler_t,snd_lib_error_handler_t_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*snd_lib_error_handler_t_db)(const char *, int, const char *, int, const char *, ...);
CheckFunctionTypedef(snd_lib_error_handler_t,snd_lib_error_handler_t_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*snd_lib_error_handler_t_db)(const char *, int, const char *, int, const char *, ...);
CheckFunctionTypedef(snd_lib_error_handler_t,snd_lib_error_handler_t_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*snd_lib_error_handler_t_db)(const char *, int, const char *, int, const char *, ...);
CheckFunctionTypedef(snd_lib_error_handler_t,snd_lib_error_handler_t_db);
#elif defined __ia64__
/* IA64 */
typedef void (*snd_lib_error_handler_t_db)(const char *, int, const char *, int, const char *, ...);
CheckFunctionTypedef(snd_lib_error_handler_t,snd_lib_error_handler_t_db);
#elif defined __i386__
/* IA32 */
typedef void (*snd_lib_error_handler_t_db)(const char *, int, const char *, int, const char *, ...);
CheckFunctionTypedef(snd_lib_error_handler_t,snd_lib_error_handler_t_db);
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
