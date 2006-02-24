/*
 * Test of pango-1.0/pango/pangofc-decoder.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#define G_DISABLE_DEPRECATED
#define G_ERRORCHECK_MUTEXES
#undef GOBJECT_COMPILATION
#undef GETTEXT_PACKAGE
#define PANGO_DISABLE_DEPRECATED

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
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12599,0);
Msg("Find size of fptr_anonymous-pangofc_decoder.h.types-0 (12599)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
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
#elif 1
CheckTypeSize(struct _PangoFcDecoderClass,184, 12601, 1)
CheckMemberSize(struct _PangoFcDecoderClass,get_charset,4,1,43308)
CheckOffset(struct _PangoFcDecoderClass,get_charset,68,1,43308)
CheckMemberSize(struct _PangoFcDecoderClass,get_glyph,4,1,43309)
CheckOffset(struct _PangoFcDecoderClass,get_glyph,72,1,43309)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved1,4,1,43310)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved1,76,1,43310)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved2,4,1,43311)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved2,80,1,43311)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved3,4,1,43312)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved3,84,1,43312)
CheckMemberSize(struct _PangoFcDecoderClass,_pango_reserved4,4,1,43313)
CheckOffset(struct _PangoFcDecoderClass,_pango_reserved4,88,1,43313)
#endif

#if __i386__
CheckTypeSize(PangoFcDecoderClass,92, 12602, 2)
#elif 1
CheckTypeSize(PangoFcDecoderClass,184, 12602, 1)
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
