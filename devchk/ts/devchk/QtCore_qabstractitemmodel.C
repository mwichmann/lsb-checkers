/*
 * Test of QtCore/qabstractitemmodel
 */
#include "hdrchk.h"
#include "QtCore/qabstractitemmodel.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qabstractitemmodel();
#else
int QtCore_qabstractitemmodel();
#endif
}


#ifdef TET_TEST
void QtCore_qabstractitemmodel()
{
#else
int QtCore_qabstractitemmodel()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qabstractitemmodel types\n");
#define TYPE QModelIndex
#undef TYPE

#define TYPE QPersistentModelIndex
#undef TYPE

#define TYPE QAbstractItemModel
#undef TYPE

#define TYPE QAbstractTableModel
#undef TYPE

#define TYPE QAbstractListModel
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qabstractitemmodel types\n\n",pcnt,cnt);
return cnt;
#endif

}
