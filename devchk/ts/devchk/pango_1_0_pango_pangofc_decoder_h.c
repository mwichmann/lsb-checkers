/*
 * Test of pango-1.0/pango/pangofc-decoder.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define G_DISABLE_DEPRECATED
#define G_ERRORCHECK_MUTEXES
#undef GOBJECT_COMPILATION
#undef GETTEXT_PACKAGE
#define PANGO_DISABLE_DEPRECATED

#ifdef LSBCC_MODE
#include <ft2build.h>
#include FT_FREETYPE_H
#define _XFT_NO_COMPAT
#define _XFTCOMPAT_H_
#include <X11/Xlib.h>
#include <X11/Xft/Xft.h>
#endif
#include "pango-1.0/pango/pangofc-decoder.h"



#ifdef TET_TEST
void pango_1_0_pango_pangofc_decoder_h()
{
#else
int pango_1_0_pango_pangofc_decoder_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in pango-1.0/pango/pangofc-decoder.h\n");
#endif

printf("Checking data structures in pango-1.0/pango/pangofc-decoder.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_FC_DECODER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_FC_DECODER(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_IS_FC_DECODER(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_FC_DECODER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_IS_FC_DECODER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_FC_DECODER_GET_CLASS(obj) */
#endif

#if __i386__
CheckTypeSize(PangoFcDecoder,12, 12597, 2, 3.1, NULL, 12596, NULL)
#elif __x86_64__
CheckTypeSize(PangoFcDecoder,24, 12597, 11, 3.1, NULL, 12596, NULL)
#elif __ia64__
CheckTypeSize(PangoFcDecoder,24, 12597, 3, 3.1, NULL, 12596, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoFcDecoder,12, 12597, 6, 3.1, NULL, 12596, NULL)
#elif __powerpc64__
CheckTypeSize(PangoFcDecoder,24, 12597, 9, 3.1, NULL, 12596, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(PangoFcDecoder,12, 12597, 10, 3.1, NULL, 12596, NULL)
#elif __s390x__
CheckTypeSize(PangoFcDecoder,24, 12597, 12, 3.1, NULL, 12596, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12596,NULL);\n",architecture,12597,0);
Msg("Find size of PangoFcDecoder (12597)\n");
#endif

#if __i386__
CheckTypeSize(PangoFcDecoderClass,92, 12602, 2, 3.1, NULL, 12601, NULL)
#elif __ia64__
CheckTypeSize(PangoFcDecoderClass,184, 12602, 3, 3.1, NULL, 12601, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoFcDecoderClass,92, 12602, 6, 3.1, NULL, 12601, NULL)
#elif __powerpc64__
CheckTypeSize(PangoFcDecoderClass,184, 12602, 9, 3.1, NULL, 12601, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(PangoFcDecoderClass,92, 12602, 10, 3.1, NULL, 12601, NULL)
#elif __s390x__
CheckTypeSize(PangoFcDecoderClass,184, 12602, 12, 3.1, NULL, 12601, NULL)
#elif __x86_64__
CheckTypeSize(PangoFcDecoderClass,184, 12602, 11, 3.1, NULL, 12601, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12601, NULL);\n",architecture,12602,0);
Msg("Find size of PangoFcDecoderClass (12602)\n");
#endif

extern FcCharSet * pango_fc_decoder_get_charset_db(PangoFcDecoder *, PangoFcFont *);
CheckInterfacedef(pango_fc_decoder_get_charset,pango_fc_decoder_get_charset_db);
extern PangoGlyph pango_fc_decoder_get_glyph_db(PangoFcDecoder *, PangoFcFont *, guint32);
CheckInterfacedef(pango_fc_decoder_get_glyph,pango_fc_decoder_get_glyph_db);
extern GType pango_fc_decoder_get_type_db(void);
CheckInterfacedef(pango_fc_decoder_get_type,pango_fc_decoder_get_type_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in pango-1.0/pango/pangofc-decoder.h\n\n",pcnt,cnt);
return cnt;
#endif

}
