/*
 * Test of cairo/cairo-svg.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in cairo/cairo-svg.h\n");
#endif

printf("Checking data structures in cairo/cairo-svg.h\n");
#if 1
CheckTypeSize(cairo_svg_version_t,0, 32393, 1, 4.1, NULL, 32392, NULL)
#endif

extern cairo_surface_t * cairo_svg_surface_create_db(const char *, double, double);
CheckInterfacedef(cairo_svg_surface_create,cairo_svg_surface_create_db);
extern cairo_surface_t * cairo_svg_surface_create_for_stream_db(cairo_write_func_t, void *, double, double);
CheckInterfacedef(cairo_svg_surface_create_for_stream,cairo_svg_surface_create_for_stream_db);
extern void cairo_svg_surface_restrict_to_version_db(cairo_surface_t *, cairo_svg_version_t);
CheckInterfacedef(cairo_svg_surface_restrict_to_version,cairo_svg_surface_restrict_to_version_db);
extern void cairo_svg_get_versions_db(const cairo_svg_version_t * *, int *);
CheckInterfacedef(cairo_svg_get_versions,cairo_svg_get_versions_db);
extern const char * cairo_svg_version_to_string_db(cairo_svg_version_t);
CheckInterfacedef(cairo_svg_version_to_string,cairo_svg_version_to_string_db);
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
