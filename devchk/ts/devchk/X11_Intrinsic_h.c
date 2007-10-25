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
#if defined __i386__
CheckTypeSize(Widget,4, 9578, 2, 1.3, NULL, 9577, NULL)
#elif defined __ia64__
CheckTypeSize(Widget,8, 9578, 3, 1.3, NULL, 9577, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Widget,4, 9578, 6, 1.3, NULL, 9577, NULL)
#elif defined __s390x__
CheckTypeSize(Widget,8, 9578, 12, 1.3, NULL, 9577, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Widget,4, 9578, 10, 1.3, NULL, 9577, NULL)
#elif defined __x86_64__
CheckTypeSize(Widget,8, 9578, 11, 2.0, NULL, 9577, NULL)
#elif defined __powerpc64__
CheckTypeSize(Widget,8, 9578, 9, 2.0, NULL, 9577, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of Widget (9578)\n");
%d,%d,%d,'""2.0""',NULL,9577,NULL);\n",architecture,9578,0);
#endif

#if defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(WidgetList,4, 9580, 6, 1.3, NULL, 9579, NULL)
#elif defined __i386__
CheckTypeSize(WidgetList,4, 9580, 2, 1.3, NULL, 9579, NULL)
#elif defined __s390x__
CheckTypeSize(WidgetList,8, 9580, 12, 1.3, NULL, 9579, NULL)
#elif defined __ia64__
CheckTypeSize(WidgetList,8, 9580, 3, 1.3, NULL, 9579, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(WidgetList,4, 9580, 10, 1.3, NULL, 9579, NULL)
#elif defined __x86_64__
CheckTypeSize(WidgetList,8, 9580, 11, 2.0, NULL, 9579, NULL)
#elif defined __powerpc64__
CheckTypeSize(WidgetList,8, 9580, 9, 2.0, NULL, 9579, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of WidgetList (9580)\n");
%d,%d,%d,'""2.0""',NULL,9579,NULL);\n",architecture,9580,0);
#endif

#if defined __i386__
CheckTypeSize(WidgetClass,4, 9583, 2, 1.3, NULL, 9582, NULL)
#elif defined __ia64__
CheckTypeSize(WidgetClass,8, 9583, 3, 1.3, NULL, 9582, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(WidgetClass,4, 9583, 6, 1.3, NULL, 9582, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(WidgetClass,4, 9583, 10, 1.3, NULL, 9582, NULL)
#elif defined __powerpc64__
CheckTypeSize(WidgetClass,8, 9583, 9, 2.0, NULL, 9582, NULL)
#elif defined __s390x__
CheckTypeSize(WidgetClass,8, 9583, 12, 1.3, NULL, 9582, NULL)
#elif defined __x86_64__
CheckTypeSize(WidgetClass,8, 9583, 11, 2.0, NULL, 9582, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of WidgetClass (9583)\n");
%d,%d,%d,'""2.0""',NULL,9582,NULL);\n",architecture,9583,0);
#endif

#if defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(CompositeWidget,4, 9586, 6, 1.3, NULL, 9585, NULL)
#elif defined __i386__
CheckTypeSize(CompositeWidget,4, 9586, 2, 1.3, NULL, 9585, NULL)
#elif defined __s390x__
CheckTypeSize(CompositeWidget,8, 9586, 12, 1.3, NULL, 9585, NULL)
#elif defined __ia64__
CheckTypeSize(CompositeWidget,8, 9586, 3, 1.3, NULL, 9585, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(CompositeWidget,4, 9586, 10, 1.3, NULL, 9585, NULL)
#elif defined __x86_64__
CheckTypeSize(CompositeWidget,8, 9586, 11, 2.0, NULL, 9585, NULL)
#elif defined __powerpc64__
CheckTypeSize(CompositeWidget,8, 9586, 9, 2.0, NULL, 9585, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of CompositeWidget (9586)\n");
%d,%d,%d,'""2.0""',NULL,9585,NULL);\n",architecture,9586,0);
#endif

#if defined __i386__
CheckTypeSize(XtActionList,4, 9589, 2, 1.3, NULL, 9588, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtActionList,4, 9589, 6, 1.3, NULL, 9588, NULL)
#elif defined __s390x__
CheckTypeSize(XtActionList,8, 9589, 12, 1.3, NULL, 9588, NULL)
#elif defined __ia64__
CheckTypeSize(XtActionList,8, 9589, 3, 1.3, NULL, 9588, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtActionList,4, 9589, 10, 1.3, NULL, 9588, NULL)
#elif defined __x86_64__
CheckTypeSize(XtActionList,8, 9589, 11, 2.0, NULL, 9588, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtActionList,8, 9589, 9, 2.0, NULL, 9588, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XtActionList (9589)\n");
%d,%d,%d,'""2.0""',NULL,9588,NULL);\n",architecture,9589,0);
#endif

#if defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtEventTable,4, 9592, 6, 1.3, NULL, 9591, NULL)
#elif defined __i386__
CheckTypeSize(XtEventTable,4, 9592, 2, 1.3, NULL, 9591, NULL)
#elif defined __s390x__
CheckTypeSize(XtEventTable,8, 9592, 12, 1.3, NULL, 9591, NULL)
#elif defined __ia64__
CheckTypeSize(XtEventTable,8, 9592, 3, 1.3, NULL, 9591, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtEventTable,4, 9592, 10, 1.3, NULL, 9591, NULL)
#elif defined __x86_64__
CheckTypeSize(XtEventTable,8, 9592, 11, 2.0, NULL, 9591, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtEventTable,8, 9592, 9, 2.0, NULL, 9591, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XtEventTable (9592)\n");
%d,%d,%d,'""2.0""',NULL,9591,NULL);\n",architecture,9592,0);
#endif

#if defined __i386__
CheckTypeSize(XtAppContext,4, 9595, 2, 1.3, NULL, 9594, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtAppContext,4, 9595, 6, 1.3, NULL, 9594, NULL)
#elif defined __s390x__
CheckTypeSize(XtAppContext,8, 9595, 12, 1.3, NULL, 9594, NULL)
#elif defined __ia64__
CheckTypeSize(XtAppContext,8, 9595, 3, 1.3, NULL, 9594, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtAppContext,4, 9595, 10, 1.3, NULL, 9594, NULL)
#elif defined __x86_64__
CheckTypeSize(XtAppContext,8, 9595, 11, 2.0, NULL, 9594, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtAppContext,8, 9595, 9, 2.0, NULL, 9594, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XtAppContext (9595)\n");
%d,%d,%d,'""2.0""',NULL,9594,NULL);\n",architecture,9595,0);
#endif

#if defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtValueMask,4, 9596, 6, 1.3, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(XtValueMask,4, 9596, 2, 1.3, NULL, 9, NULL)
#elif defined __s390x__
CheckTypeSize(XtValueMask,8, 9596, 12, 1.3, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(XtValueMask,8, 9596, 3, 1.3, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtValueMask,4, 9596, 10, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(XtValueMask,8, 9596, 11, 2.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtValueMask,8, 9596, 9, 2.0, NULL, 9, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XtValueMask (9596)\n");
%d,%d,%d,'""2.0""',NULL,9,NULL);\n",architecture,9596,0);
#endif

#if defined __i386__
CheckTypeSize(XtIntervalId,4, 9597, 2, 1.3, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtIntervalId,4, 9597, 6, 1.3, NULL, 9, NULL)
#elif defined __s390x__
CheckTypeSize(XtIntervalId,8, 9597, 12, 1.3, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(XtIntervalId,8, 9597, 3, 1.3, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtIntervalId,4, 9597, 10, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(XtIntervalId,8, 9597, 11, 2.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtIntervalId,8, 9597, 9, 2.0, NULL, 9, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XtIntervalId (9597)\n");
%d,%d,%d,'""2.0""',NULL,9,NULL);\n",architecture,9597,0);
#endif

#if defined __i386__
CheckTypeSize(XtInputId,4, 9598, 2, 1.3, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtInputId,4, 9598, 6, 1.3, NULL, 9, NULL)
#elif defined __s390x__
CheckTypeSize(XtInputId,8, 9598, 12, 1.3, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(XtInputId,8, 9598, 3, 1.3, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtInputId,4, 9598, 10, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(XtInputId,8, 9598, 11, 2.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtInputId,8, 9598, 9, 2.0, NULL, 9, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XtInputId (9598)\n");
%d,%d,%d,'""2.0""',NULL,9,NULL);\n",architecture,9598,0);
#endif

#if defined __i386__
CheckTypeSize(XtSignalId,4, 9600, 2, 1.3, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtSignalId,4, 9600, 6, 1.3, NULL, 9, NULL)
#elif defined __s390x__
CheckTypeSize(XtSignalId,8, 9600, 12, 1.3, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(XtSignalId,8, 9600, 3, 1.3, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtSignalId,4, 9600, 10, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(XtSignalId,8, 9600, 11, 2.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtSignalId,8, 9600, 9, 2.0, NULL, 9, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XtSignalId (9600)\n");
%d,%d,%d,'""2.0""',NULL,9,NULL);\n",architecture,9600,0);
#endif

#if defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtGeometryMask,4, 9601, 6, 1.3, NULL, 7, NULL)
#elif defined __i386__
CheckTypeSize(XtGeometryMask,4, 9601, 2, 1.3, NULL, 7, NULL)
#elif defined __s390x__
CheckTypeSize(XtGeometryMask,4, 9601, 12, 1.3, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(XtGeometryMask,4, 9601, 3, 1.3, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtGeometryMask,4, 9601, 10, 1.3, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(XtGeometryMask,4, 9601, 11, 2.0, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtGeometryMask,4, 9601, 9, 2.0, NULL, 7, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XtGeometryMask (9601)\n");
%d,%d,%d,'""2.0""',NULL,7,NULL);\n",architecture,9601,0);
#endif

#if defined __i386__
CheckTypeSize(XtGCMask,4, 9602, 2, 1.3, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtGCMask,4, 9602, 6, 1.3, NULL, 9, NULL)
#elif defined __s390x__
CheckTypeSize(XtGCMask,8, 9602, 12, 1.3, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(XtGCMask,8, 9602, 3, 1.3, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtGCMask,4, 9602, 10, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(XtGCMask,8, 9602, 11, 2.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtGCMask,8, 9602, 9, 2.0, NULL, 9, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XtGCMask (9602)\n");
%d,%d,%d,'""2.0""',NULL,9,NULL);\n",architecture,9602,0);
#endif

#if defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Pixel,4, 9603, 6, 1.3, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(Pixel,4, 9603, 2, 1.3, NULL, 9, NULL)
#elif defined __s390x__
CheckTypeSize(Pixel,8, 9603, 12, 1.3, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(Pixel,8, 9603, 3, 1.3, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Pixel,4, 9603, 10, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(Pixel,8, 9603, 11, 2.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(Pixel,8, 9603, 9, 2.0, NULL, 9, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of Pixel (9603)\n");
%d,%d,%d,'""2.0""',NULL,9,NULL);\n",architecture,9603,0);
#endif

#if defined __i386__
CheckTypeSize(XtCacheType,4, 9604, 2, 1.3, NULL, 6, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtCacheType,4, 9604, 6, 1.3, NULL, 6, NULL)
#elif defined __s390x__
CheckTypeSize(XtCacheType,4, 9604, 12, 1.3, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(XtCacheType,4, 9604, 3, 1.3, NULL, 6, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtCacheType,4, 9604, 10, 1.3, NULL, 6, NULL)
#elif defined __x86_64__
CheckTypeSize(XtCacheType,4, 9604, 11, 2.0, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtCacheType,4, 9604, 9, 2.0, NULL, 6, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XtCacheType (9604)\n");
%d,%d,%d,'""2.0""',NULL,6,NULL);\n",architecture,9604,0);
#endif

#if defined __i386__
CheckTypeSize(Boolean,1, 9605, 2, 1.3, NULL, 2, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Boolean,1, 9605, 6, 1.3, NULL, 2, NULL)
#elif defined __s390x__
CheckTypeSize(Boolean,1, 9605, 12, 1.3, NULL, 2, NULL)
#elif defined __ia64__
CheckTypeSize(Boolean,1, 9605, 3, 1.3, NULL, 2, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Boolean,1, 9605, 10, 1.3, NULL, 2, NULL)
#elif defined __x86_64__
CheckTypeSize(Boolean,1, 9605, 11, 2.0, NULL, 2, NULL)
#elif defined __powerpc64__
CheckTypeSize(Boolean,1, 9605, 9, 2.0, NULL, 2, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of Boolean (9605)\n");
%d,%d,%d,'""2.0""',NULL,2,NULL);\n",architecture,9605,0);
#endif

#if defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtArgVal,4, 9606, 6, 1.3, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(XtArgVal,4, 9606, 2, 1.3, NULL, 8, NULL)
#elif defined __s390x__
CheckTypeSize(XtArgVal,8, 9606, 12, 1.3, NULL, 8, NULL)
#elif defined __ia64__
CheckTypeSize(XtArgVal,8, 9606, 3, 1.3, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtArgVal,4, 9606, 10, 1.3, NULL, 8, NULL)
#elif defined __x86_64__
CheckTypeSize(XtArgVal,8, 9606, 11, 2.0, NULL, 8, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtArgVal,8, 9606, 9, 2.0, NULL, 8, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XtArgVal (9606)\n");
%d,%d,%d,'""2.0""',NULL,8,NULL);\n",architecture,9606,0);
#endif

#if defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtEnum,1, 9607, 6, 1.3, NULL, 3, NULL)
#elif defined __i386__
CheckTypeSize(XtEnum,1, 9607, 2, 1.3, NULL, 3, NULL)
#elif defined __s390x__
CheckTypeSize(XtEnum,1, 9607, 12, 1.3, NULL, 3, NULL)
#elif defined __ia64__
CheckTypeSize(XtEnum,1, 9607, 3, 1.3, NULL, 3, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtEnum,1, 9607, 10, 1.3, NULL, 3, NULL)
#elif defined __x86_64__
CheckTypeSize(XtEnum,1, 9607, 11, 2.0, NULL, 3, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtEnum,1, 9607, 9, 2.0, NULL, 3, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XtEnum (9607)\n");
%d,%d,%d,'""2.0""',NULL,3,NULL);\n",architecture,9607,0);
#endif

#if defined __i386__
CheckTypeSize(Cardinal,4, 9608, 2, 1.3, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(Cardinal,4, 9608, 3, 1.3, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Cardinal,4, 9608, 6, 1.3, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Cardinal,4, 9608, 10, 1.3, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(Cardinal,4, 9608, 9, 2.0, NULL, 7, NULL)
#elif defined __s390x__
CheckTypeSize(Cardinal,4, 9608, 12, 1.3, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(Cardinal,4, 9608, 11, 2.0, NULL, 7, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of Cardinal (9608)\n");
%d,%d,%d,'""2.0""',NULL,7,NULL);\n",architecture,9608,0);
#endif

#if defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Dimension,2, 9609, 6, 1.3, NULL, 5, NULL)
#elif defined __i386__
CheckTypeSize(Dimension,2, 9609, 2, 1.3, NULL, 5, NULL)
#elif defined __s390x__
CheckTypeSize(Dimension,2, 9609, 12, 1.3, NULL, 5, NULL)
#elif defined __ia64__
CheckTypeSize(Dimension,2, 9609, 3, 1.3, NULL, 5, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Dimension,2, 9609, 10, 1.3, NULL, 5, NULL)
#elif defined __x86_64__
CheckTypeSize(Dimension,2, 9609, 11, 2.0, NULL, 5, NULL)
#elif defined __powerpc64__
CheckTypeSize(Dimension,2, 9609, 9, 2.0, NULL, 5, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of Dimension (9609)\n");
%d,%d,%d,'""2.0""',NULL,5,NULL);\n",architecture,9609,0);
#endif

#if defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Position,2, 9610, 6, 1.3, NULL, 4, NULL)
#elif defined __i386__
CheckTypeSize(Position,2, 9610, 2, 1.3, NULL, 4, NULL)
#elif defined __s390x__
CheckTypeSize(Position,2, 9610, 12, 1.3, NULL, 4, NULL)
#elif defined __ia64__
CheckTypeSize(Position,2, 9610, 3, 1.3, NULL, 4, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Position,2, 9610, 10, 1.3, NULL, 4, NULL)
#elif defined __x86_64__
CheckTypeSize(Position,2, 9610, 11, 2.0, NULL, 4, NULL)
#elif defined __powerpc64__
CheckTypeSize(Position,2, 9610, 9, 2.0, NULL, 4, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of Position (9610)\n");
%d,%d,%d,'""2.0""',NULL,4,NULL);\n",architecture,9610,0);
#endif

#if defined __i386__
CheckTypeSize(XtPointer,4, 9611, 2, 1.3, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtPointer,4, 9611, 6, 1.3, NULL, 40, NULL)
#elif defined __s390x__
CheckTypeSize(XtPointer,8, 9611, 12, 1.3, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(XtPointer,8, 9611, 3, 1.3, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtPointer,4, 9611, 10, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(XtPointer,8, 9611, 11, 2.0, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtPointer,8, 9611, 9, 2.0, NULL, 40, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XtPointer (9611)\n");
%d,%d,%d,'""2.0""',NULL,40,NULL);\n",architecture,9611,0);
#endif

#if defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Opaque,4, 9612, 6, 1.3, NULL, 9611, NULL)
#elif defined __i386__
CheckTypeSize(Opaque,4, 9612, 2, 1.3, NULL, 9611, NULL)
#elif defined __s390x__
CheckTypeSize(Opaque,8, 9612, 12, 1.3, NULL, 9611, NULL)
#elif defined __ia64__
CheckTypeSize(Opaque,8, 9612, 3, 1.3, NULL, 9611, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Opaque,4, 9612, 10, 1.3, NULL, 9611, NULL)
#elif defined __x86_64__
CheckTypeSize(Opaque,8, 9612, 11, 2.0, NULL, 9611, NULL)
#elif defined __powerpc64__
CheckTypeSize(Opaque,8, 9612, 9, 2.0, NULL, 9611, NULL)
#else
Msg("Find size of Opaque (9612)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9611, NULL);\n",architecture,9612,0);
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
