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
#if defined __x86_64__
CheckTypeSize(FT_List_Destructor,8, 16736, 11, 3.2, NULL, 16735, NULL)
#elif defined __i386__
CheckTypeSize(FT_List_Destructor,4, 16736, 2, 3.2, NULL, 16735, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_List_Destructor,4, 16736, 10, 3.2, NULL, 16735, NULL)
#elif defined __s390x__
CheckTypeSize(FT_List_Destructor,8, 16736, 12, 3.2, NULL, 16735, NULL)
#elif defined __ia64__
CheckTypeSize(FT_List_Destructor,8, 16736, 3, 3.2, NULL, 16735, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_List_Destructor,0, 16736, 6, 3.2, NULL, 16735, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_List_Destructor,0, 16736, 9, 3.2, NULL, 16735, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16735,NULL);\n",architecture,16736,0);
Msg("Find size of FT_List_Destructor (16736)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_List_Iterator,8, 16739, 11, 3.2, NULL, 16738, NULL)
#elif defined __i386__
CheckTypeSize(FT_List_Iterator,4, 16739, 2, 3.2, NULL, 16738, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_List_Iterator,4, 16739, 10, 3.2, NULL, 16738, NULL)
#elif defined __s390x__
CheckTypeSize(FT_List_Iterator,8, 16739, 12, 3.2, NULL, 16738, NULL)
#elif defined __ia64__
CheckTypeSize(FT_List_Iterator,8, 16739, 3, 3.2, NULL, 16738, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_List_Iterator,0, 16739, 6, 3.2, NULL, 16738, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_List_Iterator,0, 16739, 9, 3.2, NULL, 16738, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16738, NULL);\n",architecture,16739,0);
Msg("Find size of FT_List_Iterator (16739)\n");
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
