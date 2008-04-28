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
CheckTypeSize(Cardinal *,4, 100347, 10, 1.2, NULL, 100346, NULL)
#elif defined __i386__
CheckTypeSize(Cardinal *,4, 100347, 2, 1.2, NULL, 100346, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Cardinal *,4, 100347, 6, 1.2, NULL, 100346, NULL)
#elif defined __x86_64__
CheckTypeSize(Cardinal *,8, 100347, 11, 1.2, NULL, 100346, NULL)
#elif defined __s390x__
CheckTypeSize(Cardinal *,8, 100347, 12, 1.2, NULL, 100346, NULL)
#elif defined __ia64__
CheckTypeSize(Cardinal *,8, 100347, 3, 1.2, NULL, 100346, NULL)
#elif defined __powerpc64__
CheckTypeSize(Cardinal *,8, 100347, 9, 1.2, NULL, 100346, NULL)
#else
Msg("Find size of Cardinal * (100347)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100346,NULL);\n",architecture,100347,0);
#endif

#if 1
CheckTypeSize(XtPointer,8, 100348, 1, 1.2, NULL, 40, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtPointer *,4, 100349, 10, 1.2, NULL, 100348, NULL)
#elif defined __i386__
CheckTypeSize(XtPointer *,4, 100349, 2, 1.2, NULL, 100348, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtPointer *,4, 100349, 6, 1.2, NULL, 100348, NULL)
#elif defined __x86_64__
CheckTypeSize(XtPointer *,8, 100349, 11, 1.2, NULL, 100348, NULL)
#elif defined __s390x__
CheckTypeSize(XtPointer *,8, 100349, 12, 1.2, NULL, 100348, NULL)
#elif defined __ia64__
CheckTypeSize(XtPointer *,8, 100349, 3, 1.2, NULL, 100348, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtPointer *,8, 100349, 9, 1.2, NULL, 100348, NULL)
#else
Msg("Find size of XtPointer * (100349)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100348,NULL);\n",architecture,100349,0);
#endif

#if 1
CheckTypeSize(struct _WidgetRec,0, 100351, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _WidgetRec on All\n");
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _WidgetRec *,4, 100352, 10, 1.2, NULL, 100351, NULL)
#elif defined __i386__
CheckTypeSize(struct _WidgetRec *,4, 100352, 2, 1.2, NULL, 100351, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _WidgetRec *,4, 100352, 6, 1.2, NULL, 100351, NULL)
#elif defined __x86_64__
CheckTypeSize(struct _WidgetRec *,8, 100352, 11, 1.2, NULL, 100351, NULL)
#elif defined __s390x__
CheckTypeSize(struct _WidgetRec *,8, 100352, 12, 1.2, NULL, 100351, NULL)
#elif defined __ia64__
CheckTypeSize(struct _WidgetRec *,8, 100352, 3, 1.2, NULL, 100351, NULL)
#elif defined __powerpc64__
CheckTypeSize(struct _WidgetRec *,8, 100352, 9, 1.2, NULL, 100351, NULL)
#else
Msg("Find size of _WidgetRec * (100352)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100351,NULL);\n",architecture,100352,0);
#endif

#if 1
CheckTypeSize(Widget,8, 100353, 1, 1.2, NULL, 100352, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(Widget *,4, 100354, 10, 1.2, NULL, 100353, NULL)
#elif defined __i386__
CheckTypeSize(Widget *,4, 100354, 2, 1.2, NULL, 100353, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Widget *,4, 100354, 6, 1.2, NULL, 100353, NULL)
#elif defined __x86_64__
CheckTypeSize(Widget *,8, 100354, 11, 1.2, NULL, 100353, NULL)
#elif defined __s390x__
CheckTypeSize(Widget *,8, 100354, 12, 1.2, NULL, 100353, NULL)
#elif defined __ia64__
CheckTypeSize(Widget *,8, 100354, 3, 1.2, NULL, 100353, NULL)
#elif defined __powerpc64__
CheckTypeSize(Widget *,8, 100354, 9, 1.2, NULL, 100353, NULL)
#else
Msg("Find size of Widget * (100354)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100353,NULL);\n",architecture,100354,0);
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

#if defined __s390__ && !defined __s390x__
CheckTypeSize(String *,4, 100357, 10, 1.2, NULL, 100356, NULL)
#elif defined __i386__
CheckTypeSize(String *,4, 100357, 2, 1.2, NULL, 100356, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(String *,4, 100357, 6, 1.2, NULL, 100356, NULL)
#elif defined __x86_64__
CheckTypeSize(String *,8, 100357, 11, 1.2, NULL, 100356, NULL)
#elif defined __s390x__
CheckTypeSize(String *,8, 100357, 12, 1.2, NULL, 100356, NULL)
#elif defined __ia64__
CheckTypeSize(String *,8, 100357, 3, 1.2, NULL, 100356, NULL)
#elif defined __powerpc64__
CheckTypeSize(String *,8, 100357, 9, 1.2, NULL, 100356, NULL)
#else
Msg("Find size of String * (100357)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100356,NULL);\n",architecture,100357,0);
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

#if 1
CheckTypeSize(XtWidgetGeometry,32, 100365, 1, 1.2, NULL, 100364, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtWidgetGeometry *,4, 100366, 10, 1.2, NULL, 100365, NULL)
#elif defined __i386__
CheckTypeSize(XtWidgetGeometry *,4, 100366, 2, 1.2, NULL, 100365, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtWidgetGeometry *,4, 100366, 6, 1.2, NULL, 100365, NULL)
#elif defined __x86_64__
CheckTypeSize(XtWidgetGeometry *,8, 100366, 11, 1.2, NULL, 100365, NULL)
#elif defined __s390x__
CheckTypeSize(XtWidgetGeometry *,8, 100366, 12, 1.2, NULL, 100365, NULL)
#elif defined __ia64__
CheckTypeSize(XtWidgetGeometry *,8, 100366, 3, 1.2, NULL, 100365, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtWidgetGeometry *,8, 100366, 9, 1.2, NULL, 100365, NULL)
#else
Msg("Find size of XtWidgetGeometry * (100366)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100365,NULL);\n",architecture,100366,0);
#endif

#if 1
CheckTypeSize(Modifiers,4, 100368, 1, 1.2, NULL, 7, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(Modifiers *,4, 100369, 10, 1.2, NULL, 100368, NULL)
#elif defined __i386__
CheckTypeSize(Modifiers *,4, 100369, 2, 1.2, NULL, 100368, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Modifiers *,4, 100369, 6, 1.2, NULL, 100368, NULL)
#elif defined __x86_64__
CheckTypeSize(Modifiers *,8, 100369, 11, 1.2, NULL, 100368, NULL)
#elif defined __s390x__
CheckTypeSize(Modifiers *,8, 100369, 12, 1.2, NULL, 100368, NULL)
#elif defined __ia64__
CheckTypeSize(Modifiers *,8, 100369, 3, 1.2, NULL, 100368, NULL)
#elif defined __powerpc64__
CheckTypeSize(Modifiers *,8, 100369, 9, 1.2, NULL, 100368, NULL)
#else
Msg("Find size of Modifiers * (100369)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100368,NULL);\n",architecture,100369,0);
#endif

#if 1
CheckTypeSize(XtCacheRef,8, 100372, 1, 1.2, NULL, 40, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtCacheRef *,4, 100373, 10, 1.2, NULL, 100372, NULL)
#elif defined __i386__
CheckTypeSize(XtCacheRef *,4, 100373, 2, 1.2, NULL, 100372, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCacheRef *,4, 100373, 6, 1.2, NULL, 100372, NULL)
#elif defined __x86_64__
CheckTypeSize(XtCacheRef *,8, 100373, 11, 1.2, NULL, 100372, NULL)
#elif defined __s390x__
CheckTypeSize(XtCacheRef *,8, 100373, 12, 1.2, NULL, 100372, NULL)
#elif defined __ia64__
CheckTypeSize(XtCacheRef *,8, 100373, 3, 1.2, NULL, 100372, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtCacheRef *,8, 100373, 9, 1.2, NULL, 100372, NULL)
#else
Msg("Find size of XtCacheRef * (100373)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100372,NULL);\n",architecture,100373,0);
#endif

#if 1
CheckTypeSize(struct _XtResource,48, 100375, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XtResource on All\n");
CheckOffset(struct _XtResource,resource_name,0,1,78061)
CheckOffset(struct _XtResource,resource_class,0,1,78062)
CheckOffset(struct _XtResource,resource_type,0,1,78063)
CheckOffset(struct _XtResource,resource_size,0,1,78064)
CheckOffset(struct _XtResource,resource_offset,0,1,78065)
CheckOffset(struct _XtResource,default_type,0,1,78066)
CheckOffset(struct _XtResource,default_addr,0,1,78067)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtResource *,4, 100376, 10, 1.2, NULL, 100375, NULL)
#elif defined __i386__
CheckTypeSize(struct _XtResource *,4, 100376, 2, 1.2, NULL, 100375, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XtResource *,4, 100376, 6, 1.2, NULL, 100375, NULL)
#elif defined __x86_64__
CheckTypeSize(struct _XtResource *,8, 100376, 11, 1.2, NULL, 100375, NULL)
#elif defined __s390x__
CheckTypeSize(struct _XtResource *,8, 100376, 12, 1.2, NULL, 100375, NULL)
#elif defined __ia64__
CheckTypeSize(struct _XtResource *,8, 100376, 3, 1.2, NULL, 100375, NULL)
#elif defined __powerpc64__
CheckTypeSize(struct _XtResource *,8, 100376, 9, 1.2, NULL, 100375, NULL)
#else
Msg("Find size of _XtResource * (100376)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100375,NULL);\n",architecture,100376,0);
#endif

#if 1
CheckTypeSize(XtResourceList,8, 100377, 1, 1.2, NULL, 100376, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtResourceList *,4, 100378, 10, 1.2, NULL, 100377, NULL)
#elif defined __i386__
CheckTypeSize(XtResourceList *,4, 100378, 2, 1.2, NULL, 100377, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtResourceList *,4, 100378, 6, 1.2, NULL, 100377, NULL)
#elif defined __x86_64__
CheckTypeSize(XtResourceList *,8, 100378, 11, 1.2, NULL, 100377, NULL)
#elif defined __s390x__
CheckTypeSize(XtResourceList *,8, 100378, 12, 1.2, NULL, 100377, NULL)
#elif defined __ia64__
CheckTypeSize(XtResourceList *,8, 100378, 3, 1.2, NULL, 100377, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtResourceList *,8, 100378, 9, 1.2, NULL, 100377, NULL)
#else
Msg("Find size of XtResourceList * (100378)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100377,NULL);\n",architecture,100378,0);
#endif

#if 1
CheckTypeSize(struct _XtAppStruct,0, 100379, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XtAppStruct on All\n");
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtAppStruct *,4, 100380, 10, 1.2, NULL, 100379, NULL)
#elif defined __i386__
CheckTypeSize(struct _XtAppStruct *,4, 100380, 2, 1.2, NULL, 100379, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XtAppStruct *,4, 100380, 6, 1.2, NULL, 100379, NULL)
#elif defined __x86_64__
CheckTypeSize(struct _XtAppStruct *,8, 100380, 11, 1.2, NULL, 100379, NULL)
#elif defined __s390x__
CheckTypeSize(struct _XtAppStruct *,8, 100380, 12, 1.2, NULL, 100379, NULL)
#elif defined __ia64__
CheckTypeSize(struct _XtAppStruct *,8, 100380, 3, 1.2, NULL, 100379, NULL)
#elif defined __powerpc64__
CheckTypeSize(struct _XtAppStruct *,8, 100380, 9, 1.2, NULL, 100379, NULL)
#else
Msg("Find size of _XtAppStruct * (100380)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100379,NULL);\n",architecture,100380,0);
#endif

#if 1
CheckTypeSize(XtAppContext,8, 100381, 1, 1.2, NULL, 100380, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtAppContext *,4, 100382, 10, 1.2, NULL, 100381, NULL)
#elif defined __i386__
CheckTypeSize(XtAppContext *,4, 100382, 2, 1.2, NULL, 100381, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtAppContext *,4, 100382, 6, 1.2, NULL, 100381, NULL)
#elif defined __x86_64__
CheckTypeSize(XtAppContext *,8, 100382, 11, 1.2, NULL, 100381, NULL)
#elif defined __s390x__
CheckTypeSize(XtAppContext *,8, 100382, 12, 1.2, NULL, 100381, NULL)
#elif defined __ia64__
CheckTypeSize(XtAppContext *,8, 100382, 3, 1.2, NULL, 100381, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtAppContext *,8, 100382, 9, 1.2, NULL, 100381, NULL)
#else
Msg("Find size of XtAppContext * (100382)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100381,NULL);\n",architecture,100382,0);
#endif

#if 1
CheckTypeSize(XtActionProc,8, 100384, 1, 1.2, NULL, 100383, NULL)
#endif

#if 1
CheckTypeSize(struct _XtActionsRec,16, 100385, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XtActionsRec on All\n");
CheckOffset(struct _XtActionsRec,string,0,1,78072)
CheckOffset(struct _XtActionsRec,proc,0,1,78073)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtActionsRec *,4, 100386, 10, 1.2, NULL, 100385, NULL)
#elif defined __i386__
CheckTypeSize(struct _XtActionsRec *,4, 100386, 2, 1.2, NULL, 100385, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XtActionsRec *,4, 100386, 6, 1.2, NULL, 100385, NULL)
#elif defined __x86_64__
CheckTypeSize(struct _XtActionsRec *,8, 100386, 11, 1.2, NULL, 100385, NULL)
#elif defined __s390x__
CheckTypeSize(struct _XtActionsRec *,8, 100386, 12, 1.2, NULL, 100385, NULL)
#elif defined __ia64__
CheckTypeSize(struct _XtActionsRec *,8, 100386, 3, 1.2, NULL, 100385, NULL)
#elif defined __powerpc64__
CheckTypeSize(struct _XtActionsRec *,8, 100386, 9, 1.2, NULL, 100385, NULL)
#else
Msg("Find size of _XtActionsRec * (100386)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100385,NULL);\n",architecture,100386,0);
#endif

#if 1
CheckTypeSize(XtActionList,8, 100387, 1, 1.2, NULL, 100386, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtActionList *,4, 100388, 10, 1.2, NULL, 100387, NULL)
#elif defined __i386__
CheckTypeSize(XtActionList *,4, 100388, 2, 1.2, NULL, 100387, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtActionList *,4, 100388, 6, 1.2, NULL, 100387, NULL)
#elif defined __x86_64__
CheckTypeSize(XtActionList *,8, 100388, 11, 1.2, NULL, 100387, NULL)
#elif defined __s390x__
CheckTypeSize(XtActionList *,8, 100388, 12, 1.2, NULL, 100387, NULL)
#elif defined __ia64__
CheckTypeSize(XtActionList *,8, 100388, 3, 1.2, NULL, 100387, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtActionList *,8, 100388, 9, 1.2, NULL, 100387, NULL)
#else
Msg("Find size of XtActionList * (100388)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100387,NULL);\n",architecture,100388,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(Position *,4, 100390, 10, 1.2, NULL, 100362, NULL)
#elif defined __i386__
CheckTypeSize(Position *,4, 100390, 2, 1.2, NULL, 100362, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Position *,4, 100390, 6, 1.2, NULL, 100362, NULL)
#elif defined __x86_64__
CheckTypeSize(Position *,8, 100390, 11, 1.2, NULL, 100362, NULL)
#elif defined __s390x__
CheckTypeSize(Position *,8, 100390, 12, 1.2, NULL, 100362, NULL)
#elif defined __ia64__
CheckTypeSize(Position *,8, 100390, 3, 1.2, NULL, 100362, NULL)
#elif defined __powerpc64__
CheckTypeSize(Position *,8, 100390, 9, 1.2, NULL, 100362, NULL)
#else
Msg("Find size of Position * (100390)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100362,NULL);\n",architecture,100390,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(Dimension *,4, 100391, 10, 1.2, NULL, 100363, NULL)
#elif defined __i386__
CheckTypeSize(Dimension *,4, 100391, 2, 1.2, NULL, 100363, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Dimension *,4, 100391, 6, 1.2, NULL, 100363, NULL)
#elif defined __x86_64__
CheckTypeSize(Dimension *,8, 100391, 11, 1.2, NULL, 100363, NULL)
#elif defined __s390x__
CheckTypeSize(Dimension *,8, 100391, 12, 1.2, NULL, 100363, NULL)
#elif defined __ia64__
CheckTypeSize(Dimension *,8, 100391, 3, 1.2, NULL, 100363, NULL)
#elif defined __powerpc64__
CheckTypeSize(Dimension *,8, 100391, 9, 1.2, NULL, 100363, NULL)
#else
Msg("Find size of Dimension * (100391)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100363,NULL);\n",architecture,100391,0);
#endif

#if 1
CheckTypeSize(Boolean,1, 100393, 1, 1.2, NULL, 2, NULL)
#endif

#if 1
CheckTypeSize(XtCacheType,4, 100394, 1, 1.2, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(XtGCMask,8, 100395, 1, 1.2, NULL, 11186, NULL)
#endif

#if 1
CheckTypeSize(XtEnum,1, 100396, 1, 1.2, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(XtSignalId,8, 100397, 1, 1.2, NULL, 11186, NULL)
#endif

#if 1
CheckTypeSize(XtWorkProcId,8, 100398, 1, 1.2, NULL, 11186, NULL)
#endif

#if 1
CheckTypeSize(XtInputId,8, 100399, 1, 1.2, NULL, 11186, NULL)
#endif

#if 1
CheckTypeSize(XtIntervalId,8, 100400, 1, 1.2, NULL, 11186, NULL)
#endif

#if 1
CheckTypeSize(struct _WidgetClassRec,0, 100401, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _WidgetClassRec on All\n");
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _WidgetClassRec *,4, 100402, 10, 1.2, NULL, 100401, NULL)
#elif defined __i386__
CheckTypeSize(struct _WidgetClassRec *,4, 100402, 2, 1.2, NULL, 100401, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _WidgetClassRec *,4, 100402, 6, 1.2, NULL, 100401, NULL)
#elif defined __x86_64__
CheckTypeSize(struct _WidgetClassRec *,8, 100402, 11, 1.2, NULL, 100401, NULL)
#elif defined __s390x__
CheckTypeSize(struct _WidgetClassRec *,8, 100402, 12, 1.2, NULL, 100401, NULL)
#elif defined __ia64__
CheckTypeSize(struct _WidgetClassRec *,8, 100402, 3, 1.2, NULL, 100401, NULL)
#elif defined __powerpc64__
CheckTypeSize(struct _WidgetClassRec *,8, 100402, 9, 1.2, NULL, 100401, NULL)
#else
Msg("Find size of _WidgetClassRec * (100402)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100401,NULL);\n",architecture,100402,0);
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

#if 1
CheckTypeSize(WidgetList,8, 100404, 1, 1.2, NULL, 100354, NULL)
#endif

#if 1
CheckTypeSize(struct _TranslationData,0, 100405, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _TranslationData on All\n");
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _TranslationData *,4, 100406, 10, 1.2, NULL, 100405, NULL)
#elif defined __i386__
CheckTypeSize(struct _TranslationData *,4, 100406, 2, 1.2, NULL, 100405, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _TranslationData *,4, 100406, 6, 1.2, NULL, 100405, NULL)
#elif defined __x86_64__
CheckTypeSize(struct _TranslationData *,8, 100406, 11, 1.2, NULL, 100405, NULL)
#elif defined __s390x__
CheckTypeSize(struct _TranslationData *,8, 100406, 12, 1.2, NULL, 100405, NULL)
#elif defined __ia64__
CheckTypeSize(struct _TranslationData *,8, 100406, 3, 1.2, NULL, 100405, NULL)
#elif defined __powerpc64__
CheckTypeSize(struct _TranslationData *,8, 100406, 9, 1.2, NULL, 100405, NULL)
#else
Msg("Find size of _TranslationData * (100406)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100405,NULL);\n",architecture,100406,0);
#endif

#if 1
CheckTypeSize(XtAccelerators,8, 100407, 1, 1.2, NULL, 100406, NULL)
#endif

#if 1
CheckTypeSize(XtTranslations,8, 100408, 1, 1.2, NULL, 100406, NULL)
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

#if 1
CheckTypeSize(XtConvertArgRec,24, 100414, 1, 1.2, NULL, 100413, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtConvertArgRec *,4, 100415, 10, 1.2, NULL, 100414, NULL)
#elif defined __i386__
CheckTypeSize(XtConvertArgRec *,4, 100415, 2, 1.2, NULL, 100414, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtConvertArgRec *,4, 100415, 6, 1.2, NULL, 100414, NULL)
#elif defined __x86_64__
CheckTypeSize(XtConvertArgRec *,8, 100415, 11, 1.2, NULL, 100414, NULL)
#elif defined __s390x__
CheckTypeSize(XtConvertArgRec *,8, 100415, 12, 1.2, NULL, 100414, NULL)
#elif defined __ia64__
CheckTypeSize(XtConvertArgRec *,8, 100415, 3, 1.2, NULL, 100414, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtConvertArgRec *,8, 100415, 9, 1.2, NULL, 100414, NULL)
#else
Msg("Find size of XtConvertArgRec * (100415)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100414,NULL);\n",architecture,100415,0);
#endif

#if 1
CheckTypeSize(XtConvertArgList,8, 100416, 1, 1.2, NULL, 100415, NULL)
#endif

#if 1
CheckTypeSize(XtArgVal,8, 100417, 1, 1.2, NULL, 8, NULL)
#endif

#if 1
CheckTypeSize(Arg,16, 100419, 1, 1.2, NULL, 100418, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(Arg *,4, 100420, 10, 1.2, NULL, 100419, NULL)
#elif defined __i386__
CheckTypeSize(Arg *,4, 100420, 2, 1.2, NULL, 100419, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Arg *,4, 100420, 6, 1.2, NULL, 100419, NULL)
#elif defined __x86_64__
CheckTypeSize(Arg *,8, 100420, 11, 1.2, NULL, 100419, NULL)
#elif defined __s390x__
CheckTypeSize(Arg *,8, 100420, 12, 1.2, NULL, 100419, NULL)
#elif defined __ia64__
CheckTypeSize(Arg *,8, 100420, 3, 1.2, NULL, 100419, NULL)
#elif defined __powerpc64__
CheckTypeSize(Arg *,8, 100420, 9, 1.2, NULL, 100419, NULL)
#else
Msg("Find size of Arg * (100420)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100419,NULL);\n",architecture,100420,0);
#endif

#if 1
CheckTypeSize(ArgList,8, 100421, 1, 1.2, NULL, 100420, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtSignalId *,4, 100422, 10, 1.2, NULL, 100397, NULL)
#elif defined __i386__
CheckTypeSize(XtSignalId *,4, 100422, 2, 1.2, NULL, 100397, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtSignalId *,4, 100422, 6, 1.2, NULL, 100397, NULL)
#elif defined __x86_64__
CheckTypeSize(XtSignalId *,8, 100422, 11, 1.2, NULL, 100397, NULL)
#elif defined __s390x__
CheckTypeSize(XtSignalId *,8, 100422, 12, 1.2, NULL, 100397, NULL)
#elif defined __ia64__
CheckTypeSize(XtSignalId *,8, 100422, 3, 1.2, NULL, 100397, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtSignalId *,8, 100422, 9, 1.2, NULL, 100397, NULL)
#else
Msg("Find size of XtSignalId * (100422)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100397,NULL);\n",architecture,100422,0);
#endif

#if 1
CheckTypeSize(XtSignalCallbackProc,8, 100424, 1, 1.2, NULL, 100423, NULL)
#endif

#if 1
CheckEnum("XtCallbackNoList",XtCallbackNoList,0,78098)
CheckEnum("XtCallbackHasNone",XtCallbackHasNone,(0) + 1,78099)
CheckEnum("XtCallbackHasSome",XtCallbackHasSome,((0) + 1) + 1,78100)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtInputId *,4, 100426, 10, 1.2, NULL, 100399, NULL)
#elif defined __i386__
CheckTypeSize(XtInputId *,4, 100426, 2, 1.2, NULL, 100399, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtInputId *,4, 100426, 6, 1.2, NULL, 100399, NULL)
#elif defined __x86_64__
CheckTypeSize(XtInputId *,8, 100426, 11, 1.2, NULL, 100399, NULL)
#elif defined __s390x__
CheckTypeSize(XtInputId *,8, 100426, 12, 1.2, NULL, 100399, NULL)
#elif defined __ia64__
CheckTypeSize(XtInputId *,8, 100426, 3, 1.2, NULL, 100399, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtInputId *,8, 100426, 9, 1.2, NULL, 100399, NULL)
#else
Msg("Find size of XtInputId * (100426)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100399,NULL);\n",architecture,100426,0);
#endif

#if 1
CheckTypeSize(XtInputCallbackProc,8, 100428, 1, 1.2, NULL, 100427, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtIntervalId *,4, 100429, 10, 1.2, NULL, 100400, NULL)
#elif defined __i386__
CheckTypeSize(XtIntervalId *,4, 100429, 2, 1.2, NULL, 100400, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtIntervalId *,4, 100429, 6, 1.2, NULL, 100400, NULL)
#elif defined __x86_64__
CheckTypeSize(XtIntervalId *,8, 100429, 11, 1.2, NULL, 100400, NULL)
#elif defined __s390x__
CheckTypeSize(XtIntervalId *,8, 100429, 12, 1.2, NULL, 100400, NULL)
#elif defined __ia64__
CheckTypeSize(XtIntervalId *,8, 100429, 3, 1.2, NULL, 100400, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtIntervalId *,8, 100429, 9, 1.2, NULL, 100400, NULL)
#else
Msg("Find size of XtIntervalId * (100429)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100400,NULL);\n",architecture,100429,0);
#endif

#if 1
CheckTypeSize(XtTimerCallbackProc,8, 100431, 1, 1.2, NULL, 100430, NULL)
#endif

#if 1
CheckTypeSize(XtInputMask,8, 100432, 1, 1.2, NULL, 11186, NULL)
#endif

#if 1
CheckEnum("XtListHead",XtListHead,0,78106)
CheckEnum("XtListTail",XtListTail,(0) + 1,78107)
#endif

#if 1
CheckTypeSize(XtCallbackProc,8, 100435, 1, 1.2, NULL, 100434, NULL)
#endif

#if 1
CheckTypeSize(struct _XtCallbackRec,16, 100436, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XtCallbackRec on All\n");
CheckOffset(struct _XtCallbackRec,callback,0,1,78111)
CheckOffset(struct _XtCallbackRec,closure,0,1,78112)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtCallbackRec *,4, 100437, 10, 1.2, NULL, 100436, NULL)
#elif defined __i386__
CheckTypeSize(struct _XtCallbackRec *,4, 100437, 2, 1.2, NULL, 100436, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XtCallbackRec *,4, 100437, 6, 1.2, NULL, 100436, NULL)
#elif defined __x86_64__
CheckTypeSize(struct _XtCallbackRec *,8, 100437, 11, 1.2, NULL, 100436, NULL)
#elif defined __s390x__
CheckTypeSize(struct _XtCallbackRec *,8, 100437, 12, 1.2, NULL, 100436, NULL)
#elif defined __ia64__
CheckTypeSize(struct _XtCallbackRec *,8, 100437, 3, 1.2, NULL, 100436, NULL)
#elif defined __powerpc64__
CheckTypeSize(struct _XtCallbackRec *,8, 100437, 9, 1.2, NULL, 100436, NULL)
#else
Msg("Find size of _XtCallbackRec * (100437)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100436,NULL);\n",architecture,100437,0);
#endif

#if 1
CheckTypeSize(XtCallbackList,8, 100438, 1, 1.2, NULL, 100437, NULL)
#endif

#if 1
CheckTypeSize(EventMask,8, 100439, 1, 1.2, NULL, 11186, NULL)
#endif

#if 1
CheckTypeSize(XtVarArgsList,8, 100440, 1, 1.2, NULL, 40, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(Boolean *,4, 100441, 10, 1.2, NULL, 100393, NULL)
#elif defined __i386__
CheckTypeSize(Boolean *,4, 100441, 2, 1.2, NULL, 100393, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Boolean *,4, 100441, 6, 1.2, NULL, 100393, NULL)
#elif defined __x86_64__
CheckTypeSize(Boolean *,8, 100441, 11, 1.2, NULL, 100393, NULL)
#elif defined __s390x__
CheckTypeSize(Boolean *,8, 100441, 12, 1.2, NULL, 100393, NULL)
#elif defined __ia64__
CheckTypeSize(Boolean *,8, 100441, 3, 1.2, NULL, 100393, NULL)
#elif defined __powerpc64__
CheckTypeSize(Boolean *,8, 100441, 9, 1.2, NULL, 100393, NULL)
#else
Msg("Find size of Boolean * (100441)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100393,NULL);\n",architecture,100441,0);
#endif

#if 1
CheckTypeSize(XtEventHandler,8, 100443, 1, 1.2, NULL, 100442, NULL)
#endif

#if 1
CheckTypeSize(XtCaseProc,8, 100445, 1, 1.2, NULL, 100444, NULL)
#endif

#if 1
CheckTypeSize(XtKeyProc,8, 100447, 1, 1.2, NULL, 100446, NULL)
#endif

#if 1
CheckTypeSize(XtBlockHookProc,8, 100449, 1, 1.2, NULL, 100448, NULL)
#endif

#if 1
CheckTypeSize(XtBlockHookId,8, 100450, 1, 1.2, NULL, 11186, NULL)
#endif

#if 1
CheckTypeSize(XtActionHookProc,8, 100452, 1, 1.2, NULL, 100451, NULL)
#endif

#if 1
CheckTypeSize(XtActionHookId,8, 100453, 1, 1.2, NULL, 40, NULL)
#endif

#if 1
CheckTypeSize(XtDestructor,8, 100455, 1, 1.2, NULL, 100454, NULL)
#endif

#if 1
CheckTypeSize(XtTypeConverter,8, 100457, 1, 1.2, NULL, 100456, NULL)
#endif

#if 1
CheckTypeSize(XtConverter,8, 100459, 1, 1.2, NULL, 100458, NULL)
#endif

#if 1
CheckTypeSize(XtRequestId,8, 100460, 1, 1.2, NULL, 40, NULL)
#endif

#if 1
CheckTypeSize(XtFilePredicate,8, 100462, 1, 1.2, NULL, 100461, NULL)
#endif

#if 1
CheckTypeSize(SubstitutionRec,16, 100464, 1, 1.2, NULL, 100463, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(SubstitutionRec *,4, 100465, 10, 1.2, NULL, 100464, NULL)
#elif defined __i386__
CheckTypeSize(SubstitutionRec *,4, 100465, 2, 1.2, NULL, 100464, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SubstitutionRec *,4, 100465, 6, 1.2, NULL, 100464, NULL)
#elif defined __x86_64__
CheckTypeSize(SubstitutionRec *,8, 100465, 11, 1.2, NULL, 100464, NULL)
#elif defined __s390x__
CheckTypeSize(SubstitutionRec *,8, 100465, 12, 1.2, NULL, 100464, NULL)
#elif defined __ia64__
CheckTypeSize(SubstitutionRec *,8, 100465, 3, 1.2, NULL, 100464, NULL)
#elif defined __powerpc64__
CheckTypeSize(SubstitutionRec *,8, 100465, 9, 1.2, NULL, 100464, NULL)
#else
Msg("Find size of SubstitutionRec * (100465)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100464,NULL);\n",architecture,100465,0);
#endif

#if 1
CheckTypeSize(Substitution,8, 100466, 1, 1.2, NULL, 100465, NULL)
#endif

#if 1
CheckTypeSize(XtSelectionCallbackProc,8, 100468, 1, 1.2, NULL, 100467, NULL)
#endif

#if 1
CheckTypeSize(XtWorkProc,8, 100470, 1, 1.2, NULL, 100469, NULL)
#endif

#if 1
CheckTypeSize(XtSelectionDoneProc,8, 100472, 1, 1.2, NULL, 100471, NULL)
#endif

#if 1
CheckTypeSize(XtLoseSelectionProc,8, 100474, 1, 1.2, NULL, 100473, NULL)
#endif

#if 1
CheckTypeSize(XtErrorHandler,8, 100476, 1, 1.2, NULL, 100475, NULL)
#endif

#if 1
CheckTypeSize(XtConvertSelectionProc,8, 100478, 1, 1.2, NULL, 100477, NULL)
#endif

#if 1
CheckTypeSize(XtErrorMsgHandler,8, 100480, 1, 1.2, NULL, 100479, NULL)
#endif

#if 1
CheckTypeSize(XtLanguageProc,8, 100482, 1, 1.2, NULL, 100481, NULL)
#endif

#if 1
CheckEnum("XtGrabNone",XtGrabNone,0,78181)
CheckEnum("XtGrabNonexclusive",XtGrabNonexclusive,(0) + 1,78182)
CheckEnum("XtGrabExclusive",XtGrabExclusive,((0) + 1) + 1,78183)
#endif

#if 1
CheckTypeSize(struct _XtCheckpointTokenRec,40, 100484, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtCheckpointTokenRec,interact_style,4,1,78185)
CheckOffset(struct _XtCheckpointTokenRec,interact_style,4,1,78185)
CheckMemberSize(struct _XtCheckpointTokenRec,shutdown,1,1,78186)
CheckOffset(struct _XtCheckpointTokenRec,shutdown,8,1,78186)
CheckMemberSize(struct _XtCheckpointTokenRec,fast,1,1,78187)
CheckOffset(struct _XtCheckpointTokenRec,fast,9,1,78187)
CheckMemberSize(struct _XtCheckpointTokenRec,cancel_shutdown,1,1,78188)
CheckOffset(struct _XtCheckpointTokenRec,cancel_shutdown,10,1,78188)
CheckMemberSize(struct _XtCheckpointTokenRec,phase,4,1,78189)
CheckOffset(struct _XtCheckpointTokenRec,phase,12,1,78189)
CheckMemberSize(struct _XtCheckpointTokenRec,interact_dialog_type,4,1,78190)
CheckOffset(struct _XtCheckpointTokenRec,interact_dialog_type,16,1,78190)
CheckMemberSize(struct _XtCheckpointTokenRec,request_cancel,1,1,78191)
CheckOffset(struct _XtCheckpointTokenRec,request_cancel,20,1,78191)
CheckMemberSize(struct _XtCheckpointTokenRec,request_next_phase,1,1,78192)
CheckOffset(struct _XtCheckpointTokenRec,request_next_phase,21,1,78192)
CheckMemberSize(struct _XtCheckpointTokenRec,save_success,1,1,78193)
CheckOffset(struct _XtCheckpointTokenRec,save_success,22,1,78193)
CheckMemberSize(struct _XtCheckpointTokenRec,type,4,1,78194)
CheckOffset(struct _XtCheckpointTokenRec,type,24,1,78194)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtCheckpointTokenRec *,4, 100485, 10, 1.2, NULL, 100484, NULL)
#elif defined __i386__
CheckTypeSize(struct _XtCheckpointTokenRec *,4, 100485, 2, 1.2, NULL, 100484, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XtCheckpointTokenRec *,4, 100485, 6, 1.2, NULL, 100484, NULL)
#elif defined __x86_64__
CheckTypeSize(struct _XtCheckpointTokenRec *,8, 100485, 11, 1.2, NULL, 100484, NULL)
#elif defined __s390x__
CheckTypeSize(struct _XtCheckpointTokenRec *,8, 100485, 12, 1.2, NULL, 100484, NULL)
#elif defined __ia64__
CheckTypeSize(struct _XtCheckpointTokenRec *,8, 100485, 3, 1.2, NULL, 100484, NULL)
#elif defined __powerpc64__
CheckTypeSize(struct _XtCheckpointTokenRec *,8, 100485, 9, 1.2, NULL, 100484, NULL)
#else
Msg("Find size of _XtCheckpointTokenRec * (100485)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100484,NULL);\n",architecture,100485,0);
#endif

#if 1
CheckTypeSize(XtCheckpointToken,8, 100486, 1, 1.2, NULL, 100485, NULL)
#endif

#if 1
CheckTypeSize(XtExtensionSelectProc,8, 100488, 1, 1.2, NULL, 100487, NULL)
#endif

#if 1
CheckTypeSize(XtEventDispatchProc,8, 100490, 1, 1.2, NULL, 100489, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtRequestId *,4, 100491, 10, 1.2, NULL, 100460, NULL)
#elif defined __i386__
CheckTypeSize(XtRequestId *,4, 100491, 2, 1.2, NULL, 100460, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtRequestId *,4, 100491, 6, 1.2, NULL, 100460, NULL)
#elif defined __x86_64__
CheckTypeSize(XtRequestId *,8, 100491, 11, 1.2, NULL, 100460, NULL)
#elif defined __s390x__
CheckTypeSize(XtRequestId *,8, 100491, 12, 1.2, NULL, 100460, NULL)
#elif defined __ia64__
CheckTypeSize(XtRequestId *,8, 100491, 3, 1.2, NULL, 100460, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtRequestId *,8, 100491, 9, 1.2, NULL, 100460, NULL)
#else
Msg("Find size of XtRequestId * (100491)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100460,NULL);\n",architecture,100491,0);
#endif

#if 1
CheckTypeSize(XtCancelConvertSelectionProc,8, 100493, 1, 1.2, NULL, 100492, NULL)
#endif

#if 1
CheckTypeSize(XtConvertSelectionIncrProc,8, 100495, 1, 1.2, NULL, 100494, NULL)
#endif

#if 1
CheckTypeSize(XtSelectionDoneIncrProc,8, 100496, 1, 1.2, NULL, 100492, NULL)
#endif

#if 1
CheckTypeSize(XtLoseSelectionIncrProc,8, 100498, 1, 1.2, NULL, 100497, NULL)
#endif

#if 1
CheckTypeSize(XtValueMask,8, 100510, 1, 1.2, NULL, 11186, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtErrorMsgHandler *,4, 100519, 10, 1.2, NULL, 100480, NULL)
#elif defined __i386__
CheckTypeSize(XtErrorMsgHandler *,4, 100519, 2, 1.2, NULL, 100480, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtErrorMsgHandler *,4, 100519, 6, 1.2, NULL, 100480, NULL)
#elif defined __x86_64__
CheckTypeSize(XtErrorMsgHandler *,8, 100519, 11, 1.2, NULL, 100480, NULL)
#elif defined __s390x__
CheckTypeSize(XtErrorMsgHandler *,8, 100519, 12, 1.2, NULL, 100480, NULL)
#elif defined __ia64__
CheckTypeSize(XtErrorMsgHandler *,8, 100519, 3, 1.2, NULL, 100480, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtErrorMsgHandler *,8, 100519, 9, 1.2, NULL, 100480, NULL)
#else
Msg("Find size of XtErrorMsgHandler * (100519)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100480,NULL);\n",architecture,100519,0);
#endif

#if 1
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtErrorHandler *,4, 100521, 10, 1.2, NULL, 100476, NULL)
#elif defined __i386__
CheckTypeSize(XtErrorHandler *,4, 100521, 2, 1.2, NULL, 100476, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtErrorHandler *,4, 100521, 6, 1.2, NULL, 100476, NULL)
#elif defined __x86_64__
CheckTypeSize(XtErrorHandler *,8, 100521, 11, 1.2, NULL, 100476, NULL)
#elif defined __s390x__
CheckTypeSize(XtErrorHandler *,8, 100521, 12, 1.2, NULL, 100476, NULL)
#elif defined __ia64__
CheckTypeSize(XtErrorHandler *,8, 100521, 3, 1.2, NULL, 100476, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtErrorHandler *,8, 100521, 9, 1.2, NULL, 100476, NULL)
#else
Msg("Find size of XtErrorHandler * (100521)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100476,NULL);\n",architecture,100521,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtCallbackProc *,4, 100563, 10, 1.2, NULL, 100435, NULL)
#elif defined __i386__
CheckTypeSize(XtCallbackProc *,4, 100563, 2, 1.2, NULL, 100435, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCallbackProc *,4, 100563, 6, 1.2, NULL, 100435, NULL)
#elif defined __x86_64__
CheckTypeSize(XtCallbackProc *,8, 100563, 11, 1.2, NULL, 100435, NULL)
#elif defined __s390x__
CheckTypeSize(XtCallbackProc *,8, 100563, 12, 1.2, NULL, 100435, NULL)
#elif defined __ia64__
CheckTypeSize(XtCallbackProc *,8, 100563, 3, 1.2, NULL, 100435, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtCallbackProc *,8, 100563, 9, 1.2, NULL, 100435, NULL)
#else
Msg("Find size of XtCallbackProc * (100563)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100435,NULL);\n",architecture,100563,0);
#endif

#if 1
#endif

#if 1
CheckTypeSize(XtEventTable,8, 100567, 1, 1.2, NULL, 100566, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtEventTable *,4, 100568, 10, 1.2, NULL, 100567, NULL)
#elif defined __i386__
CheckTypeSize(XtEventTable *,4, 100568, 2, 1.2, NULL, 100567, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtEventTable *,4, 100568, 6, 1.2, NULL, 100567, NULL)
#elif defined __x86_64__
CheckTypeSize(XtEventTable *,8, 100568, 11, 1.2, NULL, 100567, NULL)
#elif defined __s390x__
CheckTypeSize(XtEventTable *,8, 100568, 12, 1.2, NULL, 100567, NULL)
#elif defined __ia64__
CheckTypeSize(XtEventTable *,8, 100568, 3, 1.2, NULL, 100567, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtEventTable *,8, 100568, 9, 1.2, NULL, 100567, NULL)
#else
Msg("Find size of XtEventTable * (100568)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100567,NULL);\n",architecture,100568,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtActionProc *,4, 100585, 10, 1.2, NULL, 100384, NULL)
#elif defined __i386__
CheckTypeSize(XtActionProc *,4, 100585, 2, 1.2, NULL, 100384, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtActionProc *,4, 100585, 6, 1.2, NULL, 100384, NULL)
#elif defined __x86_64__
CheckTypeSize(XtActionProc *,8, 100585, 11, 1.2, NULL, 100384, NULL)
#elif defined __s390x__
CheckTypeSize(XtActionProc *,8, 100585, 12, 1.2, NULL, 100384, NULL)
#elif defined __ia64__
CheckTypeSize(XtActionProc *,8, 100585, 3, 1.2, NULL, 100384, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtActionProc *,8, 100585, 9, 1.2, NULL, 100384, NULL)
#else
Msg("Find size of XtActionProc * (100585)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100384,NULL);\n",architecture,100585,0);
#endif

#if 1
CheckTypeSize(XtBoundActions,8, 100586, 1, 1.2, NULL, 100585, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtValueMask *,4, 100625, 10, 1.2, NULL, 100510, NULL)
#elif defined __i386__
CheckTypeSize(XtValueMask *,4, 100625, 2, 1.2, NULL, 100510, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtValueMask *,4, 100625, 6, 1.2, NULL, 100510, NULL)
#elif defined __x86_64__
CheckTypeSize(XtValueMask *,8, 100625, 11, 1.2, NULL, 100510, NULL)
#elif defined __s390x__
CheckTypeSize(XtValueMask *,8, 100625, 12, 1.2, NULL, 100510, NULL)
#elif defined __ia64__
CheckTypeSize(XtValueMask *,8, 100625, 3, 1.2, NULL, 100510, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtValueMask *,8, 100625, 9, 1.2, NULL, 100510, NULL)
#else
Msg("Find size of XtValueMask * (100625)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100510, NULL);\n",architecture,100625,0);
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
