/*
 * Test of freetype/ftmm.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <ft2build.h>
#include FT_FREETYPE_H

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
#if defined __x86_64__
CheckTypeSize(FT_MM_Axis,24, 16936, 11, 3.2, NULL, 16935, NULL)
#elif defined __i386__
CheckTypeSize(FT_MM_Axis,12, 16936, 2, 3.2, NULL, 16935, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16935,NULL);\n",architecture,16936,0);
Msg("Find size of FT_MM_Axis (16936)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_Multi_Master,104, 16938, 11, 3.2, NULL, 16934, NULL)
#elif defined __i386__
CheckTypeSize(FT_Multi_Master,56, 16938, 2, 3.2, NULL, 16934, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16934,NULL);\n",architecture,16938,0);
Msg("Find size of FT_Multi_Master (16938)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_Var_Axis,48, 16943, 11, 3.2, NULL, 16942, NULL)
#elif defined __i386__
CheckTypeSize(FT_Var_Axis,24, 16943, 2, 3.2, NULL, 16942, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16942,NULL);\n",architecture,16943,0);
Msg("Find size of FT_Var_Axis (16943)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_Var_Named_Style,16, 16946, 11, 3.2, NULL, 16945, NULL)
#elif defined __i386__
CheckTypeSize(FT_Var_Named_Style,8, 16946, 2, 3.2, NULL, 16945, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16945,NULL);\n",architecture,16946,0);
Msg("Find size of FT_Var_Named_Style (16946)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_MM_Var,32, 16948, 11, 3.2, NULL, 16941, NULL)
#elif defined __i386__
CheckTypeSize(FT_MM_Var,20, 16948, 2, 3.2, NULL, 16941, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16941, NULL);\n",architecture,16948,0);
Msg("Find size of FT_MM_Var (16948)\n");
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
