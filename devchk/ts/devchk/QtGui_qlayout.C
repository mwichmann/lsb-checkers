/*
 * Test of QtGui/qlayout
 */
#include "hdrchk.h"
#include "QtGui/qlayout.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qlayout();
#else
int QtGui_qlayout();
#endif
}


#ifdef TET_TEST
void QtGui_qlayout()
{
#else
int QtGui_qlayout()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qlayout types\n");
#define TYPE QLayoutIterator
#undef TYPE

#define TYPE QLayout
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qlayout types\n\n",pcnt,cnt);
return cnt;
#endif

}
