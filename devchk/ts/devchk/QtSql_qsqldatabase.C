/*
 * Test of QtSql/qsqldatabase
 */
#include "hdrchk.h"
#include "QtSql/qsqldatabase.h"


extern "C" {
#ifdef TET_TEST
void QtSql_qsqldatabase();
#else
int QtSql_qsqldatabase();
#endif
}


#ifdef TET_TEST
void QtSql_qsqldatabase()
{
#else
int QtSql_qsqldatabase()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtSql/qsqldatabase types\n");
#define TYPE QSqlDriverCreatorBase
#undef TYPE

#define TYPE QSqlDatabase
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtSql/qsqldatabase types\n\n",pcnt,cnt);
return cnt;
#endif

}
