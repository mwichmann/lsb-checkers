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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in locale.h\n");
#endif

printf("Checking data structures in locale.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef LC_CTYPE
	CompareConstant(LC_CTYPE,0,1470,architecture)
#else
Msg( "Error: Constant not found: LC_CTYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_NUMERIC
	CompareConstant(LC_NUMERIC,1,1471,architecture)
#else
Msg( "Error: Constant not found: LC_NUMERIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_TIME
	CompareConstant(LC_TIME,2,1472,architecture)
#else
Msg( "Error: Constant not found: LC_TIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_COLLATE
	CompareConstant(LC_COLLATE,3,1473,architecture)
#else
Msg( "Error: Constant not found: LC_COLLATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_MONETARY
	CompareConstant(LC_MONETARY,4,1474,architecture)
#else
Msg( "Error: Constant not found: LC_MONETARY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_MESSAGES
	CompareConstant(LC_MESSAGES,5,1475,architecture)
#else
Msg( "Error: Constant not found: LC_MESSAGES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_ALL
	CompareConstant(LC_ALL,6,1476,architecture)
#else
Msg( "Error: Constant not found: LC_ALL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_PAPER
	CompareConstant(LC_PAPER,7,1477,architecture)
#else
Msg( "Error: Constant not found: LC_PAPER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_NAME
	CompareConstant(LC_NAME,8,1478,architecture)
#else
Msg( "Error: Constant not found: LC_NAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_ADDRESS
	CompareConstant(LC_ADDRESS,9,1479,architecture)
#else
Msg( "Error: Constant not found: LC_ADDRESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_TELEPHONE
	CompareConstant(LC_TELEPHONE,10,1480,architecture)
#else
Msg( "Error: Constant not found: LC_TELEPHONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_MEASUREMENT
	CompareConstant(LC_MEASUREMENT,11,1481,architecture)
#else
Msg( "Error: Constant not found: LC_MEASUREMENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_IDENTIFICATION
	CompareConstant(LC_IDENTIFICATION,12,1482,architecture)
#else
Msg( "Error: Constant not found: LC_IDENTIFICATION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_GLOBAL_LOCALE
	CompareConstant(LC_GLOBAL_LOCALE,((locale_t) -1L),5284,architecture)
#else
Msg( "Error: Constant not found: LC_GLOBAL_LOCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_CTYPE_MASK
	CompareConstant(LC_CTYPE_MASK,(1<<LC_CTYPE),5285,architecture)
#else
Msg( "Error: Constant not found: LC_CTYPE_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_NUMERIC_MASK
	CompareConstant(LC_NUMERIC_MASK,(1 << LC_NUMERIC),5286,architecture)
#else
Msg( "Error: Constant not found: LC_NUMERIC_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_TIME_MASK
	CompareConstant(LC_TIME_MASK,(1 << LC_TIME),5287,architecture)
#else
Msg( "Error: Constant not found: LC_TIME_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_COLLATE_MASK
	CompareConstant(LC_COLLATE_MASK,(1 << LC_COLLATE),5288,architecture)
#else
Msg( "Error: Constant not found: LC_COLLATE_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_MONETARY_MASK
	CompareConstant(LC_MONETARY_MASK,(1 << LC_MONETARY),5289,architecture)
#else
Msg( "Error: Constant not found: LC_MONETARY_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_MESSAGES_MASK
	CompareConstant(LC_MESSAGES_MASK,(1 << LC_MESSAGES),5290,architecture)
#else
Msg( "Error: Constant not found: LC_MESSAGES_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_PAPER_MASK
	CompareConstant(LC_PAPER_MASK,(1 << LC_PAPER),5291,architecture)
#else
Msg( "Error: Constant not found: LC_PAPER_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_NAME_MASK
	CompareConstant(LC_NAME_MASK,(1 << LC_NAME),5292,architecture)
#else
Msg( "Error: Constant not found: LC_NAME_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_ADDRESS_MASK
	CompareConstant(LC_ADDRESS_MASK,(1 << LC_ADDRESS),5293,architecture)
#else
Msg( "Error: Constant not found: LC_ADDRESS_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_TELEPHONE_MASK
	CompareConstant(LC_TELEPHONE_MASK,(1 << LC_TELEPHONE),5294,architecture)
#else
Msg( "Error: Constant not found: LC_TELEPHONE_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_MEASUREMENT_MASK
	CompareConstant(LC_MEASUREMENT_MASK,(1 << LC_MEASUREMENT),5295,architecture)
#else
Msg( "Error: Constant not found: LC_MEASUREMENT_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_IDENTIFICATION_MASK
	CompareConstant(LC_IDENTIFICATION_MASK,(1 << LC_IDENTIFICATION),5296,architecture)
#else
Msg( "Error: Constant not found: LC_IDENTIFICATION_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_ALL_MASK
	CompareConstant(LC_ALL_MASK,\
        (LC_CTYPE_MASK| LC_NUMERIC_MASK| LC_TIME_MASK| LC_COLLATE_MASK| LC_MONETARY_MASK|\
         LC_MESSAGES_MASK| LC_PAPER_MASK| LC_NAME_MASK| LC_ADDRESS_MASK| LC_TELEPHONE_MASK|\
         LC_MEASUREMENT_MASK| LC_IDENTIFICATION_MASK),5297,architecture)
#else
Msg( "Error: Constant not found: LC_ALL_MASK\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(struct lconv,56, 6919, 2)
CheckMemberSize(struct lconv,decimal_point,4,2,29980)
CheckOffset(struct lconv,decimal_point,0,2,29980)
CheckMemberSize(struct lconv,thousands_sep,4,2,29981)
CheckOffset(struct lconv,thousands_sep,4,2,29981)
CheckMemberSize(struct lconv,grouping,4,2,29982)
CheckOffset(struct lconv,grouping,8,2,29982)
CheckMemberSize(struct lconv,int_curr_symbol,4,2,29983)
CheckOffset(struct lconv,int_curr_symbol,12,2,29983)
CheckMemberSize(struct lconv,currency_symbol,4,2,29984)
CheckOffset(struct lconv,currency_symbol,16,2,29984)
CheckMemberSize(struct lconv,mon_decimal_point,4,2,29985)
CheckOffset(struct lconv,mon_decimal_point,20,2,29985)
CheckMemberSize(struct lconv,mon_thousands_sep,4,2,29986)
CheckOffset(struct lconv,mon_thousands_sep,24,2,29986)
CheckMemberSize(struct lconv,mon_grouping,4,2,29987)
CheckOffset(struct lconv,mon_grouping,28,2,29987)
CheckMemberSize(struct lconv,positive_sign,4,2,29988)
CheckOffset(struct lconv,positive_sign,32,2,29988)
CheckMemberSize(struct lconv,negative_sign,4,2,29989)
CheckOffset(struct lconv,negative_sign,36,2,29989)
CheckMemberSize(struct lconv,int_frac_digits,1,2,29990)
CheckOffset(struct lconv,int_frac_digits,40,2,29990)
CheckMemberSize(struct lconv,frac_digits,1,2,29991)
CheckOffset(struct lconv,frac_digits,41,2,29991)
CheckMemberSize(struct lconv,p_cs_precedes,1,2,29992)
CheckOffset(struct lconv,p_cs_precedes,42,2,29992)
CheckMemberSize(struct lconv,p_sep_by_space,1,2,29993)
CheckOffset(struct lconv,p_sep_by_space,43,2,29993)
CheckMemberSize(struct lconv,n_cs_precedes,1,2,29994)
CheckOffset(struct lconv,n_cs_precedes,44,2,29994)
CheckMemberSize(struct lconv,n_sep_by_space,1,2,29995)
CheckOffset(struct lconv,n_sep_by_space,45,2,29995)
CheckMemberSize(struct lconv,p_sign_posn,1,2,29996)
CheckOffset(struct lconv,p_sign_posn,46,2,29996)
CheckMemberSize(struct lconv,n_sign_posn,1,2,29997)
CheckOffset(struct lconv,n_sign_posn,47,2,29997)
CheckMemberSize(struct lconv,int_p_cs_precedes,1,2,34431)
CheckOffset(struct lconv,int_p_cs_precedes,48,2,34431)
CheckMemberSize(struct lconv,int_p_sep_by_space,1,2,34432)
CheckOffset(struct lconv,int_p_sep_by_space,49,2,34432)
CheckMemberSize(struct lconv,int_n_cs_precedes,1,2,34433)
CheckOffset(struct lconv,int_n_cs_precedes,50,2,34433)
CheckMemberSize(struct lconv,int_n_sep_by_space,1,2,34434)
CheckOffset(struct lconv,int_n_sep_by_space,51,2,34434)
CheckMemberSize(struct lconv,int_p_sign_posn,1,2,34435)
CheckOffset(struct lconv,int_p_sign_posn,52,2,34435)
CheckMemberSize(struct lconv,int_n_sign_posn,1,2,34436)
CheckOffset(struct lconv,int_n_sign_posn,53,2,34436)
#elif __ia64__
CheckTypeSize(struct lconv,96, 6919, 3)
CheckMemberSize(struct lconv,thousands_sep,8,3,29981)
CheckOffset(struct lconv,thousands_sep,8,3,29981)
CheckMemberSize(struct lconv,grouping,8,3,29982)
CheckOffset(struct lconv,grouping,16,3,29982)
CheckMemberSize(struct lconv,int_curr_symbol,8,3,29983)
CheckOffset(struct lconv,int_curr_symbol,24,3,29983)
CheckMemberSize(struct lconv,currency_symbol,8,3,29984)
CheckOffset(struct lconv,currency_symbol,32,3,29984)
CheckMemberSize(struct lconv,mon_decimal_point,8,3,29985)
CheckOffset(struct lconv,mon_decimal_point,40,3,29985)
CheckMemberSize(struct lconv,mon_thousands_sep,8,3,29986)
CheckOffset(struct lconv,mon_thousands_sep,48,3,29986)
CheckMemberSize(struct lconv,mon_grouping,8,3,29987)
CheckOffset(struct lconv,mon_grouping,56,3,29987)
CheckMemberSize(struct lconv,positive_sign,8,3,29988)
CheckOffset(struct lconv,positive_sign,64,3,29988)
CheckMemberSize(struct lconv,negative_sign,8,3,29989)
CheckOffset(struct lconv,negative_sign,72,3,29989)
CheckMemberSize(struct lconv,int_frac_digits,1,3,29990)
CheckOffset(struct lconv,int_frac_digits,80,3,29990)
CheckMemberSize(struct lconv,frac_digits,1,3,29991)
CheckOffset(struct lconv,frac_digits,81,3,29991)
CheckMemberSize(struct lconv,p_cs_precedes,1,3,29992)
CheckOffset(struct lconv,p_cs_precedes,82,3,29992)
CheckMemberSize(struct lconv,p_sep_by_space,1,3,29993)
CheckOffset(struct lconv,p_sep_by_space,83,3,29993)
CheckMemberSize(struct lconv,n_cs_precedes,1,3,29994)
CheckOffset(struct lconv,n_cs_precedes,84,3,29994)
CheckMemberSize(struct lconv,n_sep_by_space,1,3,29995)
CheckOffset(struct lconv,n_sep_by_space,85,3,29995)
CheckMemberSize(struct lconv,p_sign_posn,1,3,29996)
CheckOffset(struct lconv,p_sign_posn,86,3,29996)
CheckMemberSize(struct lconv,n_sign_posn,1,3,29997)
CheckOffset(struct lconv,n_sign_posn,87,3,29997)
CheckMemberSize(struct lconv,int_p_cs_precedes,1,3,34431)
CheckOffset(struct lconv,int_p_cs_precedes,88,3,34431)
CheckMemberSize(struct lconv,int_p_sep_by_space,1,3,34432)
CheckOffset(struct lconv,int_p_sep_by_space,89,3,34432)
CheckMemberSize(struct lconv,int_n_cs_precedes,1,3,34433)
CheckOffset(struct lconv,int_n_cs_precedes,90,3,34433)
CheckMemberSize(struct lconv,int_n_sep_by_space,1,3,34434)
CheckOffset(struct lconv,int_n_sep_by_space,91,3,34434)
CheckMemberSize(struct lconv,int_p_sign_posn,1,3,34435)
CheckOffset(struct lconv,int_p_sign_posn,92,3,34435)
CheckMemberSize(struct lconv,int_n_sign_posn,1,3,34436)
CheckOffset(struct lconv,int_n_sign_posn,93,3,34436)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct lconv,56, 6919, 6)
CheckMemberSize(struct lconv,thousands_sep,4,6,29981)
CheckOffset(struct lconv,thousands_sep,4,6,29981)
CheckMemberSize(struct lconv,grouping,4,6,29982)
CheckOffset(struct lconv,grouping,8,6,29982)
CheckMemberSize(struct lconv,int_curr_symbol,4,6,29983)
CheckOffset(struct lconv,int_curr_symbol,12,6,29983)
CheckMemberSize(struct lconv,currency_symbol,4,6,29984)
CheckOffset(struct lconv,currency_symbol,16,6,29984)
CheckMemberSize(struct lconv,mon_decimal_point,4,6,29985)
CheckOffset(struct lconv,mon_decimal_point,20,6,29985)
CheckMemberSize(struct lconv,mon_thousands_sep,4,6,29986)
CheckOffset(struct lconv,mon_thousands_sep,24,6,29986)
CheckMemberSize(struct lconv,mon_grouping,4,6,29987)
CheckOffset(struct lconv,mon_grouping,28,6,29987)
CheckMemberSize(struct lconv,positive_sign,4,6,29988)
CheckOffset(struct lconv,positive_sign,32,6,29988)
CheckMemberSize(struct lconv,negative_sign,4,6,29989)
CheckOffset(struct lconv,negative_sign,36,6,29989)
CheckMemberSize(struct lconv,int_frac_digits,1,6,29990)
CheckOffset(struct lconv,int_frac_digits,40,6,29990)
CheckMemberSize(struct lconv,frac_digits,1,6,29991)
CheckOffset(struct lconv,frac_digits,41,6,29991)
CheckMemberSize(struct lconv,p_cs_precedes,1,6,29992)
CheckOffset(struct lconv,p_cs_precedes,42,6,29992)
CheckMemberSize(struct lconv,p_sep_by_space,1,6,29993)
CheckOffset(struct lconv,p_sep_by_space,43,6,29993)
CheckMemberSize(struct lconv,n_cs_precedes,1,6,29994)
CheckOffset(struct lconv,n_cs_precedes,44,6,29994)
CheckMemberSize(struct lconv,n_sep_by_space,1,6,29995)
CheckOffset(struct lconv,n_sep_by_space,45,6,29995)
CheckMemberSize(struct lconv,p_sign_posn,1,6,29996)
CheckOffset(struct lconv,p_sign_posn,46,6,29996)
CheckMemberSize(struct lconv,n_sign_posn,1,6,29997)
CheckOffset(struct lconv,n_sign_posn,47,6,29997)
CheckMemberSize(struct lconv,int_p_cs_precedes,1,6,34431)
CheckOffset(struct lconv,int_p_cs_precedes,48,6,34431)
CheckMemberSize(struct lconv,int_p_sep_by_space,1,6,34432)
CheckOffset(struct lconv,int_p_sep_by_space,49,6,34432)
CheckMemberSize(struct lconv,int_n_cs_precedes,1,6,34433)
CheckOffset(struct lconv,int_n_cs_precedes,50,6,34433)
CheckMemberSize(struct lconv,int_n_sep_by_space,1,6,34434)
CheckOffset(struct lconv,int_n_sep_by_space,51,6,34434)
CheckMemberSize(struct lconv,int_p_sign_posn,1,6,34435)
CheckOffset(struct lconv,int_p_sign_posn,52,6,34435)
CheckMemberSize(struct lconv,int_n_sign_posn,1,6,34436)
CheckOffset(struct lconv,int_n_sign_posn,53,6,34436)
#elif __s390__ && !__s390x__
CheckTypeSize(struct lconv,56, 6919, 10)
CheckMemberSize(struct lconv,thousands_sep,4,10,29981)
CheckOffset(struct lconv,thousands_sep,4,10,29981)
CheckMemberSize(struct lconv,grouping,4,10,29982)
CheckOffset(struct lconv,grouping,8,10,29982)
CheckMemberSize(struct lconv,int_curr_symbol,4,10,29983)
CheckOffset(struct lconv,int_curr_symbol,12,10,29983)
CheckMemberSize(struct lconv,currency_symbol,4,10,29984)
CheckOffset(struct lconv,currency_symbol,16,10,29984)
CheckMemberSize(struct lconv,mon_decimal_point,4,10,29985)
CheckOffset(struct lconv,mon_decimal_point,20,10,29985)
CheckMemberSize(struct lconv,mon_thousands_sep,4,10,29986)
CheckOffset(struct lconv,mon_thousands_sep,24,10,29986)
CheckMemberSize(struct lconv,mon_grouping,4,10,29987)
CheckOffset(struct lconv,mon_grouping,28,10,29987)
CheckMemberSize(struct lconv,positive_sign,4,10,29988)
CheckOffset(struct lconv,positive_sign,32,10,29988)
CheckMemberSize(struct lconv,negative_sign,4,10,29989)
CheckOffset(struct lconv,negative_sign,36,10,29989)
CheckMemberSize(struct lconv,int_frac_digits,1,10,29990)
CheckOffset(struct lconv,int_frac_digits,40,10,29990)
CheckMemberSize(struct lconv,frac_digits,1,10,29991)
CheckOffset(struct lconv,frac_digits,41,10,29991)
CheckMemberSize(struct lconv,p_cs_precedes,1,10,29992)
CheckOffset(struct lconv,p_cs_precedes,42,10,29992)
CheckMemberSize(struct lconv,p_sep_by_space,1,10,29993)
CheckOffset(struct lconv,p_sep_by_space,43,10,29993)
CheckMemberSize(struct lconv,n_cs_precedes,1,10,29994)
CheckOffset(struct lconv,n_cs_precedes,44,10,29994)
CheckMemberSize(struct lconv,n_sep_by_space,1,10,29995)
CheckOffset(struct lconv,n_sep_by_space,45,10,29995)
CheckMemberSize(struct lconv,p_sign_posn,1,10,29996)
CheckOffset(struct lconv,p_sign_posn,46,10,29996)
CheckMemberSize(struct lconv,n_sign_posn,1,10,29997)
CheckOffset(struct lconv,n_sign_posn,47,10,29997)
CheckMemberSize(struct lconv,int_p_cs_precedes,1,10,34431)
CheckOffset(struct lconv,int_p_cs_precedes,48,10,34431)
CheckMemberSize(struct lconv,int_p_sep_by_space,1,10,34432)
CheckOffset(struct lconv,int_p_sep_by_space,49,10,34432)
CheckMemberSize(struct lconv,int_n_cs_precedes,1,10,34433)
CheckOffset(struct lconv,int_n_cs_precedes,50,10,34433)
CheckMemberSize(struct lconv,int_n_sep_by_space,1,10,34434)
CheckOffset(struct lconv,int_n_sep_by_space,51,10,34434)
CheckMemberSize(struct lconv,int_p_sign_posn,1,10,34435)
CheckOffset(struct lconv,int_p_sign_posn,52,10,34435)
CheckMemberSize(struct lconv,int_n_sign_posn,1,10,34436)
CheckOffset(struct lconv,int_n_sign_posn,53,10,34436)
#elif __powerpc64__
CheckTypeSize(struct lconv,96, 6919, 9)
CheckMemberSize(struct lconv,thousands_sep,8,9,29981)
CheckOffset(struct lconv,thousands_sep,8,9,29981)
CheckMemberSize(struct lconv,grouping,8,9,29982)
CheckOffset(struct lconv,grouping,16,9,29982)
CheckMemberSize(struct lconv,int_curr_symbol,8,9,29983)
CheckOffset(struct lconv,int_curr_symbol,24,9,29983)
CheckMemberSize(struct lconv,currency_symbol,8,9,29984)
CheckOffset(struct lconv,currency_symbol,32,9,29984)
CheckMemberSize(struct lconv,mon_decimal_point,8,9,29985)
CheckOffset(struct lconv,mon_decimal_point,40,9,29985)
CheckMemberSize(struct lconv,mon_thousands_sep,8,9,29986)
CheckOffset(struct lconv,mon_thousands_sep,48,9,29986)
CheckMemberSize(struct lconv,mon_grouping,8,9,29987)
CheckOffset(struct lconv,mon_grouping,56,9,29987)
CheckMemberSize(struct lconv,positive_sign,8,9,29988)
CheckOffset(struct lconv,positive_sign,64,9,29988)
CheckMemberSize(struct lconv,negative_sign,8,9,29989)
CheckOffset(struct lconv,negative_sign,72,9,29989)
CheckMemberSize(struct lconv,int_frac_digits,1,9,29990)
CheckOffset(struct lconv,int_frac_digits,80,9,29990)
CheckMemberSize(struct lconv,frac_digits,1,9,29991)
CheckOffset(struct lconv,frac_digits,81,9,29991)
CheckMemberSize(struct lconv,p_cs_precedes,1,9,29992)
CheckOffset(struct lconv,p_cs_precedes,82,9,29992)
CheckMemberSize(struct lconv,p_sep_by_space,1,9,29993)
CheckOffset(struct lconv,p_sep_by_space,83,9,29993)
CheckMemberSize(struct lconv,n_cs_precedes,1,9,29994)
CheckOffset(struct lconv,n_cs_precedes,84,9,29994)
CheckMemberSize(struct lconv,n_sep_by_space,1,9,29995)
CheckOffset(struct lconv,n_sep_by_space,85,9,29995)
CheckMemberSize(struct lconv,p_sign_posn,1,9,29996)
CheckOffset(struct lconv,p_sign_posn,86,9,29996)
CheckMemberSize(struct lconv,n_sign_posn,1,9,29997)
CheckOffset(struct lconv,n_sign_posn,87,9,29997)
CheckMemberSize(struct lconv,int_p_cs_precedes,1,9,34431)
CheckOffset(struct lconv,int_p_cs_precedes,88,9,34431)
CheckMemberSize(struct lconv,int_p_sep_by_space,1,9,34432)
CheckOffset(struct lconv,int_p_sep_by_space,89,9,34432)
CheckMemberSize(struct lconv,int_n_cs_precedes,1,9,34433)
CheckOffset(struct lconv,int_n_cs_precedes,90,9,34433)
CheckMemberSize(struct lconv,int_n_sep_by_space,1,9,34434)
CheckOffset(struct lconv,int_n_sep_by_space,91,9,34434)
CheckMemberSize(struct lconv,int_p_sign_posn,1,9,34435)
CheckOffset(struct lconv,int_p_sign_posn,92,9,34435)
CheckMemberSize(struct lconv,int_n_sign_posn,1,9,34436)
CheckOffset(struct lconv,int_n_sign_posn,93,9,34436)
#elif __s390x__
CheckTypeSize(struct lconv,96, 6919, 12)
CheckMemberSize(struct lconv,thousands_sep,8,12,29981)
CheckOffset(struct lconv,thousands_sep,8,12,29981)
CheckMemberSize(struct lconv,grouping,8,12,29982)
CheckOffset(struct lconv,grouping,16,12,29982)
CheckMemberSize(struct lconv,int_curr_symbol,8,12,29983)
CheckOffset(struct lconv,int_curr_symbol,24,12,29983)
CheckMemberSize(struct lconv,currency_symbol,8,12,29984)
CheckOffset(struct lconv,currency_symbol,32,12,29984)
CheckMemberSize(struct lconv,mon_decimal_point,8,12,29985)
CheckOffset(struct lconv,mon_decimal_point,40,12,29985)
CheckMemberSize(struct lconv,mon_thousands_sep,8,12,29986)
CheckOffset(struct lconv,mon_thousands_sep,48,12,29986)
CheckMemberSize(struct lconv,mon_grouping,8,12,29987)
CheckOffset(struct lconv,mon_grouping,56,12,29987)
CheckMemberSize(struct lconv,positive_sign,8,12,29988)
CheckOffset(struct lconv,positive_sign,64,12,29988)
CheckMemberSize(struct lconv,negative_sign,8,12,29989)
CheckOffset(struct lconv,negative_sign,72,12,29989)
CheckMemberSize(struct lconv,int_frac_digits,1,12,29990)
CheckOffset(struct lconv,int_frac_digits,80,12,29990)
CheckMemberSize(struct lconv,frac_digits,1,12,29991)
CheckOffset(struct lconv,frac_digits,81,12,29991)
CheckMemberSize(struct lconv,p_cs_precedes,1,12,29992)
CheckOffset(struct lconv,p_cs_precedes,82,12,29992)
CheckMemberSize(struct lconv,p_sep_by_space,1,12,29993)
CheckOffset(struct lconv,p_sep_by_space,83,12,29993)
CheckMemberSize(struct lconv,n_cs_precedes,1,12,29994)
CheckOffset(struct lconv,n_cs_precedes,84,12,29994)
CheckMemberSize(struct lconv,n_sep_by_space,1,12,29995)
CheckOffset(struct lconv,n_sep_by_space,85,12,29995)
CheckMemberSize(struct lconv,p_sign_posn,1,12,29996)
CheckOffset(struct lconv,p_sign_posn,86,12,29996)
CheckMemberSize(struct lconv,n_sign_posn,1,12,29997)
CheckOffset(struct lconv,n_sign_posn,87,12,29997)
CheckMemberSize(struct lconv,int_p_cs_precedes,1,12,34431)
CheckOffset(struct lconv,int_p_cs_precedes,88,12,34431)
CheckMemberSize(struct lconv,int_p_sep_by_space,1,12,34432)
CheckOffset(struct lconv,int_p_sep_by_space,89,12,34432)
CheckMemberSize(struct lconv,int_n_cs_precedes,1,12,34433)
CheckOffset(struct lconv,int_n_cs_precedes,90,12,34433)
CheckMemberSize(struct lconv,int_n_sep_by_space,1,12,34434)
CheckOffset(struct lconv,int_n_sep_by_space,91,12,34434)
CheckMemberSize(struct lconv,int_p_sign_posn,1,12,34435)
CheckOffset(struct lconv,int_p_sign_posn,92,12,34435)
CheckMemberSize(struct lconv,int_n_sign_posn,1,12,34436)
CheckOffset(struct lconv,int_n_sign_posn,93,12,34436)
#elif __x86_64__
CheckTypeSize(struct lconv,96, 6919, 11)
CheckMemberSize(struct lconv,thousands_sep,8,11,29981)
CheckOffset(struct lconv,thousands_sep,8,11,29981)
CheckMemberSize(struct lconv,grouping,8,11,29982)
CheckOffset(struct lconv,grouping,16,11,29982)
CheckMemberSize(struct lconv,int_curr_symbol,8,11,29983)
CheckOffset(struct lconv,int_curr_symbol,24,11,29983)
CheckMemberSize(struct lconv,currency_symbol,8,11,29984)
CheckOffset(struct lconv,currency_symbol,32,11,29984)
CheckMemberSize(struct lconv,mon_decimal_point,8,11,29985)
CheckOffset(struct lconv,mon_decimal_point,40,11,29985)
CheckMemberSize(struct lconv,mon_thousands_sep,8,11,29986)
CheckOffset(struct lconv,mon_thousands_sep,48,11,29986)
CheckMemberSize(struct lconv,mon_grouping,8,11,29987)
CheckOffset(struct lconv,mon_grouping,56,11,29987)
CheckMemberSize(struct lconv,positive_sign,8,11,29988)
CheckOffset(struct lconv,positive_sign,64,11,29988)
CheckMemberSize(struct lconv,negative_sign,8,11,29989)
CheckOffset(struct lconv,negative_sign,72,11,29989)
CheckMemberSize(struct lconv,int_frac_digits,1,11,29990)
CheckOffset(struct lconv,int_frac_digits,80,11,29990)
CheckMemberSize(struct lconv,frac_digits,1,11,29991)
CheckOffset(struct lconv,frac_digits,81,11,29991)
CheckMemberSize(struct lconv,p_cs_precedes,1,11,29992)
CheckOffset(struct lconv,p_cs_precedes,82,11,29992)
CheckMemberSize(struct lconv,p_sep_by_space,1,11,29993)
CheckOffset(struct lconv,p_sep_by_space,83,11,29993)
CheckMemberSize(struct lconv,n_cs_precedes,1,11,29994)
CheckOffset(struct lconv,n_cs_precedes,84,11,29994)
CheckMemberSize(struct lconv,n_sep_by_space,1,11,29995)
CheckOffset(struct lconv,n_sep_by_space,85,11,29995)
CheckMemberSize(struct lconv,p_sign_posn,1,11,29996)
CheckOffset(struct lconv,p_sign_posn,86,11,29996)
CheckMemberSize(struct lconv,n_sign_posn,1,11,29997)
CheckOffset(struct lconv,n_sign_posn,87,11,29997)
CheckMemberSize(struct lconv,int_p_cs_precedes,1,11,34431)
CheckOffset(struct lconv,int_p_cs_precedes,88,11,34431)
CheckMemberSize(struct lconv,int_p_sep_by_space,1,11,34432)
CheckOffset(struct lconv,int_p_sep_by_space,89,11,34432)
CheckMemberSize(struct lconv,int_n_cs_precedes,1,11,34433)
CheckOffset(struct lconv,int_n_cs_precedes,90,11,34433)
CheckMemberSize(struct lconv,int_n_sep_by_space,1,11,34434)
CheckOffset(struct lconv,int_n_sep_by_space,91,11,34434)
CheckMemberSize(struct lconv,int_p_sign_posn,1,11,34435)
CheckOffset(struct lconv,int_p_sign_posn,92,11,34435)
CheckMemberSize(struct lconv,int_n_sign_posn,1,11,34436)
CheckOffset(struct lconv,int_n_sign_posn,93,11,34436)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6919,0);
Msg("Find size of lconv (6919)\n");
#endif

#if __i386__
CheckTypeSize(struct __locale_struct,116, 10531, 2)
CheckMemberSize(struct __locale_struct,__locales,52,2,40181)
CheckOffset(struct __locale_struct,__locales,0,2,40181)
CheckMemberSize(struct __locale_struct,__ctype_b,4,2,40182)
CheckOffset(struct __locale_struct,__ctype_b,52,2,40182)
CheckMemberSize(struct __locale_struct,__ctype_tolower,4,2,40183)
CheckOffset(struct __locale_struct,__ctype_tolower,56,2,40183)
CheckMemberSize(struct __locale_struct,__ctype_toupper,4,2,40184)
CheckOffset(struct __locale_struct,__ctype_toupper,60,2,40184)
CheckMemberSize(struct __locale_struct,__names,52,2,40652)
CheckOffset(struct __locale_struct,__names,64,2,40652)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct __locale_struct,116, 10531, 6)
CheckMemberSize(struct __locale_struct,__locales,52,6,40181)
CheckOffset(struct __locale_struct,__locales,0,6,40181)
CheckMemberSize(struct __locale_struct,__ctype_b,4,6,40182)
CheckOffset(struct __locale_struct,__ctype_b,52,6,40182)
CheckMemberSize(struct __locale_struct,__ctype_toupper,4,6,40184)
CheckOffset(struct __locale_struct,__ctype_toupper,60,6,40184)
CheckMemberSize(struct __locale_struct,__names,52,6,40652)
CheckOffset(struct __locale_struct,__names,64,6,40652)
#elif __ia64__
CheckTypeSize(struct __locale_struct,232, 10531, 3)
CheckMemberSize(struct __locale_struct,__locales,104,3,40181)
CheckOffset(struct __locale_struct,__locales,0,3,40181)
CheckMemberSize(struct __locale_struct,__ctype_b,8,3,40182)
CheckOffset(struct __locale_struct,__ctype_b,104,3,40182)
CheckMemberSize(struct __locale_struct,__names,104,3,40652)
CheckOffset(struct __locale_struct,__names,128,3,40652)
#elif __s390x__
CheckTypeSize(struct __locale_struct,232, 10531, 12)
CheckMemberSize(struct __locale_struct,__locales,104,12,40181)
CheckOffset(struct __locale_struct,__locales,0,12,40181)
CheckMemberSize(struct __locale_struct,__ctype_b,8,12,40182)
CheckOffset(struct __locale_struct,__ctype_b,104,12,40182)
CheckMemberSize(struct __locale_struct,__ctype_tolower,8,12,40183)
CheckOffset(struct __locale_struct,__ctype_tolower,112,12,40183)
CheckMemberSize(struct __locale_struct,__ctype_toupper,8,12,40184)
CheckOffset(struct __locale_struct,__ctype_toupper,120,12,40184)
CheckMemberSize(struct __locale_struct,__names,104,12,40652)
CheckOffset(struct __locale_struct,__names,128,12,40652)
#elif __s390__ && !__s390x__
CheckTypeSize(struct __locale_struct,116, 10531, 10)
CheckMemberSize(struct __locale_struct,__locales,52,10,40181)
CheckOffset(struct __locale_struct,__locales,0,10,40181)
CheckMemberSize(struct __locale_struct,__ctype_b,4,10,40182)
CheckOffset(struct __locale_struct,__ctype_b,52,10,40182)
CheckMemberSize(struct __locale_struct,__ctype_tolower,4,10,40183)
CheckOffset(struct __locale_struct,__ctype_tolower,56,10,40183)
CheckMemberSize(struct __locale_struct,__ctype_toupper,4,10,40184)
CheckOffset(struct __locale_struct,__ctype_toupper,60,10,40184)
CheckMemberSize(struct __locale_struct,__names,52,10,40652)
CheckOffset(struct __locale_struct,__names,64,10,40652)
#elif __x86_64__
CheckTypeSize(struct __locale_struct,232, 10531, 11)
CheckMemberSize(struct __locale_struct,__locales,104,11,40181)
CheckOffset(struct __locale_struct,__locales,0,11,40181)
CheckMemberSize(struct __locale_struct,__ctype_b,8,11,40182)
CheckOffset(struct __locale_struct,__ctype_b,104,11,40182)
CheckMemberSize(struct __locale_struct,__ctype_tolower,8,11,40183)
CheckOffset(struct __locale_struct,__ctype_tolower,112,11,40183)
CheckMemberSize(struct __locale_struct,__ctype_toupper,8,11,40184)
CheckOffset(struct __locale_struct,__ctype_toupper,120,11,40184)
CheckMemberSize(struct __locale_struct,__names,104,11,40652)
CheckOffset(struct __locale_struct,__names,128,11,40652)
#elif __powerpc64__
CheckTypeSize(struct __locale_struct,232, 10531, 9)
CheckMemberSize(struct __locale_struct,__locales,104,9,40181)
CheckOffset(struct __locale_struct,__locales,0,9,40181)
CheckMemberSize(struct __locale_struct,__ctype_b,8,9,40182)
CheckOffset(struct __locale_struct,__ctype_b,104,9,40182)
CheckMemberSize(struct __locale_struct,__ctype_tolower,8,9,40183)
CheckOffset(struct __locale_struct,__ctype_tolower,112,9,40183)
CheckMemberSize(struct __locale_struct,__ctype_toupper,8,9,40184)
CheckOffset(struct __locale_struct,__ctype_toupper,120,9,40184)
CheckMemberSize(struct __locale_struct,__names,104,9,40652)
CheckOffset(struct __locale_struct,__names,128,9,40652)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10531,0);
Msg("Find size of __locale_struct (10531)\n");
#endif

#if __i386__
CheckTypeSize(struct __locale_struct *,4, 10532, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct __locale_struct *,4, 10532, 6)
#elif __ia64__
CheckTypeSize(struct __locale_struct *,0, 10532, 3)
#elif __s390x__
CheckTypeSize(struct __locale_struct *,8, 10532, 12)
#elif __s390__ && !__s390x__
CheckTypeSize(struct __locale_struct *,4, 10532, 10)
#elif __x86_64__
CheckTypeSize(struct __locale_struct *,8, 10532, 11)
#elif __powerpc64__
CheckTypeSize(struct __locale_struct *,8, 10532, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10532,0);
Msg("Find size of __locale_struct * (10532)\n");
#endif

#if __i386__
CheckTypeSize(__locale_t,4, 10533, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(__locale_t,4, 10533, 6)
#elif __ia64__
CheckTypeSize(__locale_t,8, 10533, 3)
#elif __s390x__
CheckTypeSize(__locale_t,8, 10533, 12)
#elif __s390__ && !__s390x__
CheckTypeSize(__locale_t,4, 10533, 10)
#elif __x86_64__
CheckTypeSize(__locale_t,8, 10533, 11)
#elif __powerpc64__
CheckTypeSize(__locale_t,8, 10533, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10533,0);
Msg("Find size of __locale_t (10533)\n");
#endif

#if __i386__
CheckTypeSize(locale_t,4, 10534, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(locale_t,4, 10534, 6)
#elif __ia64__
CheckTypeSize(locale_t,8, 10534, 3)
#elif __s390x__
CheckTypeSize(locale_t,8, 10534, 12)
#elif __powerpc64__
CheckTypeSize(locale_t,8, 10534, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(locale_t,4, 10534, 10)
#elif __x86_64__
CheckTypeSize(locale_t,8, 10534, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10534,0);
Msg("Find size of locale_t (10534)\n");
#endif

extern struct lconv * localeconv_db(void);
CheckInterfacedef(localeconv,localeconv_db);
extern char * setlocale_db(int, const char *);
CheckInterfacedef(setlocale,setlocale_db);
extern locale_t uselocale_db(locale_t);
CheckInterfacedef(uselocale,uselocale_db);
extern void freelocale_db(locale_t);
CheckInterfacedef(freelocale,freelocale_db);
extern locale_t duplocale_db(locale_t);
CheckInterfacedef(duplocale,duplocale_db);
extern locale_t newlocale_db(int, const char *, locale_t);
CheckInterfacedef(newlocale,newlocale_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in locale.h\n\n",pcnt,cnt);
return cnt;
#endif

}
