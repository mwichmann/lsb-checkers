/*
 * Test of cairo/cairo-ft.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "cairo/cairo-ft.h"



#ifdef TET_TEST
void cairo_cairo_ft_h()
{
#else
int cairo_cairo_ft_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in cairo/cairo-ft.h\n");
#endif

printf("Checking data structures in cairo/cairo-ft.h\n");
extern cairo_font_face_t * cairo_ft_font_face_create_for_pattern_db(FcPattern *);
CheckInterfacedef(cairo_ft_font_face_create_for_pattern,cairo_ft_font_face_create_for_pattern_db);
extern void cairo_ft_font_options_substitute_db(const cairo_font_options_t *, FcPattern *);
CheckInterfacedef(cairo_ft_font_options_substitute,cairo_ft_font_options_substitute_db);
extern void cairo_ft_scaled_font_unlock_face_db(cairo_scaled_font_t *);
CheckInterfacedef(cairo_ft_scaled_font_unlock_face,cairo_ft_scaled_font_unlock_face_db);
extern cairo_font_face_t * cairo_ft_font_face_create_for_ft_face_db(FT_Face, int);
CheckInterfacedef(cairo_ft_font_face_create_for_ft_face,cairo_ft_font_face_create_for_ft_face_db);
extern void cairo_ft_scaled_font_lock_face_db(cairo_scaled_font_t *);
CheckInterfacedef(cairo_ft_scaled_font_lock_face,cairo_ft_scaled_font_lock_face_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in cairo/cairo-ft.h\n\n",pcnt,cnt);
return cnt;
#endif

}
