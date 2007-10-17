/*
 * Test of freetype/ftlist.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/ftlist.h"



#ifdef TET_TEST
void freetype_ftlist_h()
{
#else
int freetype_ftlist_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftlist.h\n");
#endif

printf("Checking data structures in freetype/ftlist.h\n");
#if 1
CheckTypeSize(FT_List_Destructor,0, 16736, 1, 3.2, NULL, 16735, NULL)
#endif

#if 1
CheckTypeSize(FT_List_Iterator,0, 16739, 1, 3.2, NULL, 16738, NULL)
#endif

extern void FT_List_Finalize_db(FT_List, FT_List_Destructor, FT_Memory, void *);
CheckInterfacedef(FT_List_Finalize,FT_List_Finalize_db);
extern void FT_List_Insert_db(FT_List, FT_ListNode);
CheckInterfacedef(FT_List_Insert,FT_List_Insert_db);
extern FT_ListNode FT_List_Find_db(FT_List, void *);
CheckInterfacedef(FT_List_Find,FT_List_Find_db);
extern void FT_List_Remove_db(FT_List, FT_ListNode);
CheckInterfacedef(FT_List_Remove,FT_List_Remove_db);
extern void FT_List_Up_db(FT_List, FT_ListNode);
CheckInterfacedef(FT_List_Up,FT_List_Up_db);
extern void FT_List_Add_db(FT_List, FT_ListNode);
CheckInterfacedef(FT_List_Add,FT_List_Add_db);
extern FT_Error FT_List_Iterate_db(FT_List, FT_List_Iterator, void *);
CheckInterfacedef(FT_List_Iterate,FT_List_Iterate_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftlist.h\n\n",pcnt,cnt);
return cnt;
#endif

}
