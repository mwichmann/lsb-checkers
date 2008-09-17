/*
 * Test of X11/Intrinsic.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
struct _WidgetRec {};
struct _XtAppStruct {};
struct _WidgetClassRec {};
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
#ifdef TET_TEST
Msg("Checking data structures in X11/Intrinsic.h\n");
#endif

printf("Checking data structures in X11/Intrinsic.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for X11/Intrinsic.h depends on string.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XtIntrinsic_h */
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
/* No test for _XtString */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XtBoolean */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XtDimension */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XtKeyCode */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XtPosition */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XtXtEnum */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for externalref */
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
#ifdef XtCvtStringToPosition
	CompareStringConstant(XtCvtStringToPosition,"XtCvtStringToShort",3768,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCvtStringToPosition\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCvtIntToDimension
	CompareStringConstant(XtCvtIntToDimension,"XtCvtIntToShort",3769,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCvtIntToDimension\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCvtIntToPosition
	CompareStringConstant(XtCvtIntToPosition,"XtCvtIntToShort",3770,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCvtIntToPosition\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCvtPixelToColor
	CompareStringConstant(XtCvtPixelToColor,"XtCvtIntToColor",3771,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XtCvtPixelToColor\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(Cardinal,4, 100346, 1, 1.2, NULL, 7, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XtPointer,8, 100348, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(XtPointer,8, 100348, 11, 2.0, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtPointer,4, 100348, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtPointer,8, 100348, 9, 2.0, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtPointer,4, 100348, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(XtPointer,8, 100348, 3, 1.3, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(XtPointer,4, 100348, 2, 1.2, NULL, 40, NULL)
#else
Msg("Find size of XtPointer (100348)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,100348,0);
#endif

#if 1
CheckTypeSize(struct _WidgetRec,0, 100351, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _WidgetRec on All\n");
#endif

#if defined __s390x__
CheckTypeSize(Widget,8, 100353, 12, 1.3, NULL, 100352, NULL)
#elif defined __x86_64__
CheckTypeSize(Widget,8, 100353, 11, 2.0, NULL, 100352, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Widget,4, 100353, 10, 1.3, NULL, 100352, NULL)
#elif defined __powerpc64__
CheckTypeSize(Widget,8, 100353, 9, 2.0, NULL, 100352, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Widget,4, 100353, 6, 1.2, NULL, 100352, NULL)
#elif defined __ia64__
CheckTypeSize(Widget,8, 100353, 3, 1.3, NULL, 100352, NULL)
#elif defined __i386__
CheckTypeSize(Widget,4, 100353, 2, 1.2, NULL, 100352, NULL)
#else
Msg("Find size of Widget (100353)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100352,NULL);\n",architecture,100353,0);
#endif

#if defined __s390x__
CheckTypeSize(String,8, 100356, 12, 1.3, NULL, 63, NULL)
#elif defined __x86_64__
CheckTypeSize(String,8, 100356, 11, 2.0, NULL, 63, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(String,4, 100356, 10, 1.3, NULL, 63, NULL)
#elif defined __powerpc64__
CheckTypeSize(String,8, 100356, 9, 2.0, NULL, 63, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(String,4, 100356, 6, 1.2, NULL, 63, NULL)
#elif defined __ia64__
CheckTypeSize(String,8, 100356, 3, 1.3, NULL, 63, NULL)
#elif defined __i386__
CheckTypeSize(String,4, 100356, 2, 1.2, NULL, 63, NULL)
#else
Msg("Find size of String (100356)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,63,NULL);\n",architecture,100356,0);
#endif

#if 1
CheckTypeSize(XtGeometryMask,4, 100361, 1, 1.2, NULL, 7, NULL)
#endif

#if 1
CheckTypeSize(Position,2, 100362, 1, 1.2, NULL, 11264, NULL)
#endif

#if 1
CheckTypeSize(Dimension,2, 100363, 1, 1.2, NULL, 11209, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XtWidgetGeometry,32, 100365, 12, 1.3, NULL, 100364, NULL)
#elif defined __x86_64__
CheckTypeSize(XtWidgetGeometry,32, 100365, 11, 2.0, NULL, 100364, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtWidgetGeometry,24, 100365, 10, 1.3, NULL, 100364, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtWidgetGeometry,32, 100365, 9, 2.0, NULL, 100364, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtWidgetGeometry,24, 100365, 6, 1.2, NULL, 100364, NULL)
#elif defined __ia64__
CheckTypeSize(XtWidgetGeometry,32, 100365, 3, 1.3, NULL, 100364, NULL)
#elif defined __i386__
CheckTypeSize(XtWidgetGeometry,24, 100365, 2, 1.2, NULL, 100364, NULL)
#else
Msg("Find size of XtWidgetGeometry (100365)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100364,NULL);\n",architecture,100365,0);
#endif

#if 1
CheckTypeSize(Modifiers,4, 100368, 1, 1.2, NULL, 7, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XtCacheRef,8, 100372, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(XtCacheRef,8, 100372, 11, 2.0, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtCacheRef,4, 100372, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtCacheRef,8, 100372, 9, 2.0, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCacheRef,4, 100372, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(XtCacheRef,8, 100372, 3, 1.3, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(XtCacheRef,4, 100372, 2, 1.2, NULL, 40, NULL)
#else
Msg("Find size of XtCacheRef (100372)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,100372,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XtResource,48, 100375, 12, 1.3, NULL, 0, NULL)
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
CheckTypeSize(struct _XtResource,48, 100375, 11, 2.0, NULL, 0, NULL)
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
CheckTypeSize(struct _XtResource,28, 100375, 10, 1.3, NULL, 0, NULL)
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
CheckTypeSize(struct _XtResource,48, 100375, 9, 2.0, NULL, 0, NULL)
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
CheckTypeSize(struct _XtResource,28, 100375, 6, 1.2, NULL, 0, NULL)
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
CheckTypeSize(struct _XtResource,48, 100375, 3, 1.3, NULL, 0, NULL)
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
CheckTypeSize(struct _XtResource,28, 100375, 2, 1.2, NULL, 0, NULL)
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
Msg("Find size of _XtResource (100375)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,100375,0);
#endif

#if defined __s390x__
CheckTypeSize(XtResourceList,8, 100377, 12, 1.3, NULL, 100376, NULL)
#elif defined __x86_64__
CheckTypeSize(XtResourceList,8, 100377, 11, 2.0, NULL, 100376, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtResourceList,4, 100377, 10, 1.3, NULL, 100376, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtResourceList,8, 100377, 9, 2.0, NULL, 100376, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtResourceList,4, 100377, 6, 1.2, NULL, 100376, NULL)
#elif defined __ia64__
CheckTypeSize(XtResourceList,8, 100377, 3, 1.3, NULL, 100376, NULL)
#elif defined __i386__
CheckTypeSize(XtResourceList,4, 100377, 2, 1.2, NULL, 100376, NULL)
#else
Msg("Find size of XtResourceList (100377)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100376,NULL);\n",architecture,100377,0);
#endif

#if 1
CheckTypeSize(struct _XtAppStruct,0, 100379, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XtAppStruct on All\n");
#endif

#if defined __s390x__
CheckTypeSize(XtAppContext,8, 100381, 12, 1.3, NULL, 100380, NULL)
#elif defined __x86_64__
CheckTypeSize(XtAppContext,8, 100381, 11, 2.0, NULL, 100380, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtAppContext,4, 100381, 10, 1.3, NULL, 100380, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtAppContext,8, 100381, 9, 2.0, NULL, 100380, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtAppContext,4, 100381, 6, 1.2, NULL, 100380, NULL)
#elif defined __ia64__
CheckTypeSize(XtAppContext,8, 100381, 3, 1.3, NULL, 100380, NULL)
#elif defined __i386__
CheckTypeSize(XtAppContext,4, 100381, 2, 1.2, NULL, 100380, NULL)
#else
Msg("Find size of XtAppContext (100381)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100380,NULL);\n",architecture,100381,0);
#endif

#if defined __s390x__
CheckTypeSize(XtActionProc,8, 100384, 12, 1.3, NULL, 100383, NULL)
#elif defined __x86_64__
CheckTypeSize(XtActionProc,8, 100384, 11, 2.0, NULL, 100383, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtActionProc,4, 100384, 10, 1.3, NULL, 100383, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtActionProc,8, 100384, 9, 2.0, NULL, 100383, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtActionProc,4, 100384, 6, 1.2, NULL, 100383, NULL)
#elif defined __ia64__
CheckTypeSize(XtActionProc,8, 100384, 3, 1.3, NULL, 100383, NULL)
#elif defined __i386__
CheckTypeSize(XtActionProc,4, 100384, 2, 1.2, NULL, 100383, NULL)
#else
Msg("Find size of XtActionProc (100384)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100383,NULL);\n",architecture,100384,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XtActionsRec,16, 100385, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtActionsRec,proc,8,12,78073)
CheckOffset(struct _XtActionsRec,proc,8,12,78073)
#elif defined __x86_64__
CheckTypeSize(struct _XtActionsRec,16, 100385, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XtActionsRec,proc,8,11,78073)
CheckOffset(struct _XtActionsRec,proc,8,11,78073)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtActionsRec,8, 100385, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtActionsRec,proc,4,10,78073)
CheckOffset(struct _XtActionsRec,proc,4,10,78073)
#elif defined __powerpc64__
CheckTypeSize(struct _XtActionsRec,16, 100385, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XtActionsRec,proc,8,9,78073)
CheckOffset(struct _XtActionsRec,proc,8,9,78073)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XtActionsRec,8, 100385, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtActionsRec,proc,4,6,78073)
CheckOffset(struct _XtActionsRec,proc,4,6,78073)
#elif defined __ia64__
CheckTypeSize(struct _XtActionsRec,16, 100385, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtActionsRec,proc,8,3,78073)
CheckOffset(struct _XtActionsRec,proc,8,3,78073)
#elif defined __i386__
CheckTypeSize(struct _XtActionsRec,8, 100385, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtActionsRec,proc,4,2,78073)
CheckOffset(struct _XtActionsRec,proc,4,2,78073)
#else
Msg("Find size of _XtActionsRec (100385)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,100385,0);
#endif

#if defined __s390x__
CheckTypeSize(XtActionList,8, 100387, 12, 1.3, NULL, 100386, NULL)
#elif defined __x86_64__
CheckTypeSize(XtActionList,8, 100387, 11, 2.0, NULL, 100386, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtActionList,4, 100387, 10, 1.3, NULL, 100386, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtActionList,8, 100387, 9, 2.0, NULL, 100386, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtActionList,4, 100387, 6, 1.2, NULL, 100386, NULL)
#elif defined __ia64__
CheckTypeSize(XtActionList,8, 100387, 3, 1.3, NULL, 100386, NULL)
#elif defined __i386__
CheckTypeSize(XtActionList,4, 100387, 2, 1.2, NULL, 100386, NULL)
#else
Msg("Find size of XtActionList (100387)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100386,NULL);\n",architecture,100387,0);
#endif

#if 1
CheckTypeSize(Boolean,1, 100393, 1, 1.2, NULL, 2, NULL)
#endif

#if 1
CheckTypeSize(XtCacheType,4, 100394, 1, 1.2, NULL, 6, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XtGCMask,8, 100395, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(XtGCMask,8, 100395, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtGCMask,4, 100395, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtGCMask,8, 100395, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtGCMask,4, 100395, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtGCMask,8, 100395, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtGCMask,4, 100395, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtGCMask (100395)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,100395,0);
#endif

#if 1
CheckTypeSize(XtEnum,1, 100396, 1, 1.2, NULL, 3, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XtSignalId,8, 100397, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(XtSignalId,8, 100397, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtSignalId,4, 100397, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtSignalId,8, 100397, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtSignalId,4, 100397, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtSignalId,8, 100397, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtSignalId,4, 100397, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtSignalId (100397)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,100397,0);
#endif

#if defined __s390x__
CheckTypeSize(XtWorkProcId,8, 100398, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(XtWorkProcId,8, 100398, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtWorkProcId,4, 100398, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtWorkProcId,8, 100398, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtWorkProcId,4, 100398, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtWorkProcId,8, 100398, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtWorkProcId,4, 100398, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtWorkProcId (100398)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,100398,0);
#endif

#if defined __s390x__
CheckTypeSize(XtInputId,8, 100399, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(XtInputId,8, 100399, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtInputId,4, 100399, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtInputId,8, 100399, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtInputId,4, 100399, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtInputId,8, 100399, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtInputId,4, 100399, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtInputId (100399)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,100399,0);
#endif

#if defined __s390x__
CheckTypeSize(XtIntervalId,8, 100400, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(XtIntervalId,8, 100400, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtIntervalId,4, 100400, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtIntervalId,8, 100400, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtIntervalId,4, 100400, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtIntervalId,8, 100400, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtIntervalId,4, 100400, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtIntervalId (100400)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,100400,0);
#endif

#if 1
CheckTypeSize(struct _WidgetClassRec,0, 100401, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _WidgetClassRec on All\n");
#endif

#if defined __s390x__
CheckTypeSize(WidgetClass,8, 100403, 12, 1.3, NULL, 100402, NULL)
#elif defined __x86_64__
CheckTypeSize(WidgetClass,8, 100403, 11, 2.0, NULL, 100402, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(WidgetClass,4, 100403, 10, 1.3, NULL, 100402, NULL)
#elif defined __powerpc64__
CheckTypeSize(WidgetClass,8, 100403, 9, 2.0, NULL, 100402, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(WidgetClass,4, 100403, 6, 1.2, NULL, 100402, NULL)
#elif defined __ia64__
CheckTypeSize(WidgetClass,8, 100403, 3, 1.3, NULL, 100402, NULL)
#elif defined __i386__
CheckTypeSize(WidgetClass,4, 100403, 2, 1.2, NULL, 100402, NULL)
#else
Msg("Find size of WidgetClass (100403)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100402,NULL);\n",architecture,100403,0);
#endif

#if defined __s390x__
CheckTypeSize(WidgetList,8, 100404, 12, 1.3, NULL, 100354, NULL)
#elif defined __x86_64__
CheckTypeSize(WidgetList,8, 100404, 11, 2.0, NULL, 100354, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(WidgetList,4, 100404, 10, 1.3, NULL, 100354, NULL)
#elif defined __powerpc64__
CheckTypeSize(WidgetList,8, 100404, 9, 2.0, NULL, 100354, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(WidgetList,4, 100404, 6, 1.2, NULL, 100354, NULL)
#elif defined __ia64__
CheckTypeSize(WidgetList,8, 100404, 3, 1.3, NULL, 100354, NULL)
#elif defined __i386__
CheckTypeSize(WidgetList,4, 100404, 2, 1.2, NULL, 100354, NULL)
#else
Msg("Find size of WidgetList (100404)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100354,NULL);\n",architecture,100404,0);
#endif

#if defined __s390x__
CheckTypeSize(XtAccelerators,8, 100407, 12, 1.3, NULL, 100406, NULL)
#elif defined __x86_64__
CheckTypeSize(XtAccelerators,8, 100407, 11, 2.0, NULL, 100406, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtAccelerators,4, 100407, 10, 1.3, NULL, 100406, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtAccelerators,8, 100407, 9, 2.0, NULL, 100406, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtAccelerators,4, 100407, 6, 1.2, NULL, 100406, NULL)
#elif defined __ia64__
CheckTypeSize(XtAccelerators,8, 100407, 3, 1.3, NULL, 100406, NULL)
#elif defined __i386__
CheckTypeSize(XtAccelerators,4, 100407, 2, 1.2, NULL, 100406, NULL)
#else
Msg("Find size of XtAccelerators (100407)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100406,NULL);\n",architecture,100407,0);
#endif

#if defined __s390x__
CheckTypeSize(XtTranslations,8, 100408, 12, 1.3, NULL, 100406, NULL)
#elif defined __x86_64__
CheckTypeSize(XtTranslations,8, 100408, 11, 2.0, NULL, 100406, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtTranslations,4, 100408, 10, 1.3, NULL, 100406, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtTranslations,8, 100408, 9, 2.0, NULL, 100406, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtTranslations,4, 100408, 6, 1.2, NULL, 100406, NULL)
#elif defined __ia64__
CheckTypeSize(XtTranslations,8, 100408, 3, 1.3, NULL, 100406, NULL)
#elif defined __i386__
CheckTypeSize(XtTranslations,4, 100408, 2, 1.2, NULL, 100406, NULL)
#else
Msg("Find size of XtTranslations (100408)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100406,NULL);\n",architecture,100408,0);
#endif

#if 1
CheckTypeSize(XtGeometryResult,4, 100411, 1, 1.2, NULL, 1008239, NULL)
#endif

#if 1
CheckTypeSize(XtAddressMode,4, 100412, 1, 1.2, NULL, 1008238, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XtConvertArgRec,24, 100414, 12, 1.3, NULL, 100413, NULL)
#elif defined __x86_64__
CheckTypeSize(XtConvertArgRec,24, 100414, 11, 2.0, NULL, 100413, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtConvertArgRec,12, 100414, 10, 1.3, NULL, 100413, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtConvertArgRec,24, 100414, 9, 2.0, NULL, 100413, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtConvertArgRec,12, 100414, 6, 1.2, NULL, 100413, NULL)
#elif defined __ia64__
CheckTypeSize(XtConvertArgRec,24, 100414, 3, 1.3, NULL, 100413, NULL)
#elif defined __i386__
CheckTypeSize(XtConvertArgRec,12, 100414, 2, 1.2, NULL, 100413, NULL)
#else
Msg("Find size of XtConvertArgRec (100414)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100413,NULL);\n",architecture,100414,0);
#endif

#if defined __s390x__
CheckTypeSize(XtConvertArgList,8, 100416, 12, 1.3, NULL, 100415, NULL)
#elif defined __x86_64__
CheckTypeSize(XtConvertArgList,8, 100416, 11, 2.0, NULL, 100415, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtConvertArgList,4, 100416, 10, 1.3, NULL, 100415, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtConvertArgList,8, 100416, 9, 2.0, NULL, 100415, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtConvertArgList,4, 100416, 6, 1.2, NULL, 100415, NULL)
#elif defined __ia64__
CheckTypeSize(XtConvertArgList,8, 100416, 3, 1.3, NULL, 100415, NULL)
#elif defined __i386__
CheckTypeSize(XtConvertArgList,4, 100416, 2, 1.2, NULL, 100415, NULL)
#else
Msg("Find size of XtConvertArgList (100416)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100415,NULL);\n",architecture,100416,0);
#endif

#if defined __s390x__
CheckTypeSize(XtArgVal,8, 100417, 12, 1.3, NULL, 8, NULL)
#elif defined __x86_64__
CheckTypeSize(XtArgVal,8, 100417, 11, 2.0, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtArgVal,4, 100417, 10, 1.3, NULL, 8, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtArgVal,8, 100417, 9, 2.0, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtArgVal,4, 100417, 6, 1.2, NULL, 8, NULL)
#elif defined __ia64__
CheckTypeSize(XtArgVal,8, 100417, 3, 1.3, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(XtArgVal,4, 100417, 2, 1.2, NULL, 8, NULL)
#else
Msg("Find size of XtArgVal (100417)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8,NULL);\n",architecture,100417,0);
#endif

#if defined __s390x__
CheckTypeSize(Arg,16, 100419, 12, 1.3, NULL, 100418, NULL)
#elif defined __x86_64__
CheckTypeSize(Arg,16, 100419, 11, 2.0, NULL, 100418, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Arg,8, 100419, 10, 1.3, NULL, 100418, NULL)
#elif defined __powerpc64__
CheckTypeSize(Arg,16, 100419, 9, 2.0, NULL, 100418, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Arg,8, 100419, 6, 1.2, NULL, 100418, NULL)
#elif defined __ia64__
CheckTypeSize(Arg,16, 100419, 3, 1.3, NULL, 100418, NULL)
#elif defined __i386__
CheckTypeSize(Arg,8, 100419, 2, 1.2, NULL, 100418, NULL)
#else
Msg("Find size of Arg (100419)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100418,NULL);\n",architecture,100419,0);
#endif

#if defined __s390x__
CheckTypeSize(ArgList,8, 100421, 12, 1.3, NULL, 100420, NULL)
#elif defined __x86_64__
CheckTypeSize(ArgList,8, 100421, 11, 2.0, NULL, 100420, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ArgList,4, 100421, 10, 1.3, NULL, 100420, NULL)
#elif defined __powerpc64__
CheckTypeSize(ArgList,8, 100421, 9, 2.0, NULL, 100420, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ArgList,4, 100421, 6, 1.2, NULL, 100420, NULL)
#elif defined __ia64__
CheckTypeSize(ArgList,8, 100421, 3, 1.3, NULL, 100420, NULL)
#elif defined __i386__
CheckTypeSize(ArgList,4, 100421, 2, 1.2, NULL, 100420, NULL)
#else
Msg("Find size of ArgList (100421)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100420,NULL);\n",architecture,100421,0);
#endif

#if defined __s390x__
CheckTypeSize(XtSignalCallbackProc,8, 100424, 12, 1.3, NULL, 100423, NULL)
#elif defined __x86_64__
CheckTypeSize(XtSignalCallbackProc,8, 100424, 11, 2.0, NULL, 100423, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtSignalCallbackProc,4, 100424, 10, 1.3, NULL, 100423, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtSignalCallbackProc,8, 100424, 9, 2.0, NULL, 100423, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtSignalCallbackProc,4, 100424, 6, 1.2, NULL, 100423, NULL)
#elif defined __ia64__
CheckTypeSize(XtSignalCallbackProc,8, 100424, 3, 1.3, NULL, 100423, NULL)
#elif defined __i386__
CheckTypeSize(XtSignalCallbackProc,4, 100424, 2, 1.2, NULL, 100423, NULL)
#else
Msg("Find size of XtSignalCallbackProc (100424)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100423,NULL);\n",architecture,100424,0);
#endif

#if 1
CheckTypeSize(XtCallbackStatus,4, 100425, 1, 1.2, NULL, 1008237, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XtInputCallbackProc,8, 100428, 12, 1.3, NULL, 100427, NULL)
#elif defined __x86_64__
CheckTypeSize(XtInputCallbackProc,8, 100428, 11, 2.0, NULL, 100427, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtInputCallbackProc,4, 100428, 10, 1.3, NULL, 100427, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtInputCallbackProc,8, 100428, 9, 2.0, NULL, 100427, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtInputCallbackProc,4, 100428, 6, 1.2, NULL, 100427, NULL)
#elif defined __ia64__
CheckTypeSize(XtInputCallbackProc,8, 100428, 3, 1.3, NULL, 100427, NULL)
#elif defined __i386__
CheckTypeSize(XtInputCallbackProc,4, 100428, 2, 1.2, NULL, 100427, NULL)
#else
Msg("Find size of XtInputCallbackProc (100428)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100427,NULL);\n",architecture,100428,0);
#endif

#if defined __s390x__
CheckTypeSize(XtTimerCallbackProc,8, 100431, 12, 1.3, NULL, 100430, NULL)
#elif defined __x86_64__
CheckTypeSize(XtTimerCallbackProc,8, 100431, 11, 2.0, NULL, 100430, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtTimerCallbackProc,4, 100431, 10, 1.3, NULL, 100430, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtTimerCallbackProc,8, 100431, 9, 2.0, NULL, 100430, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtTimerCallbackProc,4, 100431, 6, 1.2, NULL, 100430, NULL)
#elif defined __ia64__
CheckTypeSize(XtTimerCallbackProc,8, 100431, 3, 1.3, NULL, 100430, NULL)
#elif defined __i386__
CheckTypeSize(XtTimerCallbackProc,4, 100431, 2, 1.2, NULL, 100430, NULL)
#else
Msg("Find size of XtTimerCallbackProc (100431)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100430,NULL);\n",architecture,100431,0);
#endif

#if defined __s390x__
CheckTypeSize(XtInputMask,8, 100432, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(XtInputMask,8, 100432, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtInputMask,4, 100432, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtInputMask,8, 100432, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtInputMask,4, 100432, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtInputMask,8, 100432, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtInputMask,4, 100432, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtInputMask (100432)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,100432,0);
#endif

#if 1
CheckTypeSize(XtListPosition,4, 100433, 1, 1.2, NULL, 1008235, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XtCallbackProc,8, 100435, 12, 1.3, NULL, 100434, NULL)
#elif defined __x86_64__
CheckTypeSize(XtCallbackProc,8, 100435, 11, 2.0, NULL, 100434, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtCallbackProc,4, 100435, 10, 1.3, NULL, 100434, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtCallbackProc,8, 100435, 9, 2.0, NULL, 100434, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCallbackProc,4, 100435, 6, 1.2, NULL, 100434, NULL)
#elif defined __ia64__
CheckTypeSize(XtCallbackProc,8, 100435, 3, 1.3, NULL, 100434, NULL)
#elif defined __i386__
CheckTypeSize(XtCallbackProc,4, 100435, 2, 1.2, NULL, 100434, NULL)
#else
Msg("Find size of XtCallbackProc (100435)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100434,NULL);\n",architecture,100435,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XtCallbackRec,16, 100436, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtCallbackRec,closure,8,12,78112)
CheckOffset(struct _XtCallbackRec,closure,8,12,78112)
#elif defined __x86_64__
CheckTypeSize(struct _XtCallbackRec,16, 100436, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XtCallbackRec,closure,8,11,78112)
CheckOffset(struct _XtCallbackRec,closure,8,11,78112)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtCallbackRec,8, 100436, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtCallbackRec,closure,4,10,78112)
CheckOffset(struct _XtCallbackRec,closure,4,10,78112)
#elif defined __powerpc64__
CheckTypeSize(struct _XtCallbackRec,16, 100436, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XtCallbackRec,closure,8,9,78112)
CheckOffset(struct _XtCallbackRec,closure,8,9,78112)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XtCallbackRec,8, 100436, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtCallbackRec,closure,4,6,78112)
CheckOffset(struct _XtCallbackRec,closure,4,6,78112)
#elif defined __ia64__
CheckTypeSize(struct _XtCallbackRec,16, 100436, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtCallbackRec,closure,8,3,78112)
CheckOffset(struct _XtCallbackRec,closure,8,3,78112)
#elif defined __i386__
CheckTypeSize(struct _XtCallbackRec,8, 100436, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtCallbackRec,closure,4,2,78112)
CheckOffset(struct _XtCallbackRec,closure,4,2,78112)
#else
Msg("Find size of _XtCallbackRec (100436)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,100436,0);
#endif

#if defined __s390x__
CheckTypeSize(XtCallbackList,8, 100438, 12, 1.3, NULL, 100437, NULL)
#elif defined __x86_64__
CheckTypeSize(XtCallbackList,8, 100438, 11, 2.0, NULL, 100437, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtCallbackList,4, 100438, 10, 1.3, NULL, 100437, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtCallbackList,8, 100438, 9, 2.0, NULL, 100437, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCallbackList,4, 100438, 6, 1.2, NULL, 100437, NULL)
#elif defined __ia64__
CheckTypeSize(XtCallbackList,8, 100438, 3, 1.3, NULL, 100437, NULL)
#elif defined __i386__
CheckTypeSize(XtCallbackList,4, 100438, 2, 1.2, NULL, 100437, NULL)
#else
Msg("Find size of XtCallbackList (100438)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100437,NULL);\n",architecture,100438,0);
#endif

#if defined __s390x__
CheckTypeSize(EventMask,8, 100439, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(EventMask,8, 100439, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(EventMask,4, 100439, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(EventMask,8, 100439, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(EventMask,4, 100439, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(EventMask,8, 100439, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(EventMask,4, 100439, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of EventMask (100439)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,100439,0);
#endif

#if defined __s390x__
CheckTypeSize(XtVarArgsList,8, 100440, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(XtVarArgsList,8, 100440, 11, 2.0, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtVarArgsList,4, 100440, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtVarArgsList,8, 100440, 9, 2.0, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtVarArgsList,4, 100440, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(XtVarArgsList,8, 100440, 3, 1.3, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(XtVarArgsList,4, 100440, 2, 1.2, NULL, 40, NULL)
#else
Msg("Find size of XtVarArgsList (100440)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,100440,0);
#endif

#if defined __s390x__
CheckTypeSize(XtEventHandler,8, 100443, 12, 1.3, NULL, 100442, NULL)
#elif defined __x86_64__
CheckTypeSize(XtEventHandler,8, 100443, 11, 2.0, NULL, 100442, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtEventHandler,4, 100443, 10, 1.3, NULL, 100442, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtEventHandler,8, 100443, 9, 2.0, NULL, 100442, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtEventHandler,4, 100443, 6, 1.2, NULL, 100442, NULL)
#elif defined __ia64__
CheckTypeSize(XtEventHandler,8, 100443, 3, 1.3, NULL, 100442, NULL)
#elif defined __i386__
CheckTypeSize(XtEventHandler,4, 100443, 2, 1.2, NULL, 100442, NULL)
#else
Msg("Find size of XtEventHandler (100443)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100442,NULL);\n",architecture,100443,0);
#endif

#if defined __s390x__
CheckTypeSize(XtCaseProc,8, 100445, 12, 1.3, NULL, 100444, NULL)
#elif defined __x86_64__
CheckTypeSize(XtCaseProc,8, 100445, 11, 2.0, NULL, 100444, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtCaseProc,4, 100445, 10, 1.3, NULL, 100444, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtCaseProc,8, 100445, 9, 2.0, NULL, 100444, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCaseProc,4, 100445, 6, 1.2, NULL, 100444, NULL)
#elif defined __ia64__
CheckTypeSize(XtCaseProc,8, 100445, 3, 1.3, NULL, 100444, NULL)
#elif defined __i386__
CheckTypeSize(XtCaseProc,4, 100445, 2, 1.2, NULL, 100444, NULL)
#else
Msg("Find size of XtCaseProc (100445)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100444,NULL);\n",architecture,100445,0);
#endif

#if defined __s390x__
CheckTypeSize(XtKeyProc,8, 100447, 12, 1.3, NULL, 100446, NULL)
#elif defined __x86_64__
CheckTypeSize(XtKeyProc,8, 100447, 11, 2.0, NULL, 100446, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtKeyProc,4, 100447, 10, 1.3, NULL, 100446, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtKeyProc,8, 100447, 9, 2.0, NULL, 100446, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtKeyProc,4, 100447, 6, 1.2, NULL, 100446, NULL)
#elif defined __ia64__
CheckTypeSize(XtKeyProc,8, 100447, 3, 1.3, NULL, 100446, NULL)
#elif defined __i386__
CheckTypeSize(XtKeyProc,4, 100447, 2, 1.2, NULL, 100446, NULL)
#else
Msg("Find size of XtKeyProc (100447)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100446,NULL);\n",architecture,100447,0);
#endif

#if defined __s390x__
CheckTypeSize(XtBlockHookProc,8, 100449, 12, 1.3, NULL, 100448, NULL)
#elif defined __x86_64__
CheckTypeSize(XtBlockHookProc,8, 100449, 11, 2.0, NULL, 100448, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtBlockHookProc,4, 100449, 10, 1.3, NULL, 100448, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtBlockHookProc,8, 100449, 9, 2.0, NULL, 100448, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtBlockHookProc,4, 100449, 6, 1.2, NULL, 100448, NULL)
#elif defined __ia64__
CheckTypeSize(XtBlockHookProc,8, 100449, 3, 1.3, NULL, 100448, NULL)
#elif defined __i386__
CheckTypeSize(XtBlockHookProc,4, 100449, 2, 1.2, NULL, 100448, NULL)
#else
Msg("Find size of XtBlockHookProc (100449)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100448,NULL);\n",architecture,100449,0);
#endif

#if defined __s390x__
CheckTypeSize(XtBlockHookId,8, 100450, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(XtBlockHookId,8, 100450, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtBlockHookId,4, 100450, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtBlockHookId,8, 100450, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtBlockHookId,4, 100450, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtBlockHookId,8, 100450, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtBlockHookId,4, 100450, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtBlockHookId (100450)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,100450,0);
#endif

#if defined __s390x__
CheckTypeSize(XtActionHookProc,8, 100452, 12, 1.3, NULL, 100451, NULL)
#elif defined __x86_64__
CheckTypeSize(XtActionHookProc,8, 100452, 11, 2.0, NULL, 100451, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtActionHookProc,4, 100452, 10, 1.3, NULL, 100451, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtActionHookProc,8, 100452, 9, 2.0, NULL, 100451, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtActionHookProc,4, 100452, 6, 1.2, NULL, 100451, NULL)
#elif defined __ia64__
CheckTypeSize(XtActionHookProc,8, 100452, 3, 1.3, NULL, 100451, NULL)
#elif defined __i386__
CheckTypeSize(XtActionHookProc,4, 100452, 2, 1.2, NULL, 100451, NULL)
#else
Msg("Find size of XtActionHookProc (100452)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100451,NULL);\n",architecture,100452,0);
#endif

#if defined __s390x__
CheckTypeSize(XtActionHookId,8, 100453, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(XtActionHookId,8, 100453, 11, 2.0, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtActionHookId,4, 100453, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtActionHookId,8, 100453, 9, 2.0, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtActionHookId,4, 100453, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(XtActionHookId,8, 100453, 3, 1.3, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(XtActionHookId,4, 100453, 2, 1.2, NULL, 40, NULL)
#else
Msg("Find size of XtActionHookId (100453)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,100453,0);
#endif

#if defined __s390x__
CheckTypeSize(XtDestructor,8, 100455, 12, 1.3, NULL, 100454, NULL)
#elif defined __x86_64__
CheckTypeSize(XtDestructor,8, 100455, 11, 2.0, NULL, 100454, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtDestructor,4, 100455, 10, 1.3, NULL, 100454, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtDestructor,8, 100455, 9, 2.0, NULL, 100454, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtDestructor,4, 100455, 6, 1.2, NULL, 100454, NULL)
#elif defined __ia64__
CheckTypeSize(XtDestructor,8, 100455, 3, 1.3, NULL, 100454, NULL)
#elif defined __i386__
CheckTypeSize(XtDestructor,4, 100455, 2, 1.2, NULL, 100454, NULL)
#else
Msg("Find size of XtDestructor (100455)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100454,NULL);\n",architecture,100455,0);
#endif

#if defined __s390x__
CheckTypeSize(XtTypeConverter,8, 100457, 12, 1.3, NULL, 100456, NULL)
#elif defined __x86_64__
CheckTypeSize(XtTypeConverter,8, 100457, 11, 2.0, NULL, 100456, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtTypeConverter,4, 100457, 10, 1.3, NULL, 100456, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtTypeConverter,8, 100457, 9, 2.0, NULL, 100456, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtTypeConverter,4, 100457, 6, 1.2, NULL, 100456, NULL)
#elif defined __ia64__
CheckTypeSize(XtTypeConverter,8, 100457, 3, 1.3, NULL, 100456, NULL)
#elif defined __i386__
CheckTypeSize(XtTypeConverter,4, 100457, 2, 1.2, NULL, 100456, NULL)
#else
Msg("Find size of XtTypeConverter (100457)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100456,NULL);\n",architecture,100457,0);
#endif

#if defined __s390x__
CheckTypeSize(XtConverter,8, 100459, 12, 1.3, NULL, 100458, NULL)
#elif defined __x86_64__
CheckTypeSize(XtConverter,8, 100459, 11, 2.0, NULL, 100458, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtConverter,4, 100459, 10, 1.3, NULL, 100458, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtConverter,8, 100459, 9, 2.0, NULL, 100458, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtConverter,4, 100459, 6, 1.2, NULL, 100458, NULL)
#elif defined __ia64__
CheckTypeSize(XtConverter,8, 100459, 3, 1.3, NULL, 100458, NULL)
#elif defined __i386__
CheckTypeSize(XtConverter,4, 100459, 2, 1.2, NULL, 100458, NULL)
#else
Msg("Find size of XtConverter (100459)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100458,NULL);\n",architecture,100459,0);
#endif

#if defined __s390x__
CheckTypeSize(XtRequestId,8, 100460, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(XtRequestId,8, 100460, 11, 2.0, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtRequestId,4, 100460, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtRequestId,8, 100460, 9, 2.0, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtRequestId,4, 100460, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(XtRequestId,8, 100460, 3, 1.3, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(XtRequestId,4, 100460, 2, 1.2, NULL, 40, NULL)
#else
Msg("Find size of XtRequestId (100460)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,100460,0);
#endif

#if defined __s390x__
CheckTypeSize(XtFilePredicate,8, 100462, 12, 1.3, NULL, 100461, NULL)
#elif defined __x86_64__
CheckTypeSize(XtFilePredicate,8, 100462, 11, 2.0, NULL, 100461, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtFilePredicate,4, 100462, 10, 1.3, NULL, 100461, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtFilePredicate,8, 100462, 9, 2.0, NULL, 100461, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtFilePredicate,4, 100462, 6, 1.2, NULL, 100461, NULL)
#elif defined __ia64__
CheckTypeSize(XtFilePredicate,8, 100462, 3, 1.3, NULL, 100461, NULL)
#elif defined __i386__
CheckTypeSize(XtFilePredicate,4, 100462, 2, 1.2, NULL, 100461, NULL)
#else
Msg("Find size of XtFilePredicate (100462)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100461,NULL);\n",architecture,100462,0);
#endif

#if defined __s390x__
CheckTypeSize(SubstitutionRec,16, 100464, 12, 1.3, NULL, 100463, NULL)
#elif defined __x86_64__
CheckTypeSize(SubstitutionRec,16, 100464, 11, 2.0, NULL, 100463, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SubstitutionRec,8, 100464, 10, 1.3, NULL, 100463, NULL)
#elif defined __powerpc64__
CheckTypeSize(SubstitutionRec,16, 100464, 9, 2.0, NULL, 100463, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SubstitutionRec,8, 100464, 6, 1.2, NULL, 100463, NULL)
#elif defined __ia64__
CheckTypeSize(SubstitutionRec,16, 100464, 3, 1.3, NULL, 100463, NULL)
#elif defined __i386__
CheckTypeSize(SubstitutionRec,8, 100464, 2, 1.2, NULL, 100463, NULL)
#else
Msg("Find size of SubstitutionRec (100464)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100463,NULL);\n",architecture,100464,0);
#endif

#if defined __s390x__
CheckTypeSize(Substitution,8, 100466, 12, 1.3, NULL, 100465, NULL)
#elif defined __x86_64__
CheckTypeSize(Substitution,8, 100466, 11, 2.0, NULL, 100465, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Substitution,4, 100466, 10, 1.3, NULL, 100465, NULL)
#elif defined __powerpc64__
CheckTypeSize(Substitution,8, 100466, 9, 2.0, NULL, 100465, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Substitution,4, 100466, 6, 1.2, NULL, 100465, NULL)
#elif defined __ia64__
CheckTypeSize(Substitution,8, 100466, 3, 1.3, NULL, 100465, NULL)
#elif defined __i386__
CheckTypeSize(Substitution,4, 100466, 2, 1.2, NULL, 100465, NULL)
#else
Msg("Find size of Substitution (100466)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100465,NULL);\n",architecture,100466,0);
#endif

#if defined __s390x__
CheckTypeSize(XtSelectionCallbackProc,8, 100468, 12, 1.3, NULL, 100467, NULL)
#elif defined __x86_64__
CheckTypeSize(XtSelectionCallbackProc,8, 100468, 11, 2.0, NULL, 100467, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtSelectionCallbackProc,4, 100468, 10, 1.3, NULL, 100467, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtSelectionCallbackProc,8, 100468, 9, 2.0, NULL, 100467, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtSelectionCallbackProc,4, 100468, 6, 1.2, NULL, 100467, NULL)
#elif defined __ia64__
CheckTypeSize(XtSelectionCallbackProc,8, 100468, 3, 1.3, NULL, 100467, NULL)
#elif defined __i386__
CheckTypeSize(XtSelectionCallbackProc,4, 100468, 2, 1.2, NULL, 100467, NULL)
#else
Msg("Find size of XtSelectionCallbackProc (100468)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100467,NULL);\n",architecture,100468,0);
#endif

#if defined __s390x__
CheckTypeSize(XtWorkProc,8, 100470, 12, 1.3, NULL, 100469, NULL)
#elif defined __x86_64__
CheckTypeSize(XtWorkProc,8, 100470, 11, 2.0, NULL, 100469, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtWorkProc,4, 100470, 10, 1.3, NULL, 100469, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtWorkProc,8, 100470, 9, 2.0, NULL, 100469, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtWorkProc,4, 100470, 6, 1.2, NULL, 100469, NULL)
#elif defined __ia64__
CheckTypeSize(XtWorkProc,8, 100470, 3, 1.3, NULL, 100469, NULL)
#elif defined __i386__
CheckTypeSize(XtWorkProc,4, 100470, 2, 1.2, NULL, 100469, NULL)
#else
Msg("Find size of XtWorkProc (100470)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100469,NULL);\n",architecture,100470,0);
#endif

#if defined __s390x__
CheckTypeSize(XtSelectionDoneProc,8, 100472, 12, 1.3, NULL, 100471, NULL)
#elif defined __x86_64__
CheckTypeSize(XtSelectionDoneProc,8, 100472, 11, 2.0, NULL, 100471, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtSelectionDoneProc,4, 100472, 10, 1.3, NULL, 100471, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtSelectionDoneProc,8, 100472, 9, 2.0, NULL, 100471, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtSelectionDoneProc,4, 100472, 6, 1.2, NULL, 100471, NULL)
#elif defined __ia64__
CheckTypeSize(XtSelectionDoneProc,8, 100472, 3, 1.3, NULL, 100471, NULL)
#elif defined __i386__
CheckTypeSize(XtSelectionDoneProc,4, 100472, 2, 1.2, NULL, 100471, NULL)
#else
Msg("Find size of XtSelectionDoneProc (100472)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100471,NULL);\n",architecture,100472,0);
#endif

#if defined __s390x__
CheckTypeSize(XtLoseSelectionProc,8, 100474, 12, 1.3, NULL, 100473, NULL)
#elif defined __x86_64__
CheckTypeSize(XtLoseSelectionProc,8, 100474, 11, 2.0, NULL, 100473, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtLoseSelectionProc,4, 100474, 10, 1.3, NULL, 100473, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtLoseSelectionProc,8, 100474, 9, 2.0, NULL, 100473, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtLoseSelectionProc,4, 100474, 6, 1.2, NULL, 100473, NULL)
#elif defined __ia64__
CheckTypeSize(XtLoseSelectionProc,8, 100474, 3, 1.3, NULL, 100473, NULL)
#elif defined __i386__
CheckTypeSize(XtLoseSelectionProc,4, 100474, 2, 1.2, NULL, 100473, NULL)
#else
Msg("Find size of XtLoseSelectionProc (100474)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100473,NULL);\n",architecture,100474,0);
#endif

#if defined __s390x__
CheckTypeSize(XtErrorHandler,8, 100476, 12, 1.3, NULL, 100475, NULL)
#elif defined __x86_64__
CheckTypeSize(XtErrorHandler,8, 100476, 11, 2.0, NULL, 100475, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtErrorHandler,4, 100476, 10, 1.3, NULL, 100475, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtErrorHandler,8, 100476, 9, 2.0, NULL, 100475, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtErrorHandler,4, 100476, 6, 1.2, NULL, 100475, NULL)
#elif defined __ia64__
CheckTypeSize(XtErrorHandler,8, 100476, 3, 1.3, NULL, 100475, NULL)
#elif defined __i386__
CheckTypeSize(XtErrorHandler,4, 100476, 2, 1.2, NULL, 100475, NULL)
#else
Msg("Find size of XtErrorHandler (100476)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100475,NULL);\n",architecture,100476,0);
#endif

#if defined __s390x__
CheckTypeSize(XtConvertSelectionProc,8, 100478, 12, 1.3, NULL, 100477, NULL)
#elif defined __x86_64__
CheckTypeSize(XtConvertSelectionProc,8, 100478, 11, 2.0, NULL, 100477, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtConvertSelectionProc,4, 100478, 10, 1.3, NULL, 100477, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtConvertSelectionProc,8, 100478, 9, 2.0, NULL, 100477, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtConvertSelectionProc,4, 100478, 6, 1.2, NULL, 100477, NULL)
#elif defined __ia64__
CheckTypeSize(XtConvertSelectionProc,8, 100478, 3, 1.3, NULL, 100477, NULL)
#elif defined __i386__
CheckTypeSize(XtConvertSelectionProc,4, 100478, 2, 1.2, NULL, 100477, NULL)
#else
Msg("Find size of XtConvertSelectionProc (100478)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100477,NULL);\n",architecture,100478,0);
#endif

#if defined __s390x__
CheckTypeSize(XtErrorMsgHandler,8, 100480, 12, 1.3, NULL, 100479, NULL)
#elif defined __x86_64__
CheckTypeSize(XtErrorMsgHandler,8, 100480, 11, 2.0, NULL, 100479, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtErrorMsgHandler,4, 100480, 10, 1.3, NULL, 100479, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtErrorMsgHandler,8, 100480, 9, 2.0, NULL, 100479, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtErrorMsgHandler,4, 100480, 6, 1.2, NULL, 100479, NULL)
#elif defined __ia64__
CheckTypeSize(XtErrorMsgHandler,8, 100480, 3, 1.3, NULL, 100479, NULL)
#elif defined __i386__
CheckTypeSize(XtErrorMsgHandler,4, 100480, 2, 1.2, NULL, 100479, NULL)
#else
Msg("Find size of XtErrorMsgHandler (100480)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100479,NULL);\n",architecture,100480,0);
#endif

#if defined __s390x__
CheckTypeSize(XtLanguageProc,8, 100482, 12, 1.3, NULL, 100481, NULL)
#elif defined __x86_64__
CheckTypeSize(XtLanguageProc,8, 100482, 11, 2.0, NULL, 100481, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtLanguageProc,4, 100482, 10, 1.3, NULL, 100481, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtLanguageProc,8, 100482, 9, 2.0, NULL, 100481, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtLanguageProc,4, 100482, 6, 1.2, NULL, 100481, NULL)
#elif defined __ia64__
CheckTypeSize(XtLanguageProc,8, 100482, 3, 1.3, NULL, 100481, NULL)
#elif defined __i386__
CheckTypeSize(XtLanguageProc,4, 100482, 2, 1.2, NULL, 100481, NULL)
#else
Msg("Find size of XtLanguageProc (100482)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100481,NULL);\n",architecture,100482,0);
#endif

#if 1
CheckTypeSize(XtGrabKind,4, 100483, 1, 1.2, NULL, 1008236, NULL)
#endif

#if defined __s390x__
CheckTypeSize(struct _XtCheckpointTokenRec,40, 100484, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtCheckpointTokenRec,widget,8,12,78195)
CheckOffset(struct _XtCheckpointTokenRec,widget,32,12,78195)
#elif defined __x86_64__
CheckTypeSize(struct _XtCheckpointTokenRec,40, 100484, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XtCheckpointTokenRec,widget,8,11,78195)
CheckOffset(struct _XtCheckpointTokenRec,widget,32,11,78195)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtCheckpointTokenRec,32, 100484, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtCheckpointTokenRec,widget,4,10,78195)
CheckOffset(struct _XtCheckpointTokenRec,widget,28,10,78195)
#elif defined __powerpc64__
CheckTypeSize(struct _XtCheckpointTokenRec,40, 100484, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XtCheckpointTokenRec,widget,8,9,78195)
CheckOffset(struct _XtCheckpointTokenRec,widget,32,9,78195)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XtCheckpointTokenRec,32, 100484, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtCheckpointTokenRec,widget,4,6,78195)
CheckOffset(struct _XtCheckpointTokenRec,widget,28,6,78195)
#elif defined __ia64__
CheckTypeSize(struct _XtCheckpointTokenRec,40, 100484, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtCheckpointTokenRec,widget,8,3,78195)
CheckOffset(struct _XtCheckpointTokenRec,widget,32,3,78195)
#elif defined __i386__
CheckTypeSize(struct _XtCheckpointTokenRec,32, 100484, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtCheckpointTokenRec,widget,4,2,78195)
CheckOffset(struct _XtCheckpointTokenRec,widget,28,2,78195)
#else
Msg("Find size of _XtCheckpointTokenRec (100484)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,100484,0);
#endif

#if defined __s390x__
CheckTypeSize(XtCheckpointToken,8, 100486, 12, 1.3, NULL, 100485, NULL)
#elif defined __x86_64__
CheckTypeSize(XtCheckpointToken,8, 100486, 11, 2.0, NULL, 100485, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtCheckpointToken,4, 100486, 10, 1.3, NULL, 100485, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtCheckpointToken,8, 100486, 9, 2.0, NULL, 100485, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCheckpointToken,4, 100486, 6, 1.2, NULL, 100485, NULL)
#elif defined __ia64__
CheckTypeSize(XtCheckpointToken,8, 100486, 3, 1.3, NULL, 100485, NULL)
#elif defined __i386__
CheckTypeSize(XtCheckpointToken,4, 100486, 2, 1.2, NULL, 100485, NULL)
#else
Msg("Find size of XtCheckpointToken (100486)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100485,NULL);\n",architecture,100486,0);
#endif

#if defined __s390x__
CheckTypeSize(XtExtensionSelectProc,8, 100488, 12, 1.3, NULL, 100487, NULL)
#elif defined __x86_64__
CheckTypeSize(XtExtensionSelectProc,8, 100488, 11, 2.0, NULL, 100487, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtExtensionSelectProc,4, 100488, 10, 1.3, NULL, 100487, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtExtensionSelectProc,8, 100488, 9, 2.0, NULL, 100487, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtExtensionSelectProc,4, 100488, 6, 1.2, NULL, 100487, NULL)
#elif defined __ia64__
CheckTypeSize(XtExtensionSelectProc,8, 100488, 3, 1.3, NULL, 100487, NULL)
#elif defined __i386__
CheckTypeSize(XtExtensionSelectProc,4, 100488, 2, 1.2, NULL, 100487, NULL)
#else
Msg("Find size of XtExtensionSelectProc (100488)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100487,NULL);\n",architecture,100488,0);
#endif

#if defined __s390x__
CheckTypeSize(XtEventDispatchProc,8, 100490, 12, 1.3, NULL, 100489, NULL)
#elif defined __x86_64__
CheckTypeSize(XtEventDispatchProc,8, 100490, 11, 2.0, NULL, 100489, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtEventDispatchProc,4, 100490, 10, 1.3, NULL, 100489, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtEventDispatchProc,8, 100490, 9, 2.0, NULL, 100489, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtEventDispatchProc,4, 100490, 6, 1.2, NULL, 100489, NULL)
#elif defined __ia64__
CheckTypeSize(XtEventDispatchProc,8, 100490, 3, 1.3, NULL, 100489, NULL)
#elif defined __i386__
CheckTypeSize(XtEventDispatchProc,4, 100490, 2, 1.2, NULL, 100489, NULL)
#else
Msg("Find size of XtEventDispatchProc (100490)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100489,NULL);\n",architecture,100490,0);
#endif

#if defined __s390x__
CheckTypeSize(XtCancelConvertSelectionProc,8, 100493, 12, 1.3, NULL, 100492, NULL)
#elif defined __x86_64__
CheckTypeSize(XtCancelConvertSelectionProc,8, 100493, 11, 2.0, NULL, 100492, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtCancelConvertSelectionProc,4, 100493, 10, 1.3, NULL, 100492, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtCancelConvertSelectionProc,8, 100493, 9, 2.0, NULL, 100492, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCancelConvertSelectionProc,4, 100493, 6, 1.2, NULL, 100492, NULL)
#elif defined __ia64__
CheckTypeSize(XtCancelConvertSelectionProc,8, 100493, 3, 1.3, NULL, 100492, NULL)
#elif defined __i386__
CheckTypeSize(XtCancelConvertSelectionProc,4, 100493, 2, 1.2, NULL, 100492, NULL)
#else
Msg("Find size of XtCancelConvertSelectionProc (100493)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100492,NULL);\n",architecture,100493,0);
#endif

#if defined __s390x__
CheckTypeSize(XtConvertSelectionIncrProc,8, 100495, 12, 1.3, NULL, 100494, NULL)
#elif defined __x86_64__
CheckTypeSize(XtConvertSelectionIncrProc,8, 100495, 11, 2.0, NULL, 100494, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtConvertSelectionIncrProc,4, 100495, 10, 1.3, NULL, 100494, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtConvertSelectionIncrProc,8, 100495, 9, 2.0, NULL, 100494, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtConvertSelectionIncrProc,4, 100495, 6, 1.2, NULL, 100494, NULL)
#elif defined __ia64__
CheckTypeSize(XtConvertSelectionIncrProc,8, 100495, 3, 1.3, NULL, 100494, NULL)
#elif defined __i386__
CheckTypeSize(XtConvertSelectionIncrProc,4, 100495, 2, 1.2, NULL, 100494, NULL)
#else
Msg("Find size of XtConvertSelectionIncrProc (100495)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100494,NULL);\n",architecture,100495,0);
#endif

#if defined __s390x__
CheckTypeSize(XtSelectionDoneIncrProc,8, 100496, 12, 1.3, NULL, 100492, NULL)
#elif defined __x86_64__
CheckTypeSize(XtSelectionDoneIncrProc,8, 100496, 11, 2.0, NULL, 100492, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtSelectionDoneIncrProc,4, 100496, 10, 1.3, NULL, 100492, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtSelectionDoneIncrProc,8, 100496, 9, 2.0, NULL, 100492, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtSelectionDoneIncrProc,4, 100496, 6, 1.2, NULL, 100492, NULL)
#elif defined __ia64__
CheckTypeSize(XtSelectionDoneIncrProc,8, 100496, 3, 1.3, NULL, 100492, NULL)
#elif defined __i386__
CheckTypeSize(XtSelectionDoneIncrProc,4, 100496, 2, 1.2, NULL, 100492, NULL)
#else
Msg("Find size of XtSelectionDoneIncrProc (100496)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100492,NULL);\n",architecture,100496,0);
#endif

#if defined __s390x__
CheckTypeSize(XtLoseSelectionIncrProc,8, 100498, 12, 1.3, NULL, 100497, NULL)
#elif defined __x86_64__
CheckTypeSize(XtLoseSelectionIncrProc,8, 100498, 11, 2.0, NULL, 100497, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtLoseSelectionIncrProc,4, 100498, 10, 1.3, NULL, 100497, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtLoseSelectionIncrProc,8, 100498, 9, 2.0, NULL, 100497, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtLoseSelectionIncrProc,4, 100498, 6, 1.2, NULL, 100497, NULL)
#elif defined __ia64__
CheckTypeSize(XtLoseSelectionIncrProc,8, 100498, 3, 1.3, NULL, 100497, NULL)
#elif defined __i386__
CheckTypeSize(XtLoseSelectionIncrProc,4, 100498, 2, 1.2, NULL, 100497, NULL)
#else
Msg("Find size of XtLoseSelectionIncrProc (100498)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100497,NULL);\n",architecture,100498,0);
#endif

#if defined __s390x__
CheckTypeSize(XtValueMask,8, 100510, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(XtValueMask,8, 100510, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtValueMask,4, 100510, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtValueMask,8, 100510, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtValueMask,4, 100510, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtValueMask,8, 100510, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtValueMask,4, 100510, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtValueMask (100510)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,100510,0);
#endif

#if defined __s390x__
CheckTypeSize(XtEventTable,8, 100567, 12, 1.3, NULL, 100566, NULL)
#elif defined __x86_64__
CheckTypeSize(XtEventTable,8, 100567, 11, 2.0, NULL, 100566, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtEventTable,4, 100567, 10, 1.3, NULL, 100566, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtEventTable,8, 100567, 9, 2.0, NULL, 100566, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtEventTable,4, 100567, 6, 1.2, NULL, 100566, NULL)
#elif defined __ia64__
CheckTypeSize(XtEventTable,8, 100567, 3, 1.3, NULL, 100566, NULL)
#elif defined __i386__
CheckTypeSize(XtEventTable,4, 100567, 2, 1.2, NULL, 100566, NULL)
#else
Msg("Find size of XtEventTable (100567)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100566,NULL);\n",architecture,100567,0);
#endif

#if defined __s390x__
CheckTypeSize(XtBoundActions,8, 100586, 12, 1.3, NULL, 100585, NULL)
#elif defined __x86_64__
CheckTypeSize(XtBoundActions,8, 100586, 11, 2.0, NULL, 100585, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtBoundActions,4, 100586, 10, 1.3, NULL, 100585, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtBoundActions,8, 100586, 9, 2.0, NULL, 100585, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtBoundActions,4, 100586, 6, 1.2, NULL, 100585, NULL)
#elif defined __ia64__
CheckTypeSize(XtBoundActions,8, 100586, 3, 1.3, NULL, 100585, NULL)
#elif defined __i386__
CheckTypeSize(XtBoundActions,4, 100586, 2, 1.2, NULL, 100585, NULL)
#else
Msg("Find size of XtBoundActions (100586)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100585,NULL);\n",architecture,100586,0);
#endif

#if 1
CheckTypeSize(XtResource,0, 1008964, 1, 1.2, NULL, 100375, NULL)
#endif

#if 1
CheckTypeSize(XtCallbackRec,0, 1008965, 1, 1.2, NULL, 100436, NULL)
#endif

#if 1
CheckTypeSize(XtCheckpointTokenRec,0, 1008966, 1, 1.2, NULL, 100484, NULL)
#endif

#if 1
CheckTypeSize(Pixel,0, 1008967, 1, 1.1, NULL, 11186, NULL)
#endif

#if 1
CheckTypeSize(XtActionsRec,0, 1008971, 1, 1.2, NULL, 100385, NULL)
#endif

#if 1
CheckTypeSize(XtPopdownIDRec,0, 1008982, 1, 1.2, NULL, 1008981, NULL)
#endif

#if 1
CheckTypeSize(XtPopdownID,0, 1008983, 1, 1.2, NULL, 1008984, NULL)
#endif

#if 1
CheckTypeSize(XtCreatePopupChildProc,0, 1008986, 1, 1.2, NULL, 100628, NULL)
#endif

#if 1
CheckTypeSize(XtCreateHookDataRec,0, 1008992, 1, 1.2, NULL, 1008991, NULL)
#endif

#if 1
CheckTypeSize(XtCreateHookData,0, 1008993, 1, 1.2, NULL, 1008994, NULL)
#endif

#if 1
CheckTypeSize(XtChangeHookDataRec,0, 1008996, 1, 1.2, NULL, 1008995, NULL)
#endif

#if 1
CheckTypeSize(XtChangeHookData,0, 1008997, 1, 1.2, NULL, 1008998, NULL)
#endif

#if 1
CheckTypeSize(XtChangeHookSetValuesDataRec,0, 1009000, 1, 1.2, NULL, 1008999, NULL)
#endif

#if 1
CheckTypeSize(XtChangeHookSetValuesData,0, 1009001, 1, 1.2, NULL, 1009002, NULL)
#endif

#if 1
CheckTypeSize(XtConfigureHookDataRec,0, 1009004, 1, 1.2, NULL, 1009003, NULL)
#endif

#if 1
CheckTypeSize(XtConfigureHookData,0, 1009005, 1, 1.2, NULL, 1009006, NULL)
#endif

#if 1
CheckTypeSize(XtGeometryHookDataRec,0, 1009008, 1, 1.2, NULL, 1009007, NULL)
#endif

#if 1
CheckTypeSize(XtGeometryHookData,0, 1009009, 1, 1.2, NULL, 1009010, NULL)
#endif

#if 1
CheckTypeSize(XtDestroyHookDataRec,0, 1009012, 1, 1.2, NULL, 1009011, NULL)
#endif

#if 1
CheckTypeSize(XtDestroyHookData,0, 1009013, 1, 1.2, NULL, 1009014, NULL)
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
typedef void (*XtKeyProc_db)(Display *, KeyCode, Modifiers, Modifiers *, KeySym *);
CheckFunctionTypedef(XtKeyProc,XtKeyProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtKeyProc_db)(Display *, KeyCode, Modifiers, Modifiers *, KeySym *);
CheckFunctionTypedef(XtKeyProc,XtKeyProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtKeyProc_db)(Display *, KeyCode, Modifiers, Modifiers *, KeySym *);
CheckFunctionTypedef(XtKeyProc,XtKeyProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtKeyProc_db)(Display *, KeyCode, Modifiers, Modifiers *, KeySym *);
CheckFunctionTypedef(XtKeyProc,XtKeyProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtKeyProc_db)(Display *, KeyCode, Modifiers, Modifiers *, KeySym *);
CheckFunctionTypedef(XtKeyProc,XtKeyProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtKeyProc_db)(Display *, KeyCode, Modifiers, Modifiers *, KeySym *);
CheckFunctionTypedef(XtKeyProc,XtKeyProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtKeyProc_db)(Display *, KeyCode, Modifiers, Modifiers *, KeySym *);
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
extern void XtAddEventHandler_db(Widget, EventMask, Boolean, XtEventHandler, XtPointer);
CheckInterfacedef(XtAddEventHandler,XtAddEventHandler_db);
extern void XtAddExposureToRegion_db(XEvent *, Region);
CheckInterfacedef(XtAddExposureToRegion,XtAddExposureToRegion_db);
extern void XtAddGrab_db(Widget, Boolean, Boolean);
CheckInterfacedef(XtAddGrab,XtAddGrab_db);
extern XtInputId XtAddInput_db(int, XtPointer, XtInputCallbackProc, XtPointer);
CheckInterfacedef(XtAddInput,XtAddInput_db);
extern void XtAddRawEventHandler_db(Widget, EventMask, Boolean, XtEventHandler, XtPointer);
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
extern void XtGrabButton_db(Widget, int, Modifiers, Boolean, unsigned int, int, int, Window, Cursor);
CheckInterfacedef(XtGrabButton,XtGrabButton_db);
extern void XtGrabKey_db(Widget, KeyCode, Modifiers, Boolean, int, int);
CheckInterfacedef(XtGrabKey,XtGrabKey_db);
extern int XtGrabKeyboard_db(Widget, Boolean, int, int, Time);
CheckInterfacedef(XtGrabKeyboard,XtGrabKeyboard_db);
extern int XtGrabPointer_db(Widget, Boolean, unsigned int, int, int, Window, Cursor, Time);
CheckInterfacedef(XtGrabPointer,XtGrabPointer_db);
extern XtCallbackStatus XtHasCallbacks_db(Widget, const char *);
CheckInterfacedef(XtHasCallbacks,XtHasCallbacks_db);
extern Widget XtHooksOfDisplay_db(Display *);
CheckInterfacedef(XtHooksOfDisplay,XtHooksOfDisplay_db);
extern Widget XtInitialize_db(const char *, const char *, XrmOptionDescRec *, Cardinal, int *, char * *);
CheckInterfacedef(XtInitialize,XtInitialize_db);
extern void XtInitializeWidgetClass_db(WidgetClass);
CheckInterfacedef(XtInitializeWidgetClass,XtInitializeWidgetClass_db);
extern void XtInsertEventHandler_db(Widget, EventMask, Boolean, XtEventHandler, XtPointer, XtListPosition);
CheckInterfacedef(XtInsertEventHandler,XtInsertEventHandler_db);
extern void XtInsertEventTypeHandler_db(Widget, int, XtPointer, XtEventHandler, XtPointer, XtListPosition);
CheckInterfacedef(XtInsertEventTypeHandler,XtInsertEventTypeHandler_db);
extern void XtInsertRawEventHandler_db(Widget, EventMask, Boolean, XtEventHandler, XtPointer, XtListPosition);
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
extern XtGeometryResult XtMakeResizeRequest_db(Widget, Dimension, Dimension, Dimension *, Dimension *);
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
extern void XtRegisterGrabAction_db(XtActionProc, Boolean, unsigned int, int, int);
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
extern void XtRemoveEventHandler_db(Widget, EventMask, Boolean, XtEventHandler, XtPointer);
CheckInterfacedef(XtRemoveEventHandler,XtRemoveEventHandler_db);
extern void XtRemoveEventTypeHandler_db(Widget, int, XtPointer, XtEventHandler, XtPointer);
CheckInterfacedef(XtRemoveEventTypeHandler,XtRemoveEventTypeHandler_db);
extern void XtRemoveGrab_db(Widget);
CheckInterfacedef(XtRemoveGrab,XtRemoveGrab_db);
extern void XtRemoveInput_db(XtInputId);
CheckInterfacedef(XtRemoveInput,XtRemoveInput_db);
extern void XtRemoveRawEventHandler_db(Widget, EventMask, Boolean, XtEventHandler, XtPointer);
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
extern void XtSetMappedWhenManaged_db(Widget, Boolean);
CheckInterfacedef(XtSetMappedWhenManaged,XtSetMappedWhenManaged_db);
extern void XtSetMultiClickTime_db(Display *, int);
CheckInterfacedef(XtSetMultiClickTime,XtSetMultiClickTime_db);
extern void XtSetSelectionParameters_db(Widget, Atom, Atom, XtPointer, long unsigned int, int);
CheckInterfacedef(XtSetSelectionParameters,XtSetSelectionParameters_db);
extern void XtSetSelectionTimeout_db(long unsigned int);
CheckInterfacedef(XtSetSelectionTimeout,XtSetSelectionTimeout_db);
extern void XtSetSensitive_db(Widget, Boolean);
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
extern void XtTranslateCoords_db(Widget, Position, Position, Position *, Position *);
CheckInterfacedef(XtTranslateCoords,XtTranslateCoords_db);
extern void XtTranslateKey_db(Display *, KeyCode, Modifiers, Modifiers *, KeySym *);
CheckInterfacedef(XtTranslateKey,XtTranslateKey_db);
extern void XtTranslateKeycode_db(Display *, KeyCode, Modifiers, Modifiers *, KeySym *);
CheckInterfacedef(XtTranslateKeycode,XtTranslateKeycode_db);
extern void XtUngrabButton_db(Widget, unsigned int, Modifiers);
CheckInterfacedef(XtUngrabButton,XtUngrabButton_db);
extern void XtUngrabKey_db(Widget, KeyCode, Modifiers);
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
extern Boolean _XtCheckSubclassFlag_db(Widget, XtEnum);
CheckInterfacedef(_XtCheckSubclassFlag,_XtCheckSubclassFlag_db);
extern Boolean _XtIsSubclassOf_db(Widget, WidgetClass, WidgetClass, XtEnum);
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
