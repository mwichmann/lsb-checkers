/*
 * Test of QtGui/qfontdatabase
 */
#include "hdrchk.h"
#include "QtGui/qfontdatabase.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qfontdatabase();
#else
int QtGui_qfontdatabase();
#endif
}


#ifdef TET_TEST
void QtGui_qfontdatabase()
{
#else
int QtGui_qfontdatabase()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qfontdatabase types\n");
#define TYPE QFontDatabase
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qfontdatabase types\n\n",pcnt,cnt);
return cnt;
#endif

}
