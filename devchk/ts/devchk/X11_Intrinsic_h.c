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
struct _TranslationData {};
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
#if 1
CheckTypeSize(Cardinal,4, 100346, 1, 1.2, NULL, 7, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtPointer,4, 100348, 10, 1.2, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(XtPointer,4, 100348, 2, 1.2, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtPointer,4, 100348, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(XtPointer,0, 100348, 3, 1.2, NULL, 40, NULL)
#else
Msg("Find size of XtPointer (100348)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,100348,0);
#endif

#if 1
CheckTypeSize(struct _WidgetRec,0, 100351, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _WidgetRec on All\n");
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(Widget,4, 100353, 10, 1.2, NULL, 100352, NULL)
#elif defined __i386__
CheckTypeSize(Widget,4, 100353, 2, 1.2, NULL, 100352, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Widget,4, 100353, 6, 1.2, NULL, 100352, NULL)
#elif defined __ia64__
CheckTypeSize(Widget,0, 100353, 3, 1.2, NULL, 100352, NULL)
#else
Msg("Find size of Widget (100353)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100352,NULL);\n",architecture,100353,0);
#endif

#if defined __i386__
CheckTypeSize(String,4, 100356, 2, 1.2, NULL, 63, NULL)
#elif defined __ia64__
CheckTypeSize(String,8, 100356, 3, 1.2, NULL, 63, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(String,4, 100356, 6, 1.2, NULL, 63, NULL)
#elif defined __powerpc64__
CheckTypeSize(String,8, 100356, 9, 1.2, NULL, 63, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(String,4, 100356, 10, 1.2, NULL, 63, NULL)
#elif defined __x86_64__
CheckTypeSize(String,8, 100356, 11, 1.2, NULL, 63, NULL)
#elif defined __s390x__
CheckTypeSize(String,8, 100356, 12, 1.2, NULL, 63, NULL)
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

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtWidgetGeometry,24, 100365, 10, 1.2, NULL, 100364, NULL)
#elif defined __i386__
CheckTypeSize(XtWidgetGeometry,24, 100365, 2, 1.2, NULL, 100364, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtWidgetGeometry,24, 100365, 6, 1.2, NULL, 100364, NULL)
#elif defined __ia64__
CheckTypeSize(XtWidgetGeometry,0, 100365, 3, 1.2, NULL, 100364, NULL)
#else
Msg("Find size of XtWidgetGeometry (100365)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100364,NULL);\n",architecture,100365,0);
#endif

#if 1
CheckTypeSize(Modifiers,4, 100368, 1, 1.2, NULL, 7, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtCacheRef,4, 100372, 10, 1.2, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(XtCacheRef,4, 100372, 2, 1.2, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCacheRef,4, 100372, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(XtCacheRef,0, 100372, 3, 1.2, NULL, 40, NULL)
#else
Msg("Find size of XtCacheRef (100372)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,100372,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtResource,28, 100375, 10, 1.2, NULL, 0, NULL)
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
CheckTypeSize(struct _XtResource,0, 100375, 3, 1.2, NULL, 0, NULL)
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
#else
Msg("Find size of _XtResource (100375)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,100375,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtResourceList,4, 100377, 10, 1.2, NULL, 100376, NULL)
#elif defined __i386__
CheckTypeSize(XtResourceList,4, 100377, 2, 1.2, NULL, 100376, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtResourceList,4, 100377, 6, 1.2, NULL, 100376, NULL)
#elif defined __ia64__
CheckTypeSize(XtResourceList,0, 100377, 3, 1.2, NULL, 100376, NULL)
#else
Msg("Find size of XtResourceList (100377)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100376,NULL);\n",architecture,100377,0);
#endif

#if 1
CheckTypeSize(struct _XtAppStruct,0, 100379, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XtAppStruct on All\n");
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtAppContext,4, 100381, 10, 1.2, NULL, 100380, NULL)
#elif defined __i386__
CheckTypeSize(XtAppContext,4, 100381, 2, 1.2, NULL, 100380, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtAppContext,4, 100381, 6, 1.2, NULL, 100380, NULL)
#elif defined __ia64__
CheckTypeSize(XtAppContext,0, 100381, 3, 1.2, NULL, 100380, NULL)
#else
Msg("Find size of XtAppContext (100381)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100380,NULL);\n",architecture,100381,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtActionProc,4, 100384, 10, 1.2, NULL, 100383, NULL)
#elif defined __i386__
CheckTypeSize(XtActionProc,4, 100384, 2, 1.2, NULL, 100383, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtActionProc,4, 100384, 6, 1.2, NULL, 100383, NULL)
#elif defined __ia64__
CheckTypeSize(XtActionProc,0, 100384, 3, 1.2, NULL, 100383, NULL)
#else
Msg("Find size of XtActionProc (100384)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100383,NULL);\n",architecture,100384,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtActionsRec,8, 100385, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtActionsRec,proc,4,10,78073)
CheckOffset(struct _XtActionsRec,proc,4,10,78073)
#elif defined __i386__
CheckTypeSize(struct _XtActionsRec,8, 100385, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtActionsRec,proc,4,2,78073)
CheckOffset(struct _XtActionsRec,proc,4,2,78073)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XtActionsRec,8, 100385, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtActionsRec,proc,4,6,78073)
CheckOffset(struct _XtActionsRec,proc,4,6,78073)
#elif defined __ia64__
CheckTypeSize(struct _XtActionsRec,0, 100385, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtActionsRec,proc,8,3,78073)
CheckOffset(struct _XtActionsRec,proc,8,3,78073)
#else
Msg("Find size of _XtActionsRec (100385)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,100385,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtActionList,4, 100387, 10, 1.2, NULL, 100386, NULL)
#elif defined __i386__
CheckTypeSize(XtActionList,4, 100387, 2, 1.2, NULL, 100386, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtActionList,4, 100387, 6, 1.2, NULL, 100386, NULL)
#elif defined __ia64__
CheckTypeSize(XtActionList,0, 100387, 3, 1.2, NULL, 100386, NULL)
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

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtGCMask,4, 100395, 10, 1.2, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtGCMask,4, 100395, 2, 1.2, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtGCMask,4, 100395, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtGCMask,0, 100395, 3, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtGCMask (100395)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,100395,0);
#endif

#if 1
CheckTypeSize(XtEnum,1, 100396, 1, 1.2, NULL, 3, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtSignalId,4, 100397, 10, 1.2, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtSignalId,4, 100397, 2, 1.2, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtSignalId,4, 100397, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtSignalId,0, 100397, 3, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtSignalId (100397)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,100397,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtWorkProcId,4, 100398, 10, 1.2, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtWorkProcId,4, 100398, 2, 1.2, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtWorkProcId,4, 100398, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtWorkProcId,0, 100398, 3, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtWorkProcId (100398)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,100398,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtInputId,4, 100399, 10, 1.2, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtInputId,4, 100399, 2, 1.2, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtInputId,4, 100399, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtInputId,0, 100399, 3, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtInputId (100399)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,100399,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtIntervalId,4, 100400, 10, 1.2, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtIntervalId,4, 100400, 2, 1.2, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtIntervalId,4, 100400, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtIntervalId,0, 100400, 3, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtIntervalId (100400)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,100400,0);
#endif

#if 1
CheckTypeSize(struct _WidgetClassRec,0, 100401, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _WidgetClassRec on All\n");
#endif

#if defined __i386__
CheckTypeSize(WidgetClass,4, 100403, 2, 1.2, NULL, 100402, NULL)
#elif defined __ia64__
CheckTypeSize(WidgetClass,8, 100403, 3, 1.2, NULL, 100402, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(WidgetClass,4, 100403, 6, 1.2, NULL, 100402, NULL)
#elif defined __powerpc64__
CheckTypeSize(WidgetClass,8, 100403, 9, 1.2, NULL, 100402, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(WidgetClass,4, 100403, 10, 1.2, NULL, 100402, NULL)
#elif defined __x86_64__
CheckTypeSize(WidgetClass,8, 100403, 11, 1.2, NULL, 100402, NULL)
#elif defined __s390x__
CheckTypeSize(WidgetClass,8, 100403, 12, 1.2, NULL, 100402, NULL)
#else
Msg("Find size of WidgetClass (100403)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100402,NULL);\n",architecture,100403,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(WidgetList,4, 100404, 10, 1.2, NULL, 100354, NULL)
#elif defined __i386__
CheckTypeSize(WidgetList,4, 100404, 2, 1.2, NULL, 100354, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(WidgetList,4, 100404, 6, 1.2, NULL, 100354, NULL)
#elif defined __ia64__
CheckTypeSize(WidgetList,0, 100404, 3, 1.2, NULL, 100354, NULL)
#else
Msg("Find size of WidgetList (100404)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100354,NULL);\n",architecture,100404,0);
#endif

#if 1
CheckTypeSize(struct _TranslationData,0, 100405, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _TranslationData on All\n");
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtAccelerators,4, 100407, 10, 1.2, NULL, 100406, NULL)
#elif defined __i386__
CheckTypeSize(XtAccelerators,4, 100407, 2, 1.2, NULL, 100406, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtAccelerators,4, 100407, 6, 1.2, NULL, 100406, NULL)
#elif defined __ia64__
CheckTypeSize(XtAccelerators,0, 100407, 3, 1.2, NULL, 100406, NULL)
#else
Msg("Find size of XtAccelerators (100407)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100406,NULL);\n",architecture,100407,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtTranslations,4, 100408, 10, 1.2, NULL, 100406, NULL)
#elif defined __i386__
CheckTypeSize(XtTranslations,4, 100408, 2, 1.2, NULL, 100406, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtTranslations,4, 100408, 6, 1.2, NULL, 100406, NULL)
#elif defined __ia64__
CheckTypeSize(XtTranslations,0, 100408, 3, 1.2, NULL, 100406, NULL)
#else
Msg("Find size of XtTranslations (100408)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100406,NULL);\n",architecture,100408,0);
#endif

#if 1
CheckEnum("XtGeometryYes",XtGeometryYes,0,78080)
CheckEnum("XtGeometryNo",XtGeometryNo,(0) + 1,78081)
CheckEnum("XtGeometryAlmost",XtGeometryAlmost,((0) + 1) + 1,78082)
CheckEnum("XtGeometryDone",XtGeometryDone,(((0) + 1) + 1) + 1,78083)
#endif

#if 1
CheckEnum("XtAddress",XtAddress,0,78084)
CheckEnum("XtBaseOffset",XtBaseOffset,(0) + 1,78085)
CheckEnum("XtImmediate",XtImmediate,((0) + 1) + 1,78086)
CheckEnum("XtResourceString",XtResourceString,(((0) + 1) + 1) + 1,78087)
CheckEnum("XtResourceQuark",XtResourceQuark,((((0) + 1) + 1) + 1) + 1,78088)
CheckEnum("XtWidgetBaseOffset",XtWidgetBaseOffset,(((((0) + 1) + 1) + 1) + 1) + 1,78089)
CheckEnum("XtProcedureArg",XtProcedureArg,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,78090)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtConvertArgRec,12, 100414, 10, 1.2, NULL, 100413, NULL)
#elif defined __i386__
CheckTypeSize(XtConvertArgRec,12, 100414, 2, 1.2, NULL, 100413, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtConvertArgRec,12, 100414, 6, 1.2, NULL, 100413, NULL)
#elif defined __ia64__
CheckTypeSize(XtConvertArgRec,0, 100414, 3, 1.2, NULL, 100413, NULL)
#else
Msg("Find size of XtConvertArgRec (100414)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100413,NULL);\n",architecture,100414,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtConvertArgList,4, 100416, 10, 1.2, NULL, 100415, NULL)
#elif defined __i386__
CheckTypeSize(XtConvertArgList,4, 100416, 2, 1.2, NULL, 100415, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtConvertArgList,4, 100416, 6, 1.2, NULL, 100415, NULL)
#elif defined __ia64__
CheckTypeSize(XtConvertArgList,0, 100416, 3, 1.2, NULL, 100415, NULL)
#else
Msg("Find size of XtConvertArgList (100416)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100415,NULL);\n",architecture,100416,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtArgVal,4, 100417, 10, 1.2, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(XtArgVal,4, 100417, 2, 1.2, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtArgVal,4, 100417, 6, 1.2, NULL, 8, NULL)
#elif defined __ia64__
CheckTypeSize(XtArgVal,0, 100417, 3, 1.2, NULL, 8, NULL)
#else
Msg("Find size of XtArgVal (100417)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8,NULL);\n",architecture,100417,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(Arg,8, 100419, 10, 1.2, NULL, 100418, NULL)
#elif defined __i386__
CheckTypeSize(Arg,8, 100419, 2, 1.2, NULL, 100418, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Arg,8, 100419, 6, 1.2, NULL, 100418, NULL)
#elif defined __ia64__
CheckTypeSize(Arg,0, 100419, 3, 1.2, NULL, 100418, NULL)
#else
Msg("Find size of Arg (100419)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100418,NULL);\n",architecture,100419,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(ArgList,4, 100421, 10, 1.2, NULL, 100420, NULL)
#elif defined __i386__
CheckTypeSize(ArgList,4, 100421, 2, 1.2, NULL, 100420, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ArgList,4, 100421, 6, 1.2, NULL, 100420, NULL)
#elif defined __ia64__
CheckTypeSize(ArgList,0, 100421, 3, 1.2, NULL, 100420, NULL)
#else
Msg("Find size of ArgList (100421)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100420,NULL);\n",architecture,100421,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtSignalCallbackProc,4, 100424, 10, 1.2, NULL, 100423, NULL)
#elif defined __i386__
CheckTypeSize(XtSignalCallbackProc,4, 100424, 2, 1.2, NULL, 100423, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtSignalCallbackProc,4, 100424, 6, 1.2, NULL, 100423, NULL)
#elif defined __ia64__
CheckTypeSize(XtSignalCallbackProc,0, 100424, 3, 1.2, NULL, 100423, NULL)
#else
Msg("Find size of XtSignalCallbackProc (100424)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100423,NULL);\n",architecture,100424,0);
#endif

#if 1
CheckEnum("XtCallbackNoList",XtCallbackNoList,0,78098)
CheckEnum("XtCallbackHasNone",XtCallbackHasNone,(0) + 1,78099)
CheckEnum("XtCallbackHasSome",XtCallbackHasSome,((0) + 1) + 1,78100)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtInputCallbackProc,4, 100428, 10, 1.2, NULL, 100427, NULL)
#elif defined __i386__
CheckTypeSize(XtInputCallbackProc,4, 100428, 2, 1.2, NULL, 100427, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtInputCallbackProc,4, 100428, 6, 1.2, NULL, 100427, NULL)
#elif defined __ia64__
CheckTypeSize(XtInputCallbackProc,0, 100428, 3, 1.2, NULL, 100427, NULL)
#else
Msg("Find size of XtInputCallbackProc (100428)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100427,NULL);\n",architecture,100428,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtTimerCallbackProc,4, 100431, 10, 1.2, NULL, 100430, NULL)
#elif defined __i386__
CheckTypeSize(XtTimerCallbackProc,4, 100431, 2, 1.2, NULL, 100430, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtTimerCallbackProc,4, 100431, 6, 1.2, NULL, 100430, NULL)
#elif defined __ia64__
CheckTypeSize(XtTimerCallbackProc,0, 100431, 3, 1.2, NULL, 100430, NULL)
#else
Msg("Find size of XtTimerCallbackProc (100431)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100430,NULL);\n",architecture,100431,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtInputMask,4, 100432, 10, 1.2, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtInputMask,4, 100432, 2, 1.2, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtInputMask,4, 100432, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtInputMask,0, 100432, 3, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtInputMask (100432)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,100432,0);
#endif

#if 1
CheckEnum("XtListHead",XtListHead,0,78106)
CheckEnum("XtListTail",XtListTail,(0) + 1,78107)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtCallbackProc,4, 100435, 10, 1.2, NULL, 100434, NULL)
#elif defined __i386__
CheckTypeSize(XtCallbackProc,4, 100435, 2, 1.2, NULL, 100434, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCallbackProc,4, 100435, 6, 1.2, NULL, 100434, NULL)
#elif defined __ia64__
CheckTypeSize(XtCallbackProc,0, 100435, 3, 1.2, NULL, 100434, NULL)
#else
Msg("Find size of XtCallbackProc (100435)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100434,NULL);\n",architecture,100435,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtCallbackRec,8, 100436, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtCallbackRec,closure,4,10,78112)
CheckOffset(struct _XtCallbackRec,closure,4,10,78112)
#elif defined __i386__
CheckTypeSize(struct _XtCallbackRec,8, 100436, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtCallbackRec,closure,4,2,78112)
CheckOffset(struct _XtCallbackRec,closure,4,2,78112)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XtCallbackRec,8, 100436, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtCallbackRec,closure,4,6,78112)
CheckOffset(struct _XtCallbackRec,closure,4,6,78112)
#elif defined __ia64__
CheckTypeSize(struct _XtCallbackRec,0, 100436, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtCallbackRec,closure,8,3,78112)
CheckOffset(struct _XtCallbackRec,closure,8,3,78112)
#else
Msg("Find size of _XtCallbackRec (100436)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,100436,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtCallbackList,4, 100438, 10, 1.2, NULL, 100437, NULL)
#elif defined __i386__
CheckTypeSize(XtCallbackList,4, 100438, 2, 1.2, NULL, 100437, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCallbackList,4, 100438, 6, 1.2, NULL, 100437, NULL)
#elif defined __ia64__
CheckTypeSize(XtCallbackList,0, 100438, 3, 1.2, NULL, 100437, NULL)
#else
Msg("Find size of XtCallbackList (100438)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100437,NULL);\n",architecture,100438,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(EventMask,4, 100439, 10, 1.2, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(EventMask,4, 100439, 2, 1.2, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(EventMask,4, 100439, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(EventMask,0, 100439, 3, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of EventMask (100439)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,100439,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtVarArgsList,4, 100440, 10, 1.2, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(XtVarArgsList,4, 100440, 2, 1.2, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtVarArgsList,4, 100440, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(XtVarArgsList,0, 100440, 3, 1.2, NULL, 40, NULL)
#else
Msg("Find size of XtVarArgsList (100440)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,100440,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtEventHandler,4, 100443, 10, 1.2, NULL, 100442, NULL)
#elif defined __i386__
CheckTypeSize(XtEventHandler,4, 100443, 2, 1.2, NULL, 100442, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtEventHandler,4, 100443, 6, 1.2, NULL, 100442, NULL)
#elif defined __ia64__
CheckTypeSize(XtEventHandler,0, 100443, 3, 1.2, NULL, 100442, NULL)
#else
Msg("Find size of XtEventHandler (100443)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100442,NULL);\n",architecture,100443,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtCaseProc,4, 100445, 10, 1.2, NULL, 100444, NULL)
#elif defined __i386__
CheckTypeSize(XtCaseProc,4, 100445, 2, 1.2, NULL, 100444, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCaseProc,4, 100445, 6, 1.2, NULL, 100444, NULL)
#elif defined __ia64__
CheckTypeSize(XtCaseProc,0, 100445, 3, 1.2, NULL, 100444, NULL)
#else
Msg("Find size of XtCaseProc (100445)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100444,NULL);\n",architecture,100445,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtKeyProc,4, 100447, 10, 1.2, NULL, 100446, NULL)
#elif defined __i386__
CheckTypeSize(XtKeyProc,4, 100447, 2, 1.2, NULL, 100446, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtKeyProc,4, 100447, 6, 1.2, NULL, 100446, NULL)
#elif defined __ia64__
CheckTypeSize(XtKeyProc,0, 100447, 3, 1.2, NULL, 100446, NULL)
#else
Msg("Find size of XtKeyProc (100447)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100446,NULL);\n",architecture,100447,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtBlockHookProc,4, 100449, 10, 1.2, NULL, 100448, NULL)
#elif defined __i386__
CheckTypeSize(XtBlockHookProc,4, 100449, 2, 1.2, NULL, 100448, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtBlockHookProc,4, 100449, 6, 1.2, NULL, 100448, NULL)
#elif defined __ia64__
CheckTypeSize(XtBlockHookProc,0, 100449, 3, 1.2, NULL, 100448, NULL)
#else
Msg("Find size of XtBlockHookProc (100449)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100448,NULL);\n",architecture,100449,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtBlockHookId,4, 100450, 10, 1.2, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtBlockHookId,4, 100450, 2, 1.2, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtBlockHookId,4, 100450, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtBlockHookId,0, 100450, 3, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtBlockHookId (100450)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,100450,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtActionHookProc,4, 100452, 10, 1.2, NULL, 100451, NULL)
#elif defined __i386__
CheckTypeSize(XtActionHookProc,4, 100452, 2, 1.2, NULL, 100451, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtActionHookProc,4, 100452, 6, 1.2, NULL, 100451, NULL)
#elif defined __ia64__
CheckTypeSize(XtActionHookProc,0, 100452, 3, 1.2, NULL, 100451, NULL)
#else
Msg("Find size of XtActionHookProc (100452)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100451,NULL);\n",architecture,100452,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtActionHookId,4, 100453, 10, 1.2, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(XtActionHookId,4, 100453, 2, 1.2, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtActionHookId,4, 100453, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(XtActionHookId,0, 100453, 3, 1.2, NULL, 40, NULL)
#else
Msg("Find size of XtActionHookId (100453)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,100453,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtDestructor,4, 100455, 10, 1.2, NULL, 100454, NULL)
#elif defined __i386__
CheckTypeSize(XtDestructor,4, 100455, 2, 1.2, NULL, 100454, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtDestructor,4, 100455, 6, 1.2, NULL, 100454, NULL)
#elif defined __ia64__
CheckTypeSize(XtDestructor,0, 100455, 3, 1.2, NULL, 100454, NULL)
#else
Msg("Find size of XtDestructor (100455)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100454,NULL);\n",architecture,100455,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtTypeConverter,4, 100457, 10, 1.2, NULL, 100456, NULL)
#elif defined __i386__
CheckTypeSize(XtTypeConverter,4, 100457, 2, 1.2, NULL, 100456, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtTypeConverter,4, 100457, 6, 1.2, NULL, 100456, NULL)
#elif defined __ia64__
CheckTypeSize(XtTypeConverter,0, 100457, 3, 1.2, NULL, 100456, NULL)
#else
Msg("Find size of XtTypeConverter (100457)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100456,NULL);\n",architecture,100457,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtConverter,4, 100459, 10, 1.2, NULL, 100458, NULL)
#elif defined __i386__
CheckTypeSize(XtConverter,4, 100459, 2, 1.2, NULL, 100458, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtConverter,4, 100459, 6, 1.2, NULL, 100458, NULL)
#elif defined __ia64__
CheckTypeSize(XtConverter,0, 100459, 3, 1.2, NULL, 100458, NULL)
#else
Msg("Find size of XtConverter (100459)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100458,NULL);\n",architecture,100459,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtRequestId,4, 100460, 10, 1.2, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(XtRequestId,4, 100460, 2, 1.2, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtRequestId,4, 100460, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(XtRequestId,0, 100460, 3, 1.2, NULL, 40, NULL)
#else
Msg("Find size of XtRequestId (100460)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,100460,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtFilePredicate,4, 100462, 10, 1.2, NULL, 100461, NULL)
#elif defined __i386__
CheckTypeSize(XtFilePredicate,4, 100462, 2, 1.2, NULL, 100461, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtFilePredicate,4, 100462, 6, 1.2, NULL, 100461, NULL)
#elif defined __ia64__
CheckTypeSize(XtFilePredicate,0, 100462, 3, 1.2, NULL, 100461, NULL)
#else
Msg("Find size of XtFilePredicate (100462)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100461,NULL);\n",architecture,100462,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(SubstitutionRec,8, 100464, 10, 1.2, NULL, 100463, NULL)
#elif defined __i386__
CheckTypeSize(SubstitutionRec,8, 100464, 2, 1.2, NULL, 100463, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SubstitutionRec,8, 100464, 6, 1.2, NULL, 100463, NULL)
#elif defined __ia64__
CheckTypeSize(SubstitutionRec,0, 100464, 3, 1.2, NULL, 100463, NULL)
#else
Msg("Find size of SubstitutionRec (100464)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100463,NULL);\n",architecture,100464,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(Substitution,4, 100466, 10, 1.2, NULL, 100465, NULL)
#elif defined __i386__
CheckTypeSize(Substitution,4, 100466, 2, 1.2, NULL, 100465, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Substitution,4, 100466, 6, 1.2, NULL, 100465, NULL)
#elif defined __ia64__
CheckTypeSize(Substitution,0, 100466, 3, 1.2, NULL, 100465, NULL)
#else
Msg("Find size of Substitution (100466)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100465,NULL);\n",architecture,100466,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtSelectionCallbackProc,4, 100468, 10, 1.2, NULL, 100467, NULL)
#elif defined __i386__
CheckTypeSize(XtSelectionCallbackProc,4, 100468, 2, 1.2, NULL, 100467, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtSelectionCallbackProc,4, 100468, 6, 1.2, NULL, 100467, NULL)
#elif defined __ia64__
CheckTypeSize(XtSelectionCallbackProc,0, 100468, 3, 1.2, NULL, 100467, NULL)
#else
Msg("Find size of XtSelectionCallbackProc (100468)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100467,NULL);\n",architecture,100468,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtWorkProc,4, 100470, 10, 1.2, NULL, 100469, NULL)
#elif defined __i386__
CheckTypeSize(XtWorkProc,4, 100470, 2, 1.2, NULL, 100469, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtWorkProc,4, 100470, 6, 1.2, NULL, 100469, NULL)
#elif defined __ia64__
CheckTypeSize(XtWorkProc,0, 100470, 3, 1.2, NULL, 100469, NULL)
#else
Msg("Find size of XtWorkProc (100470)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100469,NULL);\n",architecture,100470,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtSelectionDoneProc,4, 100472, 10, 1.2, NULL, 100471, NULL)
#elif defined __i386__
CheckTypeSize(XtSelectionDoneProc,4, 100472, 2, 1.2, NULL, 100471, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtSelectionDoneProc,4, 100472, 6, 1.2, NULL, 100471, NULL)
#elif defined __ia64__
CheckTypeSize(XtSelectionDoneProc,0, 100472, 3, 1.2, NULL, 100471, NULL)
#else
Msg("Find size of XtSelectionDoneProc (100472)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100471,NULL);\n",architecture,100472,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtLoseSelectionProc,4, 100474, 10, 1.2, NULL, 100473, NULL)
#elif defined __i386__
CheckTypeSize(XtLoseSelectionProc,4, 100474, 2, 1.2, NULL, 100473, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtLoseSelectionProc,4, 100474, 6, 1.2, NULL, 100473, NULL)
#elif defined __ia64__
CheckTypeSize(XtLoseSelectionProc,0, 100474, 3, 1.2, NULL, 100473, NULL)
#else
Msg("Find size of XtLoseSelectionProc (100474)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100473,NULL);\n",architecture,100474,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtErrorHandler,4, 100476, 10, 1.2, NULL, 100475, NULL)
#elif defined __i386__
CheckTypeSize(XtErrorHandler,4, 100476, 2, 1.2, NULL, 100475, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtErrorHandler,4, 100476, 6, 1.2, NULL, 100475, NULL)
#elif defined __ia64__
CheckTypeSize(XtErrorHandler,0, 100476, 3, 1.2, NULL, 100475, NULL)
#else
Msg("Find size of XtErrorHandler (100476)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100475,NULL);\n",architecture,100476,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtConvertSelectionProc,4, 100478, 10, 1.2, NULL, 100477, NULL)
#elif defined __i386__
CheckTypeSize(XtConvertSelectionProc,4, 100478, 2, 1.2, NULL, 100477, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtConvertSelectionProc,4, 100478, 6, 1.2, NULL, 100477, NULL)
#elif defined __ia64__
CheckTypeSize(XtConvertSelectionProc,0, 100478, 3, 1.2, NULL, 100477, NULL)
#else
Msg("Find size of XtConvertSelectionProc (100478)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100477,NULL);\n",architecture,100478,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtErrorMsgHandler,4, 100480, 10, 1.2, NULL, 100479, NULL)
#elif defined __i386__
CheckTypeSize(XtErrorMsgHandler,4, 100480, 2, 1.2, NULL, 100479, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtErrorMsgHandler,4, 100480, 6, 1.2, NULL, 100479, NULL)
#elif defined __ia64__
CheckTypeSize(XtErrorMsgHandler,0, 100480, 3, 1.2, NULL, 100479, NULL)
#else
Msg("Find size of XtErrorMsgHandler (100480)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100479,NULL);\n",architecture,100480,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtLanguageProc,4, 100482, 10, 1.2, NULL, 100481, NULL)
#elif defined __i386__
CheckTypeSize(XtLanguageProc,4, 100482, 2, 1.2, NULL, 100481, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtLanguageProc,4, 100482, 6, 1.2, NULL, 100481, NULL)
#elif defined __ia64__
CheckTypeSize(XtLanguageProc,0, 100482, 3, 1.2, NULL, 100481, NULL)
#else
Msg("Find size of XtLanguageProc (100482)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100481,NULL);\n",architecture,100482,0);
#endif

#if 1
CheckEnum("XtGrabNone",XtGrabNone,0,78181)
CheckEnum("XtGrabNonexclusive",XtGrabNonexclusive,(0) + 1,78182)
CheckEnum("XtGrabExclusive",XtGrabExclusive,((0) + 1) + 1,78183)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtCheckpointTokenRec,32, 100484, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtCheckpointTokenRec,widget,4,10,78195)
CheckOffset(struct _XtCheckpointTokenRec,widget,28,10,78195)
#elif defined __i386__
CheckTypeSize(struct _XtCheckpointTokenRec,32, 100484, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtCheckpointTokenRec,widget,4,2,78195)
CheckOffset(struct _XtCheckpointTokenRec,widget,28,2,78195)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XtCheckpointTokenRec,32, 100484, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtCheckpointTokenRec,widget,4,6,78195)
CheckOffset(struct _XtCheckpointTokenRec,widget,28,6,78195)
#elif defined __ia64__
CheckTypeSize(struct _XtCheckpointTokenRec,0, 100484, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtCheckpointTokenRec,widget,8,3,78195)
CheckOffset(struct _XtCheckpointTokenRec,widget,32,3,78195)
#else
Msg("Find size of _XtCheckpointTokenRec (100484)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,100484,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtCheckpointToken,4, 100486, 10, 1.2, NULL, 100485, NULL)
#elif defined __i386__
CheckTypeSize(XtCheckpointToken,4, 100486, 2, 1.2, NULL, 100485, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCheckpointToken,4, 100486, 6, 1.2, NULL, 100485, NULL)
#elif defined __ia64__
CheckTypeSize(XtCheckpointToken,0, 100486, 3, 1.2, NULL, 100485, NULL)
#else
Msg("Find size of XtCheckpointToken (100486)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100485,NULL);\n",architecture,100486,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtExtensionSelectProc,4, 100488, 10, 1.2, NULL, 100487, NULL)
#elif defined __i386__
CheckTypeSize(XtExtensionSelectProc,4, 100488, 2, 1.2, NULL, 100487, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtExtensionSelectProc,4, 100488, 6, 1.2, NULL, 100487, NULL)
#elif defined __ia64__
CheckTypeSize(XtExtensionSelectProc,0, 100488, 3, 1.2, NULL, 100487, NULL)
#else
Msg("Find size of XtExtensionSelectProc (100488)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100487,NULL);\n",architecture,100488,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtEventDispatchProc,4, 100490, 10, 1.2, NULL, 100489, NULL)
#elif defined __i386__
CheckTypeSize(XtEventDispatchProc,4, 100490, 2, 1.2, NULL, 100489, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtEventDispatchProc,4, 100490, 6, 1.2, NULL, 100489, NULL)
#elif defined __ia64__
CheckTypeSize(XtEventDispatchProc,0, 100490, 3, 1.2, NULL, 100489, NULL)
#else
Msg("Find size of XtEventDispatchProc (100490)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100489,NULL);\n",architecture,100490,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtCancelConvertSelectionProc,4, 100493, 10, 1.2, NULL, 100492, NULL)
#elif defined __i386__
CheckTypeSize(XtCancelConvertSelectionProc,4, 100493, 2, 1.2, NULL, 100492, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCancelConvertSelectionProc,4, 100493, 6, 1.2, NULL, 100492, NULL)
#elif defined __ia64__
CheckTypeSize(XtCancelConvertSelectionProc,0, 100493, 3, 1.2, NULL, 100492, NULL)
#else
Msg("Find size of XtCancelConvertSelectionProc (100493)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100492,NULL);\n",architecture,100493,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtConvertSelectionIncrProc,4, 100495, 10, 1.2, NULL, 100494, NULL)
#elif defined __i386__
CheckTypeSize(XtConvertSelectionIncrProc,4, 100495, 2, 1.2, NULL, 100494, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtConvertSelectionIncrProc,4, 100495, 6, 1.2, NULL, 100494, NULL)
#elif defined __ia64__
CheckTypeSize(XtConvertSelectionIncrProc,0, 100495, 3, 1.2, NULL, 100494, NULL)
#else
Msg("Find size of XtConvertSelectionIncrProc (100495)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100494,NULL);\n",architecture,100495,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtSelectionDoneIncrProc,4, 100496, 10, 1.2, NULL, 100492, NULL)
#elif defined __i386__
CheckTypeSize(XtSelectionDoneIncrProc,4, 100496, 2, 1.2, NULL, 100492, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtSelectionDoneIncrProc,4, 100496, 6, 1.2, NULL, 100492, NULL)
#elif defined __ia64__
CheckTypeSize(XtSelectionDoneIncrProc,0, 100496, 3, 1.2, NULL, 100492, NULL)
#else
Msg("Find size of XtSelectionDoneIncrProc (100496)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100492,NULL);\n",architecture,100496,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtLoseSelectionIncrProc,4, 100498, 10, 1.2, NULL, 100497, NULL)
#elif defined __i386__
CheckTypeSize(XtLoseSelectionIncrProc,4, 100498, 2, 1.2, NULL, 100497, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtLoseSelectionIncrProc,4, 100498, 6, 1.2, NULL, 100497, NULL)
#elif defined __ia64__
CheckTypeSize(XtLoseSelectionIncrProc,0, 100498, 3, 1.2, NULL, 100497, NULL)
#else
Msg("Find size of XtLoseSelectionIncrProc (100498)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100497,NULL);\n",architecture,100498,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtValueMask,4, 100510, 10, 1.2, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtValueMask,4, 100510, 2, 1.2, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtValueMask,4, 100510, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtValueMask,0, 100510, 3, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtValueMask (100510)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,100510,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtEventTable,4, 100567, 10, 1.2, NULL, 100566, NULL)
#elif defined __i386__
CheckTypeSize(XtEventTable,4, 100567, 2, 1.2, NULL, 100566, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtEventTable,4, 100567, 6, 1.2, NULL, 100566, NULL)
#elif defined __ia64__
CheckTypeSize(XtEventTable,0, 100567, 3, 1.2, NULL, 100566, NULL)
#else
Msg("Find size of XtEventTable (100567)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100566,NULL);\n",architecture,100567,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtBoundActions,4, 100586, 10, 1.2, NULL, 100585, NULL)
#elif defined __i386__
CheckTypeSize(XtBoundActions,4, 100586, 2, 1.2, NULL, 100585, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtBoundActions,4, 100586, 6, 1.2, NULL, 100585, NULL)
#elif defined __ia64__
CheckTypeSize(XtBoundActions,0, 100586, 3, 1.2, NULL, 100585, NULL)
#else
Msg("Find size of XtBoundActions (100586)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100585, NULL);\n",architecture,100586,0);
#endif

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
