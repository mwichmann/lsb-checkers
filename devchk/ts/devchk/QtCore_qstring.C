/*
 * Test of QtCore/qstring
 */
#include "hdrchk.h"
#include "QtCore/qstring.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qstring();
#else
int QtCore_qstring();
#endif
}


#ifdef TET_TEST
void QtCore_qstring()
{
#else
int QtCore_qstring()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qstring types\n");
#define TYPE QString
#undef TYPE

#define TYPE _Z326QFlagsIN7QString11SectionFlagEE
#undef TYPE

#define TYPE QLatin1String
#undef TYPE

#define TYPE QCharRef
#undef TYPE

#define TYPE QConstString
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qstring types\n\n",pcnt,cnt);
return cnt;
#endif

}
