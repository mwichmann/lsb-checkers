/*
 * Test of locale.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "locale.h"



#ifdef TET_TEST
void locale_h()
{
#else
int locale_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in locale.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef LC_CTYPE
	CompareConstant(LC_CTYPE,0,1470,architecture)
#else
Msg( "Error: Constant not found: LC_CTYPE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef LC_NUMERIC
	CompareConstant(LC_NUMERIC,1,1471,architecture)
#else
Msg( "Error: Constant not found: LC_NUMERIC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef LC_TIME
	CompareConstant(LC_TIME,2,1472,architecture)
#else
Msg( "Error: Constant not found: LC_TIME\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef LC_COLLATE
	CompareConstant(LC_COLLATE,3,1473,architecture)
#else
Msg( "Error: Constant not found: LC_COLLATE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef LC_MONETARY
	CompareConstant(LC_MONETARY,4,1474,architecture)
#else
Msg( "Error: Constant not found: LC_MONETARY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef LC_MESSAGES
	CompareConstant(LC_MESSAGES,5,1475,architecture)
#else
Msg( "Error: Constant not found: LC_MESSAGES\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef LC_ALL
	CompareConstant(LC_ALL,6,1476,architecture)
#else
Msg( "Error: Constant not found: LC_ALL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef LC_PAPER
	CompareConstant(LC_PAPER,7,1477,architecture)
#else
Msg( "Error: Constant not found: LC_PAPER\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef LC_NAME
	CompareConstant(LC_NAME,8,1478,architecture)
#else
Msg( "Error: Constant not found: LC_NAME\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef LC_ADDRESS
	CompareConstant(LC_ADDRESS,9,1479,architecture)
#else
Msg( "Error: Constant not found: LC_ADDRESS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef LC_TELEPHONE
	CompareConstant(LC_TELEPHONE,10,1480,architecture)
#else
Msg( "Error: Constant not found: LC_TELEPHONE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef LC_MEASUREMENT
	CompareConstant(LC_MEASUREMENT,11,1481,architecture)
#else
Msg( "Error: Constant not found: LC_MEASUREMENT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef LC_IDENTIFICATION
	CompareConstant(LC_IDENTIFICATION,12,1482,architecture)
#else
Msg( "Error: Constant not found: LC_IDENTIFICATION\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(struct lconv,56, 6919, 2)
CheckOffset(struct lconv,decimal_point,0,2,29980)
CheckOffset(struct lconv,thousands_sep,4,2,29981)
CheckOffset(struct lconv,grouping,8,2,29982)
CheckOffset(struct lconv,int_curr_symbol,12,2,29983)
CheckOffset(struct lconv,currency_symbol,16,2,29984)
CheckOffset(struct lconv,mon_decimal_point,20,2,29985)
CheckOffset(struct lconv,mon_thousands_sep,24,2,29986)
CheckOffset(struct lconv,mon_grouping,28,2,29987)
CheckOffset(struct lconv,positive_sign,32,2,29988)
CheckOffset(struct lconv,negative_sign,36,2,29989)
CheckOffset(struct lconv,int_frac_digits,40,2,29990)
CheckOffset(struct lconv,frac_digits,41,2,29991)
CheckOffset(struct lconv,p_cs_precedes,42,2,29992)
CheckOffset(struct lconv,p_sep_by_space,43,2,29993)
CheckOffset(struct lconv,n_cs_precedes,44,2,29994)
CheckOffset(struct lconv,n_sep_by_space,45,2,29995)
CheckOffset(struct lconv,p_sign_posn,46,2,29996)
CheckOffset(struct lconv,n_sign_posn,47,2,29997)
CheckOffset(struct lconv,int_p_cs_precedes,48,2,34431)
CheckOffset(struct lconv,int_p_sep_by_space,49,2,34432)
CheckOffset(struct lconv,int_n_cs_precedes,50,2,34433)
CheckOffset(struct lconv,int_n_sep_by_space,51,2,34434)
CheckOffset(struct lconv,int_p_sign_posn,52,2,34435)
CheckOffset(struct lconv,int_n_sign_posn,53,2,34436)
#elif __ia64__
CheckTypeSize(struct lconv,96, 6919, 3)
#elif __powerpc__
CheckTypeSize(struct lconv,56, 6919, 6)
#elif __s390__
CheckTypeSize(struct lconv,0, 6919, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6919,0);
Msg("Find size of lconv (6919)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in locale.h\n",cnt);
return cnt;
#endif

}
