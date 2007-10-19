/*
 * Test of pango-1.0/pango/pangofc-fontmap.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
/* #define G_DISABLE_DEPRECATED */
#define G_ERRORCHECK_MUTEXES
#undef GOBJECT_COMPILATION
#undef GETTEXT_PACKAGE
/* #define PANGO_DISABLE_DEPRECATED */

struct _PangoFcFontMap { };
struct _PangoFcFontMapClass { };


#ifdef LSBCC_MODE
#include <ft2build.h>
#include FT_FREETYPE_H
#define _XFT_NO_COMPAT
#define _XFTCOMPAT_H_
#include <X11/Xlib.h>
#include <X11/Xft/Xft.h>
#endif
#include "pango-1.0/pango/pangofc-fontmap.h"



#ifdef TET_TEST
void pango_1_0_pango_pangofc_fontmap_h()
{
#else
int pango_1_0_pango_pangofc_fontmap_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in pango-1.0/pango/pangofc-fontmap.h\n");
#endif

printf("Checking data structures in pango-1.0/pango/pangofc-fontmap.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_FC_FONT_MAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_FC_FONT_MAP(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_IS_FC_FONT_MAP(object) */
#endif

#if defined __i386__
CheckTypeSize(PangoFcDecoderFindFunc,4, 12607, 2, 3.1, NULL, 12606, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoFcDecoderFindFunc,8, 12607, 11, 3.1, NULL, 12606, NULL)
#elif defined __ia64__
CheckTypeSize(PangoFcDecoderFindFunc,8, 12607, 3, 3.1, NULL, 12606, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoFcDecoderFindFunc,4, 12607, 6, 3.1, NULL, 12606, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoFcDecoderFindFunc,8, 12607, 9, 3.1, NULL, 12606, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoFcDecoderFindFunc,4, 12607, 10, 3.1, NULL, 12606, NULL)
#elif defined __s390x__
CheckTypeSize(PangoFcDecoderFindFunc,8, 12607, 12, 3.1, NULL, 12606, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12606,NULL);\n",architecture,12607,0);
Msg("Find size of PangoFcDecoderFindFunc (12607)\n");
#endif

extern void pango_fc_font_map_add_decoder_find_func_db(PangoFcFontMap *, PangoFcDecoderFindFunc, gpointer, GDestroyNotify);
CheckInterfacedef(pango_fc_font_map_add_decoder_find_func,pango_fc_font_map_add_decoder_find_func_db);
extern PangoFontDescription * pango_fc_font_description_from_pattern_db(FcPattern *, gboolean);
CheckInterfacedef(pango_fc_font_description_from_pattern,pango_fc_font_description_from_pattern_db);
extern GType pango_fc_font_map_get_type_db(void);
CheckInterfacedef(pango_fc_font_map_get_type,pango_fc_font_map_get_type_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in pango-1.0/pango/pangofc-fontmap.h\n\n",pcnt,cnt);
return cnt;
#endif

}
