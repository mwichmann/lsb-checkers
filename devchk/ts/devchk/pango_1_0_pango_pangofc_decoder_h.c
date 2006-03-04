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
CheckTypeSize(struct _PangoFcDecoder,12, 12596, 2)
Msg("Missing member data for _PangoFcDecoder on IA32\n");
CheckOffset(struct _PangoFcDecoder,parent_instance,0,2,43301)
#elif __x86_64__
CheckTypeSize(struct _PangoFcDecoder,24, 12596, 11)
Msg("Missing member data for _PangoFcDecoder on x86-64\n");
CheckOffset(struct _PangoFcDecoder,parent_instance,0,11,43301)
#elif __ia64__
CheckTypeSize(struct _PangoFcDecoder,24, 12596, 3)
Msg("Missing member data for _PangoFcDecoder on IA64\n");
CheckOffset(struct _PangoFcDecoder,parent_instance,0,3,43301)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _PangoFcDecoder,12, 12596, 6)
Msg("Missing member data for _PangoFcDecoder on PPC32\n");
CheckOffset(struct _PangoFcDecoder,parent_instance,0,6,43301)
#elif __powerpc64__
CheckTypeSize(struct _PangoFcDecoder,24, 12596, 9)
Msg("Missing member data for _PangoFcDecoder on PPC64\n");
CheckOffset(struct _PangoFcDecoder,parent_instance,0,9,43301)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _PangoFcDecoder,12, 12596, 10)
Msg("Missing member data for _PangoFcDecoder on S390\n");
CheckOffset(struct _PangoFcDecoder,parent_instance,0,10,43301)
#elif __s390x__
CheckTypeSize(struct _PangoFcDecoder,24, 12596, 12)
Msg("Missing member data for _PangoFcDecoder on S390X\n");
CheckOffset(struct _PangoFcDecoder,parent_instance,0,12,43301)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12596,0);
Msg("Find size of _PangoFcDecoder (12596)\n");
#endif

#if __i386__
CheckTypeSize(PangoFcDecoder,12, 12597, 2)
#elif __x86_64__
CheckTypeSize(PangoFcDecoder,24, 12597, 11)
#elif __ia64__
CheckTypeSize(PangoFcDecoder,24, 12597, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoFcDecoder,12, 12597, 6)
#elif __powerpc64__
CheckTypeSize(PangoFcDecoder,24, 12597, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(PangoFcDecoder,12, 12597, 10)
#elif __s390x__
CheckTypeSize(PangoFcDecoder,24, 12597, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12597,0);
Msg("Find size of PangoFcDecoder (12597)\n");
#endif

#if __i386__
CheckTypeSize(PangoFcDecoder *,4, 12598, 2)
#elif __x86_64__
CheckTypeSize(PangoFcDecoder *,8, 12598, 11)
#elif __ia64__
CheckTypeSize(PangoFcDecoder *,8, 12598, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoFcDecoder *,4, 12598, 6)
#elif __powerpc64__
CheckTypeSize(PangoFcDecoder *,8, 12598, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(PangoFcDecoder *,4, 12598, 10)
#elif __s390x__
CheckTypeSize(PangoFcDecoder *,8, 12598, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12598,0);
Msg("Find size of PangoFcDecoder * (12598)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12599,0);
Msg("Find size of fptr_anonymous-pangofc_decoder.h.types-0 (12599)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12600,0);
Msg("Find size of fptr_anonymous-pangofc_decoder.h.types-2 (12600)\n");
#endif

#if __i386__
CheckTypeSize(struct _PangoFcDecoderClass,92, 12601, 2)
CheckMemberSize(struct _PangoFcDecoderClass,get_charset,4,2,43308)
CheckOffset(struct _PangoFcDecoderClass,get_charset,68,2,43308)
CheckMemberSize(struct _PangoFcDecoderClass,get_glyph,4,2,43309)
CheckOffset(struct _PangoFcDecoderClass,get_glyph,72,2,43309)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved1,4,2,43310)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved1,76,2,43310)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved2,4,2,43311)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved2,80,2,43311)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved3,4,2,43312)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved3,84,2,43312)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved4,4,2,43313)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved4,88,2,43313)
#elif __ia64__
CheckTypeSize(struct _PangoFcDecoderClass,184, 12601, 3)
CheckMemberSize(struct _PangoFcDecoderClass,get_charset,8,3,43308)
CheckOffset(struct _PangoFcDecoderClass,get_charset,136,3,43308)
CheckMemberSize(struct _PangoFcDecoderClass,get_glyph,8,3,43309)
CheckOffset(struct _PangoFcDecoderClass,get_glyph,144,3,43309)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved1,8,3,43310)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved1,152,3,43310)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved2,8,3,43311)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved2,160,3,43311)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved3,8,3,43312)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved3,168,3,43312)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved4,8,3,43313)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved4,176,3,43313)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _PangoFcDecoderClass,92, 12601, 6)
CheckMemberSize(struct _PangoFcDecoderClass,get_charset,4,6,43308)
CheckOffset(struct _PangoFcDecoderClass,get_charset,68,6,43308)
CheckMemberSize(struct _PangoFcDecoderClass,get_glyph,4,6,43309)
CheckOffset(struct _PangoFcDecoderClass,get_glyph,72,6,43309)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved1,4,6,43310)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved1,76,6,43310)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved2,4,6,43311)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved2,80,6,43311)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved3,4,6,43312)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved3,84,6,43312)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved4,4,6,43313)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved4,88,6,43313)
#elif __powerpc64__
CheckTypeSize(struct _PangoFcDecoderClass,184, 12601, 9)
CheckMemberSize(struct _PangoFcDecoderClass,get_charset,8,9,43308)
CheckOffset(struct _PangoFcDecoderClass,get_charset,136,9,43308)
CheckMemberSize(struct _PangoFcDecoderClass,get_glyph,8,9,43309)
CheckOffset(struct _PangoFcDecoderClass,get_glyph,144,9,43309)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved1,8,9,43310)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved1,152,9,43310)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved2,8,9,43311)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved2,160,9,43311)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved3,8,9,43312)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved3,168,9,43312)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved4,8,9,43313)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved4,176,9,43313)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _PangoFcDecoderClass,92, 12601, 10)
CheckMemberSize(struct _PangoFcDecoderClass,get_charset,4,10,43308)
CheckOffset(struct _PangoFcDecoderClass,get_charset,68,10,43308)
CheckMemberSize(struct _PangoFcDecoderClass,get_glyph,4,10,43309)
CheckOffset(struct _PangoFcDecoderClass,get_glyph,72,10,43309)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved1,4,10,43310)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved1,76,10,43310)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved2,4,10,43311)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved2,80,10,43311)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved3,4,10,43312)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved3,84,10,43312)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved4,4,10,43313)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved4,88,10,43313)
#elif __s390x__
CheckTypeSize(struct _PangoFcDecoderClass,184, 12601, 12)
CheckMemberSize(struct _PangoFcDecoderClass,get_charset,8,12,43308)
CheckOffset(struct _PangoFcDecoderClass,get_charset,136,12,43308)
CheckMemberSize(struct _PangoFcDecoderClass,get_glyph,8,12,43309)
CheckOffset(struct _PangoFcDecoderClass,get_glyph,144,12,43309)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved1,8,12,43310)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved1,152,12,43310)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved2,8,12,43311)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved2,160,12,43311)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved3,8,12,43312)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved3,168,12,43312)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved4,8,12,43313)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved4,176,12,43313)
#elif __x86_64__
CheckTypeSize(struct _PangoFcDecoderClass,184, 12601, 11)
CheckMemberSize(struct _PangoFcDecoderClass,get_charset,8,11,43308)
CheckOffset(struct _PangoFcDecoderClass,get_charset,136,11,43308)
CheckMemberSize(struct _PangoFcDecoderClass,get_glyph,8,11,43309)
CheckOffset(struct _PangoFcDecoderClass,get_glyph,144,11,43309)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved1,8,11,43310)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved1,152,11,43310)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved2,8,11,43311)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved2,160,11,43311)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved3,8,11,43312)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved3,168,11,43312)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved4,8,11,43313)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved4,176,11,43313)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12601,0);
Msg("Find size of _PangoFcDecoderClass (12601)\n");
#endif

#if __i386__
CheckTypeSize(PangoFcDecoderClass,92, 12602, 2)
#elif __ia64__
CheckTypeSize(PangoFcDecoderClass,184, 12602, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoFcDecoderClass,92, 12602, 6)
#elif __powerpc64__
CheckTypeSize(PangoFcDecoderClass,184, 12602, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(PangoFcDecoderClass,92, 12602, 10)
#elif __s390x__
CheckTypeSize(PangoFcDecoderClass,184, 12602, 12)
#elif __x86_64__
CheckTypeSize(PangoFcDecoderClass,184, 12602, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12602,0);
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
