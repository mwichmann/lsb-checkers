/*
 * Test of alsa/iatomic.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "alsa/iatomic.h"



#ifdef TET_TEST
void alsa_iatomic_h()
{
#else
int alsa_iatomic_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in alsa/iatomic.h\n");
#endif

printf("Checking data structures in alsa/iatomic.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for ATOMIC_INIT(i) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for atomic_read(v) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for atomic_set(v,i) */
#endif

#if defined __s390x__
CheckTypeSize(snd_atomic_write_t,8, 27341, 12, 3.2, NULL, 26475, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_atomic_write_t,8, 27341, 11, 3.2, NULL, 26475, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_atomic_write_t,8, 27341, 10, 3.2, NULL, 26475, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_atomic_write_t,8, 27341, 9, 3.2, NULL, 26475, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_atomic_write_t,8, 27341, 6, 3.2, NULL, 26475, NULL)
#elif defined __ia64__
CheckTypeSize(snd_atomic_write_t,8, 27341, 3, 3.2, NULL, 26475, NULL)
#elif defined __i386__
CheckTypeSize(snd_atomic_write_t,8, 27341, 2, 3.2, NULL, 26475, NULL)
#else
Msg("Find size of snd_atomic_write_t (27341)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26475,NULL);\n",architecture,27341,0);
#endif

#if defined __s390x__
CheckTypeSize(snd_atomic_read_t,16, 27343, 12, 3.2, NULL, 26476, NULL)
#elif defined __x86_64__
CheckTypeSize(snd_atomic_read_t,16, 27343, 11, 3.2, NULL, 26476, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(snd_atomic_read_t,8, 27343, 10, 3.2, NULL, 26476, NULL)
#elif defined __powerpc64__
CheckTypeSize(snd_atomic_read_t,16, 27343, 9, 3.2, NULL, 26476, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(snd_atomic_read_t,8, 27343, 6, 3.2, NULL, 26476, NULL)
#elif defined __ia64__
CheckTypeSize(snd_atomic_read_t,16, 27343, 3, 3.2, NULL, 26476, NULL)
#elif defined __i386__
CheckTypeSize(snd_atomic_read_t,8, 27343, 2, 3.2, NULL, 26476, NULL)
#else
Msg("Find size of snd_atomic_read_t (27343)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,26476, NULL);\n",architecture,27343,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in alsa/iatomic.h\n\n",pcnt,cnt);
return cnt;
#endif

}
