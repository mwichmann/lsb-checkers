/*
 * Test of pango-1.0/pango/pango-utils.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "pango-1.0/pango/pango-utils.h"



#ifdef TET_TEST
void pango_1_0_pango_pango_utils_h()
{
#else
int pango_1_0_pango_pango_utils_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in pango-1.0/pango/pango-utils.h\n");
#endif

printf("Checking data structures in pango-1.0/pango/pango-utils.h\n");
#if __i386__
CheckTypeSize(PangoStretch *,4, 12548, 2);
#elif __x86_64__
CheckTypeSize(PangoStretch *,8, 12548, 11);
#elif __ia64__
CheckTypeSize(PangoStretch *,8, 12548, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoStretch *,4, 12548, 6);
#elif __powerpc64__
CheckTypeSize(PangoStretch *,8, 12548, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(PangoStretch *,4, 12548, 10);
#elif __s390x__
CheckTypeSize(PangoStretch *,8, 12548, 12);
#elif 1
CheckTypeSize(PangoStretch *,0, 12548, 1);
#endif

#if __i386__
CheckTypeSize(PangoWeight *,4, 12549, 2);
#elif __x86_64__
CheckTypeSize(PangoWeight *,8, 12549, 11);
#elif __ia64__
CheckTypeSize(PangoWeight *,8, 12549, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoWeight *,4, 12549, 6);
#elif __powerpc64__
CheckTypeSize(PangoWeight *,8, 12549, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(PangoWeight *,4, 12549, 10);
#elif __s390x__
CheckTypeSize(PangoWeight *,8, 12549, 12);
#elif 1
CheckTypeSize(PangoWeight *,0, 12549, 1);
#endif

#if __i386__
CheckTypeSize(PangoDirection *,4, 12550, 2);
#elif __x86_64__
CheckTypeSize(PangoDirection *,8, 12550, 11);
#elif __ia64__
CheckTypeSize(PangoDirection *,8, 12550, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoDirection *,4, 12550, 6);
#elif __powerpc64__
CheckTypeSize(PangoDirection *,8, 12550, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(PangoDirection *,4, 12550, 10);
#elif __s390x__
CheckTypeSize(PangoDirection *,8, 12550, 12);
#elif 1
CheckTypeSize(PangoDirection *,0, 12550, 1);
#endif

#if __i386__
CheckTypeSize(PangoStyle *,4, 12551, 2);
#elif __x86_64__
CheckTypeSize(PangoStyle *,8, 12551, 11);
#elif __ia64__
CheckTypeSize(PangoStyle *,8, 12551, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoStyle *,4, 12551, 6);
#elif __powerpc64__
CheckTypeSize(PangoStyle *,8, 12551, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(PangoStyle *,4, 12551, 10);
#elif __s390x__
CheckTypeSize(PangoStyle *,8, 12551, 12);
#elif 1
CheckTypeSize(PangoStyle *,0, 12551, 1);
#endif

#if __i386__
CheckTypeSize(PangoVariant *,4, 12552, 2);
#elif __x86_64__
CheckTypeSize(PangoVariant *,8, 12552, 11);
#elif __ia64__
CheckTypeSize(PangoVariant *,8, 12552, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoVariant *,4, 12552, 6);
#elif __powerpc64__
CheckTypeSize(PangoVariant *,8, 12552, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(PangoVariant *,4, 12552, 10);
#elif __s390x__
CheckTypeSize(PangoVariant *,8, 12552, 12);
#elif 1
CheckTypeSize(PangoVariant *,0, 12552, 1);
#endif

extern char * pango_trim_string_db(const char *);
CheckInterfacedef(pango_trim_string,pango_trim_string_db);
extern gboolean pango_scan_word_db(const char * *, GString *);
CheckInterfacedef(pango_scan_word,pango_scan_word_db);
extern gboolean pango_skip_space_db(const char * *);
CheckInterfacedef(pango_skip_space,pango_skip_space_db);
extern gboolean pango_parse_stretch_db(const char *, PangoStretch *, gboolean);
CheckInterfacedef(pango_parse_stretch,pango_parse_stretch_db);
extern gboolean pango_scan_int_db(const char * *, int *);
CheckInterfacedef(pango_scan_int,pango_scan_int_db);
extern gboolean pango_parse_weight_db(const char *, PangoWeight *, gboolean);
CheckInterfacedef(pango_parse_weight,pango_parse_weight_db);
extern gint pango_read_line_db(FILE *, GString *);
CheckInterfacedef(pango_read_line,pango_read_line_db);
extern gboolean pango_log2vis_get_embedding_levels_db(gunichar *, gint, PangoDirection *, guint8 *);
CheckInterfacedef(pango_log2vis_get_embedding_levels,pango_log2vis_get_embedding_levels_db);
extern const char * pango_language_get_sample_string_db(PangoLanguage *);
CheckInterfacedef(pango_language_get_sample_string,pango_language_get_sample_string_db);
extern gboolean pango_parse_style_db(const char *, PangoStyle *, gboolean);
CheckInterfacedef(pango_parse_style,pango_parse_style_db);
extern gboolean pango_scan_string_db(const char * *, GString *);
CheckInterfacedef(pango_scan_string,pango_scan_string_db);
extern gboolean pango_parse_variant_db(const char *, PangoVariant *, gboolean);
CheckInterfacedef(pango_parse_variant,pango_parse_variant_db);
extern char * * pango_split_file_list_db(const char *);
CheckInterfacedef(pango_split_file_list,pango_split_file_list_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in pango-1.0/pango/pango-utils.h\n\n",pcnt,cnt);
return cnt;
#endif

}
