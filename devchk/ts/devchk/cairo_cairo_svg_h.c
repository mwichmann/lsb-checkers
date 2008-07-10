/*
 * Test of cairo/cairo-svg.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "cairo/cairo-svg.h"



#ifdef TET_TEST
void cairo_cairo_svg_h()
{
#else
int cairo_cairo_svg_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in cairo/cairo-svg.h\n");
#endif

printf("Checking data structures in cairo/cairo-svg.h\n");
#if 1
CheckTypeSize(cairo_svg_version_t,0, 1000133, 1, 4.0, NULL, 1000132, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in cairo/cairo-svg.h\n\n",pcnt,cnt);
return cnt;
#endif

}
