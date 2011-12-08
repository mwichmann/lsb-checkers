/*
 * Test of QtGui/qkeysequence
 */
#include "hdrchk.h"
#include "QtGui/qkeysequence.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qkeysequence();
#else
int QtGui_qkeysequence();
#endif
}


#ifdef TET_TEST
void QtGui_qkeysequence()
{
#else
int QtGui_qkeysequence()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qkeysequence types\n");
#define TYPE QKeySequence
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qkeysequence types\n\n",pcnt,cnt);
return cnt;
#endif

}
