/*
 * Test of QtCore/qlist
 */
#include "hdrchk.h"
#include "QtCore/qlist.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qlist();
#else
int QtCore_qlist();
#endif
}


#ifdef TET_TEST
void QtCore_qlist()
{
#else
int QtCore_qlist()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qlist types\n");
#define TYPE QList<QByteArray>
#undef TYPE

#define TYPE QList<QFileInfo>
#undef TYPE

#define TYPE QList<QVariant>
#undef TYPE

#define TYPE QList<QUrl>
#undef TYPE

#define TYPE QList<QModelIndex>
#undef TYPE

#define TYPE QList<QHostAddress>
#undef TYPE

#define TYPE QList<int>
#undef TYPE

#define TYPE QList<QObject*>
#undef TYPE

#define TYPE QList<QWidget*>
#undef TYPE

#define TYPE QList<QPair<QString, QString> >
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qlist types\n\n",pcnt,cnt);
return cnt;
#endif

}
