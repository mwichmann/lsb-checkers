/*
 * Test of QtCore/qtextstream
 */
#include "hdrchk.h"
#include "QtCore/qtextstream.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qtextstream();
#else
int QtCore_qtextstream();
#endif
}


#ifdef TET_TEST
void QtCore_qtextstream()
{
#else
int QtCore_qtextstream()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qtextstream types\n");
#define TYPE QTextStream
#undef TYPE

#define TYPE QTextStream::NumberFlags
#undef TYPE

#define TYPE QTextStreamManipulator
#undef TYPE

#define TYPE QTextIStream
#undef TYPE

#define TYPE QTextOStream
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qtextstream types\n\n",pcnt,cnt);
return cnt;
#endif

}
