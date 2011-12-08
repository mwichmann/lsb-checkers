/*
 * Test of QtCore/qvariant
 */
#include "hdrchk.h"
#include "QtCore/qvariant.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qvariant();
#else
int QtCore_qvariant();
#endif
}


#ifdef TET_TEST
void QtCore_qvariant()
{
#else
int QtCore_qvariant()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qvariant types\n");
#define TYPE QVariant
#undef TYPE

#define TYPE QVariantComparisonHelper
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qvariant types\n\n",pcnt,cnt);
return cnt;
#endif

}
