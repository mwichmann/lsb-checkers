/*
 * Test of QtSql/qsqlrecord
 */
#include "hdrchk.h"
#include "QtSql/qsqlrecord.h"


extern "C" {
#ifdef TET_TEST
void QtSql_qsqlrecord();
#else
int QtSql_qsqlrecord();
#endif
}


#ifdef TET_TEST
void QtSql_qsqlrecord()
{
#else
int QtSql_qsqlrecord()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtSql/qsqlrecord types\n");
#define TYPE QSqlRecord
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtSql/qsqlrecord types\n\n",pcnt,cnt);
return cnt;
#endif

}
