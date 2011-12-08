/*
 * Test of QtGui/qdatetimeedit
 */
#include "hdrchk.h"
#include "QtGui/qdatetimeedit.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qdatetimeedit();
#else
int QtGui_qdatetimeedit();
#endif
}


#ifdef TET_TEST
void QtGui_qdatetimeedit()
{
#else
int QtGui_qdatetimeedit()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qdatetimeedit types\n");
#define TYPE QDateTimeEdit
#undef TYPE

#define TYPE _Z346QFlagsIN13QDateTimeEdit7SectionEE
#undef TYPE

#define TYPE QTimeEdit
#undef TYPE

#define TYPE QDateEdit
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qdatetimeedit types\n\n",pcnt,cnt);
return cnt;
#endif

}
