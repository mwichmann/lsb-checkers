/*
 * Test of QtGui/qpixmapcache
 */
#include "hdrchk.h"
#include "QtGui/qpixmapcache.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qpixmapcache();
#else
int QtGui_qpixmapcache();
#endif
}


#ifdef TET_TEST
void QtGui_qpixmapcache()
{
#else
int QtGui_qpixmapcache()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qpixmapcache types\n");
#define TYPE QPixmapCache
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qpixmapcache types\n\n",pcnt,cnt);
return cnt;
#endif

}
