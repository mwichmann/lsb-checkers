/*
 * Test of X11/Intrinsic.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include <stdio.h>
#ifndef LSBCC_MODE
struct _WidgetClassRec {};
struct _WidgetRec {};
#endif
struct _XtAppStruct {};
#define NeedWidePrototypes 1
#include "X11/Intrinsic.h"



#ifdef TET_TEST
void X11_Intrinsic_h()
{
#else
int X11_Intrinsic_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/Intrinsic.h\n");
#endif

printf("Checking data structures in X11/Intrinsic.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for X11/Intrinsic.h depends on string.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/Intrinsic.h depends on X11/Shell.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/Intrinsic.h depends on X11/IntrinsicP.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/Intrinsic.h depends on X11/Object.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/Intrinsic.h depends on X11/Composite.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/Intrinsic.h depends on X11/Core.h */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef FALSE
	CompareConstant(FALSE,0,20195,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: FALSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TRUE
	CompareConstant(TRUE,1,20196,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TRUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef _XtIntrinsic_h
Msg( "Error: Constant not found: _XtIntrinsic_h\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtSpecificationRelease
	CompareConstant(XtSpecificationRelease,6,3711,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtSpecificationRelease\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _XtString
	CompareMacro(_XtString,char*,char*,3712,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: _XtString\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _XtBoolean
	CompareMacro(_XtBoolean,int,int,3713,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: _XtBoolean\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _XtDimension
	CompareMacro(_XtDimension,unsigned int,unsigned int,3714,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: _XtDimension\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _XtKeyCode
	CompareMacro(_XtKeyCode,unsigned int,unsigned int,3715,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: _XtKeyCode\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _XtPosition
	CompareMacro(_XtPosition,int,int,3716,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: _XtPosition\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _XtXtEnum
	CompareMacro(_XtXtEnum,unsigned int,unsigned int,3717,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: _XtXtEnum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef externalref
	CompareMacro(externalref,extern,extern,3718,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: externalref\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtNumber(arr) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCacheNone
	CompareConstant(XtCacheNone,0x001,3721,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCacheNone\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCacheAll
	CompareConstant(XtCacheAll,0x002,3722,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCacheAll\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCacheByDisplay
	CompareConstant(XtCacheByDisplay,0x003,3723,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCacheByDisplay\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCacheRefCount
	CompareConstant(XtCacheRefCount,0x100,3724,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCacheRefCount\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCWQueryOnly
	CompareConstant(XtCWQueryOnly,(1 << 7),3725,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCWQueryOnly\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtSMDontChange
	CompareConstant(XtSMDontChange,5,3726,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtSMDontChange\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtInputNoneMask
	CompareConstant(XtInputNoneMask,0L,3727,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtInputNoneMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtInputReadMask
	CompareConstant(XtInputReadMask,(1L<<0),3728,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtInputReadMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtInputWriteMask
	CompareConstant(XtInputWriteMask,(1L<<1),3729,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtInputWriteMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtInputExceptMask
	CompareConstant(XtInputExceptMask,(1L<<2),3730,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtInputExceptMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtAllEvents
	CompareConstant(XtAllEvents,((EventMask) -1L),3731,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtAllEvents\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtIMXEvent
	CompareConstant(XtIMXEvent,1,3732,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtIMXEvent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtIMTimer
	CompareConstant(XtIMTimer,2,3733,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtIMTimer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtIMAlternateInput
	CompareConstant(XtIMAlternateInput,4,3734,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtIMAlternateInput\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtIMSignal
	CompareConstant(XtIMSignal,8,3735,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtIMSignal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtIMAll
	CompareConstant(XtIMAll,(XtIMXEvent | XtIMTimer | XtIMAlternateInput | XtIMSignal),3736,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtIMAll\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtIsRectObj(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtIsWidget(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtIsComposite(widget) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtIsConstraint(widget) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtIsShell(widget) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtIsWMShell(widget) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtSetArg(arg,n,d) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtVaNestedList
	CompareStringConstant(XtVaNestedList,"XtVaNestedList",3750,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtVaNestedList\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtVaTypedArg
	CompareStringConstant(XtVaTypedArg,"XtVaTypedArg",3751,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtVaTypedArg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtUnspecifiedPixmap
	CompareConstant(XtUnspecifiedPixmap,((Pixmap)2),3754,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtUnspecifiedPixmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtUnspecifiedShellInt
	CompareConstant(XtUnspecifiedShellInt,(-1),3755,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtUnspecifiedShellInt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtUnspecifiedWindow
	CompareConstant(XtUnspecifiedWindow,((Window)2),3756,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtUnspecifiedWindow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtUnspecifiedWindowGroup
	CompareConstant(XtUnspecifiedWindowGroup,((Window)3),3757,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtUnspecifiedWindowGroup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCurrentDirectory
	CompareStringConstant(XtCurrentDirectory,"XtCurrentDirectory",3758,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCurrentDirectory\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtDefaultForeground
	CompareStringConstant(XtDefaultForeground,"XtDefaultForeground",3759,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtDefaultForeground\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtDefaultBackground
	CompareStringConstant(XtDefaultBackground,"XtDefaultBackground",3760,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtDefaultBackground\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtDefaultFont
	CompareStringConstant(XtDefaultFont,"XtDefaultFont",3761,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtDefaultFont\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtDefaultFontSet
	CompareStringConstant(XtDefaultFontSet,"XtDefaultFontSet",3762,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtDefaultFontSet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtOffset(p_type,field) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtOffsetOf(s_type,field) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtNew(type) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XT_CONVERT_FAIL
	CompareConstant(XT_CONVERT_FAIL,(Atom)0x80000001,3767,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XT_CONVERT_FAIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtCvtStringToPosition */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtCvtIntToDimension */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtCvtIntToPosition */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtCvtPixelToColor */
#endif

#if 1
CheckTypeSize(Cardinal,4, 31891, 1, 1.2, NULL, 7, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XtPointer,8, 31893, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(XtPointer,8, 31893, 11, 2.0, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtPointer,4, 31893, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtPointer,8, 31893, 9, 2.0, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtPointer,4, 31893, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(XtPointer,8, 31893, 3, 1.3, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(XtPointer,4, 31893, 2, 1.2, NULL, 40, NULL)
#else
Msg("Find size of XtPointer (31893)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,31893,0);
#endif

#if 1
CheckTypeSize(struct _WidgetRec,0, 31896, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _WidgetRec on All\n");
#endif

#if defined __s390x__
CheckTypeSize(Widget,8, 31898, 12, 1.3, NULL, 31897, NULL)
#elif defined __x86_64__
CheckTypeSize(Widget,8, 31898, 11, 2.0, NULL, 31897, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Widget,4, 31898, 10, 1.3, NULL, 31897, NULL)
#elif defined __powerpc64__
CheckTypeSize(Widget,8, 31898, 9, 2.0, NULL, 31897, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Widget,4, 31898, 6, 1.2, NULL, 31897, NULL)
#elif defined __ia64__
CheckTypeSize(Widget,8, 31898, 3, 1.3, NULL, 31897, NULL)
#elif defined __i386__
CheckTypeSize(Widget,4, 31898, 2, 1.2, NULL, 31897, NULL)
#else
Msg("Find size of Widget (31898)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31897,NULL);\n",architecture,31898,0);
#endif

#if defined __s390x__
CheckTypeSize(String,8, 31901, 12, 1.3, NULL, 63, NULL)
#elif defined __x86_64__
CheckTypeSize(String,8, 31901, 11, 2.0, NULL, 63, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(String,4, 31901, 10, 1.3, NULL, 63, NULL)
#elif defined __powerpc64__
CheckTypeSize(String,8, 31901, 9, 2.0, NULL, 63, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(String,4, 31901, 6, 1.2, NULL, 63, NULL)
#elif defined __ia64__
CheckTypeSize(String,8, 31901, 3, 1.3, NULL, 63, NULL)
#elif defined __i386__
CheckTypeSize(String,4, 31901, 2, 1.2, NULL, 63, NULL)
#else
Msg("Find size of String (31901)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,63,NULL);\n",architecture,31901,0);
#endif

#if 1
CheckTypeSize(XtGeometryMask,4, 31906, 1, 1.2, NULL, 7, NULL)
#endif

#if 1
CheckTypeSize(Position,2, 31907, 1, 1.2, NULL, 11264, NULL)
#endif

#if 1
CheckTypeSize(Dimension,2, 31908, 1, 1.2, NULL, 11209, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XtWidgetGeometry,32, 31910, 12, 1.3, NULL, 31909, NULL)
#elif defined __x86_64__
CheckTypeSize(XtWidgetGeometry,32, 31910, 11, 2.0, NULL, 31909, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtWidgetGeometry,24, 31910, 10, 1.3, NULL, 31909, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtWidgetGeometry,32, 31910, 9, 2.0, NULL, 31909, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtWidgetGeometry,24, 31910, 6, 1.2, NULL, 31909, NULL)
#elif defined __ia64__
CheckTypeSize(XtWidgetGeometry,32, 31910, 3, 1.3, NULL, 31909, NULL)
#elif defined __i386__
CheckTypeSize(XtWidgetGeometry,24, 31910, 2, 1.2, NULL, 31909, NULL)
#else
Msg("Find size of XtWidgetGeometry (31910)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31909,NULL);\n",architecture,31910,0);
#endif

#if 1
CheckTypeSize(Modifiers,4, 31913, 1, 1.2, NULL, 7, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XtCacheRef,8, 31917, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(XtCacheRef,8, 31917, 11, 2.0, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtCacheRef,4, 31917, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtCacheRef,8, 31917, 9, 2.0, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCacheRef,4, 31917, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(XtCacheRef,8, 31917, 3, 1.3, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(XtCacheRef,4, 31917, 2, 1.2, NULL, 40, NULL)
#else
Msg("Find size of XtCacheRef (31917)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,31917,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XtResource,48, 31920, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtResource,resource_class,8,12,78062)
CheckOffset(struct _XtResource,resource_class,8,12,78062)
CheckMemberSize(struct _XtResource,resource_type,8,12,78063)
CheckOffset(struct _XtResource,resource_type,16,12,78063)
CheckMemberSize(struct _XtResource,resource_size,4,12,78064)
CheckOffset(struct _XtResource,resource_size,24,12,78064)
CheckMemberSize(struct _XtResource,resource_offset,4,12,78065)
CheckOffset(struct _XtResource,resource_offset,28,12,78065)
CheckMemberSize(struct _XtResource,default_type,8,12,78066)
CheckOffset(struct _XtResource,default_type,32,12,78066)
CheckMemberSize(struct _XtResource,default_addr,8,12,78067)
CheckOffset(struct _XtResource,default_addr,40,12,78067)
#elif defined __x86_64__
CheckTypeSize(struct _XtResource,48, 31920, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XtResource,resource_class,8,11,78062)
CheckOffset(struct _XtResource,resource_class,8,11,78062)
CheckMemberSize(struct _XtResource,resource_type,8,11,78063)
CheckOffset(struct _XtResource,resource_type,16,11,78063)
CheckMemberSize(struct _XtResource,resource_size,4,11,78064)
CheckOffset(struct _XtResource,resource_size,24,11,78064)
CheckMemberSize(struct _XtResource,resource_offset,4,11,78065)
CheckOffset(struct _XtResource,resource_offset,28,11,78065)
CheckMemberSize(struct _XtResource,default_type,8,11,78066)
CheckOffset(struct _XtResource,default_type,32,11,78066)
CheckMemberSize(struct _XtResource,default_addr,8,11,78067)
CheckOffset(struct _XtResource,default_addr,40,11,78067)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtResource,28, 31920, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtResource,resource_class,4,10,78062)
CheckOffset(struct _XtResource,resource_class,4,10,78062)
CheckMemberSize(struct _XtResource,resource_type,4,10,78063)
CheckOffset(struct _XtResource,resource_type,8,10,78063)
CheckMemberSize(struct _XtResource,resource_size,4,10,78064)
CheckOffset(struct _XtResource,resource_size,12,10,78064)
CheckMemberSize(struct _XtResource,resource_offset,4,10,78065)
CheckOffset(struct _XtResource,resource_offset,16,10,78065)
CheckMemberSize(struct _XtResource,default_type,4,10,78066)
CheckOffset(struct _XtResource,default_type,20,10,78066)
CheckMemberSize(struct _XtResource,default_addr,4,10,78067)
CheckOffset(struct _XtResource,default_addr,24,10,78067)
#elif defined __powerpc64__
CheckTypeSize(struct _XtResource,48, 31920, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XtResource,resource_class,8,9,78062)
CheckOffset(struct _XtResource,resource_class,8,9,78062)
CheckMemberSize(struct _XtResource,resource_type,8,9,78063)
CheckOffset(struct _XtResource,resource_type,16,9,78063)
CheckMemberSize(struct _XtResource,resource_size,4,9,78064)
CheckOffset(struct _XtResource,resource_size,24,9,78064)
CheckMemberSize(struct _XtResource,resource_offset,4,9,78065)
CheckOffset(struct _XtResource,resource_offset,28,9,78065)
CheckMemberSize(struct _XtResource,default_type,8,9,78066)
CheckOffset(struct _XtResource,default_type,32,9,78066)
CheckMemberSize(struct _XtResource,default_addr,8,9,78067)
CheckOffset(struct _XtResource,default_addr,40,9,78067)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XtResource,28, 31920, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtResource,resource_class,4,6,78062)
CheckOffset(struct _XtResource,resource_class,4,6,78062)
CheckMemberSize(struct _XtResource,resource_type,4,6,78063)
CheckOffset(struct _XtResource,resource_type,8,6,78063)
CheckMemberSize(struct _XtResource,resource_size,4,6,78064)
CheckOffset(struct _XtResource,resource_size,12,6,78064)
CheckMemberSize(struct _XtResource,resource_offset,4,6,78065)
CheckOffset(struct _XtResource,resource_offset,16,6,78065)
CheckMemberSize(struct _XtResource,default_type,4,6,78066)
CheckOffset(struct _XtResource,default_type,20,6,78066)
CheckMemberSize(struct _XtResource,default_addr,4,6,78067)
CheckOffset(struct _XtResource,default_addr,24,6,78067)
#elif defined __ia64__
CheckTypeSize(struct _XtResource,48, 31920, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtResource,resource_class,8,3,78062)
CheckOffset(struct _XtResource,resource_class,8,3,78062)
CheckMemberSize(struct _XtResource,resource_type,8,3,78063)
CheckOffset(struct _XtResource,resource_type,16,3,78063)
CheckMemberSize(struct _XtResource,resource_size,4,3,78064)
CheckOffset(struct _XtResource,resource_size,24,3,78064)
CheckMemberSize(struct _XtResource,resource_offset,4,3,78065)
CheckOffset(struct _XtResource,resource_offset,28,3,78065)
CheckMemberSize(struct _XtResource,default_type,8,3,78066)
CheckOffset(struct _XtResource,default_type,32,3,78066)
CheckMemberSize(struct _XtResource,default_addr,8,3,78067)
CheckOffset(struct _XtResource,default_addr,40,3,78067)
#elif defined __i386__
CheckTypeSize(struct _XtResource,28, 31920, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtResource,resource_class,4,2,78062)
CheckOffset(struct _XtResource,resource_class,4,2,78062)
CheckMemberSize(struct _XtResource,resource_type,4,2,78063)
CheckOffset(struct _XtResource,resource_type,8,2,78063)
CheckMemberSize(struct _XtResource,resource_size,4,2,78064)
CheckOffset(struct _XtResource,resource_size,12,2,78064)
CheckMemberSize(struct _XtResource,resource_offset,4,2,78065)
CheckOffset(struct _XtResource,resource_offset,16,2,78065)
CheckMemberSize(struct _XtResource,default_type,4,2,78066)
CheckOffset(struct _XtResource,default_type,20,2,78066)
CheckMemberSize(struct _XtResource,default_addr,4,2,78067)
CheckOffset(struct _XtResource,default_addr,24,2,78067)
#else
Msg("Find size of _XtResource (31920)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,31920,0);
#endif

#if defined __s390x__
CheckTypeSize(XtResourceList,8, 31922, 12, 1.3, NULL, 31921, NULL)
#elif defined __x86_64__
CheckTypeSize(XtResourceList,8, 31922, 11, 2.0, NULL, 31921, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtResourceList,4, 31922, 10, 1.3, NULL, 31921, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtResourceList,8, 31922, 9, 2.0, NULL, 31921, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtResourceList,4, 31922, 6, 1.2, NULL, 31921, NULL)
#elif defined __ia64__
CheckTypeSize(XtResourceList,8, 31922, 3, 1.3, NULL, 31921, NULL)
#elif defined __i386__
CheckTypeSize(XtResourceList,4, 31922, 2, 1.2, NULL, 31921, NULL)
#else
Msg("Find size of XtResourceList (31922)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31921,NULL);\n",architecture,31922,0);
#endif

#if 1
CheckTypeSize(struct _XtAppStruct,0, 31924, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XtAppStruct on All\n");
#endif

#if defined __s390x__
CheckTypeSize(XtAppContext,8, 31926, 12, 1.3, NULL, 31925, NULL)
#elif defined __x86_64__
CheckTypeSize(XtAppContext,8, 31926, 11, 2.0, NULL, 31925, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtAppContext,4, 31926, 10, 1.3, NULL, 31925, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtAppContext,8, 31926, 9, 2.0, NULL, 31925, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtAppContext,4, 31926, 6, 1.2, NULL, 31925, NULL)
#elif defined __ia64__
CheckTypeSize(XtAppContext,8, 31926, 3, 1.3, NULL, 31925, NULL)
#elif defined __i386__
CheckTypeSize(XtAppContext,4, 31926, 2, 1.2, NULL, 31925, NULL)
#else
Msg("Find size of XtAppContext (31926)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31925,NULL);\n",architecture,31926,0);
#endif

#if defined __s390x__
CheckTypeSize(XtActionProc,8, 31929, 12, 1.3, NULL, 31928, NULL)
#elif defined __x86_64__
CheckTypeSize(XtActionProc,8, 31929, 11, 2.0, NULL, 31928, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtActionProc,4, 31929, 10, 1.3, NULL, 31928, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtActionProc,8, 31929, 9, 2.0, NULL, 31928, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtActionProc,4, 31929, 6, 1.2, NULL, 31928, NULL)
#elif defined __ia64__
CheckTypeSize(XtActionProc,8, 31929, 3, 1.3, NULL, 31928, NULL)
#elif defined __i386__
CheckTypeSize(XtActionProc,4, 31929, 2, 1.2, NULL, 31928, NULL)
#else
Msg("Find size of XtActionProc (31929)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31928,NULL);\n",architecture,31929,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XtActionsRec,16, 31930, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtActionsRec,proc,8,12,78073)
CheckOffset(struct _XtActionsRec,proc,8,12,78073)
#elif defined __x86_64__
CheckTypeSize(struct _XtActionsRec,16, 31930, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XtActionsRec,proc,8,11,78073)
CheckOffset(struct _XtActionsRec,proc,8,11,78073)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtActionsRec,8, 31930, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtActionsRec,proc,4,10,78073)
CheckOffset(struct _XtActionsRec,proc,4,10,78073)
#elif defined __powerpc64__
CheckTypeSize(struct _XtActionsRec,16, 31930, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XtActionsRec,proc,8,9,78073)
CheckOffset(struct _XtActionsRec,proc,8,9,78073)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XtActionsRec,8, 31930, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtActionsRec,proc,4,6,78073)
CheckOffset(struct _XtActionsRec,proc,4,6,78073)
#elif defined __ia64__
CheckTypeSize(struct _XtActionsRec,16, 31930, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtActionsRec,proc,8,3,78073)
CheckOffset(struct _XtActionsRec,proc,8,3,78073)
#elif defined __i386__
CheckTypeSize(struct _XtActionsRec,8, 31930, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtActionsRec,proc,4,2,78073)
CheckOffset(struct _XtActionsRec,proc,4,2,78073)
#else
Msg("Find size of _XtActionsRec (31930)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,31930,0);
#endif

#if defined __s390x__
CheckTypeSize(XtActionList,8, 31932, 12, 1.3, NULL, 31931, NULL)
#elif defined __x86_64__
CheckTypeSize(XtActionList,8, 31932, 11, 2.0, NULL, 31931, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtActionList,4, 31932, 10, 1.3, NULL, 31931, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtActionList,8, 31932, 9, 2.0, NULL, 31931, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtActionList,4, 31932, 6, 1.2, NULL, 31931, NULL)
#elif defined __ia64__
CheckTypeSize(XtActionList,8, 31932, 3, 1.3, NULL, 31931, NULL)
#elif defined __i386__
CheckTypeSize(XtActionList,4, 31932, 2, 1.2, NULL, 31931, NULL)
#else
Msg("Find size of XtActionList (31932)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31931,NULL);\n",architecture,31932,0);
#endif

#if 1
CheckTypeSize(Boolean,1, 31938, 1, 1.2, NULL, 2, NULL)
#endif

#if 1
CheckTypeSize(XtCacheType,4, 31939, 1, 1.2, NULL, 6, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XtGCMask,8, 31940, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(XtGCMask,8, 31940, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtGCMask,4, 31940, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtGCMask,8, 31940, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtGCMask,4, 31940, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtGCMask,8, 31940, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtGCMask,4, 31940, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtGCMask (31940)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,31940,0);
#endif

#if 1
CheckTypeSize(XtEnum,1, 31941, 1, 1.2, NULL, 3, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XtSignalId,8, 31942, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(XtSignalId,8, 31942, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtSignalId,4, 31942, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtSignalId,8, 31942, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtSignalId,4, 31942, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtSignalId,8, 31942, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtSignalId,4, 31942, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtSignalId (31942)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,31942,0);
#endif

#if defined __s390x__
CheckTypeSize(XtWorkProcId,8, 31943, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(XtWorkProcId,8, 31943, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtWorkProcId,4, 31943, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtWorkProcId,8, 31943, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtWorkProcId,4, 31943, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtWorkProcId,8, 31943, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtWorkProcId,4, 31943, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtWorkProcId (31943)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,31943,0);
#endif

#if defined __s390x__
CheckTypeSize(XtInputId,8, 31944, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(XtInputId,8, 31944, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtInputId,4, 31944, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtInputId,8, 31944, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtInputId,4, 31944, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtInputId,8, 31944, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtInputId,4, 31944, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtInputId (31944)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,31944,0);
#endif

#if defined __s390x__
CheckTypeSize(XtIntervalId,8, 31945, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(XtIntervalId,8, 31945, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtIntervalId,4, 31945, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtIntervalId,8, 31945, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtIntervalId,4, 31945, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtIntervalId,8, 31945, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtIntervalId,4, 31945, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtIntervalId (31945)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,31945,0);
#endif

#if 1
CheckTypeSize(struct _WidgetClassRec,0, 31946, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _WidgetClassRec on All\n");
#endif

#if defined __s390x__
CheckTypeSize(WidgetClass,8, 31948, 12, 1.3, NULL, 31947, NULL)
#elif defined __x86_64__
CheckTypeSize(WidgetClass,8, 31948, 11, 2.0, NULL, 31947, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(WidgetClass,4, 31948, 10, 1.3, NULL, 31947, NULL)
#elif defined __powerpc64__
CheckTypeSize(WidgetClass,8, 31948, 9, 2.0, NULL, 31947, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(WidgetClass,4, 31948, 6, 1.2, NULL, 31947, NULL)
#elif defined __ia64__
CheckTypeSize(WidgetClass,8, 31948, 3, 1.3, NULL, 31947, NULL)
#elif defined __i386__
CheckTypeSize(WidgetClass,4, 31948, 2, 1.2, NULL, 31947, NULL)
#else
Msg("Find size of WidgetClass (31948)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31947,NULL);\n",architecture,31948,0);
#endif

#if defined __s390x__
CheckTypeSize(WidgetList,8, 31949, 12, 1.3, NULL, 31899, NULL)
#elif defined __x86_64__
CheckTypeSize(WidgetList,8, 31949, 11, 2.0, NULL, 31899, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(WidgetList,4, 31949, 10, 1.3, NULL, 31899, NULL)
#elif defined __powerpc64__
CheckTypeSize(WidgetList,8, 31949, 9, 2.0, NULL, 31899, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(WidgetList,4, 31949, 6, 1.2, NULL, 31899, NULL)
#elif defined __ia64__
CheckTypeSize(WidgetList,8, 31949, 3, 1.3, NULL, 31899, NULL)
#elif defined __i386__
CheckTypeSize(WidgetList,4, 31949, 2, 1.2, NULL, 31899, NULL)
#else
Msg("Find size of WidgetList (31949)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31899,NULL);\n",architecture,31949,0);
#endif

#if defined __s390x__
CheckTypeSize(XtAccelerators,8, 31952, 12, 1.3, NULL, 31951, NULL)
#elif defined __x86_64__
CheckTypeSize(XtAccelerators,8, 31952, 11, 2.0, NULL, 31951, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtAccelerators,4, 31952, 10, 1.3, NULL, 31951, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtAccelerators,8, 31952, 9, 2.0, NULL, 31951, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtAccelerators,4, 31952, 6, 1.2, NULL, 31951, NULL)
#elif defined __ia64__
CheckTypeSize(XtAccelerators,8, 31952, 3, 1.3, NULL, 31951, NULL)
#elif defined __i386__
CheckTypeSize(XtAccelerators,4, 31952, 2, 1.2, NULL, 31951, NULL)
#else
Msg("Find size of XtAccelerators (31952)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31951,NULL);\n",architecture,31952,0);
#endif

#if defined __s390x__
CheckTypeSize(XtTranslations,8, 31953, 12, 1.3, NULL, 31951, NULL)
#elif defined __x86_64__
CheckTypeSize(XtTranslations,8, 31953, 11, 2.0, NULL, 31951, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtTranslations,4, 31953, 10, 1.3, NULL, 31951, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtTranslations,8, 31953, 9, 2.0, NULL, 31951, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtTranslations,4, 31953, 6, 1.2, NULL, 31951, NULL)
#elif defined __ia64__
CheckTypeSize(XtTranslations,8, 31953, 3, 1.3, NULL, 31951, NULL)
#elif defined __i386__
CheckTypeSize(XtTranslations,4, 31953, 2, 1.2, NULL, 31951, NULL)
#else
Msg("Find size of XtTranslations (31953)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31951,NULL);\n",architecture,31953,0);
#endif

#if 1
CheckTypeSize(XtGeometryResult,4, 31956, 1, 1.2, NULL, 36150, NULL)
#endif

#if 1
CheckTypeSize(XtAddressMode,4, 31957, 1, 1.2, NULL, 36149, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XtConvertArgRec,24, 31959, 12, 1.3, NULL, 31958, NULL)
#elif defined __x86_64__
CheckTypeSize(XtConvertArgRec,24, 31959, 11, 2.0, NULL, 31958, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtConvertArgRec,12, 31959, 10, 1.3, NULL, 31958, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtConvertArgRec,24, 31959, 9, 2.0, NULL, 31958, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtConvertArgRec,12, 31959, 6, 1.2, NULL, 31958, NULL)
#elif defined __ia64__
CheckTypeSize(XtConvertArgRec,24, 31959, 3, 1.3, NULL, 31958, NULL)
#elif defined __i386__
CheckTypeSize(XtConvertArgRec,12, 31959, 2, 1.2, NULL, 31958, NULL)
#else
Msg("Find size of XtConvertArgRec (31959)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31958,NULL);\n",architecture,31959,0);
#endif

#if defined __s390x__
CheckTypeSize(XtConvertArgList,8, 31961, 12, 1.3, NULL, 31960, NULL)
#elif defined __x86_64__
CheckTypeSize(XtConvertArgList,8, 31961, 11, 2.0, NULL, 31960, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtConvertArgList,4, 31961, 10, 1.3, NULL, 31960, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtConvertArgList,8, 31961, 9, 2.0, NULL, 31960, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtConvertArgList,4, 31961, 6, 1.2, NULL, 31960, NULL)
#elif defined __ia64__
CheckTypeSize(XtConvertArgList,8, 31961, 3, 1.3, NULL, 31960, NULL)
#elif defined __i386__
CheckTypeSize(XtConvertArgList,4, 31961, 2, 1.2, NULL, 31960, NULL)
#else
Msg("Find size of XtConvertArgList (31961)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31960,NULL);\n",architecture,31961,0);
#endif

#if defined __s390x__
CheckTypeSize(XtArgVal,8, 31962, 12, 1.3, NULL, 8, NULL)
#elif defined __x86_64__
CheckTypeSize(XtArgVal,8, 31962, 11, 2.0, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtArgVal,4, 31962, 10, 1.3, NULL, 8, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtArgVal,8, 31962, 9, 2.0, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtArgVal,4, 31962, 6, 1.2, NULL, 8, NULL)
#elif defined __ia64__
CheckTypeSize(XtArgVal,8, 31962, 3, 1.3, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(XtArgVal,4, 31962, 2, 1.2, NULL, 8, NULL)
#else
Msg("Find size of XtArgVal (31962)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8,NULL);\n",architecture,31962,0);
#endif

#if defined __s390x__
CheckTypeSize(Arg,16, 31964, 12, 1.3, NULL, 31963, NULL)
#elif defined __x86_64__
CheckTypeSize(Arg,16, 31964, 11, 2.0, NULL, 31963, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Arg,8, 31964, 10, 1.3, NULL, 31963, NULL)
#elif defined __powerpc64__
CheckTypeSize(Arg,16, 31964, 9, 2.0, NULL, 31963, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Arg,8, 31964, 6, 1.2, NULL, 31963, NULL)
#elif defined __ia64__
CheckTypeSize(Arg,16, 31964, 3, 1.3, NULL, 31963, NULL)
#elif defined __i386__
CheckTypeSize(Arg,8, 31964, 2, 1.2, NULL, 31963, NULL)
#else
Msg("Find size of Arg (31964)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31963,NULL);\n",architecture,31964,0);
#endif

#if defined __s390x__
CheckTypeSize(ArgList,8, 31966, 12, 1.3, NULL, 31965, NULL)
#elif defined __x86_64__
CheckTypeSize(ArgList,8, 31966, 11, 2.0, NULL, 31965, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ArgList,4, 31966, 10, 1.3, NULL, 31965, NULL)
#elif defined __powerpc64__
CheckTypeSize(ArgList,8, 31966, 9, 2.0, NULL, 31965, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ArgList,4, 31966, 6, 1.2, NULL, 31965, NULL)
#elif defined __ia64__
CheckTypeSize(ArgList,8, 31966, 3, 1.3, NULL, 31965, NULL)
#elif defined __i386__
CheckTypeSize(ArgList,4, 31966, 2, 1.2, NULL, 31965, NULL)
#else
Msg("Find size of ArgList (31966)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31965,NULL);\n",architecture,31966,0);
#endif

#if defined __s390x__
CheckTypeSize(XtSignalCallbackProc,8, 31969, 12, 1.3, NULL, 31968, NULL)
#elif defined __x86_64__
CheckTypeSize(XtSignalCallbackProc,8, 31969, 11, 2.0, NULL, 31968, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtSignalCallbackProc,4, 31969, 10, 1.3, NULL, 31968, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtSignalCallbackProc,8, 31969, 9, 2.0, NULL, 31968, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtSignalCallbackProc,4, 31969, 6, 1.2, NULL, 31968, NULL)
#elif defined __ia64__
CheckTypeSize(XtSignalCallbackProc,8, 31969, 3, 1.3, NULL, 31968, NULL)
#elif defined __i386__
CheckTypeSize(XtSignalCallbackProc,4, 31969, 2, 1.2, NULL, 31968, NULL)
#else
Msg("Find size of XtSignalCallbackProc (31969)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31968,NULL);\n",architecture,31969,0);
#endif

#if 1
CheckTypeSize(XtCallbackStatus,4, 31970, 1, 1.2, NULL, 36148, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XtInputCallbackProc,8, 31973, 12, 1.3, NULL, 31972, NULL)
#elif defined __x86_64__
CheckTypeSize(XtInputCallbackProc,8, 31973, 11, 2.0, NULL, 31972, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtInputCallbackProc,4, 31973, 10, 1.3, NULL, 31972, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtInputCallbackProc,8, 31973, 9, 2.0, NULL, 31972, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtInputCallbackProc,4, 31973, 6, 1.2, NULL, 31972, NULL)
#elif defined __ia64__
CheckTypeSize(XtInputCallbackProc,8, 31973, 3, 1.3, NULL, 31972, NULL)
#elif defined __i386__
CheckTypeSize(XtInputCallbackProc,4, 31973, 2, 1.2, NULL, 31972, NULL)
#else
Msg("Find size of XtInputCallbackProc (31973)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31972,NULL);\n",architecture,31973,0);
#endif

#if defined __s390x__
CheckTypeSize(XtTimerCallbackProc,8, 31976, 12, 1.3, NULL, 31975, NULL)
#elif defined __x86_64__
CheckTypeSize(XtTimerCallbackProc,8, 31976, 11, 2.0, NULL, 31975, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtTimerCallbackProc,4, 31976, 10, 1.3, NULL, 31975, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtTimerCallbackProc,8, 31976, 9, 2.0, NULL, 31975, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtTimerCallbackProc,4, 31976, 6, 1.2, NULL, 31975, NULL)
#elif defined __ia64__
CheckTypeSize(XtTimerCallbackProc,8, 31976, 3, 1.3, NULL, 31975, NULL)
#elif defined __i386__
CheckTypeSize(XtTimerCallbackProc,4, 31976, 2, 1.2, NULL, 31975, NULL)
#else
Msg("Find size of XtTimerCallbackProc (31976)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31975,NULL);\n",architecture,31976,0);
#endif

#if defined __s390x__
CheckTypeSize(XtInputMask,8, 31977, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(XtInputMask,8, 31977, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtInputMask,4, 31977, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtInputMask,8, 31977, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtInputMask,4, 31977, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtInputMask,8, 31977, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtInputMask,4, 31977, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtInputMask (31977)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,31977,0);
#endif

#if 1
CheckTypeSize(XtListPosition,4, 31978, 1, 1.2, NULL, 36146, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XtCallbackProc,8, 31980, 12, 1.3, NULL, 31979, NULL)
#elif defined __x86_64__
CheckTypeSize(XtCallbackProc,8, 31980, 11, 2.0, NULL, 31979, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtCallbackProc,4, 31980, 10, 1.3, NULL, 31979, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtCallbackProc,8, 31980, 9, 2.0, NULL, 31979, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCallbackProc,4, 31980, 6, 1.2, NULL, 31979, NULL)
#elif defined __ia64__
CheckTypeSize(XtCallbackProc,8, 31980, 3, 1.3, NULL, 31979, NULL)
#elif defined __i386__
CheckTypeSize(XtCallbackProc,4, 31980, 2, 1.2, NULL, 31979, NULL)
#else
Msg("Find size of XtCallbackProc (31980)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31979,NULL);\n",architecture,31980,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XtCallbackRec,16, 31981, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtCallbackRec,closure,8,12,78112)
CheckOffset(struct _XtCallbackRec,closure,8,12,78112)
#elif defined __x86_64__
CheckTypeSize(struct _XtCallbackRec,16, 31981, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XtCallbackRec,closure,8,11,78112)
CheckOffset(struct _XtCallbackRec,closure,8,11,78112)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtCallbackRec,8, 31981, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtCallbackRec,closure,4,10,78112)
CheckOffset(struct _XtCallbackRec,closure,4,10,78112)
#elif defined __powerpc64__
CheckTypeSize(struct _XtCallbackRec,16, 31981, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XtCallbackRec,closure,8,9,78112)
CheckOffset(struct _XtCallbackRec,closure,8,9,78112)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XtCallbackRec,8, 31981, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtCallbackRec,closure,4,6,78112)
CheckOffset(struct _XtCallbackRec,closure,4,6,78112)
#elif defined __ia64__
CheckTypeSize(struct _XtCallbackRec,16, 31981, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtCallbackRec,closure,8,3,78112)
CheckOffset(struct _XtCallbackRec,closure,8,3,78112)
#elif defined __i386__
CheckTypeSize(struct _XtCallbackRec,8, 31981, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtCallbackRec,closure,4,2,78112)
CheckOffset(struct _XtCallbackRec,closure,4,2,78112)
#else
Msg("Find size of _XtCallbackRec (31981)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,31981,0);
#endif

#if defined __s390x__
CheckTypeSize(XtCallbackList,8, 31983, 12, 1.3, NULL, 31982, NULL)
#elif defined __x86_64__
CheckTypeSize(XtCallbackList,8, 31983, 11, 2.0, NULL, 31982, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtCallbackList,4, 31983, 10, 1.3, NULL, 31982, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtCallbackList,8, 31983, 9, 2.0, NULL, 31982, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCallbackList,4, 31983, 6, 1.2, NULL, 31982, NULL)
#elif defined __ia64__
CheckTypeSize(XtCallbackList,8, 31983, 3, 1.3, NULL, 31982, NULL)
#elif defined __i386__
CheckTypeSize(XtCallbackList,4, 31983, 2, 1.2, NULL, 31982, NULL)
#else
Msg("Find size of XtCallbackList (31983)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31982,NULL);\n",architecture,31983,0);
#endif

#if defined __s390x__
CheckTypeSize(EventMask,8, 31984, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(EventMask,8, 31984, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(EventMask,4, 31984, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(EventMask,8, 31984, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(EventMask,4, 31984, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(EventMask,8, 31984, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(EventMask,4, 31984, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of EventMask (31984)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,31984,0);
#endif

#if defined __s390x__
CheckTypeSize(XtVarArgsList,8, 31985, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(XtVarArgsList,8, 31985, 11, 2.0, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtVarArgsList,4, 31985, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtVarArgsList,8, 31985, 9, 2.0, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtVarArgsList,4, 31985, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(XtVarArgsList,8, 31985, 3, 1.3, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(XtVarArgsList,4, 31985, 2, 1.2, NULL, 40, NULL)
#else
Msg("Find size of XtVarArgsList (31985)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,31985,0);
#endif

#if defined __s390x__
CheckTypeSize(XtEventHandler,8, 31988, 12, 1.3, NULL, 31987, NULL)
#elif defined __x86_64__
CheckTypeSize(XtEventHandler,8, 31988, 11, 2.0, NULL, 31987, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtEventHandler,4, 31988, 10, 1.3, NULL, 31987, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtEventHandler,8, 31988, 9, 2.0, NULL, 31987, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtEventHandler,4, 31988, 6, 1.2, NULL, 31987, NULL)
#elif defined __ia64__
CheckTypeSize(XtEventHandler,8, 31988, 3, 1.3, NULL, 31987, NULL)
#elif defined __i386__
CheckTypeSize(XtEventHandler,4, 31988, 2, 1.2, NULL, 31987, NULL)
#else
Msg("Find size of XtEventHandler (31988)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31987,NULL);\n",architecture,31988,0);
#endif

#if defined __s390x__
CheckTypeSize(XtCaseProc,8, 31990, 12, 1.3, NULL, 31989, NULL)
#elif defined __x86_64__
CheckTypeSize(XtCaseProc,8, 31990, 11, 2.0, NULL, 31989, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtCaseProc,4, 31990, 10, 1.3, NULL, 31989, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtCaseProc,8, 31990, 9, 2.0, NULL, 31989, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCaseProc,4, 31990, 6, 1.2, NULL, 31989, NULL)
#elif defined __ia64__
CheckTypeSize(XtCaseProc,8, 31990, 3, 1.3, NULL, 31989, NULL)
#elif defined __i386__
CheckTypeSize(XtCaseProc,4, 31990, 2, 1.2, NULL, 31989, NULL)
#else
Msg("Find size of XtCaseProc (31990)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31989,NULL);\n",architecture,31990,0);
#endif

#if defined __s390x__
CheckTypeSize(XtKeyProc,8, 31992, 12, 1.3, NULL, 31991, NULL)
#elif defined __x86_64__
CheckTypeSize(XtKeyProc,8, 31992, 11, 2.0, NULL, 31991, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtKeyProc,4, 31992, 10, 1.3, NULL, 31991, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtKeyProc,8, 31992, 9, 2.0, NULL, 31991, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtKeyProc,4, 31992, 6, 1.2, NULL, 31991, NULL)
#elif defined __ia64__
CheckTypeSize(XtKeyProc,8, 31992, 3, 1.3, NULL, 31991, NULL)
#elif defined __i386__
CheckTypeSize(XtKeyProc,4, 31992, 2, 1.2, NULL, 31991, NULL)
#else
Msg("Find size of XtKeyProc (31992)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31991,NULL);\n",architecture,31992,0);
#endif

#if defined __s390x__
CheckTypeSize(XtBlockHookProc,8, 31994, 12, 1.3, NULL, 31993, NULL)
#elif defined __x86_64__
CheckTypeSize(XtBlockHookProc,8, 31994, 11, 2.0, NULL, 31993, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtBlockHookProc,4, 31994, 10, 1.3, NULL, 31993, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtBlockHookProc,8, 31994, 9, 2.0, NULL, 31993, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtBlockHookProc,4, 31994, 6, 1.2, NULL, 31993, NULL)
#elif defined __ia64__
CheckTypeSize(XtBlockHookProc,8, 31994, 3, 1.3, NULL, 31993, NULL)
#elif defined __i386__
CheckTypeSize(XtBlockHookProc,4, 31994, 2, 1.2, NULL, 31993, NULL)
#else
Msg("Find size of XtBlockHookProc (31994)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31993,NULL);\n",architecture,31994,0);
#endif

#if defined __s390x__
CheckTypeSize(XtBlockHookId,8, 31995, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(XtBlockHookId,8, 31995, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtBlockHookId,4, 31995, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtBlockHookId,8, 31995, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtBlockHookId,4, 31995, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtBlockHookId,8, 31995, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtBlockHookId,4, 31995, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtBlockHookId (31995)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,31995,0);
#endif

#if defined __s390x__
CheckTypeSize(XtActionHookProc,8, 31997, 12, 1.3, NULL, 31996, NULL)
#elif defined __x86_64__
CheckTypeSize(XtActionHookProc,8, 31997, 11, 2.0, NULL, 31996, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtActionHookProc,4, 31997, 10, 1.3, NULL, 31996, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtActionHookProc,8, 31997, 9, 2.0, NULL, 31996, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtActionHookProc,4, 31997, 6, 1.2, NULL, 31996, NULL)
#elif defined __ia64__
CheckTypeSize(XtActionHookProc,8, 31997, 3, 1.3, NULL, 31996, NULL)
#elif defined __i386__
CheckTypeSize(XtActionHookProc,4, 31997, 2, 1.2, NULL, 31996, NULL)
#else
Msg("Find size of XtActionHookProc (31997)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31996,NULL);\n",architecture,31997,0);
#endif

#if defined __s390x__
CheckTypeSize(XtActionHookId,8, 31998, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(XtActionHookId,8, 31998, 11, 2.0, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtActionHookId,4, 31998, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtActionHookId,8, 31998, 9, 2.0, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtActionHookId,4, 31998, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(XtActionHookId,8, 31998, 3, 1.3, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(XtActionHookId,4, 31998, 2, 1.2, NULL, 40, NULL)
#else
Msg("Find size of XtActionHookId (31998)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,31998,0);
#endif

#if defined __s390x__
CheckTypeSize(XtDestructor,8, 32000, 12, 1.3, NULL, 31999, NULL)
#elif defined __x86_64__
CheckTypeSize(XtDestructor,8, 32000, 11, 2.0, NULL, 31999, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtDestructor,4, 32000, 10, 1.3, NULL, 31999, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtDestructor,8, 32000, 9, 2.0, NULL, 31999, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtDestructor,4, 32000, 6, 1.2, NULL, 31999, NULL)
#elif defined __ia64__
CheckTypeSize(XtDestructor,8, 32000, 3, 1.3, NULL, 31999, NULL)
#elif defined __i386__
CheckTypeSize(XtDestructor,4, 32000, 2, 1.2, NULL, 31999, NULL)
#else
Msg("Find size of XtDestructor (32000)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31999,NULL);\n",architecture,32000,0);
#endif

#if defined __s390x__
CheckTypeSize(XtTypeConverter,8, 32002, 12, 1.3, NULL, 32001, NULL)
#elif defined __x86_64__
CheckTypeSize(XtTypeConverter,8, 32002, 11, 2.0, NULL, 32001, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtTypeConverter,4, 32002, 10, 1.3, NULL, 32001, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtTypeConverter,8, 32002, 9, 2.0, NULL, 32001, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtTypeConverter,4, 32002, 6, 1.2, NULL, 32001, NULL)
#elif defined __ia64__
CheckTypeSize(XtTypeConverter,8, 32002, 3, 1.3, NULL, 32001, NULL)
#elif defined __i386__
CheckTypeSize(XtTypeConverter,4, 32002, 2, 1.2, NULL, 32001, NULL)
#else
Msg("Find size of XtTypeConverter (32002)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32001,NULL);\n",architecture,32002,0);
#endif

#if defined __s390x__
CheckTypeSize(XtConverter,8, 32004, 12, 1.3, NULL, 32003, NULL)
#elif defined __x86_64__
CheckTypeSize(XtConverter,8, 32004, 11, 2.0, NULL, 32003, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtConverter,4, 32004, 10, 1.3, NULL, 32003, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtConverter,8, 32004, 9, 2.0, NULL, 32003, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtConverter,4, 32004, 6, 1.2, NULL, 32003, NULL)
#elif defined __ia64__
CheckTypeSize(XtConverter,8, 32004, 3, 1.3, NULL, 32003, NULL)
#elif defined __i386__
CheckTypeSize(XtConverter,4, 32004, 2, 1.2, NULL, 32003, NULL)
#else
Msg("Find size of XtConverter (32004)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32003,NULL);\n",architecture,32004,0);
#endif

#if defined __s390x__
CheckTypeSize(XtRequestId,8, 32005, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(XtRequestId,8, 32005, 11, 2.0, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtRequestId,4, 32005, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtRequestId,8, 32005, 9, 2.0, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtRequestId,4, 32005, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(XtRequestId,8, 32005, 3, 1.3, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(XtRequestId,4, 32005, 2, 1.2, NULL, 40, NULL)
#else
Msg("Find size of XtRequestId (32005)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,32005,0);
#endif

#if defined __s390x__
CheckTypeSize(XtFilePredicate,8, 32007, 12, 1.3, NULL, 32006, NULL)
#elif defined __x86_64__
CheckTypeSize(XtFilePredicate,8, 32007, 11, 2.0, NULL, 32006, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtFilePredicate,4, 32007, 10, 1.3, NULL, 32006, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtFilePredicate,8, 32007, 9, 2.0, NULL, 32006, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtFilePredicate,4, 32007, 6, 1.2, NULL, 32006, NULL)
#elif defined __ia64__
CheckTypeSize(XtFilePredicate,8, 32007, 3, 1.3, NULL, 32006, NULL)
#elif defined __i386__
CheckTypeSize(XtFilePredicate,4, 32007, 2, 1.2, NULL, 32006, NULL)
#else
Msg("Find size of XtFilePredicate (32007)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32006,NULL);\n",architecture,32007,0);
#endif

#if defined __s390x__
CheckTypeSize(SubstitutionRec,16, 32009, 12, 1.3, NULL, 32008, NULL)
#elif defined __x86_64__
CheckTypeSize(SubstitutionRec,16, 32009, 11, 2.0, NULL, 32008, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SubstitutionRec,8, 32009, 10, 1.3, NULL, 32008, NULL)
#elif defined __powerpc64__
CheckTypeSize(SubstitutionRec,16, 32009, 9, 2.0, NULL, 32008, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SubstitutionRec,8, 32009, 6, 1.2, NULL, 32008, NULL)
#elif defined __ia64__
CheckTypeSize(SubstitutionRec,16, 32009, 3, 1.3, NULL, 32008, NULL)
#elif defined __i386__
CheckTypeSize(SubstitutionRec,8, 32009, 2, 1.2, NULL, 32008, NULL)
#else
Msg("Find size of SubstitutionRec (32009)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32008,NULL);\n",architecture,32009,0);
#endif

#if defined __s390x__
CheckTypeSize(Substitution,8, 32011, 12, 1.3, NULL, 32010, NULL)
#elif defined __x86_64__
CheckTypeSize(Substitution,8, 32011, 11, 2.0, NULL, 32010, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Substitution,4, 32011, 10, 1.3, NULL, 32010, NULL)
#elif defined __powerpc64__
CheckTypeSize(Substitution,8, 32011, 9, 2.0, NULL, 32010, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Substitution,4, 32011, 6, 1.2, NULL, 32010, NULL)
#elif defined __ia64__
CheckTypeSize(Substitution,8, 32011, 3, 1.3, NULL, 32010, NULL)
#elif defined __i386__
CheckTypeSize(Substitution,4, 32011, 2, 1.2, NULL, 32010, NULL)
#else
Msg("Find size of Substitution (32011)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32010,NULL);\n",architecture,32011,0);
#endif

#if defined __s390x__
CheckTypeSize(XtSelectionCallbackProc,8, 32013, 12, 1.3, NULL, 32012, NULL)
#elif defined __x86_64__
CheckTypeSize(XtSelectionCallbackProc,8, 32013, 11, 2.0, NULL, 32012, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtSelectionCallbackProc,4, 32013, 10, 1.3, NULL, 32012, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtSelectionCallbackProc,8, 32013, 9, 2.0, NULL, 32012, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtSelectionCallbackProc,4, 32013, 6, 1.2, NULL, 32012, NULL)
#elif defined __ia64__
CheckTypeSize(XtSelectionCallbackProc,8, 32013, 3, 1.3, NULL, 32012, NULL)
#elif defined __i386__
CheckTypeSize(XtSelectionCallbackProc,4, 32013, 2, 1.2, NULL, 32012, NULL)
#else
Msg("Find size of XtSelectionCallbackProc (32013)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32012,NULL);\n",architecture,32013,0);
#endif

#if defined __s390x__
CheckTypeSize(XtWorkProc,8, 32015, 12, 1.3, NULL, 32014, NULL)
#elif defined __x86_64__
CheckTypeSize(XtWorkProc,8, 32015, 11, 2.0, NULL, 32014, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtWorkProc,4, 32015, 10, 1.3, NULL, 32014, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtWorkProc,8, 32015, 9, 2.0, NULL, 32014, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtWorkProc,4, 32015, 6, 1.2, NULL, 32014, NULL)
#elif defined __ia64__
CheckTypeSize(XtWorkProc,8, 32015, 3, 1.3, NULL, 32014, NULL)
#elif defined __i386__
CheckTypeSize(XtWorkProc,4, 32015, 2, 1.2, NULL, 32014, NULL)
#else
Msg("Find size of XtWorkProc (32015)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32014,NULL);\n",architecture,32015,0);
#endif

#if defined __s390x__
CheckTypeSize(XtSelectionDoneProc,8, 32017, 12, 1.3, NULL, 32016, NULL)
#elif defined __x86_64__
CheckTypeSize(XtSelectionDoneProc,8, 32017, 11, 2.0, NULL, 32016, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtSelectionDoneProc,4, 32017, 10, 1.3, NULL, 32016, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtSelectionDoneProc,8, 32017, 9, 2.0, NULL, 32016, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtSelectionDoneProc,4, 32017, 6, 1.2, NULL, 32016, NULL)
#elif defined __ia64__
CheckTypeSize(XtSelectionDoneProc,8, 32017, 3, 1.3, NULL, 32016, NULL)
#elif defined __i386__
CheckTypeSize(XtSelectionDoneProc,4, 32017, 2, 1.2, NULL, 32016, NULL)
#else
Msg("Find size of XtSelectionDoneProc (32017)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32016,NULL);\n",architecture,32017,0);
#endif

#if defined __s390x__
CheckTypeSize(XtLoseSelectionProc,8, 32019, 12, 1.3, NULL, 32018, NULL)
#elif defined __x86_64__
CheckTypeSize(XtLoseSelectionProc,8, 32019, 11, 2.0, NULL, 32018, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtLoseSelectionProc,4, 32019, 10, 1.3, NULL, 32018, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtLoseSelectionProc,8, 32019, 9, 2.0, NULL, 32018, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtLoseSelectionProc,4, 32019, 6, 1.2, NULL, 32018, NULL)
#elif defined __ia64__
CheckTypeSize(XtLoseSelectionProc,8, 32019, 3, 1.3, NULL, 32018, NULL)
#elif defined __i386__
CheckTypeSize(XtLoseSelectionProc,4, 32019, 2, 1.2, NULL, 32018, NULL)
#else
Msg("Find size of XtLoseSelectionProc (32019)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32018,NULL);\n",architecture,32019,0);
#endif

#if defined __s390x__
CheckTypeSize(XtErrorHandler,8, 32021, 12, 1.3, NULL, 32020, NULL)
#elif defined __x86_64__
CheckTypeSize(XtErrorHandler,8, 32021, 11, 2.0, NULL, 32020, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtErrorHandler,4, 32021, 10, 1.3, NULL, 32020, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtErrorHandler,8, 32021, 9, 2.0, NULL, 32020, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtErrorHandler,4, 32021, 6, 1.2, NULL, 32020, NULL)
#elif defined __ia64__
CheckTypeSize(XtErrorHandler,8, 32021, 3, 1.3, NULL, 32020, NULL)
#elif defined __i386__
CheckTypeSize(XtErrorHandler,4, 32021, 2, 1.2, NULL, 32020, NULL)
#else
Msg("Find size of XtErrorHandler (32021)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32020,NULL);\n",architecture,32021,0);
#endif

#if defined __s390x__
CheckTypeSize(XtConvertSelectionProc,8, 32023, 12, 1.3, NULL, 32022, NULL)
#elif defined __x86_64__
CheckTypeSize(XtConvertSelectionProc,8, 32023, 11, 2.0, NULL, 32022, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtConvertSelectionProc,4, 32023, 10, 1.3, NULL, 32022, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtConvertSelectionProc,8, 32023, 9, 2.0, NULL, 32022, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtConvertSelectionProc,4, 32023, 6, 1.2, NULL, 32022, NULL)
#elif defined __ia64__
CheckTypeSize(XtConvertSelectionProc,8, 32023, 3, 1.3, NULL, 32022, NULL)
#elif defined __i386__
CheckTypeSize(XtConvertSelectionProc,4, 32023, 2, 1.2, NULL, 32022, NULL)
#else
Msg("Find size of XtConvertSelectionProc (32023)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32022,NULL);\n",architecture,32023,0);
#endif

#if defined __s390x__
CheckTypeSize(XtErrorMsgHandler,8, 32025, 12, 1.3, NULL, 32024, NULL)
#elif defined __x86_64__
CheckTypeSize(XtErrorMsgHandler,8, 32025, 11, 2.0, NULL, 32024, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtErrorMsgHandler,4, 32025, 10, 1.3, NULL, 32024, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtErrorMsgHandler,8, 32025, 9, 2.0, NULL, 32024, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtErrorMsgHandler,4, 32025, 6, 1.2, NULL, 32024, NULL)
#elif defined __ia64__
CheckTypeSize(XtErrorMsgHandler,8, 32025, 3, 1.3, NULL, 32024, NULL)
#elif defined __i386__
CheckTypeSize(XtErrorMsgHandler,4, 32025, 2, 1.2, NULL, 32024, NULL)
#else
Msg("Find size of XtErrorMsgHandler (32025)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32024,NULL);\n",architecture,32025,0);
#endif

#if defined __s390x__
CheckTypeSize(XtLanguageProc,8, 32027, 12, 1.3, NULL, 32026, NULL)
#elif defined __x86_64__
CheckTypeSize(XtLanguageProc,8, 32027, 11, 2.0, NULL, 32026, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtLanguageProc,4, 32027, 10, 1.3, NULL, 32026, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtLanguageProc,8, 32027, 9, 2.0, NULL, 32026, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtLanguageProc,4, 32027, 6, 1.2, NULL, 32026, NULL)
#elif defined __ia64__
CheckTypeSize(XtLanguageProc,8, 32027, 3, 1.3, NULL, 32026, NULL)
#elif defined __i386__
CheckTypeSize(XtLanguageProc,4, 32027, 2, 1.2, NULL, 32026, NULL)
#else
Msg("Find size of XtLanguageProc (32027)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32026,NULL);\n",architecture,32027,0);
#endif

#if 1
CheckTypeSize(XtGrabKind,4, 32028, 1, 1.2, NULL, 36147, NULL)
#endif

#if defined __s390x__
CheckTypeSize(struct _XtCheckpointTokenRec,40, 32029, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtCheckpointTokenRec,widget,8,12,78195)
CheckOffset(struct _XtCheckpointTokenRec,widget,32,12,78195)
#elif defined __x86_64__
CheckTypeSize(struct _XtCheckpointTokenRec,40, 32029, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XtCheckpointTokenRec,widget,8,11,78195)
CheckOffset(struct _XtCheckpointTokenRec,widget,32,11,78195)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtCheckpointTokenRec,32, 32029, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtCheckpointTokenRec,widget,4,10,78195)
CheckOffset(struct _XtCheckpointTokenRec,widget,28,10,78195)
#elif defined __powerpc64__
CheckTypeSize(struct _XtCheckpointTokenRec,40, 32029, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XtCheckpointTokenRec,widget,8,9,78195)
CheckOffset(struct _XtCheckpointTokenRec,widget,32,9,78195)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XtCheckpointTokenRec,32, 32029, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtCheckpointTokenRec,widget,4,6,78195)
CheckOffset(struct _XtCheckpointTokenRec,widget,28,6,78195)
#elif defined __ia64__
CheckTypeSize(struct _XtCheckpointTokenRec,40, 32029, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtCheckpointTokenRec,widget,8,3,78195)
CheckOffset(struct _XtCheckpointTokenRec,widget,32,3,78195)
#elif defined __i386__
CheckTypeSize(struct _XtCheckpointTokenRec,32, 32029, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtCheckpointTokenRec,widget,4,2,78195)
CheckOffset(struct _XtCheckpointTokenRec,widget,28,2,78195)
#else
Msg("Find size of _XtCheckpointTokenRec (32029)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,32029,0);
#endif

#if defined __s390x__
CheckTypeSize(XtCheckpointToken,8, 32031, 12, 1.3, NULL, 32030, NULL)
#elif defined __x86_64__
CheckTypeSize(XtCheckpointToken,8, 32031, 11, 2.0, NULL, 32030, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtCheckpointToken,4, 32031, 10, 1.3, NULL, 32030, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtCheckpointToken,8, 32031, 9, 2.0, NULL, 32030, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCheckpointToken,4, 32031, 6, 1.2, NULL, 32030, NULL)
#elif defined __ia64__
CheckTypeSize(XtCheckpointToken,8, 32031, 3, 1.3, NULL, 32030, NULL)
#elif defined __i386__
CheckTypeSize(XtCheckpointToken,4, 32031, 2, 1.2, NULL, 32030, NULL)
#else
Msg("Find size of XtCheckpointToken (32031)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32030,NULL);\n",architecture,32031,0);
#endif

#if defined __s390x__
CheckTypeSize(XtExtensionSelectProc,8, 32033, 12, 1.3, NULL, 32032, NULL)
#elif defined __x86_64__
CheckTypeSize(XtExtensionSelectProc,8, 32033, 11, 2.0, NULL, 32032, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtExtensionSelectProc,4, 32033, 10, 1.3, NULL, 32032, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtExtensionSelectProc,8, 32033, 9, 2.0, NULL, 32032, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtExtensionSelectProc,4, 32033, 6, 1.2, NULL, 32032, NULL)
#elif defined __ia64__
CheckTypeSize(XtExtensionSelectProc,8, 32033, 3, 1.3, NULL, 32032, NULL)
#elif defined __i386__
CheckTypeSize(XtExtensionSelectProc,4, 32033, 2, 1.2, NULL, 32032, NULL)
#else
Msg("Find size of XtExtensionSelectProc (32033)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32032,NULL);\n",architecture,32033,0);
#endif

#if defined __s390x__
CheckTypeSize(XtEventDispatchProc,8, 32035, 12, 1.3, NULL, 32034, NULL)
#elif defined __x86_64__
CheckTypeSize(XtEventDispatchProc,8, 32035, 11, 2.0, NULL, 32034, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtEventDispatchProc,4, 32035, 10, 1.3, NULL, 32034, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtEventDispatchProc,8, 32035, 9, 2.0, NULL, 32034, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtEventDispatchProc,4, 32035, 6, 1.2, NULL, 32034, NULL)
#elif defined __ia64__
CheckTypeSize(XtEventDispatchProc,8, 32035, 3, 1.3, NULL, 32034, NULL)
#elif defined __i386__
CheckTypeSize(XtEventDispatchProc,4, 32035, 2, 1.2, NULL, 32034, NULL)
#else
Msg("Find size of XtEventDispatchProc (32035)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32034,NULL);\n",architecture,32035,0);
#endif

#if defined __s390x__
CheckTypeSize(XtCancelConvertSelectionProc,8, 32038, 12, 1.3, NULL, 32037, NULL)
#elif defined __x86_64__
CheckTypeSize(XtCancelConvertSelectionProc,8, 32038, 11, 2.0, NULL, 32037, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtCancelConvertSelectionProc,4, 32038, 10, 1.3, NULL, 32037, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtCancelConvertSelectionProc,8, 32038, 9, 2.0, NULL, 32037, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCancelConvertSelectionProc,4, 32038, 6, 1.2, NULL, 32037, NULL)
#elif defined __ia64__
CheckTypeSize(XtCancelConvertSelectionProc,8, 32038, 3, 1.3, NULL, 32037, NULL)
#elif defined __i386__
CheckTypeSize(XtCancelConvertSelectionProc,4, 32038, 2, 1.2, NULL, 32037, NULL)
#else
Msg("Find size of XtCancelConvertSelectionProc (32038)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32037,NULL);\n",architecture,32038,0);
#endif

#if defined __s390x__
CheckTypeSize(XtConvertSelectionIncrProc,8, 32040, 12, 1.3, NULL, 32039, NULL)
#elif defined __x86_64__
CheckTypeSize(XtConvertSelectionIncrProc,8, 32040, 11, 2.0, NULL, 32039, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtConvertSelectionIncrProc,4, 32040, 10, 1.3, NULL, 32039, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtConvertSelectionIncrProc,8, 32040, 9, 2.0, NULL, 32039, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtConvertSelectionIncrProc,4, 32040, 6, 1.2, NULL, 32039, NULL)
#elif defined __ia64__
CheckTypeSize(XtConvertSelectionIncrProc,8, 32040, 3, 1.3, NULL, 32039, NULL)
#elif defined __i386__
CheckTypeSize(XtConvertSelectionIncrProc,4, 32040, 2, 1.2, NULL, 32039, NULL)
#else
Msg("Find size of XtConvertSelectionIncrProc (32040)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32039,NULL);\n",architecture,32040,0);
#endif

#if defined __s390x__
CheckTypeSize(XtSelectionDoneIncrProc,8, 32041, 12, 1.3, NULL, 32037, NULL)
#elif defined __x86_64__
CheckTypeSize(XtSelectionDoneIncrProc,8, 32041, 11, 2.0, NULL, 32037, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtSelectionDoneIncrProc,4, 32041, 10, 1.3, NULL, 32037, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtSelectionDoneIncrProc,8, 32041, 9, 2.0, NULL, 32037, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtSelectionDoneIncrProc,4, 32041, 6, 1.2, NULL, 32037, NULL)
#elif defined __ia64__
CheckTypeSize(XtSelectionDoneIncrProc,8, 32041, 3, 1.3, NULL, 32037, NULL)
#elif defined __i386__
CheckTypeSize(XtSelectionDoneIncrProc,4, 32041, 2, 1.2, NULL, 32037, NULL)
#else
Msg("Find size of XtSelectionDoneIncrProc (32041)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32037,NULL);\n",architecture,32041,0);
#endif

#if defined __s390x__
CheckTypeSize(XtLoseSelectionIncrProc,8, 32043, 12, 1.3, NULL, 32042, NULL)
#elif defined __x86_64__
CheckTypeSize(XtLoseSelectionIncrProc,8, 32043, 11, 2.0, NULL, 32042, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtLoseSelectionIncrProc,4, 32043, 10, 1.3, NULL, 32042, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtLoseSelectionIncrProc,8, 32043, 9, 2.0, NULL, 32042, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtLoseSelectionIncrProc,4, 32043, 6, 1.2, NULL, 32042, NULL)
#elif defined __ia64__
CheckTypeSize(XtLoseSelectionIncrProc,8, 32043, 3, 1.3, NULL, 32042, NULL)
#elif defined __i386__
CheckTypeSize(XtLoseSelectionIncrProc,4, 32043, 2, 1.2, NULL, 32042, NULL)
#else
Msg("Find size of XtLoseSelectionIncrProc (32043)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32042,NULL);\n",architecture,32043,0);
#endif

#if defined __s390x__
CheckTypeSize(XtValueMask,8, 32055, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(XtValueMask,8, 32055, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtValueMask,4, 32055, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtValueMask,8, 32055, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtValueMask,4, 32055, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtValueMask,8, 32055, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtValueMask,4, 32055, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtValueMask (32055)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,32055,0);
#endif

#if defined __s390x__
CheckTypeSize(XtEventTable,8, 32112, 12, 1.3, NULL, 9591, NULL)
#elif defined __x86_64__
CheckTypeSize(XtEventTable,8, 32112, 11, 2.0, NULL, 9591, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtEventTable,4, 32112, 10, 1.3, NULL, 9591, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtEventTable,8, 32112, 9, 2.0, NULL, 9591, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtEventTable,4, 32112, 6, 1.2, NULL, 9591, NULL)
#elif defined __ia64__
CheckTypeSize(XtEventTable,8, 32112, 3, 1.3, NULL, 9591, NULL)
#elif defined __i386__
CheckTypeSize(XtEventTable,4, 32112, 2, 1.2, NULL, 9591, NULL)
#else
Msg("Find size of XtEventTable (32112)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9591,NULL);\n",architecture,32112,0);
#endif

#if 1
CheckTypeSize(XtCreatePopupChildProc,0, 32131, 1, 1.2, NULL, 32173, NULL)
#endif

#if 1
CheckTypeSize(XtResource,0, 36858, 1, 1.2, NULL, 31920, NULL)
#endif

#if 1
CheckTypeSize(XtCallbackRec,0, 36859, 1, 1.2, NULL, 31981, NULL)
#endif

#if 1
CheckTypeSize(XtCheckpointTokenRec,0, 36860, 1, 1.2, NULL, 32029, NULL)
#endif

#if 1
CheckTypeSize(Pixel,0, 36861, 1, 1.1, NULL, 11186, NULL)
#endif

#if 1
CheckTypeSize(XtActionsRec,0, 36865, 1, 1.2, NULL, 31930, NULL)
#endif

#if 1
CheckTypeSize(XtPopdownIDRec,0, 36873, 1, 1.2, NULL, 36872, NULL)
#endif

#if 1
CheckTypeSize(XtPopdownID,0, 36874, 1, 1.2, NULL, 36875, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XtBoundActions,8, 36877, 12, 1.3, NULL, 32130, NULL)
#elif defined __x86_64__
CheckTypeSize(XtBoundActions,8, 36877, 11, 2.0, NULL, 32130, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtBoundActions,4, 36877, 10, 1.3, NULL, 32130, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtBoundActions,8, 36877, 9, 2.0, NULL, 32130, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtBoundActions,4, 36877, 6, 1.2, NULL, 32130, NULL)
#elif defined __ia64__
CheckTypeSize(XtBoundActions,8, 36877, 3, 1.3, NULL, 32130, NULL)
#elif defined __i386__
CheckTypeSize(XtBoundActions,4, 36877, 2, 1.2, NULL, 32130, NULL)
#else
Msg("Find size of XtBoundActions (36877)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32130,NULL);\n",architecture,36877,0);
#endif

#if 1
CheckTypeSize(XtCreateHookDataRec,0, 36882, 1, 1.2, NULL, 36881, NULL)
#endif

#if 1
CheckTypeSize(XtCreateHookData,0, 36883, 1, 1.2, NULL, 36884, NULL)
#endif

#if 1
CheckTypeSize(XtChangeHookDataRec,0, 36886, 1, 1.2, NULL, 36885, NULL)
#endif

#if 1
CheckTypeSize(XtChangeHookData,0, 36887, 1, 1.2, NULL, 36888, NULL)
#endif

#if 1
CheckTypeSize(XtChangeHookSetValuesDataRec,0, 36890, 1, 1.2, NULL, 36889, NULL)
#endif

#if 1
CheckTypeSize(XtChangeHookSetValuesData,0, 36891, 1, 1.2, NULL, 36892, NULL)
#endif

#if 1
CheckTypeSize(XtConfigureHookDataRec,0, 36894, 1, 1.2, NULL, 36893, NULL)
#endif

#if 1
CheckTypeSize(XtConfigureHookData,0, 36895, 1, 1.2, NULL, 36896, NULL)
#endif

#if 1
CheckTypeSize(XtGeometryHookDataRec,0, 36898, 1, 1.2, NULL, 36897, NULL)
#endif

#if 1
CheckTypeSize(XtGeometryHookData,0, 36899, 1, 1.2, NULL, 36900, NULL)
#endif

#if 1
CheckTypeSize(XtDestroyHookDataRec,0, 36902, 1, 1.2, NULL, 36901, NULL)
#endif

#if 1
CheckTypeSize(XtDestroyHookData,0, 36903, 1, 1.2, NULL, 36904, NULL)
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtActionProc_db)(Widget, XEvent *, String *, Cardinal *);
CheckFunctionTypedef(XtActionProc,XtActionProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtActionProc_db)(Widget, XEvent *, String *, Cardinal *);
CheckFunctionTypedef(XtActionProc,XtActionProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtActionProc_db)(Widget, XEvent *, String *, Cardinal *);
CheckFunctionTypedef(XtActionProc,XtActionProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtActionProc_db)(Widget, XEvent *, String *, Cardinal *);
CheckFunctionTypedef(XtActionProc,XtActionProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtActionProc_db)(Widget, XEvent *, String *, Cardinal *);
CheckFunctionTypedef(XtActionProc,XtActionProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtActionProc_db)(Widget, XEvent *, String *, Cardinal *);
CheckFunctionTypedef(XtActionProc,XtActionProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtActionProc_db)(Widget, XEvent *, String *, Cardinal *);
CheckFunctionTypedef(XtActionProc,XtActionProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtSignalCallbackProc_db)(XtPointer, XtSignalId *);
CheckFunctionTypedef(XtSignalCallbackProc,XtSignalCallbackProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtSignalCallbackProc_db)(XtPointer, XtSignalId *);
CheckFunctionTypedef(XtSignalCallbackProc,XtSignalCallbackProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtSignalCallbackProc_db)(XtPointer, XtSignalId *);
CheckFunctionTypedef(XtSignalCallbackProc,XtSignalCallbackProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtSignalCallbackProc_db)(XtPointer, XtSignalId *);
CheckFunctionTypedef(XtSignalCallbackProc,XtSignalCallbackProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtSignalCallbackProc_db)(XtPointer, XtSignalId *);
CheckFunctionTypedef(XtSignalCallbackProc,XtSignalCallbackProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtSignalCallbackProc_db)(XtPointer, XtSignalId *);
CheckFunctionTypedef(XtSignalCallbackProc,XtSignalCallbackProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtSignalCallbackProc_db)(XtPointer, XtSignalId *);
CheckFunctionTypedef(XtSignalCallbackProc,XtSignalCallbackProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtInputCallbackProc_db)(XtPointer, int *, XtInputId *);
CheckFunctionTypedef(XtInputCallbackProc,XtInputCallbackProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtInputCallbackProc_db)(XtPointer, int *, XtInputId *);
CheckFunctionTypedef(XtInputCallbackProc,XtInputCallbackProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtInputCallbackProc_db)(XtPointer, int *, XtInputId *);
CheckFunctionTypedef(XtInputCallbackProc,XtInputCallbackProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtInputCallbackProc_db)(XtPointer, int *, XtInputId *);
CheckFunctionTypedef(XtInputCallbackProc,XtInputCallbackProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtInputCallbackProc_db)(XtPointer, int *, XtInputId *);
CheckFunctionTypedef(XtInputCallbackProc,XtInputCallbackProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtInputCallbackProc_db)(XtPointer, int *, XtInputId *);
CheckFunctionTypedef(XtInputCallbackProc,XtInputCallbackProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtInputCallbackProc_db)(XtPointer, int *, XtInputId *);
CheckFunctionTypedef(XtInputCallbackProc,XtInputCallbackProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtTimerCallbackProc_db)(XtPointer, XtIntervalId *);
CheckFunctionTypedef(XtTimerCallbackProc,XtTimerCallbackProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtTimerCallbackProc_db)(XtPointer, XtIntervalId *);
CheckFunctionTypedef(XtTimerCallbackProc,XtTimerCallbackProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtTimerCallbackProc_db)(XtPointer, XtIntervalId *);
CheckFunctionTypedef(XtTimerCallbackProc,XtTimerCallbackProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtTimerCallbackProc_db)(XtPointer, XtIntervalId *);
CheckFunctionTypedef(XtTimerCallbackProc,XtTimerCallbackProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtTimerCallbackProc_db)(XtPointer, XtIntervalId *);
CheckFunctionTypedef(XtTimerCallbackProc,XtTimerCallbackProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtTimerCallbackProc_db)(XtPointer, XtIntervalId *);
CheckFunctionTypedef(XtTimerCallbackProc,XtTimerCallbackProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtTimerCallbackProc_db)(XtPointer, XtIntervalId *);
CheckFunctionTypedef(XtTimerCallbackProc,XtTimerCallbackProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtCallbackProc_db)(Widget, XtPointer, XtPointer);
CheckFunctionTypedef(XtCallbackProc,XtCallbackProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtCallbackProc_db)(Widget, XtPointer, XtPointer);
CheckFunctionTypedef(XtCallbackProc,XtCallbackProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtCallbackProc_db)(Widget, XtPointer, XtPointer);
CheckFunctionTypedef(XtCallbackProc,XtCallbackProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtCallbackProc_db)(Widget, XtPointer, XtPointer);
CheckFunctionTypedef(XtCallbackProc,XtCallbackProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtCallbackProc_db)(Widget, XtPointer, XtPointer);
CheckFunctionTypedef(XtCallbackProc,XtCallbackProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtCallbackProc_db)(Widget, XtPointer, XtPointer);
CheckFunctionTypedef(XtCallbackProc,XtCallbackProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtCallbackProc_db)(Widget, XtPointer, XtPointer);
CheckFunctionTypedef(XtCallbackProc,XtCallbackProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtEventHandler_db)(Widget, XtPointer, XEvent *, Boolean *);
CheckFunctionTypedef(XtEventHandler,XtEventHandler_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtEventHandler_db)(Widget, XtPointer, XEvent *, Boolean *);
CheckFunctionTypedef(XtEventHandler,XtEventHandler_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtEventHandler_db)(Widget, XtPointer, XEvent *, Boolean *);
CheckFunctionTypedef(XtEventHandler,XtEventHandler_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtEventHandler_db)(Widget, XtPointer, XEvent *, Boolean *);
CheckFunctionTypedef(XtEventHandler,XtEventHandler_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtEventHandler_db)(Widget, XtPointer, XEvent *, Boolean *);
CheckFunctionTypedef(XtEventHandler,XtEventHandler_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtEventHandler_db)(Widget, XtPointer, XEvent *, Boolean *);
CheckFunctionTypedef(XtEventHandler,XtEventHandler_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtEventHandler_db)(Widget, XtPointer, XEvent *, Boolean *);
CheckFunctionTypedef(XtEventHandler,XtEventHandler_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtCaseProc_db)(Display *, KeySym, KeySym *, KeySym *);
CheckFunctionTypedef(XtCaseProc,XtCaseProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtCaseProc_db)(Display *, KeySym, KeySym *, KeySym *);
CheckFunctionTypedef(XtCaseProc,XtCaseProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtCaseProc_db)(Display *, KeySym, KeySym *, KeySym *);
CheckFunctionTypedef(XtCaseProc,XtCaseProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtCaseProc_db)(Display *, KeySym, KeySym *, KeySym *);
CheckFunctionTypedef(XtCaseProc,XtCaseProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtCaseProc_db)(Display *, KeySym, KeySym *, KeySym *);
CheckFunctionTypedef(XtCaseProc,XtCaseProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtCaseProc_db)(Display *, KeySym, KeySym *, KeySym *);
CheckFunctionTypedef(XtCaseProc,XtCaseProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtCaseProc_db)(Display *, KeySym, KeySym *, KeySym *);
CheckFunctionTypedef(XtCaseProc,XtCaseProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtKeyProc_db)(Display *, unsigned int, Modifiers, Modifiers *, KeySym *);
CheckFunctionTypedef(XtKeyProc,XtKeyProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtKeyProc_db)(Display *, unsigned int, Modifiers, Modifiers *, KeySym *);
CheckFunctionTypedef(XtKeyProc,XtKeyProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtKeyProc_db)(Display *, unsigned int, Modifiers, Modifiers *, KeySym *);
CheckFunctionTypedef(XtKeyProc,XtKeyProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtKeyProc_db)(Display *, unsigned int, Modifiers, Modifiers *, KeySym *);
CheckFunctionTypedef(XtKeyProc,XtKeyProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtKeyProc_db)(Display *, unsigned int, Modifiers, Modifiers *, KeySym *);
CheckFunctionTypedef(XtKeyProc,XtKeyProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtKeyProc_db)(Display *, unsigned int, Modifiers, Modifiers *, KeySym *);
CheckFunctionTypedef(XtKeyProc,XtKeyProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtKeyProc_db)(Display *, unsigned int, Modifiers, Modifiers *, KeySym *);
CheckFunctionTypedef(XtKeyProc,XtKeyProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtBlockHookProc_db)(XtPointer);
CheckFunctionTypedef(XtBlockHookProc,XtBlockHookProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtBlockHookProc_db)(XtPointer);
CheckFunctionTypedef(XtBlockHookProc,XtBlockHookProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtBlockHookProc_db)(XtPointer);
CheckFunctionTypedef(XtBlockHookProc,XtBlockHookProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtBlockHookProc_db)(XtPointer);
CheckFunctionTypedef(XtBlockHookProc,XtBlockHookProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtBlockHookProc_db)(XtPointer);
CheckFunctionTypedef(XtBlockHookProc,XtBlockHookProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtBlockHookProc_db)(XtPointer);
CheckFunctionTypedef(XtBlockHookProc,XtBlockHookProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtBlockHookProc_db)(XtPointer);
CheckFunctionTypedef(XtBlockHookProc,XtBlockHookProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtActionHookProc_db)(Widget, XtPointer, String, XEvent *, String *, Cardinal *);
CheckFunctionTypedef(XtActionHookProc,XtActionHookProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtActionHookProc_db)(Widget, XtPointer, String, XEvent *, String *, Cardinal *);
CheckFunctionTypedef(XtActionHookProc,XtActionHookProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtActionHookProc_db)(Widget, XtPointer, String, XEvent *, String *, Cardinal *);
CheckFunctionTypedef(XtActionHookProc,XtActionHookProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtActionHookProc_db)(Widget, XtPointer, String, XEvent *, String *, Cardinal *);
CheckFunctionTypedef(XtActionHookProc,XtActionHookProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtActionHookProc_db)(Widget, XtPointer, String, XEvent *, String *, Cardinal *);
CheckFunctionTypedef(XtActionHookProc,XtActionHookProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtActionHookProc_db)(Widget, XtPointer, String, XEvent *, String *, Cardinal *);
CheckFunctionTypedef(XtActionHookProc,XtActionHookProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtActionHookProc_db)(Widget, XtPointer, String, XEvent *, String *, Cardinal *);
CheckFunctionTypedef(XtActionHookProc,XtActionHookProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtDestructor_db)(XtAppContext, XrmValue *, XtPointer, XrmValue *, Cardinal *);
CheckFunctionTypedef(XtDestructor,XtDestructor_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtDestructor_db)(XtAppContext, XrmValue *, XtPointer, XrmValue *, Cardinal *);
CheckFunctionTypedef(XtDestructor,XtDestructor_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtDestructor_db)(XtAppContext, XrmValue *, XtPointer, XrmValue *, Cardinal *);
CheckFunctionTypedef(XtDestructor,XtDestructor_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtDestructor_db)(XtAppContext, XrmValue *, XtPointer, XrmValue *, Cardinal *);
CheckFunctionTypedef(XtDestructor,XtDestructor_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtDestructor_db)(XtAppContext, XrmValue *, XtPointer, XrmValue *, Cardinal *);
CheckFunctionTypedef(XtDestructor,XtDestructor_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtDestructor_db)(XtAppContext, XrmValue *, XtPointer, XrmValue *, Cardinal *);
CheckFunctionTypedef(XtDestructor,XtDestructor_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtDestructor_db)(XtAppContext, XrmValue *, XtPointer, XrmValue *, Cardinal *);
CheckFunctionTypedef(XtDestructor,XtDestructor_db);
#endif

#if defined __s390x__
/* S390X */
typedef Boolean (*XtTypeConverter_db)(Display *, XrmValue *, Cardinal *, XrmValue *, XrmValue *, XtPointer *);
CheckFunctionTypedef(XtTypeConverter,XtTypeConverter_db);
#elif defined __x86_64__
/* x86-64 */
typedef Boolean (*XtTypeConverter_db)(Display *, XrmValue *, Cardinal *, XrmValue *, XrmValue *, XtPointer *);
CheckFunctionTypedef(XtTypeConverter,XtTypeConverter_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef Boolean (*XtTypeConverter_db)(Display *, XrmValue *, Cardinal *, XrmValue *, XrmValue *, XtPointer *);
CheckFunctionTypedef(XtTypeConverter,XtTypeConverter_db);
#elif defined __powerpc64__
/* PPC64 */
typedef Boolean (*XtTypeConverter_db)(Display *, XrmValue *, Cardinal *, XrmValue *, XrmValue *, XtPointer *);
CheckFunctionTypedef(XtTypeConverter,XtTypeConverter_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef Boolean (*XtTypeConverter_db)(Display *, XrmValue *, Cardinal *, XrmValue *, XrmValue *, XtPointer *);
CheckFunctionTypedef(XtTypeConverter,XtTypeConverter_db);
#elif defined __ia64__
/* IA64 */
typedef Boolean (*XtTypeConverter_db)(Display *, XrmValue *, Cardinal *, XrmValue *, XrmValue *, XtPointer *);
CheckFunctionTypedef(XtTypeConverter,XtTypeConverter_db);
#elif defined __i386__
/* IA32 */
typedef Boolean (*XtTypeConverter_db)(Display *, XrmValue *, Cardinal *, XrmValue *, XrmValue *, XtPointer *);
CheckFunctionTypedef(XtTypeConverter,XtTypeConverter_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtConverter_db)(XrmValue *, Cardinal *, XrmValue *, XrmValue *);
CheckFunctionTypedef(XtConverter,XtConverter_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtConverter_db)(XrmValue *, Cardinal *, XrmValue *, XrmValue *);
CheckFunctionTypedef(XtConverter,XtConverter_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtConverter_db)(XrmValue *, Cardinal *, XrmValue *, XrmValue *);
CheckFunctionTypedef(XtConverter,XtConverter_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtConverter_db)(XrmValue *, Cardinal *, XrmValue *, XrmValue *);
CheckFunctionTypedef(XtConverter,XtConverter_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtConverter_db)(XrmValue *, Cardinal *, XrmValue *, XrmValue *);
CheckFunctionTypedef(XtConverter,XtConverter_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtConverter_db)(XrmValue *, Cardinal *, XrmValue *, XrmValue *);
CheckFunctionTypedef(XtConverter,XtConverter_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtConverter_db)(XrmValue *, Cardinal *, XrmValue *, XrmValue *);
CheckFunctionTypedef(XtConverter,XtConverter_db);
#endif

#if defined __s390x__
/* S390X */
typedef Boolean (*XtFilePredicate_db)(String);
CheckFunctionTypedef(XtFilePredicate,XtFilePredicate_db);
#elif defined __x86_64__
/* x86-64 */
typedef Boolean (*XtFilePredicate_db)(String);
CheckFunctionTypedef(XtFilePredicate,XtFilePredicate_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef Boolean (*XtFilePredicate_db)(String);
CheckFunctionTypedef(XtFilePredicate,XtFilePredicate_db);
#elif defined __powerpc64__
/* PPC64 */
typedef Boolean (*XtFilePredicate_db)(String);
CheckFunctionTypedef(XtFilePredicate,XtFilePredicate_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef Boolean (*XtFilePredicate_db)(String);
CheckFunctionTypedef(XtFilePredicate,XtFilePredicate_db);
#elif defined __ia64__
/* IA64 */
typedef Boolean (*XtFilePredicate_db)(String);
CheckFunctionTypedef(XtFilePredicate,XtFilePredicate_db);
#elif defined __i386__
/* IA32 */
typedef Boolean (*XtFilePredicate_db)(String);
CheckFunctionTypedef(XtFilePredicate,XtFilePredicate_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtSelectionCallbackProc_db)(Widget, XtPointer, Atom *, Atom *, XtPointer, long unsigned int *, int *);
CheckFunctionTypedef(XtSelectionCallbackProc,XtSelectionCallbackProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtSelectionCallbackProc_db)(Widget, XtPointer, Atom *, Atom *, XtPointer, long unsigned int *, int *);
CheckFunctionTypedef(XtSelectionCallbackProc,XtSelectionCallbackProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtSelectionCallbackProc_db)(Widget, XtPointer, Atom *, Atom *, XtPointer, long unsigned int *, int *);
CheckFunctionTypedef(XtSelectionCallbackProc,XtSelectionCallbackProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtSelectionCallbackProc_db)(Widget, XtPointer, Atom *, Atom *, XtPointer, long unsigned int *, int *);
CheckFunctionTypedef(XtSelectionCallbackProc,XtSelectionCallbackProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtSelectionCallbackProc_db)(Widget, XtPointer, Atom *, Atom *, XtPointer, long unsigned int *, int *);
CheckFunctionTypedef(XtSelectionCallbackProc,XtSelectionCallbackProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtSelectionCallbackProc_db)(Widget, XtPointer, Atom *, Atom *, XtPointer, long unsigned int *, int *);
CheckFunctionTypedef(XtSelectionCallbackProc,XtSelectionCallbackProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtSelectionCallbackProc_db)(Widget, XtPointer, Atom *, Atom *, XtPointer, long unsigned int *, int *);
CheckFunctionTypedef(XtSelectionCallbackProc,XtSelectionCallbackProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef Boolean (*XtWorkProc_db)(XtPointer);
CheckFunctionTypedef(XtWorkProc,XtWorkProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef Boolean (*XtWorkProc_db)(XtPointer);
CheckFunctionTypedef(XtWorkProc,XtWorkProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef Boolean (*XtWorkProc_db)(XtPointer);
CheckFunctionTypedef(XtWorkProc,XtWorkProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef Boolean (*XtWorkProc_db)(XtPointer);
CheckFunctionTypedef(XtWorkProc,XtWorkProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef Boolean (*XtWorkProc_db)(XtPointer);
CheckFunctionTypedef(XtWorkProc,XtWorkProc_db);
#elif defined __ia64__
/* IA64 */
typedef Boolean (*XtWorkProc_db)(XtPointer);
CheckFunctionTypedef(XtWorkProc,XtWorkProc_db);
#elif defined __i386__
/* IA32 */
typedef Boolean (*XtWorkProc_db)(XtPointer);
CheckFunctionTypedef(XtWorkProc,XtWorkProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtSelectionDoneProc_db)(Widget, Atom *, Atom *);
CheckFunctionTypedef(XtSelectionDoneProc,XtSelectionDoneProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtSelectionDoneProc_db)(Widget, Atom *, Atom *);
CheckFunctionTypedef(XtSelectionDoneProc,XtSelectionDoneProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtSelectionDoneProc_db)(Widget, Atom *, Atom *);
CheckFunctionTypedef(XtSelectionDoneProc,XtSelectionDoneProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtSelectionDoneProc_db)(Widget, Atom *, Atom *);
CheckFunctionTypedef(XtSelectionDoneProc,XtSelectionDoneProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtSelectionDoneProc_db)(Widget, Atom *, Atom *);
CheckFunctionTypedef(XtSelectionDoneProc,XtSelectionDoneProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtSelectionDoneProc_db)(Widget, Atom *, Atom *);
CheckFunctionTypedef(XtSelectionDoneProc,XtSelectionDoneProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtSelectionDoneProc_db)(Widget, Atom *, Atom *);
CheckFunctionTypedef(XtSelectionDoneProc,XtSelectionDoneProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtLoseSelectionProc_db)(Widget, Atom *);
CheckFunctionTypedef(XtLoseSelectionProc,XtLoseSelectionProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtLoseSelectionProc_db)(Widget, Atom *);
CheckFunctionTypedef(XtLoseSelectionProc,XtLoseSelectionProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtLoseSelectionProc_db)(Widget, Atom *);
CheckFunctionTypedef(XtLoseSelectionProc,XtLoseSelectionProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtLoseSelectionProc_db)(Widget, Atom *);
CheckFunctionTypedef(XtLoseSelectionProc,XtLoseSelectionProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtLoseSelectionProc_db)(Widget, Atom *);
CheckFunctionTypedef(XtLoseSelectionProc,XtLoseSelectionProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtLoseSelectionProc_db)(Widget, Atom *);
CheckFunctionTypedef(XtLoseSelectionProc,XtLoseSelectionProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtLoseSelectionProc_db)(Widget, Atom *);
CheckFunctionTypedef(XtLoseSelectionProc,XtLoseSelectionProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtErrorHandler_db)(String);
CheckFunctionTypedef(XtErrorHandler,XtErrorHandler_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtErrorHandler_db)(String);
CheckFunctionTypedef(XtErrorHandler,XtErrorHandler_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtErrorHandler_db)(String);
CheckFunctionTypedef(XtErrorHandler,XtErrorHandler_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtErrorHandler_db)(String);
CheckFunctionTypedef(XtErrorHandler,XtErrorHandler_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtErrorHandler_db)(String);
CheckFunctionTypedef(XtErrorHandler,XtErrorHandler_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtErrorHandler_db)(String);
CheckFunctionTypedef(XtErrorHandler,XtErrorHandler_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtErrorHandler_db)(String);
CheckFunctionTypedef(XtErrorHandler,XtErrorHandler_db);
#endif

#if defined __s390x__
/* S390X */
typedef Boolean (*XtConvertSelectionProc_db)(Widget, Atom *, Atom *, Atom *, XtPointer *, long unsigned int *, int *);
CheckFunctionTypedef(XtConvertSelectionProc,XtConvertSelectionProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef Boolean (*XtConvertSelectionProc_db)(Widget, Atom *, Atom *, Atom *, XtPointer *, long unsigned int *, int *);
CheckFunctionTypedef(XtConvertSelectionProc,XtConvertSelectionProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef Boolean (*XtConvertSelectionProc_db)(Widget, Atom *, Atom *, Atom *, XtPointer *, long unsigned int *, int *);
CheckFunctionTypedef(XtConvertSelectionProc,XtConvertSelectionProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef Boolean (*XtConvertSelectionProc_db)(Widget, Atom *, Atom *, Atom *, XtPointer *, long unsigned int *, int *);
CheckFunctionTypedef(XtConvertSelectionProc,XtConvertSelectionProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef Boolean (*XtConvertSelectionProc_db)(Widget, Atom *, Atom *, Atom *, XtPointer *, long unsigned int *, int *);
CheckFunctionTypedef(XtConvertSelectionProc,XtConvertSelectionProc_db);
#elif defined __ia64__
/* IA64 */
typedef Boolean (*XtConvertSelectionProc_db)(Widget, Atom *, Atom *, Atom *, XtPointer *, long unsigned int *, int *);
CheckFunctionTypedef(XtConvertSelectionProc,XtConvertSelectionProc_db);
#elif defined __i386__
/* IA32 */
typedef Boolean (*XtConvertSelectionProc_db)(Widget, Atom *, Atom *, Atom *, XtPointer *, long unsigned int *, int *);
CheckFunctionTypedef(XtConvertSelectionProc,XtConvertSelectionProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtErrorMsgHandler_db)(String, String, String, String, String *, Cardinal *);
CheckFunctionTypedef(XtErrorMsgHandler,XtErrorMsgHandler_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtErrorMsgHandler_db)(String, String, String, String, String *, Cardinal *);
CheckFunctionTypedef(XtErrorMsgHandler,XtErrorMsgHandler_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtErrorMsgHandler_db)(String, String, String, String, String *, Cardinal *);
CheckFunctionTypedef(XtErrorMsgHandler,XtErrorMsgHandler_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtErrorMsgHandler_db)(String, String, String, String, String *, Cardinal *);
CheckFunctionTypedef(XtErrorMsgHandler,XtErrorMsgHandler_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtErrorMsgHandler_db)(String, String, String, String, String *, Cardinal *);
CheckFunctionTypedef(XtErrorMsgHandler,XtErrorMsgHandler_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtErrorMsgHandler_db)(String, String, String, String, String *, Cardinal *);
CheckFunctionTypedef(XtErrorMsgHandler,XtErrorMsgHandler_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtErrorMsgHandler_db)(String, String, String, String, String *, Cardinal *);
CheckFunctionTypedef(XtErrorMsgHandler,XtErrorMsgHandler_db);
#endif

#if defined __s390x__
/* S390X */
typedef String (*XtLanguageProc_db)(Display *, String, XtPointer);
CheckFunctionTypedef(XtLanguageProc,XtLanguageProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef String (*XtLanguageProc_db)(Display *, String, XtPointer);
CheckFunctionTypedef(XtLanguageProc,XtLanguageProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef String (*XtLanguageProc_db)(Display *, String, XtPointer);
CheckFunctionTypedef(XtLanguageProc,XtLanguageProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef String (*XtLanguageProc_db)(Display *, String, XtPointer);
CheckFunctionTypedef(XtLanguageProc,XtLanguageProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef String (*XtLanguageProc_db)(Display *, String, XtPointer);
CheckFunctionTypedef(XtLanguageProc,XtLanguageProc_db);
#elif defined __ia64__
/* IA64 */
typedef String (*XtLanguageProc_db)(Display *, String, XtPointer);
CheckFunctionTypedef(XtLanguageProc,XtLanguageProc_db);
#elif defined __i386__
/* IA32 */
typedef String (*XtLanguageProc_db)(Display *, String, XtPointer);
CheckFunctionTypedef(XtLanguageProc,XtLanguageProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtExtensionSelectProc_db)(Widget, int *, XtPointer *, int, XtPointer);
CheckFunctionTypedef(XtExtensionSelectProc,XtExtensionSelectProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtExtensionSelectProc_db)(Widget, int *, XtPointer *, int, XtPointer);
CheckFunctionTypedef(XtExtensionSelectProc,XtExtensionSelectProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtExtensionSelectProc_db)(Widget, int *, XtPointer *, int, XtPointer);
CheckFunctionTypedef(XtExtensionSelectProc,XtExtensionSelectProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtExtensionSelectProc_db)(Widget, int *, XtPointer *, int, XtPointer);
CheckFunctionTypedef(XtExtensionSelectProc,XtExtensionSelectProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtExtensionSelectProc_db)(Widget, int *, XtPointer *, int, XtPointer);
CheckFunctionTypedef(XtExtensionSelectProc,XtExtensionSelectProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtExtensionSelectProc_db)(Widget, int *, XtPointer *, int, XtPointer);
CheckFunctionTypedef(XtExtensionSelectProc,XtExtensionSelectProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtExtensionSelectProc_db)(Widget, int *, XtPointer *, int, XtPointer);
CheckFunctionTypedef(XtExtensionSelectProc,XtExtensionSelectProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef Boolean (*XtEventDispatchProc_db)(XEvent *);
CheckFunctionTypedef(XtEventDispatchProc,XtEventDispatchProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef Boolean (*XtEventDispatchProc_db)(XEvent *);
CheckFunctionTypedef(XtEventDispatchProc,XtEventDispatchProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef Boolean (*XtEventDispatchProc_db)(XEvent *);
CheckFunctionTypedef(XtEventDispatchProc,XtEventDispatchProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef Boolean (*XtEventDispatchProc_db)(XEvent *);
CheckFunctionTypedef(XtEventDispatchProc,XtEventDispatchProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef Boolean (*XtEventDispatchProc_db)(XEvent *);
CheckFunctionTypedef(XtEventDispatchProc,XtEventDispatchProc_db);
#elif defined __ia64__
/* IA64 */
typedef Boolean (*XtEventDispatchProc_db)(XEvent *);
CheckFunctionTypedef(XtEventDispatchProc,XtEventDispatchProc_db);
#elif defined __i386__
/* IA32 */
typedef Boolean (*XtEventDispatchProc_db)(XEvent *);
CheckFunctionTypedef(XtEventDispatchProc,XtEventDispatchProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtCancelConvertSelectionProc_db)(Widget, Atom *, Atom *, XtRequestId *, XtPointer);
CheckFunctionTypedef(XtCancelConvertSelectionProc,XtCancelConvertSelectionProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtCancelConvertSelectionProc_db)(Widget, Atom *, Atom *, XtRequestId *, XtPointer);
CheckFunctionTypedef(XtCancelConvertSelectionProc,XtCancelConvertSelectionProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtCancelConvertSelectionProc_db)(Widget, Atom *, Atom *, XtRequestId *, XtPointer);
CheckFunctionTypedef(XtCancelConvertSelectionProc,XtCancelConvertSelectionProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtCancelConvertSelectionProc_db)(Widget, Atom *, Atom *, XtRequestId *, XtPointer);
CheckFunctionTypedef(XtCancelConvertSelectionProc,XtCancelConvertSelectionProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtCancelConvertSelectionProc_db)(Widget, Atom *, Atom *, XtRequestId *, XtPointer);
CheckFunctionTypedef(XtCancelConvertSelectionProc,XtCancelConvertSelectionProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtCancelConvertSelectionProc_db)(Widget, Atom *, Atom *, XtRequestId *, XtPointer);
CheckFunctionTypedef(XtCancelConvertSelectionProc,XtCancelConvertSelectionProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtCancelConvertSelectionProc_db)(Widget, Atom *, Atom *, XtRequestId *, XtPointer);
CheckFunctionTypedef(XtCancelConvertSelectionProc,XtCancelConvertSelectionProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef Boolean (*XtConvertSelectionIncrProc_db)(Widget, Atom *, Atom *, Atom *, XtPointer *, long unsigned int *, int *, long unsigned int *, XtPointer, XtRequestId *);
CheckFunctionTypedef(XtConvertSelectionIncrProc,XtConvertSelectionIncrProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef Boolean (*XtConvertSelectionIncrProc_db)(Widget, Atom *, Atom *, Atom *, XtPointer *, long unsigned int *, int *, long unsigned int *, XtPointer, XtRequestId *);
CheckFunctionTypedef(XtConvertSelectionIncrProc,XtConvertSelectionIncrProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef Boolean (*XtConvertSelectionIncrProc_db)(Widget, Atom *, Atom *, Atom *, XtPointer *, long unsigned int *, int *, long unsigned int *, XtPointer, XtRequestId *);
CheckFunctionTypedef(XtConvertSelectionIncrProc,XtConvertSelectionIncrProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef Boolean (*XtConvertSelectionIncrProc_db)(Widget, Atom *, Atom *, Atom *, XtPointer *, long unsigned int *, int *, long unsigned int *, XtPointer, XtRequestId *);
CheckFunctionTypedef(XtConvertSelectionIncrProc,XtConvertSelectionIncrProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef Boolean (*XtConvertSelectionIncrProc_db)(Widget, Atom *, Atom *, Atom *, XtPointer *, long unsigned int *, int *, long unsigned int *, XtPointer, XtRequestId *);
CheckFunctionTypedef(XtConvertSelectionIncrProc,XtConvertSelectionIncrProc_db);
#elif defined __ia64__
/* IA64 */
typedef Boolean (*XtConvertSelectionIncrProc_db)(Widget, Atom *, Atom *, Atom *, XtPointer *, long unsigned int *, int *, long unsigned int *, XtPointer, XtRequestId *);
CheckFunctionTypedef(XtConvertSelectionIncrProc,XtConvertSelectionIncrProc_db);
#elif defined __i386__
/* IA32 */
typedef Boolean (*XtConvertSelectionIncrProc_db)(Widget, Atom *, Atom *, Atom *, XtPointer *, long unsigned int *, int *, long unsigned int *, XtPointer, XtRequestId *);
CheckFunctionTypedef(XtConvertSelectionIncrProc,XtConvertSelectionIncrProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtSelectionDoneIncrProc_db)(Widget, Atom *, Atom *, XtRequestId *, XtPointer);
CheckFunctionTypedef(XtSelectionDoneIncrProc,XtSelectionDoneIncrProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtSelectionDoneIncrProc_db)(Widget, Atom *, Atom *, XtRequestId *, XtPointer);
CheckFunctionTypedef(XtSelectionDoneIncrProc,XtSelectionDoneIncrProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtSelectionDoneIncrProc_db)(Widget, Atom *, Atom *, XtRequestId *, XtPointer);
CheckFunctionTypedef(XtSelectionDoneIncrProc,XtSelectionDoneIncrProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtSelectionDoneIncrProc_db)(Widget, Atom *, Atom *, XtRequestId *, XtPointer);
CheckFunctionTypedef(XtSelectionDoneIncrProc,XtSelectionDoneIncrProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtSelectionDoneIncrProc_db)(Widget, Atom *, Atom *, XtRequestId *, XtPointer);
CheckFunctionTypedef(XtSelectionDoneIncrProc,XtSelectionDoneIncrProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtSelectionDoneIncrProc_db)(Widget, Atom *, Atom *, XtRequestId *, XtPointer);
CheckFunctionTypedef(XtSelectionDoneIncrProc,XtSelectionDoneIncrProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtSelectionDoneIncrProc_db)(Widget, Atom *, Atom *, XtRequestId *, XtPointer);
CheckFunctionTypedef(XtSelectionDoneIncrProc,XtSelectionDoneIncrProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtLoseSelectionIncrProc_db)(Widget, Atom *, XtPointer);
CheckFunctionTypedef(XtLoseSelectionIncrProc,XtLoseSelectionIncrProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtLoseSelectionIncrProc_db)(Widget, Atom *, XtPointer);
CheckFunctionTypedef(XtLoseSelectionIncrProc,XtLoseSelectionIncrProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtLoseSelectionIncrProc_db)(Widget, Atom *, XtPointer);
CheckFunctionTypedef(XtLoseSelectionIncrProc,XtLoseSelectionIncrProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtLoseSelectionIncrProc_db)(Widget, Atom *, XtPointer);
CheckFunctionTypedef(XtLoseSelectionIncrProc,XtLoseSelectionIncrProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtLoseSelectionIncrProc_db)(Widget, Atom *, XtPointer);
CheckFunctionTypedef(XtLoseSelectionIncrProc,XtLoseSelectionIncrProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtLoseSelectionIncrProc_db)(Widget, Atom *, XtPointer);
CheckFunctionTypedef(XtLoseSelectionIncrProc,XtLoseSelectionIncrProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtLoseSelectionIncrProc_db)(Widget, Atom *, XtPointer);
CheckFunctionTypedef(XtLoseSelectionIncrProc,XtLoseSelectionIncrProc_db);
#endif

#if 1
/* All */
typedef void (*XtCreatePopupChildProc_db)(Widget);
CheckFunctionTypedef(XtCreatePopupChildProc,XtCreatePopupChildProc_db);
#endif

extern void XtAddActions_db(XtActionList, Cardinal);
CheckInterfacedef(XtAddActions,XtAddActions_db);
extern void XtAddCallback_db(Widget, const char *, XtCallbackProc, XtPointer);
CheckInterfacedef(XtAddCallback,XtAddCallback_db);
extern void XtAddCallbacks_db(Widget, const char *, XtCallbackList);
CheckInterfacedef(XtAddCallbacks,XtAddCallbacks_db);
extern void XtAddConverter_db(const char *, const char *, XtConverter, XtConvertArgList, Cardinal);
CheckInterfacedef(XtAddConverter,XtAddConverter_db);
extern void XtAddEventHandler_db(Widget, EventMask, int, XtEventHandler, XtPointer);
CheckInterfacedef(XtAddEventHandler,XtAddEventHandler_db);
extern void XtAddExposureToRegion_db(XEvent *, Region);
CheckInterfacedef(XtAddExposureToRegion,XtAddExposureToRegion_db);
extern void XtAddGrab_db(Widget, int, int);
CheckInterfacedef(XtAddGrab,XtAddGrab_db);
extern XtInputId XtAddInput_db(int, XtPointer, XtInputCallbackProc, XtPointer);
CheckInterfacedef(XtAddInput,XtAddInput_db);
extern void XtAddRawEventHandler_db(Widget, EventMask, int, XtEventHandler, XtPointer);
CheckInterfacedef(XtAddRawEventHandler,XtAddRawEventHandler_db);
extern XtSignalId XtAddSignal_db(XtSignalCallbackProc, XtPointer);
CheckInterfacedef(XtAddSignal,XtAddSignal_db);
extern XtIntervalId XtAddTimeOut_db(long unsigned int, XtTimerCallbackProc, XtPointer);
CheckInterfacedef(XtAddTimeOut,XtAddTimeOut_db);
extern XtWorkProcId XtAddWorkProc_db(XtWorkProc, XtPointer);
CheckInterfacedef(XtAddWorkProc,XtAddWorkProc_db);
extern GC XtAllocateGC_db(Widget, Cardinal, XtGCMask, XGCValues *, XtGCMask, XtGCMask);
CheckInterfacedef(XtAllocateGC,XtAllocateGC_db);
extern XtActionHookId XtAppAddActionHook_db(XtAppContext, XtActionHookProc, XtPointer);
CheckInterfacedef(XtAppAddActionHook,XtAppAddActionHook_db);
extern void XtAppAddActions_db(XtAppContext, XtActionList, Cardinal);
CheckInterfacedef(XtAppAddActions,XtAppAddActions_db);
extern XtBlockHookId XtAppAddBlockHook_db(XtAppContext, XtBlockHookProc, XtPointer);
CheckInterfacedef(XtAppAddBlockHook,XtAppAddBlockHook_db);
extern void XtAppAddConverter_db(XtAppContext, const char *, const char *, XtConverter, XtConvertArgList, Cardinal);
CheckInterfacedef(XtAppAddConverter,XtAppAddConverter_db);
extern XtInputId XtAppAddInput_db(XtAppContext, int, XtPointer, XtInputCallbackProc, XtPointer);
CheckInterfacedef(XtAppAddInput,XtAppAddInput_db);
extern XtSignalId XtAppAddSignal_db(XtAppContext, XtSignalCallbackProc, XtPointer);
CheckInterfacedef(XtAppAddSignal,XtAppAddSignal_db);
extern XtIntervalId XtAppAddTimeOut_db(XtAppContext, long unsigned int, XtTimerCallbackProc, XtPointer);
CheckInterfacedef(XtAppAddTimeOut,XtAppAddTimeOut_db);
extern XtWorkProcId XtAppAddWorkProc_db(XtAppContext, XtWorkProc, XtPointer);
CheckInterfacedef(XtAppAddWorkProc,XtAppAddWorkProc_db);
extern Widget XtAppCreateShell_db(const char *, const char *, WidgetClass, Display *, ArgList, Cardinal);
CheckInterfacedef(XtAppCreateShell,XtAppCreateShell_db);
extern void XtAppError_db(XtAppContext, const char *);
CheckInterfacedef(XtAppError,XtAppError_db);
extern void XtAppErrorMsg_db(XtAppContext, const char *, const char *, const char *, const char *, String *, Cardinal *);
CheckInterfacedef(XtAppErrorMsg,XtAppErrorMsg_db);
extern XrmDatabase * XtAppGetErrorDatabase_db(XtAppContext);
CheckInterfacedef(XtAppGetErrorDatabase,XtAppGetErrorDatabase_db);
extern void XtAppGetErrorDatabaseText_db(XtAppContext, const char *, const char *, const char *, const char *, String, int, XrmDatabase);
CheckInterfacedef(XtAppGetErrorDatabaseText,XtAppGetErrorDatabaseText_db);
extern Boolean XtAppGetExitFlag_db(XtAppContext);
CheckInterfacedef(XtAppGetExitFlag,XtAppGetExitFlag_db);
extern long unsigned int XtAppGetSelectionTimeout_db(XtAppContext);
CheckInterfacedef(XtAppGetSelectionTimeout,XtAppGetSelectionTimeout_db);
extern Widget XtAppInitialize_db(XtAppContext *, const char *, XrmOptionDescList, Cardinal, int *, String *, String *, ArgList, Cardinal);
CheckInterfacedef(XtAppInitialize,XtAppInitialize_db);
extern void XtAppLock_db(XtAppContext);
CheckInterfacedef(XtAppLock,XtAppLock_db);
extern void XtAppMainLoop_db(XtAppContext);
CheckInterfacedef(XtAppMainLoop,XtAppMainLoop_db);
extern void XtAppNextEvent_db(XtAppContext, XEvent *);
CheckInterfacedef(XtAppNextEvent,XtAppNextEvent_db);
extern Boolean XtAppPeekEvent_db(XtAppContext, XEvent *);
CheckInterfacedef(XtAppPeekEvent,XtAppPeekEvent_db);
extern XtInputMask XtAppPending_db(XtAppContext);
CheckInterfacedef(XtAppPending,XtAppPending_db);
extern void XtAppProcessEvent_db(XtAppContext, XtInputMask);
CheckInterfacedef(XtAppProcessEvent,XtAppProcessEvent_db);
extern void XtAppReleaseCacheRefs_db(XtAppContext, XtCacheRef *);
CheckInterfacedef(XtAppReleaseCacheRefs,XtAppReleaseCacheRefs_db);
extern XtErrorHandler XtAppSetErrorHandler_db(XtAppContext, XtErrorHandler);
CheckInterfacedef(XtAppSetErrorHandler,XtAppSetErrorHandler_db);
extern XtErrorMsgHandler XtAppSetErrorMsgHandler_db(XtAppContext, XtErrorMsgHandler);
CheckInterfacedef(XtAppSetErrorMsgHandler,XtAppSetErrorMsgHandler_db);
extern void XtAppSetExitFlag_db(XtAppContext);
CheckInterfacedef(XtAppSetExitFlag,XtAppSetExitFlag_db);
extern void XtAppSetFallbackResources_db(XtAppContext, String *);
CheckInterfacedef(XtAppSetFallbackResources,XtAppSetFallbackResources_db);
extern void XtAppSetSelectionTimeout_db(XtAppContext, long unsigned int);
CheckInterfacedef(XtAppSetSelectionTimeout,XtAppSetSelectionTimeout_db);
extern void XtAppSetTypeConverter_db(XtAppContext, const char *, const char *, XtTypeConverter, XtConvertArgList, Cardinal, XtCacheType, XtDestructor);
CheckInterfacedef(XtAppSetTypeConverter,XtAppSetTypeConverter_db);
extern XtErrorHandler XtAppSetWarningHandler_db(XtAppContext, XtErrorHandler);
CheckInterfacedef(XtAppSetWarningHandler,XtAppSetWarningHandler_db);
extern XtErrorMsgHandler XtAppSetWarningMsgHandler_db(XtAppContext, XtErrorMsgHandler);
CheckInterfacedef(XtAppSetWarningMsgHandler,XtAppSetWarningMsgHandler_db);
extern void XtAppUnlock_db(XtAppContext);
CheckInterfacedef(XtAppUnlock,XtAppUnlock_db);
extern void XtAppWarning_db(XtAppContext, const char *);
CheckInterfacedef(XtAppWarning,XtAppWarning_db);
extern void XtAppWarningMsg_db(XtAppContext, const char *, const char *, const char *, const char *, String *, Cardinal *);
CheckInterfacedef(XtAppWarningMsg,XtAppWarningMsg_db);
extern void XtAugmentTranslations_db(Widget, XtTranslations);
CheckInterfacedef(XtAugmentTranslations,XtAugmentTranslations_db);
extern EventMask XtBuildEventMask_db(Widget);
CheckInterfacedef(XtBuildEventMask,XtBuildEventMask_db);
extern Boolean XtCallAcceptFocus_db(Widget, Time *);
CheckInterfacedef(XtCallAcceptFocus,XtCallAcceptFocus_db);
extern void XtCallActionProc_db(Widget, const char *, XEvent *, String *, Cardinal);
CheckInterfacedef(XtCallActionProc,XtCallActionProc_db);
extern void XtCallCallbackList_db(Widget, XtCallbackList, XtPointer);
CheckInterfacedef(XtCallCallbackList,XtCallCallbackList_db);
extern void XtCallCallbacks_db(Widget, const char *, XtPointer);
CheckInterfacedef(XtCallCallbacks,XtCallCallbacks_db);
extern Boolean XtCallConverter_db(Display *, XtTypeConverter, XrmValuePtr, Cardinal, XrmValuePtr, XrmValue *, XtCacheRef *);
CheckInterfacedef(XtCallConverter,XtCallConverter_db);
extern void XtCallbackExclusive_db(Widget, XtPointer, XtPointer);
CheckInterfacedef(XtCallbackExclusive,XtCallbackExclusive_db);
extern void XtCallbackNone_db(Widget, XtPointer, XtPointer);
CheckInterfacedef(XtCallbackNone,XtCallbackNone_db);
extern void XtCallbackNonexclusive_db(Widget, XtPointer, XtPointer);
CheckInterfacedef(XtCallbackNonexclusive,XtCallbackNonexclusive_db);
extern void XtCallbackPopdown_db(Widget, XtPointer, XtPointer);
CheckInterfacedef(XtCallbackPopdown,XtCallbackPopdown_db);
extern void XtCallbackReleaseCacheRef_db(Widget, XtPointer, XtPointer);
CheckInterfacedef(XtCallbackReleaseCacheRef,XtCallbackReleaseCacheRef_db);
extern void XtCallbackReleaseCacheRefList_db(Widget, XtPointer, XtPointer);
CheckInterfacedef(XtCallbackReleaseCacheRefList,XtCallbackReleaseCacheRefList_db);
extern char * XtCalloc_db(Cardinal, Cardinal);
CheckInterfacedef(XtCalloc,XtCalloc_db);
extern void XtCancelSelectionRequest_db(Widget, Atom);
CheckInterfacedef(XtCancelSelectionRequest,XtCancelSelectionRequest_db);
extern WidgetClass XtClass_db(Widget);
CheckInterfacedef(XtClass,XtClass_db);
extern void XtCloseDisplay_db(Display *);
CheckInterfacedef(XtCloseDisplay,XtCloseDisplay_db);
extern void XtConvert_db(Widget, const char *, XrmValue *, const char *, XrmValue *);
CheckInterfacedef(XtConvert,XtConvert_db);
extern Boolean XtConvertAndStore_db(Widget, const char *, XrmValue *, const char *, XrmValue *);
CheckInterfacedef(XtConvertAndStore,XtConvertAndStore_db);
extern void XtConvertCase_db(Display *, KeySym, KeySym *, KeySym *);
CheckInterfacedef(XtConvertCase,XtConvertCase_db);
extern XtAppContext XtCreateApplicationContext_db(void);
CheckInterfacedef(XtCreateApplicationContext,XtCreateApplicationContext_db);
extern Widget XtCreateApplicationShell_db(const char *, WidgetClass, ArgList, Cardinal);
CheckInterfacedef(XtCreateApplicationShell,XtCreateApplicationShell_db);
extern Widget XtCreateManagedWidget_db(const char *, WidgetClass, Widget, ArgList, Cardinal);
CheckInterfacedef(XtCreateManagedWidget,XtCreateManagedWidget_db);
extern Widget XtCreatePopupShell_db(const char *, WidgetClass, Widget, ArgList, Cardinal);
CheckInterfacedef(XtCreatePopupShell,XtCreatePopupShell_db);
extern void XtCreateSelectionRequest_db(Widget, Atom);
CheckInterfacedef(XtCreateSelectionRequest,XtCreateSelectionRequest_db);
extern Widget XtCreateWidget_db(const char *, WidgetClass, Widget, ArgList, Cardinal);
CheckInterfacedef(XtCreateWidget,XtCreateWidget_db);
extern Boolean XtCvtColorToPixel_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtColorToPixel,XtCvtColorToPixel_db);
extern Boolean XtCvtIntToBool_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtIntToBool,XtCvtIntToBool_db);
extern Boolean XtCvtIntToBoolean_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtIntToBoolean,XtCvtIntToBoolean_db);
extern Boolean XtCvtIntToColor_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtIntToColor,XtCvtIntToColor_db);
extern Boolean XtCvtIntToFloat_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtIntToFloat,XtCvtIntToFloat_db);
extern Boolean XtCvtIntToFont_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtIntToFont,XtCvtIntToFont_db);
extern Boolean XtCvtIntToPixel_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtIntToPixel,XtCvtIntToPixel_db);
extern Boolean XtCvtIntToPixmap_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtIntToPixmap,XtCvtIntToPixmap_db);
extern Boolean XtCvtIntToShort_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtIntToShort,XtCvtIntToShort_db);
extern Boolean XtCvtIntToUnsignedChar_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtIntToUnsignedChar,XtCvtIntToUnsignedChar_db);
extern Boolean XtCvtStringToAcceleratorTable_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToAcceleratorTable,XtCvtStringToAcceleratorTable_db);
extern Boolean XtCvtStringToAtom_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToAtom,XtCvtStringToAtom_db);
extern Boolean XtCvtStringToBool_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToBool,XtCvtStringToBool_db);
extern Boolean XtCvtStringToBoolean_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToBoolean,XtCvtStringToBoolean_db);
extern Boolean XtCvtStringToCommandArgArray_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToCommandArgArray,XtCvtStringToCommandArgArray_db);
extern Boolean XtCvtStringToCursor_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToCursor,XtCvtStringToCursor_db);
extern Boolean XtCvtStringToDimension_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToDimension,XtCvtStringToDimension_db);
extern Boolean XtCvtStringToDirectoryString_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToDirectoryString,XtCvtStringToDirectoryString_db);
extern Boolean XtCvtStringToDisplay_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToDisplay,XtCvtStringToDisplay_db);
extern Boolean XtCvtStringToFile_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToFile,XtCvtStringToFile_db);
extern Boolean XtCvtStringToFloat_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToFloat,XtCvtStringToFloat_db);
extern Boolean XtCvtStringToFont_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToFont,XtCvtStringToFont_db);
extern Boolean XtCvtStringToFontSet_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToFontSet,XtCvtStringToFontSet_db);
extern Boolean XtCvtStringToFontStruct_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToFontStruct,XtCvtStringToFontStruct_db);
extern Boolean XtCvtStringToGravity_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToGravity,XtCvtStringToGravity_db);
extern Boolean XtCvtStringToInitialState_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToInitialState,XtCvtStringToInitialState_db);
extern Boolean XtCvtStringToInt_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToInt,XtCvtStringToInt_db);
extern Boolean XtCvtStringToPixel_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToPixel,XtCvtStringToPixel_db);
extern Boolean XtCvtStringToRestartStyle_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToRestartStyle,XtCvtStringToRestartStyle_db);
extern Boolean XtCvtStringToShort_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToShort,XtCvtStringToShort_db);
extern Boolean XtCvtStringToTranslationTable_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToTranslationTable,XtCvtStringToTranslationTable_db);
extern Boolean XtCvtStringToUnsignedChar_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToUnsignedChar,XtCvtStringToUnsignedChar_db);
extern Boolean XtCvtStringToVisual_db(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *);
CheckInterfacedef(XtCvtStringToVisual,XtCvtStringToVisual_db);
extern XrmDatabase XtDatabase_db(Display *);
CheckInterfacedef(XtDatabase,XtDatabase_db);
extern void XtDestroyApplicationContext_db(XtAppContext);
CheckInterfacedef(XtDestroyApplicationContext,XtDestroyApplicationContext_db);
extern void XtDestroyGC_db(GC);
CheckInterfacedef(XtDestroyGC,XtDestroyGC_db);
extern void XtDestroyWidget_db(Widget);
CheckInterfacedef(XtDestroyWidget,XtDestroyWidget_db);
extern void XtDirectConvert_db(XtConverter, XrmValuePtr, Cardinal, XrmValuePtr, XrmValue *);
CheckInterfacedef(XtDirectConvert,XtDirectConvert_db);
extern void XtDisownSelection_db(Widget, Atom, Time);
CheckInterfacedef(XtDisownSelection,XtDisownSelection_db);
extern Boolean XtDispatchEvent_db(XEvent *);
CheckInterfacedef(XtDispatchEvent,XtDispatchEvent_db);
extern Boolean XtDispatchEventToWidget_db(Widget, XEvent *);
CheckInterfacedef(XtDispatchEventToWidget,XtDispatchEventToWidget_db);
extern Display * XtDisplay_db(Widget);
CheckInterfacedef(XtDisplay,XtDisplay_db);
extern void XtDisplayInitialize_db(XtAppContext, Display *, const char *, const char *, XrmOptionDescRec *, Cardinal, int *, char * *);
CheckInterfacedef(XtDisplayInitialize,XtDisplayInitialize_db);
extern Display * XtDisplayOfObject_db(Widget);
CheckInterfacedef(XtDisplayOfObject,XtDisplayOfObject_db);
extern void XtDisplayStringConversionWarning_db(Display *, const char *, const char *);
CheckInterfacedef(XtDisplayStringConversionWarning,XtDisplayStringConversionWarning_db);
extern XtAppContext XtDisplayToApplicationContext_db(Display *);
CheckInterfacedef(XtDisplayToApplicationContext,XtDisplayToApplicationContext_db);
extern void XtError_db(const char *);
CheckInterfacedef(XtError,XtError_db);
extern void XtErrorMsg_db(const char *, const char *, const char *, const char *, String *, Cardinal *);
CheckInterfacedef(XtErrorMsg,XtErrorMsg_db);
extern String XtFindFile_db(const char *, Substitution, Cardinal, XtFilePredicate);
CheckInterfacedef(XtFindFile,XtFindFile_db);
extern void XtFree_db(char *);
CheckInterfacedef(XtFree,XtFree_db);
extern KeySym XtGetActionKeysym_db(XEvent *, Modifiers *);
CheckInterfacedef(XtGetActionKeysym,XtGetActionKeysym_db);
extern void XtGetActionList_db(WidgetClass, XtActionList *, Cardinal *);
CheckInterfacedef(XtGetActionList,XtGetActionList_db);
extern void XtGetApplicationNameAndClass_db(Display *, String *, String *);
CheckInterfacedef(XtGetApplicationNameAndClass,XtGetApplicationNameAndClass_db);
extern void XtGetApplicationResources_db(Widget, XtPointer, XtResourceList, Cardinal, ArgList, Cardinal);
CheckInterfacedef(XtGetApplicationResources,XtGetApplicationResources_db);
extern XtPointer XtGetClassExtension_db(WidgetClass, Cardinal, XrmQuark, long int, Cardinal);
CheckInterfacedef(XtGetClassExtension,XtGetClassExtension_db);
extern void XtGetConstraintResourceList_db(WidgetClass, XtResourceList *, Cardinal *);
CheckInterfacedef(XtGetConstraintResourceList,XtGetConstraintResourceList_db);
extern void XtGetDisplays_db(XtAppContext, Display * * *, Cardinal *);
CheckInterfacedef(XtGetDisplays,XtGetDisplays_db);
extern XrmDatabase * XtGetErrorDatabase_db(void);
CheckInterfacedef(XtGetErrorDatabase,XtGetErrorDatabase_db);
extern void XtGetErrorDatabaseText_db(const char *, const char *, const char *, const char *, String, int);
CheckInterfacedef(XtGetErrorDatabaseText,XtGetErrorDatabaseText_db);
extern GC XtGetGC_db(Widget, XtGCMask, XGCValues *);
CheckInterfacedef(XtGetGC,XtGetGC_db);
extern Widget XtGetKeyboardFocusWidget_db(Widget);
CheckInterfacedef(XtGetKeyboardFocusWidget,XtGetKeyboardFocusWidget_db);
extern KeySym * XtGetKeysymTable_db(Display *, KeyCode *, int *);
CheckInterfacedef(XtGetKeysymTable,XtGetKeysymTable_db);
extern int XtGetMultiClickTime_db(Display *);
CheckInterfacedef(XtGetMultiClickTime,XtGetMultiClickTime_db);
extern void XtGetResourceList_db(WidgetClass, XtResourceList *, Cardinal *);
CheckInterfacedef(XtGetResourceList,XtGetResourceList_db);
extern void XtGetSelectionParameters_db(Widget, Atom, XtRequestId, Atom *, XtPointer *, long unsigned int *, int *);
CheckInterfacedef(XtGetSelectionParameters,XtGetSelectionParameters_db);
extern XSelectionRequestEvent * XtGetSelectionRequest_db(Widget, Atom, XtRequestId);
CheckInterfacedef(XtGetSelectionRequest,XtGetSelectionRequest_db);
extern long unsigned int XtGetSelectionTimeout_db(void);
CheckInterfacedef(XtGetSelectionTimeout,XtGetSelectionTimeout_db);
extern void XtGetSelectionValue_db(Widget, Atom, Atom, XtSelectionCallbackProc, XtPointer, Time);
CheckInterfacedef(XtGetSelectionValue,XtGetSelectionValue_db);
extern void XtGetSelectionValueIncremental_db(Widget, Atom, Atom, XtSelectionCallbackProc, XtPointer, Time);
CheckInterfacedef(XtGetSelectionValueIncremental,XtGetSelectionValueIncremental_db);
extern void XtGetSelectionValues_db(Widget, Atom, Atom *, int, XtSelectionCallbackProc, XtPointer *, Time);
CheckInterfacedef(XtGetSelectionValues,XtGetSelectionValues_db);
extern void XtGetSelectionValuesIncremental_db(Widget, Atom, Atom *, int, XtSelectionCallbackProc, XtPointer *, Time);
CheckInterfacedef(XtGetSelectionValuesIncremental,XtGetSelectionValuesIncremental_db);
extern void XtGetSubresources_db(Widget, XtPointer, const char *, const char *, XtResourceList, Cardinal, ArgList, Cardinal);
CheckInterfacedef(XtGetSubresources,XtGetSubresources_db);
extern void XtGetSubvalues_db(XtPointer, XtResourceList, Cardinal, ArgList, Cardinal);
CheckInterfacedef(XtGetSubvalues,XtGetSubvalues_db);
extern void XtGetValues_db(Widget, ArgList, Cardinal);
CheckInterfacedef(XtGetValues,XtGetValues_db);
extern void XtGrabButton_db(Widget, int, Modifiers, int, unsigned int, int, int, Window, Cursor);
CheckInterfacedef(XtGrabButton,XtGrabButton_db);
extern void XtGrabKey_db(Widget, unsigned int, Modifiers, int, int, int);
CheckInterfacedef(XtGrabKey,XtGrabKey_db);
extern int XtGrabKeyboard_db(Widget, int, int, int, Time);
CheckInterfacedef(XtGrabKeyboard,XtGrabKeyboard_db);
extern int XtGrabPointer_db(Widget, int, unsigned int, int, int, Window, Cursor, Time);
CheckInterfacedef(XtGrabPointer,XtGrabPointer_db);
extern XtCallbackStatus XtHasCallbacks_db(Widget, const char *);
CheckInterfacedef(XtHasCallbacks,XtHasCallbacks_db);
extern Widget XtHooksOfDisplay_db(Display *);
CheckInterfacedef(XtHooksOfDisplay,XtHooksOfDisplay_db);
extern Widget XtInitialize_db(const char *, const char *, XrmOptionDescRec *, Cardinal, int *, char * *);
CheckInterfacedef(XtInitialize,XtInitialize_db);
extern void XtInitializeWidgetClass_db(WidgetClass);
CheckInterfacedef(XtInitializeWidgetClass,XtInitializeWidgetClass_db);
extern void XtInsertEventHandler_db(Widget, EventMask, int, XtEventHandler, XtPointer, XtListPosition);
CheckInterfacedef(XtInsertEventHandler,XtInsertEventHandler_db);
extern void XtInsertEventTypeHandler_db(Widget, int, XtPointer, XtEventHandler, XtPointer, XtListPosition);
CheckInterfacedef(XtInsertEventTypeHandler,XtInsertEventTypeHandler_db);
extern void XtInsertRawEventHandler_db(Widget, EventMask, int, XtEventHandler, XtPointer, XtListPosition);
CheckInterfacedef(XtInsertRawEventHandler,XtInsertRawEventHandler_db);
extern void XtInstallAccelerators_db(Widget, Widget);
CheckInterfacedef(XtInstallAccelerators,XtInstallAccelerators_db);
extern void XtInstallAllAccelerators_db(Widget, Widget);
CheckInterfacedef(XtInstallAllAccelerators,XtInstallAllAccelerators_db);
extern Boolean XtIsApplicationShell_db(Widget);
CheckInterfacedef(XtIsApplicationShell,XtIsApplicationShell_db);
extern Boolean XtIsManaged_db(Widget);
CheckInterfacedef(XtIsManaged,XtIsManaged_db);
extern Boolean XtIsObject_db(Widget);
CheckInterfacedef(XtIsObject,XtIsObject_db);
extern Boolean XtIsOverrideShell_db(Widget);
CheckInterfacedef(XtIsOverrideShell,XtIsOverrideShell_db);
extern Boolean XtIsRealized_db(Widget);
CheckInterfacedef(XtIsRealized,XtIsRealized_db);
extern Boolean XtIsSensitive_db(Widget);
CheckInterfacedef(XtIsSensitive,XtIsSensitive_db);
extern Boolean XtIsSessionShell_db(Widget);
CheckInterfacedef(XtIsSessionShell,XtIsSessionShell_db);
extern Boolean XtIsSubclass_db(Widget, WidgetClass);
CheckInterfacedef(XtIsSubclass,XtIsSubclass_db);
extern Boolean XtIsTransientShell_db(Widget);
CheckInterfacedef(XtIsTransientShell,XtIsTransientShell_db);
extern Boolean XtIsVendorShell_db(Widget);
CheckInterfacedef(XtIsVendorShell,XtIsVendorShell_db);
extern void XtKeysymToKeycodeList_db(Display *, KeySym, KeyCode * *, Cardinal *);
CheckInterfacedef(XtKeysymToKeycodeList,XtKeysymToKeycodeList_db);
extern XEvent * XtLastEventProcessed_db(Display *);
CheckInterfacedef(XtLastEventProcessed,XtLastEventProcessed_db);
extern Time XtLastTimestampProcessed_db(Display *);
CheckInterfacedef(XtLastTimestampProcessed,XtLastTimestampProcessed_db);
extern void XtMainLoop_db(void);
CheckInterfacedef(XtMainLoop,XtMainLoop_db);
extern XtGeometryResult XtMakeGeometryRequest_db(Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckInterfacedef(XtMakeGeometryRequest,XtMakeGeometryRequest_db);
extern XtGeometryResult XtMakeResizeRequest_db(Widget, unsigned int, unsigned int, Dimension *, Dimension *);
CheckInterfacedef(XtMakeResizeRequest,XtMakeResizeRequest_db);
extern char * XtMalloc_db(Cardinal);
CheckInterfacedef(XtMalloc,XtMalloc_db);
extern void XtMapWidget_db(Widget);
CheckInterfacedef(XtMapWidget,XtMapWidget_db);
extern void XtMenuPopupAction_db(Widget, XEvent *, String *, Cardinal *);
CheckInterfacedef(XtMenuPopupAction,XtMenuPopupAction_db);
extern ArgList XtMergeArgLists_db(ArgList, Cardinal, ArgList, Cardinal);
CheckInterfacedef(XtMergeArgLists,XtMergeArgLists_db);
extern String XtName_db(Widget);
CheckInterfacedef(XtName,XtName_db);
extern Widget XtNameToWidget_db(Widget, const char *);
CheckInterfacedef(XtNameToWidget,XtNameToWidget_db);
extern String XtNewString_db(String);
CheckInterfacedef(XtNewString,XtNewString_db);
extern void XtNextEvent_db(XEvent *);
CheckInterfacedef(XtNextEvent,XtNextEvent_db);
extern void XtNoticeSignal_db(XtSignalId);
CheckInterfacedef(XtNoticeSignal,XtNoticeSignal_db);
extern Widget XtOpenApplication_db(XtAppContext *, const char *, XrmOptionDescList, Cardinal, int *, String *, String *, WidgetClass, ArgList, Cardinal);
CheckInterfacedef(XtOpenApplication,XtOpenApplication_db);
extern Display * XtOpenDisplay_db(XtAppContext, const char *, const char *, const char *, XrmOptionDescRec *, Cardinal, int *, char * *);
CheckInterfacedef(XtOpenDisplay,XtOpenDisplay_db);
extern void XtOverrideTranslations_db(Widget, XtTranslations);
CheckInterfacedef(XtOverrideTranslations,XtOverrideTranslations_db);
extern Boolean XtOwnSelection_db(Widget, Atom, Time, XtConvertSelectionProc, XtLoseSelectionProc, XtSelectionDoneProc);
CheckInterfacedef(XtOwnSelection,XtOwnSelection_db);
extern Boolean XtOwnSelectionIncremental_db(Widget, Atom, Time, XtConvertSelectionIncrProc, XtLoseSelectionIncrProc, XtSelectionDoneIncrProc, XtCancelConvertSelectionProc, XtPointer);
CheckInterfacedef(XtOwnSelectionIncremental,XtOwnSelectionIncremental_db);
extern Widget XtParent_db(Widget);
CheckInterfacedef(XtParent,XtParent_db);
extern XtAccelerators XtParseAcceleratorTable_db(const char *);
CheckInterfacedef(XtParseAcceleratorTable,XtParseAcceleratorTable_db);
extern XtTranslations XtParseTranslationTable_db(const char *);
CheckInterfacedef(XtParseTranslationTable,XtParseTranslationTable_db);
extern Boolean XtPeekEvent_db(XEvent *);
CheckInterfacedef(XtPeekEvent,XtPeekEvent_db);
extern Boolean XtPending_db(void);
CheckInterfacedef(XtPending,XtPending_db);
extern void XtPopdown_db(Widget);
CheckInterfacedef(XtPopdown,XtPopdown_db);
extern void XtPopup_db(Widget, XtGrabKind);
CheckInterfacedef(XtPopup,XtPopup_db);
extern void XtPopupSpringLoaded_db(Widget);
CheckInterfacedef(XtPopupSpringLoaded,XtPopupSpringLoaded_db);
extern void XtProcessEvent_db(XtInputMask);
CheckInterfacedef(XtProcessEvent,XtProcessEvent_db);
extern XtGeometryResult XtQueryGeometry_db(Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckInterfacedef(XtQueryGeometry,XtQueryGeometry_db);
extern void XtRealizeWidget_db(Widget);
CheckInterfacedef(XtRealizeWidget,XtRealizeWidget_db);
extern char * XtRealloc_db(char *, Cardinal);
CheckInterfacedef(XtRealloc,XtRealloc_db);
extern void XtRegisterCaseConverter_db(Display *, XtCaseProc, KeySym, KeySym);
CheckInterfacedef(XtRegisterCaseConverter,XtRegisterCaseConverter_db);
extern void XtRegisterDrawable_db(Display *, Drawable, Widget);
CheckInterfacedef(XtRegisterDrawable,XtRegisterDrawable_db);
extern void XtRegisterExtensionSelector_db(Display *, int, int, XtExtensionSelectProc, XtPointer);
CheckInterfacedef(XtRegisterExtensionSelector,XtRegisterExtensionSelector_db);
extern void XtRegisterGrabAction_db(XtActionProc, int, unsigned int, int, int);
CheckInterfacedef(XtRegisterGrabAction,XtRegisterGrabAction_db);
extern void XtReleaseGC_db(Widget, GC);
CheckInterfacedef(XtReleaseGC,XtReleaseGC_db);
extern void XtReleasePropertyAtom_db(Widget, Atom);
CheckInterfacedef(XtReleasePropertyAtom,XtReleasePropertyAtom_db);
extern void XtRemoveActionHook_db(XtActionHookId);
CheckInterfacedef(XtRemoveActionHook,XtRemoveActionHook_db);
extern void XtRemoveAllCallbacks_db(Widget, const char *);
CheckInterfacedef(XtRemoveAllCallbacks,XtRemoveAllCallbacks_db);
extern void XtRemoveBlockHook_db(XtBlockHookId);
CheckInterfacedef(XtRemoveBlockHook,XtRemoveBlockHook_db);
extern void XtRemoveCallback_db(Widget, const char *, XtCallbackProc, XtPointer);
CheckInterfacedef(XtRemoveCallback,XtRemoveCallback_db);
extern void XtRemoveCallbacks_db(Widget, const char *, XtCallbackList);
CheckInterfacedef(XtRemoveCallbacks,XtRemoveCallbacks_db);
extern void XtRemoveEventHandler_db(Widget, EventMask, int, XtEventHandler, XtPointer);
CheckInterfacedef(XtRemoveEventHandler,XtRemoveEventHandler_db);
extern void XtRemoveEventTypeHandler_db(Widget, int, XtPointer, XtEventHandler, XtPointer);
CheckInterfacedef(XtRemoveEventTypeHandler,XtRemoveEventTypeHandler_db);
extern void XtRemoveGrab_db(Widget);
CheckInterfacedef(XtRemoveGrab,XtRemoveGrab_db);
extern void XtRemoveInput_db(XtInputId);
CheckInterfacedef(XtRemoveInput,XtRemoveInput_db);
extern void XtRemoveRawEventHandler_db(Widget, EventMask, int, XtEventHandler, XtPointer);
CheckInterfacedef(XtRemoveRawEventHandler,XtRemoveRawEventHandler_db);
extern void XtRemoveSignal_db(XtSignalId);
CheckInterfacedef(XtRemoveSignal,XtRemoveSignal_db);
extern void XtRemoveTimeOut_db(XtIntervalId);
CheckInterfacedef(XtRemoveTimeOut,XtRemoveTimeOut_db);
extern void XtRemoveWorkProc_db(XtWorkProcId);
CheckInterfacedef(XtRemoveWorkProc,XtRemoveWorkProc_db);
extern Atom XtReservePropertyAtom_db(Widget);
CheckInterfacedef(XtReservePropertyAtom,XtReservePropertyAtom_db);
extern String XtResolvePathname_db(Display *, const char *, const char *, const char *, const char *, Substitution, Cardinal, XtFilePredicate);
CheckInterfacedef(XtResolvePathname,XtResolvePathname_db);
extern Screen * XtScreen_db(Widget);
CheckInterfacedef(XtScreen,XtScreen_db);
extern XrmDatabase XtScreenDatabase_db(Screen *);
CheckInterfacedef(XtScreenDatabase,XtScreenDatabase_db);
extern Screen * XtScreenOfObject_db(Widget);
CheckInterfacedef(XtScreenOfObject,XtScreenOfObject_db);
extern void XtSendSelectionRequest_db(Widget, Atom, Time);
CheckInterfacedef(XtSendSelectionRequest,XtSendSelectionRequest_db);
extern XtCheckpointToken XtSessionGetToken_db(Widget);
CheckInterfacedef(XtSessionGetToken,XtSessionGetToken_db);
extern void XtSessionReturnToken_db(XtCheckpointToken);
CheckInterfacedef(XtSessionReturnToken,XtSessionReturnToken_db);
extern void XtSetErrorHandler_db(XtErrorHandler);
CheckInterfacedef(XtSetErrorHandler,XtSetErrorHandler_db);
extern void XtSetErrorMsgHandler_db(XtErrorMsgHandler);
CheckInterfacedef(XtSetErrorMsgHandler,XtSetErrorMsgHandler_db);
extern XtEventDispatchProc XtSetEventDispatcher_db(Display *, int, XtEventDispatchProc);
CheckInterfacedef(XtSetEventDispatcher,XtSetEventDispatcher_db);
extern void XtSetKeyTranslator_db(Display *, XtKeyProc);
CheckInterfacedef(XtSetKeyTranslator,XtSetKeyTranslator_db);
extern void XtSetKeyboardFocus_db(Widget, Widget);
CheckInterfacedef(XtSetKeyboardFocus,XtSetKeyboardFocus_db);
extern XtLanguageProc XtSetLanguageProc_db(XtAppContext, XtLanguageProc, XtPointer);
CheckInterfacedef(XtSetLanguageProc,XtSetLanguageProc_db);
extern void XtSetMappedWhenManaged_db(Widget, int);
CheckInterfacedef(XtSetMappedWhenManaged,XtSetMappedWhenManaged_db);
extern void XtSetMultiClickTime_db(Display *, int);
CheckInterfacedef(XtSetMultiClickTime,XtSetMultiClickTime_db);
extern void XtSetSelectionParameters_db(Widget, Atom, Atom, XtPointer, long unsigned int, int);
CheckInterfacedef(XtSetSelectionParameters,XtSetSelectionParameters_db);
extern void XtSetSelectionTimeout_db(long unsigned int);
CheckInterfacedef(XtSetSelectionTimeout,XtSetSelectionTimeout_db);
extern void XtSetSensitive_db(Widget, int);
CheckInterfacedef(XtSetSensitive,XtSetSensitive_db);
extern void XtSetSubvalues_db(XtPointer, XtResourceList, Cardinal, ArgList, Cardinal);
CheckInterfacedef(XtSetSubvalues,XtSetSubvalues_db);
extern void XtSetTypeConverter_db(const char *, const char *, XtTypeConverter, XtConvertArgList, Cardinal, XtCacheType, XtDestructor);
CheckInterfacedef(XtSetTypeConverter,XtSetTypeConverter_db);
extern void XtSetValues_db(Widget, ArgList, Cardinal);
CheckInterfacedef(XtSetValues,XtSetValues_db);
extern void XtSetWMColormapWindows_db(Widget, Widget *, Cardinal);
CheckInterfacedef(XtSetWMColormapWindows,XtSetWMColormapWindows_db);
extern void XtSetWarningHandler_db(XtErrorHandler);
CheckInterfacedef(XtSetWarningHandler,XtSetWarningHandler_db);
extern void XtSetWarningMsgHandler_db(XtErrorMsgHandler);
CheckInterfacedef(XtSetWarningMsgHandler,XtSetWarningMsgHandler_db);
extern void XtStringConversionWarning_db(const char *, const char *);
CheckInterfacedef(XtStringConversionWarning,XtStringConversionWarning_db);
extern WidgetClass XtSuperclass_db(Widget);
CheckInterfacedef(XtSuperclass,XtSuperclass_db);
extern void XtToolkitInitialize_db(void);
CheckInterfacedef(XtToolkitInitialize,XtToolkitInitialize_db);
extern Boolean XtToolkitThreadInitialize_db(void);
CheckInterfacedef(XtToolkitThreadInitialize,XtToolkitThreadInitialize_db);
extern void XtTranslateCoords_db(Widget, int, int, Position *, Position *);
CheckInterfacedef(XtTranslateCoords,XtTranslateCoords_db);
extern void XtTranslateKey_db(Display *, unsigned int, Modifiers, Modifiers *, KeySym *);
CheckInterfacedef(XtTranslateKey,XtTranslateKey_db);
extern void XtTranslateKeycode_db(Display *, unsigned int, Modifiers, Modifiers *, KeySym *);
CheckInterfacedef(XtTranslateKeycode,XtTranslateKeycode_db);
extern void XtUngrabButton_db(Widget, unsigned int, Modifiers);
CheckInterfacedef(XtUngrabButton,XtUngrabButton_db);
extern void XtUngrabKey_db(Widget, unsigned int, Modifiers);
CheckInterfacedef(XtUngrabKey,XtUngrabKey_db);
extern void XtUngrabKeyboard_db(Widget, Time);
CheckInterfacedef(XtUngrabKeyboard,XtUngrabKeyboard_db);
extern void XtUngrabPointer_db(Widget, Time);
CheckInterfacedef(XtUngrabPointer,XtUngrabPointer_db);
extern void XtUninstallTranslations_db(Widget);
CheckInterfacedef(XtUninstallTranslations,XtUninstallTranslations_db);
extern void XtUnmapWidget_db(Widget);
CheckInterfacedef(XtUnmapWidget,XtUnmapWidget_db);
extern void XtUnrealizeWidget_db(Widget);
CheckInterfacedef(XtUnrealizeWidget,XtUnrealizeWidget_db);
extern void XtUnregisterDrawable_db(Display *, Drawable);
CheckInterfacedef(XtUnregisterDrawable,XtUnregisterDrawable_db);
extern Widget XtVaAppCreateShell_db(const char *, const char *, WidgetClass, Display *, ...);
CheckInterfacedef(XtVaAppCreateShell,XtVaAppCreateShell_db);
extern Widget XtVaAppInitialize_db(XtAppContext *, const char *, XrmOptionDescList, Cardinal, int *, String *, String *, ...);
CheckInterfacedef(XtVaAppInitialize,XtVaAppInitialize_db);
extern XtVarArgsList XtVaCreateArgsList_db(XtPointer, ...);
CheckInterfacedef(XtVaCreateArgsList,XtVaCreateArgsList_db);
extern Widget XtVaCreateManagedWidget_db(const char *, WidgetClass, Widget, ...);
CheckInterfacedef(XtVaCreateManagedWidget,XtVaCreateManagedWidget_db);
extern Widget XtVaCreatePopupShell_db(const char *, WidgetClass, Widget, ...);
CheckInterfacedef(XtVaCreatePopupShell,XtVaCreatePopupShell_db);
extern Widget XtVaCreateWidget_db(const char *, WidgetClass, Widget, ...);
CheckInterfacedef(XtVaCreateWidget,XtVaCreateWidget_db);
extern void XtVaGetApplicationResources_db(Widget, XtPointer, XtResourceList, Cardinal, ...);
CheckInterfacedef(XtVaGetApplicationResources,XtVaGetApplicationResources_db);
extern void XtVaGetSubresources_db(Widget, XtPointer, const char *, const char *, XtResourceList, Cardinal, ...);
CheckInterfacedef(XtVaGetSubresources,XtVaGetSubresources_db);
extern void XtVaGetSubvalues_db(XtPointer, XtResourceList, Cardinal, ...);
CheckInterfacedef(XtVaGetSubvalues,XtVaGetSubvalues_db);
extern void XtVaGetValues_db(Widget, ...);
CheckInterfacedef(XtVaGetValues,XtVaGetValues_db);
extern Widget XtVaOpenApplication_db(XtAppContext *, const char *, XrmOptionDescList, Cardinal, int *, String *, String *, WidgetClass, ...);
CheckInterfacedef(XtVaOpenApplication,XtVaOpenApplication_db);
extern void XtVaSetSubvalues_db(XtPointer, XtResourceList, Cardinal, ...);
CheckInterfacedef(XtVaSetSubvalues,XtVaSetSubvalues_db);
extern void XtVaSetValues_db(Widget, ...);
CheckInterfacedef(XtVaSetValues,XtVaSetValues_db);
extern void XtWarning_db(const char *);
CheckInterfacedef(XtWarning,XtWarning_db);
extern void XtWarningMsg_db(const char *, const char *, const char *, const char *, String *, Cardinal *);
CheckInterfacedef(XtWarningMsg,XtWarningMsg_db);
extern XtAppContext XtWidgetToApplicationContext_db(Widget);
CheckInterfacedef(XtWidgetToApplicationContext,XtWidgetToApplicationContext_db);
extern Window XtWindow_db(Widget);
CheckInterfacedef(XtWindow,XtWindow_db);
extern Window XtWindowOfObject_db(Widget);
CheckInterfacedef(XtWindowOfObject,XtWindowOfObject_db);
extern Widget XtWindowToWidget_db(Display *, Window);
CheckInterfacedef(XtWindowToWidget,XtWindowToWidget_db);
extern Boolean _XtCheckSubclassFlag_db(Widget, unsigned int);
CheckInterfacedef(_XtCheckSubclassFlag,_XtCheckSubclassFlag_db);
extern Boolean _XtIsSubclassOf_db(Widget, WidgetClass, WidgetClass, unsigned int);
CheckInterfacedef(_XtIsSubclassOf,_XtIsSubclassOf_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Intrinsic.h\n\n",pcnt,cnt);
return cnt;
#endif

}
