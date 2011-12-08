/*
 * Test of QtGui/qdrag
 */
#include "hdrchk.h"
#include "QtGui/qdrag.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qdrag();
#else
int QtGui_qdrag();
#endif
}


#ifdef TET_TEST
void QtGui_qdrag()
{
#else
int QtGui_qdrag()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qdrag types\n");
#define TYPE QDrag
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qdrag types\n\n",pcnt,cnt);
return cnt;
#endif

}
