/*
 * Test of X11/Intrinsic.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/Intrinsic.h\n");
#endif

#if __i386__
CheckTypeSize(Widget,4, 9578, 2)
#elif __ia64__
CheckTypeSize(Widget,8, 9578, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(Widget,4, 9578, 6)
#elif __s390x__
CheckTypeSize(Widget,8, 9578, 12)
#elif __s390__ && !__s390x__
CheckTypeSize(Widget,4, 9578, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9578,0);
Msg("Find size of Widget (9578)\n");
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(WidgetList,4, 9580, 6)
#elif __i386__
CheckTypeSize(WidgetList,4, 9580, 2)
#elif __s390x__
CheckTypeSize(WidgetList,8, 9580, 12)
#elif __ia64__
CheckTypeSize(WidgetList,8, 9580, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(WidgetList,4, 9580, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9580,0);
Msg("Find size of WidgetList (9580)\n");
#endif

#if __i386__
CheckTypeSize(WidgetClass,4, 9583, 2)
#elif __ia64__
CheckTypeSize(WidgetClass,8, 9583, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(WidgetClass,4, 9583, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(WidgetClass,4, 9583, 10)
#elif __powerpc64__
CheckTypeSize(WidgetClass,8, 9583, 9)
#elif __s390x__
CheckTypeSize(WidgetClass,8, 9583, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9583,0);
Msg("Find size of WidgetClass (9583)\n");
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(CompositeWidget,4, 9586, 6)
#elif __i386__
CheckTypeSize(CompositeWidget,4, 9586, 2)
#elif __s390x__
CheckTypeSize(CompositeWidget,8, 9586, 12)
#elif __ia64__
CheckTypeSize(CompositeWidget,8, 9586, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(CompositeWidget,4, 9586, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9586,0);
Msg("Find size of CompositeWidget (9586)\n");
#endif

#if __i386__
CheckTypeSize(XtActionList,4, 9589, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XtActionList,4, 9589, 6)
#elif __s390x__
CheckTypeSize(XtActionList,8, 9589, 12)
#elif __ia64__
CheckTypeSize(XtActionList,8, 9589, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(XtActionList,4, 9589, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9589,0);
Msg("Find size of XtActionList (9589)\n");
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(XtEventTable,4, 9592, 6)
#elif __i386__
CheckTypeSize(XtEventTable,4, 9592, 2)
#elif __s390x__
CheckTypeSize(XtEventTable,8, 9592, 12)
#elif __ia64__
CheckTypeSize(XtEventTable,8, 9592, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(XtEventTable,4, 9592, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9592,0);
Msg("Find size of XtEventTable (9592)\n");
#endif

#if __i386__
CheckTypeSize(XtAppContext,4, 9595, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XtAppContext,4, 9595, 6)
#elif __s390x__
CheckTypeSize(XtAppContext,8, 9595, 12)
#elif __ia64__
CheckTypeSize(XtAppContext,8, 9595, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(XtAppContext,4, 9595, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9595,0);
Msg("Find size of XtAppContext (9595)\n");
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(XtValueMask,4, 9596, 6)
#elif __i386__
CheckTypeSize(XtValueMask,4, 9596, 2)
#elif __s390x__
CheckTypeSize(XtValueMask,8, 9596, 12)
#elif __ia64__
CheckTypeSize(XtValueMask,8, 9596, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(XtValueMask,4, 9596, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9596,0);
Msg("Find size of XtValueMask (9596)\n");
#endif

#if __i386__
CheckTypeSize(XtIntervalId,4, 9597, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XtIntervalId,4, 9597, 6)
#elif __s390x__
CheckTypeSize(XtIntervalId,8, 9597, 12)
#elif __ia64__
CheckTypeSize(XtIntervalId,8, 9597, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(XtIntervalId,4, 9597, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9597,0);
Msg("Find size of XtIntervalId (9597)\n");
#endif

#if __i386__
CheckTypeSize(XtInputId,4, 9598, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XtInputId,4, 9598, 6)
#elif __s390x__
CheckTypeSize(XtInputId,8, 9598, 12)
#elif __ia64__
CheckTypeSize(XtInputId,8, 9598, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(XtInputId,4, 9598, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9598,0);
Msg("Find size of XtInputId (9598)\n");
#endif

#if __i386__
CheckTypeSize(XtSignalId,4, 9600, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XtSignalId,4, 9600, 6)
#elif __s390x__
CheckTypeSize(XtSignalId,8, 9600, 12)
#elif __ia64__
CheckTypeSize(XtSignalId,8, 9600, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(XtSignalId,4, 9600, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9600,0);
Msg("Find size of XtSignalId (9600)\n");
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(XtGeometryMask,4, 9601, 6)
#elif __i386__
CheckTypeSize(XtGeometryMask,4, 9601, 2)
#elif __s390x__
CheckTypeSize(XtGeometryMask,4, 9601, 12)
#elif __ia64__
CheckTypeSize(XtGeometryMask,4, 9601, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(XtGeometryMask,4, 9601, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9601,0);
Msg("Find size of XtGeometryMask (9601)\n");
#endif

#if __i386__
CheckTypeSize(XtGCMask,4, 9602, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XtGCMask,4, 9602, 6)
#elif __s390x__
CheckTypeSize(XtGCMask,8, 9602, 12)
#elif __ia64__
CheckTypeSize(XtGCMask,8, 9602, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(XtGCMask,4, 9602, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9602,0);
Msg("Find size of XtGCMask (9602)\n");
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(Pixel,4, 9603, 6)
#elif __i386__
CheckTypeSize(Pixel,4, 9603, 2)
#elif __s390x__
CheckTypeSize(Pixel,8, 9603, 12)
#elif __ia64__
CheckTypeSize(Pixel,8, 9603, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(Pixel,4, 9603, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9603,0);
Msg("Find size of Pixel (9603)\n");
#endif

#if __i386__
CheckTypeSize(XtCacheType,4, 9604, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XtCacheType,4, 9604, 6)
#elif __s390x__
CheckTypeSize(XtCacheType,4, 9604, 12)
#elif __ia64__
CheckTypeSize(XtCacheType,4, 9604, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(XtCacheType,4, 9604, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9604,0);
Msg("Find size of XtCacheType (9604)\n");
#endif

#if __i386__
CheckTypeSize(Boolean,1, 9605, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(Boolean,1, 9605, 6)
#elif __s390x__
CheckTypeSize(Boolean,1, 9605, 12)
#elif __ia64__
CheckTypeSize(Boolean,1, 9605, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(Boolean,1, 9605, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9605,0);
Msg("Find size of Boolean (9605)\n");
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(XtArgVal,4, 9606, 6)
#elif __i386__
CheckTypeSize(XtArgVal,4, 9606, 2)
#elif __s390x__
CheckTypeSize(XtArgVal,8, 9606, 12)
#elif __ia64__
CheckTypeSize(XtArgVal,8, 9606, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(XtArgVal,4, 9606, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9606,0);
Msg("Find size of XtArgVal (9606)\n");
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(XtEnum,1, 9607, 6)
#elif __i386__
CheckTypeSize(XtEnum,1, 9607, 2)
#elif __s390x__
CheckTypeSize(XtEnum,1, 9607, 12)
#elif __ia64__
CheckTypeSize(XtEnum,1, 9607, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(XtEnum,1, 9607, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9607,0);
Msg("Find size of XtEnum (9607)\n");
#endif

#if __i386__
CheckTypeSize(Cardinal,4, 9608, 2)
#elif __ia64__
CheckTypeSize(Cardinal,4, 9608, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(Cardinal,4, 9608, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(Cardinal,4, 9608, 10)
#elif __powerpc64__
CheckTypeSize(Cardinal,4, 9608, 9)
#elif __s390x__
CheckTypeSize(Cardinal,4, 9608, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9608,0);
Msg("Find size of Cardinal (9608)\n");
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(Dimension,2, 9609, 6)
#elif __i386__
CheckTypeSize(Dimension,2, 9609, 2)
#elif __s390x__
CheckTypeSize(Dimension,2, 9609, 12)
#elif __ia64__
CheckTypeSize(Dimension,2, 9609, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(Dimension,2, 9609, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9609,0);
Msg("Find size of Dimension (9609)\n");
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(Position,2, 9610, 6)
#elif __i386__
CheckTypeSize(Position,2, 9610, 2)
#elif __s390x__
CheckTypeSize(Position,2, 9610, 12)
#elif __ia64__
CheckTypeSize(Position,2, 9610, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(Position,2, 9610, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9610,0);
Msg("Find size of Position (9610)\n");
#endif

#if __i386__
CheckTypeSize(XtPointer,4, 9611, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XtPointer,4, 9611, 6)
#elif __s390x__
CheckTypeSize(XtPointer,8, 9611, 12)
#elif __ia64__
CheckTypeSize(XtPointer,8, 9611, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(XtPointer,4, 9611, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9611,0);
Msg("Find size of XtPointer (9611)\n");
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(Opaque,4, 9612, 6)
#elif __i386__
CheckTypeSize(Opaque,4, 9612, 2)
#elif __s390x__
CheckTypeSize(Opaque,8, 9612, 12)
#elif __ia64__
CheckTypeSize(Opaque,8, 9612, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(Opaque,4, 9612, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9612,0);
Msg("Find size of Opaque (9612)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/Intrinsic.h\n",cnt);
return cnt;
#endif

}
