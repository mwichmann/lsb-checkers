/*
 * Test of pango-1.0/pango/pangofc-fontmap.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
struct _PangoFcFontMap { };
struct _PangoFcFontMapClass { };
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

#if __i386__
CheckTypeSize(PangoFcFontMap,0, 12604, 2)
#elif __x86_64__
CheckTypeSize(PangoFcFontMap,0, 12604, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12604,0);
Msg("Find size of PangoFcFontMap (12604)\n");
#endif

#if __i386__
CheckTypeSize(PangoFcFontMap *,4, 12605, 2)
#elif __x86_64__
CheckTypeSize(PangoFcFontMap *,8, 12605, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12605,0);
Msg("Find size of PangoFcFontMap * (12605)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12606,0);
Msg("Find size of fptr_pangofc-fontmap_3 (12606)\n");
#endif

#if __i386__
CheckTypeSize(PangoFcDecoderFindFunc,4, 12607, 2)
#elif __x86_64__
CheckTypeSize(PangoFcDecoderFindFunc,8, 12607, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12607,0);
Msg("Find size of PangoFcDecoderFindFunc (12607)\n");
#endif

#if __i386__
CheckTypeSize(PangoFcFontMapClass,0, 12609, 2)
#elif __x86_64__
CheckTypeSize(PangoFcFontMapClass,0, 12609, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12609,0);
Msg("Find size of PangoFcFontMapClass (12609)\n");
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
