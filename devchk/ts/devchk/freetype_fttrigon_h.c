/*
 * Test of freetype/fttrigon.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/fttrigon.h"



#ifdef TET_TEST
void freetype_fttrigon_h()
{
#else
int freetype_fttrigon_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/fttrigon.h\n");
#endif

printf("Checking data structures in freetype/fttrigon.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for FT_ANGLE_2PI */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ANGLE_PI */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ANGLE_PI2 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ANGLE_PI4 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for freetype/fttrigon.h */
#endif

extern FT_Angle FT_Angle_Diff_db(FT_Angle, FT_Angle);
CheckInterfacedef(FT_Angle_Diff,FT_Angle_Diff_db);
extern FT_Fixed FT_Vector_Length_db(FT_Vector *);
CheckInterfacedef(FT_Vector_Length,FT_Vector_Length_db);
extern void FT_Vector_Rotate_db(FT_Vector *, FT_Angle);
CheckInterfacedef(FT_Vector_Rotate,FT_Vector_Rotate_db);
extern void FT_Vector_From_Polar_db(FT_Vector *, FT_Fixed, FT_Angle);
CheckInterfacedef(FT_Vector_From_Polar,FT_Vector_From_Polar_db);
extern void FT_Vector_Unit_db(FT_Vector *, FT_Angle);
CheckInterfacedef(FT_Vector_Unit,FT_Vector_Unit_db);
extern FT_Fixed FT_Tan_db(FT_Angle);
CheckInterfacedef(FT_Tan,FT_Tan_db);
extern FT_Fixed FT_Sin_db(FT_Angle);
CheckInterfacedef(FT_Sin,FT_Sin_db);
extern FT_Angle FT_Atan2_db(FT_Fixed, FT_Fixed);
CheckInterfacedef(FT_Atan2,FT_Atan2_db);
extern FT_Fixed FT_Cos_db(FT_Angle);
CheckInterfacedef(FT_Cos,FT_Cos_db);
extern void FT_Vector_Polarize_db(FT_Vector *, FT_Fixed *, FT_Angle *);
CheckInterfacedef(FT_Vector_Polarize,FT_Vector_Polarize_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/fttrigon.h\n\n",pcnt,cnt);
return cnt;
#endif

}