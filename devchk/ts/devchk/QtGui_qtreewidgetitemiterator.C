/*
 * Test of QtGui/qtreewidgetitemiterator
 */
#include "hdrchk.h"
#include "QtGui/qtreewidgetitemiterator.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qtreewidgetitemiterator();
#else
int QtGui_qtreewidgetitemiterator();
#endif
}


#ifdef TET_TEST
void QtGui_qtreewidgetitemiterator()
{
#else
int QtGui_qtreewidgetitemiterator()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qtreewidgetitemiterator types\n");
#define TYPE QTreeWidgetItemIterator
#undef TYPE

#define TYPE _Z506QFlagsIN23QTreeWidgetItemIterator12IteratorFlagEE
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qtreewidgetitemiterator types\n\n",pcnt,cnt);
return cnt;
#endif

}
