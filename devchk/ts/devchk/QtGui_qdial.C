/*
 * Test of QtGui/qdial
 */
#include "hdrchk.h"
#include "QtGui/qdial.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qdial();
#else
int QtGui_qdial();
#endif
}


#ifdef TET_TEST
void QtGui_qdial()
{
#else
int QtGui_qdial()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qdial types\n");
#define TYPE QDial
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qdial types\n\n",pcnt,cnt);
return cnt;
#endif

}
