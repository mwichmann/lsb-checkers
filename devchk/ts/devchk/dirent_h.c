/*
 * Test of dirent.h
 */
#include "hdrchk.h"
#include "sys/types.h"
struct __dirstream {
	};
#include "dirent.h"



#ifdef TET_TEST
void dirent_h()
{
#else
int dirent_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in dirent.h\n");
#endif

#ifdef DT_UNKNOWN
	CompareConstant(DT_UNKNOWN,DT_UNKNOWN)
#else
Msg( "Warning: Constant not found: DT_UNKNOWN\n");
#endif

#ifdef DT_FIFO
	CompareConstant(DT_FIFO,DT_FIFO)
#else
Msg( "Warning: Constant not found: DT_FIFO\n");
#endif

#ifdef DT_CHR
	CompareConstant(DT_CHR,DT_CHR)
#else
Msg( "Warning: Constant not found: DT_CHR\n");
#endif

#ifdef DT_DIR
	CompareConstant(DT_DIR,DT_DIR)
#else
Msg( "Warning: Constant not found: DT_DIR\n");
#endif

#ifdef DT_BLK
	CompareConstant(DT_BLK,DT_BLK)
#else
Msg( "Warning: Constant not found: DT_BLK\n");
#endif

#ifdef DT_REG
	CompareConstant(DT_REG,DT_REG)
#else
Msg( "Warning: Constant not found: DT_REG\n");
#endif

#ifdef DT_LNK
	CompareConstant(DT_LNK,DT_LNK)
#else
Msg( "Warning: Constant not found: DT_LNK\n");
#endif

#ifdef DT_SOCK
	CompareConstant(DT_SOCK,DT_SOCK)
#else
Msg( "Warning: Constant not found: DT_SOCK\n");
#endif

#ifdef DT_WHT
	CompareConstant(DT_WHT,DT_WHT)
#else
Msg( "Warning: Constant not found: DT_WHT\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in dirent.h\n",cnt);
return cnt;
#endif

}
