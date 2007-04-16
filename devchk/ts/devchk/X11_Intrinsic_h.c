/*
 * Test of X11/Intrinsic.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#if __i386__
CheckTypeSize(Widget,4, 9578, 2);
#elif __ia64__
CheckTypeSize(Widget,8, 9578, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(Widget,4, 9578, 6);
#elif __s390x__
CheckTypeSize(Widget,8, 9578, 12);
#elif __s390__ && !__s390x__
CheckTypeSize(Widget,4, 9578, 10);
#elif __x86_64__
CheckTypeSize(Widget,8, 9578, 11);
#elif __powerpc64__
CheckTypeSize(Widget,8, 9578, 9);
#elif 1
CheckTypeSize(Widget,0, 9578, 1);
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(WidgetList,4, 9580, 6);
#elif __i386__
CheckTypeSize(WidgetList,4, 9580, 2);
#elif __s390x__
CheckTypeSize(WidgetList,8, 9580, 12);
#elif __ia64__
CheckTypeSize(WidgetList,8, 9580, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(WidgetList,4, 9580, 10);
#elif __x86_64__
CheckTypeSize(WidgetList,8, 9580, 11);
#elif __powerpc64__
CheckTypeSize(WidgetList,8, 9580, 9);
#elif 1
CheckTypeSize(WidgetList,0, 9580, 1);
#endif

#if __i386__
CheckTypeSize(WidgetClass,4, 9583, 2);
#elif __ia64__
CheckTypeSize(WidgetClass,8, 9583, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(WidgetClass,4, 9583, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(WidgetClass,4, 9583, 10);
#elif __powerpc64__
CheckTypeSize(WidgetClass,8, 9583, 9);
#elif __s390x__
CheckTypeSize(WidgetClass,8, 9583, 12);
#elif __x86_64__
CheckTypeSize(WidgetClass,8, 9583, 11);
#elif 1
CheckTypeSize(WidgetClass,0, 9583, 1);
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(CompositeWidget,4, 9586, 6);
#elif __i386__
CheckTypeSize(CompositeWidget,4, 9586, 2);
#elif __s390x__
CheckTypeSize(CompositeWidget,8, 9586, 12);
#elif __ia64__
CheckTypeSize(CompositeWidget,8, 9586, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(CompositeWidget,4, 9586, 10);
#elif __x86_64__
CheckTypeSize(CompositeWidget,8, 9586, 11);
#elif __powerpc64__
CheckTypeSize(CompositeWidget,8, 9586, 9);
#elif 1
CheckTypeSize(CompositeWidget,0, 9586, 1);
#endif

#if __i386__
CheckTypeSize(XtActionList,4, 9589, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XtActionList,4, 9589, 6);
#elif __s390x__
CheckTypeSize(XtActionList,8, 9589, 12);
#elif __ia64__
CheckTypeSize(XtActionList,8, 9589, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(XtActionList,4, 9589, 10);
#elif __x86_64__
CheckTypeSize(XtActionList,8, 9589, 11);
#elif __powerpc64__
CheckTypeSize(XtActionList,8, 9589, 9);
#elif 1
CheckTypeSize(XtActionList,0, 9589, 1);
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(XtEventTable,4, 9592, 6);
#elif __i386__
CheckTypeSize(XtEventTable,4, 9592, 2);
#elif __s390x__
CheckTypeSize(XtEventTable,8, 9592, 12);
#elif __ia64__
CheckTypeSize(XtEventTable,8, 9592, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(XtEventTable,4, 9592, 10);
#elif __x86_64__
CheckTypeSize(XtEventTable,8, 9592, 11);
#elif __powerpc64__
CheckTypeSize(XtEventTable,8, 9592, 9);
#elif 1
CheckTypeSize(XtEventTable,0, 9592, 1);
#endif

#if __i386__
CheckTypeSize(XtAppContext,4, 9595, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XtAppContext,4, 9595, 6);
#elif __s390x__
CheckTypeSize(XtAppContext,8, 9595, 12);
#elif __ia64__
CheckTypeSize(XtAppContext,8, 9595, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(XtAppContext,4, 9595, 10);
#elif __x86_64__
CheckTypeSize(XtAppContext,8, 9595, 11);
#elif __powerpc64__
CheckTypeSize(XtAppContext,8, 9595, 9);
#elif 1
CheckTypeSize(XtAppContext,0, 9595, 1);
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(XtValueMask,4, 9596, 6);
#elif __i386__
CheckTypeSize(XtValueMask,4, 9596, 2);
#elif __s390x__
CheckTypeSize(XtValueMask,8, 9596, 12);
#elif __ia64__
CheckTypeSize(XtValueMask,8, 9596, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(XtValueMask,4, 9596, 10);
#elif __x86_64__
CheckTypeSize(XtValueMask,8, 9596, 11);
#elif __powerpc64__
CheckTypeSize(XtValueMask,8, 9596, 9);
#elif 1
CheckTypeSize(XtValueMask,0, 9596, 1);
#endif

#if __i386__
CheckTypeSize(XtIntervalId,4, 9597, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XtIntervalId,4, 9597, 6);
#elif __s390x__
CheckTypeSize(XtIntervalId,8, 9597, 12);
#elif __ia64__
CheckTypeSize(XtIntervalId,8, 9597, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(XtIntervalId,4, 9597, 10);
#elif __x86_64__
CheckTypeSize(XtIntervalId,8, 9597, 11);
#elif __powerpc64__
CheckTypeSize(XtIntervalId,8, 9597, 9);
#elif 1
CheckTypeSize(XtIntervalId,0, 9597, 1);
#endif

#if __i386__
CheckTypeSize(XtInputId,4, 9598, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XtInputId,4, 9598, 6);
#elif __s390x__
CheckTypeSize(XtInputId,8, 9598, 12);
#elif __ia64__
CheckTypeSize(XtInputId,8, 9598, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(XtInputId,4, 9598, 10);
#elif __x86_64__
CheckTypeSize(XtInputId,8, 9598, 11);
#elif __powerpc64__
CheckTypeSize(XtInputId,8, 9598, 9);
#elif 1
CheckTypeSize(XtInputId,0, 9598, 1);
#endif

#if __i386__
CheckTypeSize(XtSignalId,4, 9600, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XtSignalId,4, 9600, 6);
#elif __s390x__
CheckTypeSize(XtSignalId,8, 9600, 12);
#elif __ia64__
CheckTypeSize(XtSignalId,8, 9600, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(XtSignalId,4, 9600, 10);
#elif __x86_64__
CheckTypeSize(XtSignalId,8, 9600, 11);
#elif __powerpc64__
CheckTypeSize(XtSignalId,8, 9600, 9);
#elif 1
CheckTypeSize(XtSignalId,0, 9600, 1);
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(XtGeometryMask,4, 9601, 6);
#elif __i386__
CheckTypeSize(XtGeometryMask,4, 9601, 2);
#elif __s390x__
CheckTypeSize(XtGeometryMask,4, 9601, 12);
#elif __ia64__
CheckTypeSize(XtGeometryMask,4, 9601, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(XtGeometryMask,4, 9601, 10);
#elif __x86_64__
CheckTypeSize(XtGeometryMask,4, 9601, 11);
#elif __powerpc64__
CheckTypeSize(XtGeometryMask,4, 9601, 9);
#elif 1
CheckTypeSize(XtGeometryMask,0, 9601, 1);
#endif

#if __i386__
CheckTypeSize(XtGCMask,4, 9602, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XtGCMask,4, 9602, 6);
#elif __s390x__
CheckTypeSize(XtGCMask,8, 9602, 12);
#elif __ia64__
CheckTypeSize(XtGCMask,8, 9602, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(XtGCMask,4, 9602, 10);
#elif __x86_64__
CheckTypeSize(XtGCMask,8, 9602, 11);
#elif __powerpc64__
CheckTypeSize(XtGCMask,8, 9602, 9);
#elif 1
CheckTypeSize(XtGCMask,0, 9602, 1);
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(Pixel,4, 9603, 6);
#elif __i386__
CheckTypeSize(Pixel,4, 9603, 2);
#elif __s390x__
CheckTypeSize(Pixel,8, 9603, 12);
#elif __ia64__
CheckTypeSize(Pixel,8, 9603, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(Pixel,4, 9603, 10);
#elif __x86_64__
CheckTypeSize(Pixel,8, 9603, 11);
#elif __powerpc64__
CheckTypeSize(Pixel,8, 9603, 9);
#elif 1
CheckTypeSize(Pixel,0, 9603, 1);
#endif

#if __i386__
CheckTypeSize(XtCacheType,4, 9604, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XtCacheType,4, 9604, 6);
#elif __s390x__
CheckTypeSize(XtCacheType,4, 9604, 12);
#elif __ia64__
CheckTypeSize(XtCacheType,4, 9604, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(XtCacheType,4, 9604, 10);
#elif __x86_64__
CheckTypeSize(XtCacheType,4, 9604, 11);
#elif __powerpc64__
CheckTypeSize(XtCacheType,4, 9604, 9);
#elif 1
CheckTypeSize(XtCacheType,0, 9604, 1);
#endif

#if __i386__
CheckTypeSize(Boolean,1, 9605, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(Boolean,1, 9605, 6);
#elif __s390x__
CheckTypeSize(Boolean,1, 9605, 12);
#elif __ia64__
CheckTypeSize(Boolean,1, 9605, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(Boolean,1, 9605, 10);
#elif __x86_64__
CheckTypeSize(Boolean,1, 9605, 11);
#elif __powerpc64__
CheckTypeSize(Boolean,1, 9605, 9);
#elif 1
CheckTypeSize(Boolean,0, 9605, 1);
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(XtArgVal,4, 9606, 6);
#elif __i386__
CheckTypeSize(XtArgVal,4, 9606, 2);
#elif __s390x__
CheckTypeSize(XtArgVal,8, 9606, 12);
#elif __ia64__
CheckTypeSize(XtArgVal,8, 9606, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(XtArgVal,4, 9606, 10);
#elif __x86_64__
CheckTypeSize(XtArgVal,8, 9606, 11);
#elif __powerpc64__
CheckTypeSize(XtArgVal,8, 9606, 9);
#elif 1
CheckTypeSize(XtArgVal,0, 9606, 1);
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(XtEnum,1, 9607, 6);
#elif __i386__
CheckTypeSize(XtEnum,1, 9607, 2);
#elif __s390x__
CheckTypeSize(XtEnum,1, 9607, 12);
#elif __ia64__
CheckTypeSize(XtEnum,1, 9607, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(XtEnum,1, 9607, 10);
#elif __x86_64__
CheckTypeSize(XtEnum,1, 9607, 11);
#elif __powerpc64__
CheckTypeSize(XtEnum,1, 9607, 9);
#elif 1
CheckTypeSize(XtEnum,0, 9607, 1);
#endif

#if __i386__
CheckTypeSize(Cardinal,4, 9608, 2);
#elif __ia64__
CheckTypeSize(Cardinal,4, 9608, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(Cardinal,4, 9608, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(Cardinal,4, 9608, 10);
#elif __powerpc64__
CheckTypeSize(Cardinal,4, 9608, 9);
#elif __s390x__
CheckTypeSize(Cardinal,4, 9608, 12);
#elif __x86_64__
CheckTypeSize(Cardinal,4, 9608, 11);
#elif 1
CheckTypeSize(Cardinal,0, 9608, 1);
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(Dimension,2, 9609, 6);
#elif __i386__
CheckTypeSize(Dimension,2, 9609, 2);
#elif __s390x__
CheckTypeSize(Dimension,2, 9609, 12);
#elif __ia64__
CheckTypeSize(Dimension,2, 9609, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(Dimension,2, 9609, 10);
#elif __x86_64__
CheckTypeSize(Dimension,2, 9609, 11);
#elif __powerpc64__
CheckTypeSize(Dimension,2, 9609, 9);
#elif 1
CheckTypeSize(Dimension,0, 9609, 1);
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(Position,2, 9610, 6);
#elif __i386__
CheckTypeSize(Position,2, 9610, 2);
#elif __s390x__
CheckTypeSize(Position,2, 9610, 12);
#elif __ia64__
CheckTypeSize(Position,2, 9610, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(Position,2, 9610, 10);
#elif __x86_64__
CheckTypeSize(Position,2, 9610, 11);
#elif __powerpc64__
CheckTypeSize(Position,2, 9610, 9);
#elif 1
CheckTypeSize(Position,0, 9610, 1);
#endif

#if __i386__
CheckTypeSize(XtPointer,4, 9611, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XtPointer,4, 9611, 6);
#elif __s390x__
CheckTypeSize(XtPointer,8, 9611, 12);
#elif __ia64__
CheckTypeSize(XtPointer,8, 9611, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(XtPointer,4, 9611, 10);
#elif __x86_64__
CheckTypeSize(XtPointer,8, 9611, 11);
#elif __powerpc64__
CheckTypeSize(XtPointer,8, 9611, 9);
#elif 1
CheckTypeSize(XtPointer,0, 9611, 1);
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(Opaque,4, 9612, 6);
#elif __i386__
CheckTypeSize(Opaque,4, 9612, 2);
#elif __s390x__
CheckTypeSize(Opaque,8, 9612, 12);
#elif __ia64__
CheckTypeSize(Opaque,8, 9612, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(Opaque,4, 9612, 10);
#elif __x86_64__
CheckTypeSize(Opaque,8, 9612, 11);
#elif __powerpc64__
CheckTypeSize(Opaque,8, 9612, 9);
#elif 1
CheckTypeSize(Opaque,0, 9612, 1);
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
