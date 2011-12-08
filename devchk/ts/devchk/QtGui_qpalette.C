/*
 * Test of QtGui/qpalette
 */
#include "hdrchk.h"
#include "QtGui/qpalette.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qpalette();
#else
int QtGui_qpalette();
#endif
}


#ifdef TET_TEST
void QtGui_qpalette()
{
#else
int QtGui_qpalette()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qpalette types\n");
#define TYPE QPalette
#undef TYPE

#define TYPE QColorGroup
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qpalette types\n\n",pcnt,cnt);
return cnt;
#endif

}
