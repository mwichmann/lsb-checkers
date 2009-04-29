/*
 * Test of pango-1.0/pango/pango-utils.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in pango-1.0/pango/pango-utils.h\n");
#endif

printf("Checking data structures in pango-1.0/pango/pango-utils.h\n");
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
extern gboolean pango_is_zero_width_db(gunichar);
CheckInterfacedef(pango_is_zero_width,pango_is_zero_width_db);
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
