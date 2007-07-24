/*
 * Test of freetype/ftsizes.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/ftsizes.h"



#ifdef TET_TEST
void freetype_ftsizes_h()
{
#else
int freetype_ftsizes_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftsizes.h\n");
#endif

printf("Checking data structures in freetype/ftsizes.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for freetype/ftsizes.h */
#endif

#if defined __i386__
CheckTypeSize(FT_Pos,0, 16742, 2, 3.2, NULL, 8, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_Generic,0, 16750, 2, 3.2, NULL, 16748, NULL)
#endif

#if defined __i386__
CheckTypeSize(struct FT_SizeRec_,44, 16951, 2, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_SizeRec_ on IA32\n");
CheckOffset(struct FT_SizeRec_,face,0,2,54278)
CheckOffset(struct FT_SizeRec_,generic,0,2,54279)
CheckOffset(struct FT_SizeRec_,metrics,0,2,54288)
CheckOffset(struct FT_SizeRec_,internal,0,2,54289)
#endif

#if defined __i386__
CheckTypeSize(FT_Size_Metrics,0, 16953, 2, 3.2, NULL, 16952, NULL)
#endif

#if defined __i386__
CheckTypeSize(struct FT_Size_InternalRec_,0, 16954, 2, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_Size_InternalRec_ on IA32\n");
#endif

#if defined __i386__
CheckTypeSize(FT_Size_Internal,0, 16956, 2, 3.2, NULL, 16955, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_Size,0, 16958, 2, 3.2, NULL, 16957, NULL)
#endif

extern FT_Error FT_New_Size_db(FT_Face, FT_Size *);
CheckInterfacedef(FT_New_Size,FT_New_Size_db);
extern FT_Error FT_Activate_Size_db(FT_Size);
CheckInterfacedef(FT_Activate_Size,FT_Activate_Size_db);
extern FT_Error FT_Done_Size_db(FT_Size);
CheckInterfacedef(FT_Done_Size,FT_Done_Size_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftsizes.h\n\n",pcnt,cnt);
return cnt;
#endif

}
