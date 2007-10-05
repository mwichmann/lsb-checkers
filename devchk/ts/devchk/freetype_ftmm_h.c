/*
 * Test of freetype/ftmm.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/ftmm.h"



#ifdef TET_TEST
void freetype_ftmm_h()
{
#else
int freetype_ftmm_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftmm.h\n");
#endif

printf("Checking data structures in freetype/ftmm.h\n");
#if 1
CheckTypeSize(FT_MM_Axis,0, 16936, 1, 3.2, NULL, 16935, NULL)
#endif

#if 1
CheckTypeSize(FT_Multi_Master,0, 16938, 1, 3.2, NULL, 16934, NULL)
#endif

#if 1
CheckTypeSize(FT_Var_Axis,0, 16943, 1, 3.2, NULL, 16942, NULL)
#endif

#if 1
CheckTypeSize(FT_Var_Named_Style,0, 16946, 1, 3.2, NULL, 16945, NULL)
#endif

#if 1
CheckTypeSize(FT_MM_Var,0, 16948, 1, 3.2, NULL, 16941, NULL)
#endif

extern FT_Error FT_Get_Multi_Master_db(FT_Face, FT_Multi_Master *);
CheckInterfacedef(FT_Get_Multi_Master,FT_Get_Multi_Master_db);
extern FT_Error FT_Set_MM_Design_Coordinates_db(FT_Face, FT_UInt, FT_Long *);
CheckInterfacedef(FT_Set_MM_Design_Coordinates,FT_Set_MM_Design_Coordinates_db);
extern FT_Error FT_Get_MM_Var_db(FT_Face, FT_MM_Var * *);
CheckInterfacedef(FT_Get_MM_Var,FT_Get_MM_Var_db);
extern FT_Error FT_Set_Var_Blend_Coordinates_db(FT_Face, FT_UInt, FT_Fixed *);
CheckInterfacedef(FT_Set_Var_Blend_Coordinates,FT_Set_Var_Blend_Coordinates_db);
extern FT_Error FT_Set_MM_Blend_Coordinates_db(FT_Face, FT_UInt, FT_Fixed *);
CheckInterfacedef(FT_Set_MM_Blend_Coordinates,FT_Set_MM_Blend_Coordinates_db);
extern FT_Error FT_Set_Var_Design_Coordinates_db(FT_Face, FT_UInt, FT_Fixed *);
CheckInterfacedef(FT_Set_Var_Design_Coordinates,FT_Set_Var_Design_Coordinates_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftmm.h\n\n",pcnt,cnt);
return cnt;
#endif

}
