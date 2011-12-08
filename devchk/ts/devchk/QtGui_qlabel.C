/*
 * Test of QtGui/qlabel
 */
#include "hdrchk.h"
#include "QtGui/qlabel.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qlabel();
#else
int QtGui_qlabel();
#endif
}


#ifdef TET_TEST
void QtGui_qlabel()
{
#else
int QtGui_qlabel()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qlabel types\n");
#define TYPE QLabel
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qlabel types\n\n",pcnt,cnt);
return cnt;
#endif

}
