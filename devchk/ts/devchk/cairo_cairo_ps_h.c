/*
 * Test of cairo/cairo-ps.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in cairo/cairo-ps.h\n");
#endif

printf("Checking data structures in cairo/cairo-ps.h\n");
extern cairo_surface_t * cairo_ps_surface_create_db(const char *, double, double);
CheckInterfacedef(cairo_ps_surface_create,cairo_ps_surface_create_db);
extern cairo_surface_t * cairo_ps_surface_create_for_stream_db(cairo_write_func_t, void *, double, double);
CheckInterfacedef(cairo_ps_surface_create_for_stream,cairo_ps_surface_create_for_stream_db);
extern void cairo_ps_surface_set_size_db(cairo_surface_t *, double, double);
CheckInterfacedef(cairo_ps_surface_set_size,cairo_ps_surface_set_size_db);
extern void cairo_ps_surface_dsc_comment_db(cairo_surface_t *, const char *);
CheckInterfacedef(cairo_ps_surface_dsc_comment,cairo_ps_surface_dsc_comment_db);
extern void cairo_ps_surface_dsc_begin_setup_db(cairo_surface_t *);
CheckInterfacedef(cairo_ps_surface_dsc_begin_setup,cairo_ps_surface_dsc_begin_setup_db);
extern void cairo_ps_surface_dsc_begin_page_setup_db(cairo_surface_t *);
CheckInterfacedef(cairo_ps_surface_dsc_begin_page_setup,cairo_ps_surface_dsc_begin_page_setup_db);
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
