/*
 * Test of freetype/ftmm.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in freetype/ftmm.h\n");
#endif

printf("Checking data structures in freetype/ftmm.h\n");
#if 1
CheckTypeSize(struct FT_Multi_Master_,56, 16934, 1, , NULL, 0, NULL)
Msg("Missing member data for FT_Multi_Master_ on All\n");
CheckOffset(struct FT_Multi_Master_,num_axis,0,1,54259)
CheckOffset(struct FT_Multi_Master_,num_designs,0,1,54260)
CheckOffset(struct FT_Multi_Master_,axis,0,1,54264)
#endif

#if 1
CheckTypeSize(struct FT_MM_Axis_,12, 16935, 1, , NULL, 0, NULL)
Msg("Missing member data for FT_MM_Axis_ on All\n");
CheckOffset(struct FT_MM_Axis_,name,0,1,54261)
CheckOffset(struct FT_MM_Axis_,minimum,0,1,54262)
CheckOffset(struct FT_MM_Axis_,maximum,0,1,54263)
#endif

#if defined __s390x__
CheckTypeSize(FT_MM_Axis,24, 16936, 12, 3.2, NULL, 16935, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_MM_Axis,24, 16936, 11, 3.2, NULL, 16935, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_MM_Axis,12, 16936, 10, 3.2, NULL, 16935, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_MM_Axis,24, 16936, 9, 3.2, NULL, 16935, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_MM_Axis,12, 16936, 6, 3.2, NULL, 16935, NULL)
#elif defined __ia64__
CheckTypeSize(FT_MM_Axis,24, 16936, 3, 3.2, NULL, 16935, NULL)
#elif defined __i386__
CheckTypeSize(FT_MM_Axis,12, 16936, 2, 3.2, NULL, 16935, NULL)
#else
Msg("Find size of FT_MM_Axis (16936)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16935,NULL);\n",architecture,16936,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Multi_Master,104, 16938, 12, 3.2, NULL, 16934, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Multi_Master,104, 16938, 11, 3.2, NULL, 16934, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Multi_Master,56, 16938, 10, 3.2, NULL, 16934, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Multi_Master,104, 16938, 9, 3.2, NULL, 16934, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Multi_Master,56, 16938, 6, 3.2, NULL, 16934, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Multi_Master,104, 16938, 3, 3.2, NULL, 16934, NULL)
#elif defined __i386__
CheckTypeSize(FT_Multi_Master,56, 16938, 2, 3.2, NULL, 16934, NULL)
#else
Msg("Find size of FT_Multi_Master (16938)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16934,NULL);\n",architecture,16938,0);
#endif

#if 1
CheckTypeSize(struct FT_MM_Var_,20, 16941, 1, , NULL, 0, NULL)
Msg("Missing member data for FT_MM_Var_ on All\n");
CheckOffset(struct FT_MM_Var_,num_axis,0,1,54265)
CheckOffset(struct FT_MM_Var_,num_designs,0,1,54266)
CheckOffset(struct FT_MM_Var_,num_namedstyles,0,1,54267)
CheckOffset(struct FT_MM_Var_,axis,0,1,54274)
CheckOffset(struct FT_MM_Var_,namedstyle,0,1,54277)
#endif

#if 1
CheckTypeSize(struct FT_Var_Axis_,24, 16942, 1, , NULL, 0, NULL)
Msg("Missing member data for FT_Var_Axis_ on All\n");
CheckOffset(struct FT_Var_Axis_,name,0,1,54268)
CheckOffset(struct FT_Var_Axis_,minimum,0,1,54269)
CheckOffset(struct FT_Var_Axis_,def,0,1,54270)
CheckOffset(struct FT_Var_Axis_,maximum,0,1,54271)
CheckOffset(struct FT_Var_Axis_,tag,0,1,54272)
CheckOffset(struct FT_Var_Axis_,strid,0,1,54273)
#endif

#if defined __s390x__
CheckTypeSize(FT_Var_Axis,48, 16943, 12, 3.2, NULL, 16942, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Var_Axis,48, 16943, 11, 3.2, NULL, 16942, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Var_Axis,24, 16943, 10, 3.2, NULL, 16942, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Var_Axis,48, 16943, 9, 3.2, NULL, 16942, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Var_Axis,24, 16943, 6, 3.2, NULL, 16942, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Var_Axis,48, 16943, 3, 3.2, NULL, 16942, NULL)
#elif defined __i386__
CheckTypeSize(FT_Var_Axis,24, 16943, 2, 3.2, NULL, 16942, NULL)
#else
Msg("Find size of FT_Var_Axis (16943)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16942,NULL);\n",architecture,16943,0);
#endif

#if 1
CheckTypeSize(struct FT_Var_Named_Style_,8, 16945, 1, , NULL, 0, NULL)
Msg("Missing member data for FT_Var_Named_Style_ on All\n");
CheckOffset(struct FT_Var_Named_Style_,coords,0,1,54275)
CheckOffset(struct FT_Var_Named_Style_,strid,0,1,54276)
#endif

#if defined __s390x__
CheckTypeSize(FT_Var_Named_Style,16, 16946, 12, 3.2, NULL, 16945, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Var_Named_Style,16, 16946, 11, 3.2, NULL, 16945, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Var_Named_Style,8, 16946, 10, 3.2, NULL, 16945, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Var_Named_Style,16, 16946, 9, 3.2, NULL, 16945, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Var_Named_Style,8, 16946, 6, 3.2, NULL, 16945, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Var_Named_Style,16, 16946, 3, 3.2, NULL, 16945, NULL)
#elif defined __i386__
CheckTypeSize(FT_Var_Named_Style,8, 16946, 2, 3.2, NULL, 16945, NULL)
#else
Msg("Find size of FT_Var_Named_Style (16946)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16945,NULL);\n",architecture,16946,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_MM_Var,32, 16948, 12, 3.2, NULL, 16941, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_MM_Var,32, 16948, 11, 3.2, NULL, 16941, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_MM_Var,20, 16948, 10, 3.2, NULL, 16941, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_MM_Var,32, 16948, 9, 3.2, NULL, 16941, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_MM_Var,20, 16948, 6, 3.2, NULL, 16941, NULL)
#elif defined __ia64__
CheckTypeSize(FT_MM_Var,32, 16948, 3, 3.2, NULL, 16941, NULL)
#elif defined __i386__
CheckTypeSize(FT_MM_Var,20, 16948, 2, 3.2, NULL, 16941, NULL)
#else
Msg("Find size of FT_MM_Var (16948)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16941, NULL);\n",architecture,16948,0);
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
