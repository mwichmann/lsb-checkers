/*
 * Test of X11/extensions/shape.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "X11/extensions/shape.h"



#ifdef TET_TEST
void X11_extensions_shape_h()
{
#else
int X11_extensions_shape_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/shape.h\n");
#endif

printf("Checking data structures in X11/extensions/shape.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef ShapeInput
	CompareConstant(ShapeInput,2,15646,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ShapeInput\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ShapeQueryVersion
	CompareConstant(X_ShapeQueryVersion,0,3604,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ShapeQueryVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ShapeRectangles
	CompareConstant(X_ShapeRectangles,1,3605,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ShapeRectangles\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ShapeMask
	CompareConstant(X_ShapeMask,2,3606,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ShapeMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ShapeCombine
	CompareConstant(X_ShapeCombine,3,3607,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ShapeCombine\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ShapeOffset
	CompareConstant(X_ShapeOffset,4,3608,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ShapeOffset\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ShapeQueryExtents
	CompareConstant(X_ShapeQueryExtents,5,3609,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ShapeQueryExtents\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ShapeSelectInput
	CompareConstant(X_ShapeSelectInput,6,3610,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ShapeSelectInput\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ShapeInputSelected
	CompareConstant(X_ShapeInputSelected,7,3611,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ShapeInputSelected\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ShapeGetRectangles
	CompareConstant(X_ShapeGetRectangles,8,3612,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ShapeGetRectangles\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ShapeSet
	CompareConstant(ShapeSet,0,3613,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ShapeSet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ShapeUnion
	CompareConstant(ShapeUnion,1,3614,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ShapeUnion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ShapeIntersect
	CompareConstant(ShapeIntersect,2,3615,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ShapeIntersect\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ShapeSubtract
	CompareConstant(ShapeSubtract,3,3616,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ShapeSubtract\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ShapeInvert
	CompareConstant(ShapeInvert,4,3617,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ShapeInvert\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ShapeBounding
	CompareConstant(ShapeBounding,0,3618,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ShapeBounding\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ShapeClip
	CompareConstant(ShapeClip,1,3619,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ShapeClip\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ShapeNotifyMask
	CompareConstant(ShapeNotifyMask,(1L << 0),3620,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ShapeNotifyMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ShapeNotify
	CompareConstant(ShapeNotify,0,3621,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ShapeNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ShapeNumberEvents
	CompareConstant(ShapeNumberEvents,(ShapeNotify + 1),3622,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ShapeNumberEvents\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(XShapeEvent,80, 9387, 12, 1.3, NULL, 9386, NULL)
#elif defined __x86_64__
CheckTypeSize(XShapeEvent,80, 9387, 11, 2.0, NULL, 9386, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XShapeEvent,48, 9387, 10, 1.3, NULL, 9386, NULL)
#elif defined __powerpc64__
CheckTypeSize(XShapeEvent,80, 9387, 9, 2.0, NULL, 9386, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XShapeEvent,48, 9387, 6, 1.2, NULL, 9386, NULL)
#elif defined __ia64__
CheckTypeSize(XShapeEvent,80, 9387, 3, 1.3, NULL, 9386, NULL)
#elif defined __i386__
CheckTypeSize(XShapeEvent,48, 9387, 2, 1.2, NULL, 9386, NULL)
#else
Msg("Find size of XShapeEvent (9387)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9386, NULL);\n",architecture,9387,0);
#endif

extern void XShapeCombineMask_db(Display *, Window, int, int, int, Pixmap, int);
CheckInterfacedef(XShapeCombineMask,XShapeCombineMask_db);
extern void XShapeCombineRectangles_db(Display *, Window, int, int, int, XRectangle *, int, int, int);
CheckInterfacedef(XShapeCombineRectangles,XShapeCombineRectangles_db);
extern void XShapeCombineRegion_db(Display *, Window, int, int, int, Region, int);
CheckInterfacedef(XShapeCombineRegion,XShapeCombineRegion_db);
extern void XShapeCombineShape_db(Display *, Window, int, int, int, Window, int, int);
CheckInterfacedef(XShapeCombineShape,XShapeCombineShape_db);
extern XRectangle * XShapeGetRectangles_db(Display *, Window, int, int *, int *);
CheckInterfacedef(XShapeGetRectangles,XShapeGetRectangles_db);
extern unsigned long int XShapeInputSelected_db(Display *, Window);
CheckInterfacedef(XShapeInputSelected,XShapeInputSelected_db);
extern void XShapeOffsetShape_db(Display *, Window, int, int, int);
CheckInterfacedef(XShapeOffsetShape,XShapeOffsetShape_db);
extern int XShapeQueryExtension_db(Display *, int *, int *);
CheckInterfacedef(XShapeQueryExtension,XShapeQueryExtension_db);
extern int XShapeQueryExtents_db(Display *, Window, int *, int *, int *, unsigned int *, unsigned int *, int *, int *, int *, unsigned int *, unsigned int *);
CheckInterfacedef(XShapeQueryExtents,XShapeQueryExtents_db);
extern int XShapeQueryVersion_db(Display *, int *, int *);
CheckInterfacedef(XShapeQueryVersion,XShapeQueryVersion_db);
extern void XShapeSelectInput_db(Display *, Window, unsigned long int);
CheckInterfacedef(XShapeSelectInput,XShapeSelectInput_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/shape.h\n\n",pcnt,cnt);
return cnt;
#endif

}
