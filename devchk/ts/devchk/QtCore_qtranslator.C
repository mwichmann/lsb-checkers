/*
 * Test of QtCore/qtranslator
 */
#include "hdrchk.h"
#include "QtCore/qtranslator.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qtranslator();
#else
int QtCore_qtranslator();
#endif
}


#ifdef TET_TEST
void QtCore_qtranslator()
{
#else
int QtCore_qtranslator()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qtranslator types\n");
#define TYPE QTranslator
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qtranslator types\n\n",pcnt,cnt);
return cnt;
#endif

}
