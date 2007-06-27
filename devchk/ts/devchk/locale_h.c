/*
 * Test of locale.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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
	CompareConstant(LC_CTYPE,0,1470,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: LC_CTYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_NUMERIC
	CompareConstant(LC_NUMERIC,1,1471,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: LC_NUMERIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_TIME
	CompareConstant(LC_TIME,2,1472,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: LC_TIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_COLLATE
	CompareConstant(LC_COLLATE,3,1473,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: LC_COLLATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_MONETARY
	CompareConstant(LC_MONETARY,4,1474,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: LC_MONETARY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_MESSAGES
	CompareConstant(LC_MESSAGES,5,1475,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: LC_MESSAGES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_ALL
	CompareConstant(LC_ALL,6,1476,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: LC_ALL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_PAPER
	CompareConstant(LC_PAPER,7,1477,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: LC_PAPER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_NAME
	CompareConstant(LC_NAME,8,1478,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: LC_NAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_ADDRESS
	CompareConstant(LC_ADDRESS,9,1479,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: LC_ADDRESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_TELEPHONE
	CompareConstant(LC_TELEPHONE,10,1480,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: LC_TELEPHONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_MEASUREMENT
	CompareConstant(LC_MEASUREMENT,11,1481,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: LC_MEASUREMENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_IDENTIFICATION
	CompareConstant(LC_IDENTIFICATION,12,1482,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: LC_IDENTIFICATION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_GLOBAL_LOCALE
	CompareConstant(LC_GLOBAL_LOCALE,((locale_t) -1L),5284,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: LC_GLOBAL_LOCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_CTYPE_MASK
	CompareConstant(LC_CTYPE_MASK,(1<<LC_CTYPE),5285,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: LC_CTYPE_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_NUMERIC_MASK
	CompareConstant(LC_NUMERIC_MASK,(1 << LC_NUMERIC),5286,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: LC_NUMERIC_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_TIME_MASK
	CompareConstant(LC_TIME_MASK,(1 << LC_TIME),5287,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: LC_TIME_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_COLLATE_MASK
	CompareConstant(LC_COLLATE_MASK,(1 << LC_COLLATE),5288,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: LC_COLLATE_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_MONETARY_MASK
	CompareConstant(LC_MONETARY_MASK,(1 << LC_MONETARY),5289,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: LC_MONETARY_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_MESSAGES_MASK
	CompareConstant(LC_MESSAGES_MASK,(1 << LC_MESSAGES),5290,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: LC_MESSAGES_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_PAPER_MASK
	CompareConstant(LC_PAPER_MASK,(1 << LC_PAPER),5291,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: LC_PAPER_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_NAME_MASK
	CompareConstant(LC_NAME_MASK,(1 << LC_NAME),5292,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: LC_NAME_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_ADDRESS_MASK
	CompareConstant(LC_ADDRESS_MASK,(1 << LC_ADDRESS),5293,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: LC_ADDRESS_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_TELEPHONE_MASK
	CompareConstant(LC_TELEPHONE_MASK,(1 << LC_TELEPHONE),5294,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: LC_TELEPHONE_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_MEASUREMENT_MASK
	CompareConstant(LC_MEASUREMENT_MASK,(1 << LC_MEASUREMENT),5295,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: LC_MEASUREMENT_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LC_IDENTIFICATION_MASK
	CompareConstant(LC_IDENTIFICATION_MASK,(1 << LC_IDENTIFICATION),5296,architecture,3.0,NULL)
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
         LC_MEASUREMENT_MASK| LC_IDENTIFICATION_MASK),5297,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: LC_ALL_MASK\n");
cnt++;
#endif

#endif

#if defined __i386__
#elif defined __ia64__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __s390__ && !defined __s390x__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,6919,0);
Msg("Find size of lconv (6919)\n");
#endif

#if defined __i386__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __ia64__
#elif defined __s390x__
#elif defined __s390__ && !defined __s390x__
#elif defined __x86_64__
#elif defined __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,0,NULL);\n",architecture,10531,0);
Msg("Find size of __locale_struct (10531)\n");
#endif

#if defined __i386__
CheckTypeSize(__locale_t,4, 10533, 2, 1.3, NULL, 10532, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(__locale_t,4, 10533, 6, 1.3, NULL, 10532, NULL)
#elif defined __ia64__
CheckTypeSize(__locale_t,8, 10533, 3, 1.3, NULL, 10532, NULL)
#elif defined __s390x__
CheckTypeSize(__locale_t,8, 10533, 12, 1.3, NULL, 10532, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(__locale_t,4, 10533, 10, 1.3, NULL, 10532, NULL)
#elif defined __x86_64__
CheckTypeSize(__locale_t,8, 10533, 11, 2.0, NULL, 10532, NULL)
#elif defined __powerpc64__
CheckTypeSize(__locale_t,8, 10533, 9, 2.0, NULL, 10532, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10532,NULL);\n",architecture,10533,0);
Msg("Find size of __locale_t (10533)\n");
#endif

#if defined __i386__
CheckTypeSize(locale_t,4, 10534, 2, 3.0, NULL, 10532, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(locale_t,4, 10534, 6, 3.0, NULL, 10532, NULL)
#elif defined __ia64__
CheckTypeSize(locale_t,8, 10534, 3, 3.0, NULL, 10532, NULL)
#elif defined __s390x__
CheckTypeSize(locale_t,8, 10534, 12, 3.0, NULL, 10532, NULL)
#elif defined __powerpc64__
CheckTypeSize(locale_t,8, 10534, 9, 3.0, NULL, 10532, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(locale_t,4, 10534, 10, 3.0, NULL, 10532, NULL)
#elif defined __x86_64__
CheckTypeSize(locale_t,8, 10534, 11, 3.0, NULL, 10532, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.0""',NULL,10532, NULL);\n",architecture,10534,0);
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
