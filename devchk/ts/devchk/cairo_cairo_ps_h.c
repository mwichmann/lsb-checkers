/*
 * Test of cairo/cairo-ps.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "cairo/cairo-ps.h"



#ifdef TET_TEST
void cairo_cairo_ps_h()
{
#else
int cairo_cairo_ps_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in cairo/cairo-ps.h\n");
#endif

printf("Checking data structures in cairo/cairo-ps.h\n");
extern cairo_surface_t * cairo_ps_surface_create_db(const char *, double, double);
CheckInterfacedef(cairo_ps_surface_create,cairo_ps_surface_create_db);
extern cairo_surface_t * cairo_ps_surface_create_for_stream_db(cairo_write_func_t, void *, double, double);
CheckInterfacedef(cairo_ps_surface_create_for_stream,cairo_ps_surface_create_for_stream_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in cairo/cairo-ps.h\n\n",pcnt,cnt);
return cnt;
#endif

}
