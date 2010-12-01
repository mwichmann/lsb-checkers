/*
 * Test of cairo/cairo-pdf.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "cairo/cairo-pdf.h"



#ifdef TET_TEST
void cairo_cairo_pdf_h()
{
#else
int cairo_cairo_pdf_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in cairo/cairo-pdf.h\n");
extern cairo_surface_t * cairo_pdf_surface_create_db(const char *, double, double);
CheckInterfacedef(cairo_pdf_surface_create,cairo_pdf_surface_create_db);
extern cairo_surface_t * cairo_pdf_surface_create_for_stream_db(cairo_write_func_t, void *, double, double);
CheckInterfacedef(cairo_pdf_surface_create_for_stream,cairo_pdf_surface_create_for_stream_db);
extern void cairo_pdf_surface_set_size_db(cairo_surface_t *, double, double);
CheckInterfacedef(cairo_pdf_surface_set_size,cairo_pdf_surface_set_size_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in cairo/cairo-pdf.h\n\n",pcnt,cnt);
return cnt;
#endif

}
