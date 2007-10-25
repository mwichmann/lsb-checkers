/*
 * Test of wctype.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include "wctype.h"



#ifdef TET_TEST
void wctype_h()
{
#else
int wctype_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in wctype.h\n");
#endif

printf("Checking data structures in wctype.h\n");
#if defined __i386__
CheckTypeSize(wctype_t,4, 7024, 2, 1.0, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(wctype_t,8, 7024, 3, 1.3, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(wctype_t,4, 7024, 6, 1.2, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(wctype_t,4, 7024, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(wctype_t,8, 7024, 9, 2.0, NULL, 9, NULL)
#elif defined __s390x__
CheckTypeSize(wctype_t,8, 7024, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(wctype_t,8, 7024, 11, 2.0, NULL, 9, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of wctype_t (7024)\n");
%d,%d,%d,'""2.0""',NULL,9,NULL);\n",architecture,7024,0);
#endif

#if defined __i386__
CheckTypeSize(wint_t,4, 8980, 2, 1.0, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(wint_t,4, 8980, 3, 1.3, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(wint_t,4, 8980, 6, 1.2, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(wint_t,4, 8980, 10, 1.3, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(wint_t,4, 8980, 9, 2.0, NULL, 7, NULL)
#elif defined __s390x__
CheckTypeSize(wint_t,4, 8980, 12, 1.3, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(wint_t,4, 8980, 11, 2.0, NULL, 7, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of wint_t (8980)\n");
%d,%d,%d,'""2.0""',NULL,7,NULL);\n",architecture,8980,0);
#endif

#if defined __i386__
CheckTypeSize(wctrans_t,4, 9199, 2, 1.0, NULL, 10459, NULL)
#elif defined __ia64__
CheckTypeSize(wctrans_t,8, 9199, 3, 1.3, NULL, 10459, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(wctrans_t,4, 9199, 6, 1.2, NULL, 10459, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(wctrans_t,4, 9199, 10, 1.3, NULL, 10459, NULL)
#elif defined __powerpc64__
CheckTypeSize(wctrans_t,8, 9199, 9, 2.0, NULL, 10459, NULL)
#elif defined __s390x__
CheckTypeSize(wctrans_t,8, 9199, 12, 1.3, NULL, 10459, NULL)
#elif defined __x86_64__
CheckTypeSize(wctrans_t,8, 9199, 11, 2.0, NULL, 10459, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of wctrans_t (9199)\n");
%d,%d,%d,'""2.0""',NULL,10459,NULL);\n",architecture,9199,0);
#endif

#if defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(__mbstate_t,8, 10488, 6, 1.3, NULL, 9234, NULL)
#elif defined __i386__
CheckTypeSize(__mbstate_t,8, 10488, 2, 1.3, NULL, 9234, NULL)
#elif defined __ia64__
CheckTypeSize(__mbstate_t,8, 10488, 3, 1.3, NULL, 9234, NULL)
#elif defined __s390x__
CheckTypeSize(__mbstate_t,8, 10488, 12, 1.3, NULL, 9234, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(__mbstate_t,8, 10488, 10, 1.3, NULL, 9234, NULL)
#elif defined __x86_64__
CheckTypeSize(__mbstate_t,8, 10488, 11, 2.0, NULL, 9234, NULL)
#elif defined __powerpc64__
CheckTypeSize(__mbstate_t,8, 10488, 9, 2.0, NULL, 9234, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of __mbstate_t (10488)\n");
%d,%d,%d,'""2.0""',NULL,9234,NULL);\n",architecture,10488,0);
#endif

#if defined __i386__
CheckTypeSize(mbstate_t,8, 9235, 2, 1.2, NULL, 10488, NULL)
#elif defined __ia64__
CheckTypeSize(mbstate_t,8, 9235, 3, 1.3, NULL, 10488, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(mbstate_t,8, 9235, 6, 1.2, NULL, 10488, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(mbstate_t,8, 9235, 10, 1.3, NULL, 10488, NULL)
#elif defined __powerpc64__
CheckTypeSize(mbstate_t,8, 9235, 9, 2.0, NULL, 10488, NULL)
#elif defined __s390x__
CheckTypeSize(mbstate_t,8, 9235, 12, 1.3, NULL, 10488, NULL)
#elif defined __x86_64__
CheckTypeSize(mbstate_t,8, 9235, 11, 2.0, NULL, 10488, NULL)
#else
Msg("Find size of mbstate_t (9235)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10488, NULL);\n",architecture,9235,0);
#endif

extern int iswblank_db(wint_t);
CheckInterfacedef(iswblank,iswblank_db);
extern wint_t towlower_db(wint_t);
CheckInterfacedef(towlower,towlower_db);
extern wint_t towupper_db(wint_t);
CheckInterfacedef(towupper,towupper_db);
extern wctrans_t wctrans_db(const char *);
CheckInterfacedef(wctrans,wctrans_db);
extern int iswalnum_db(wint_t);
CheckInterfacedef(iswalnum,iswalnum_db);
extern int iswalpha_db(wint_t);
CheckInterfacedef(iswalpha,iswalpha_db);
extern int iswcntrl_db(wint_t);
CheckInterfacedef(iswcntrl,iswcntrl_db);
extern int iswctype_db(wint_t, wctype_t);
CheckInterfacedef(iswctype,iswctype_db);
extern int iswdigit_db(wint_t);
CheckInterfacedef(iswdigit,iswdigit_db);
extern int iswgraph_db(wint_t);
CheckInterfacedef(iswgraph,iswgraph_db);
extern int iswlower_db(wint_t);
CheckInterfacedef(iswlower,iswlower_db);
extern int iswprint_db(wint_t);
CheckInterfacedef(iswprint,iswprint_db);
extern int iswpunct_db(wint_t);
CheckInterfacedef(iswpunct,iswpunct_db);
extern int iswspace_db(wint_t);
CheckInterfacedef(iswspace,iswspace_db);
extern int iswupper_db(wint_t);
CheckInterfacedef(iswupper,iswupper_db);
extern int iswxdigit_db(wint_t);
CheckInterfacedef(iswxdigit,iswxdigit_db);
extern wctype_t wctype_db(const char *);
CheckInterfacedef(wctype,wctype_db);
extern wint_t towctrans_db(wint_t, wctrans_t);
CheckInterfacedef(towctrans,towctrans_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in wctype.h\n\n",pcnt,cnt);
return cnt;
#endif

}
