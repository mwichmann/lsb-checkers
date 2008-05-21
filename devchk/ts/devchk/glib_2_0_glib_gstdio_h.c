/*
 * Test of glib-2.0/glib/gstdio.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "glib-2.0/glib/gstdio.h"



#ifdef TET_TEST
void glib_2_0_glib_gstdio_h()
{
#else
int glib_2_0_glib_gstdio_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in glib-2.0/glib/gstdio.h\n");
#endif

printf("Checking data structures in glib-2.0/glib/gstdio.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for g_chmod */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_creat */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_access */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_chdir */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_open */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_rename */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_mkdir */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_stat */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_lstat */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_unlink */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_remove */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_rmdir */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_fopen */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_freopen */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in glib-2.0/glib/gstdio.h\n\n",pcnt,cnt);
return cnt;
#endif

}
