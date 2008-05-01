/*
 * Test of X11/IntrinsicP.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/IntrinsicP.h"



#ifdef TET_TEST
void X11_IntrinsicP_h()
{
#else
int X11_IntrinsicP_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/IntrinsicP.h\n");
#endif

printf("Checking data structures in X11/IntrinsicP.h\n");
#if defined __s390__ && !defined __s390x__
CheckTypeSize(XrmResource,28, 100559, 10, 1.2, NULL, 100558, NULL)
#elif defined __i386__
CheckTypeSize(XrmResource,28, 100559, 2, 1.2, NULL, 100558, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmResource,28, 100559, 6, 1.2, NULL, 100558, NULL)
#else
Msg("Find size of XrmResource (100559)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100558,NULL);\n",architecture,100559,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XrmResourceList,4, 100561, 10, 1.2, NULL, 100560, NULL)
#elif defined __i386__
CheckTypeSize(XrmResourceList,4, 100561, 2, 1.2, NULL, 100560, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmResourceList,4, 100561, 6, 1.2, NULL, 100560, NULL)
#else
Msg("Find size of XrmResourceList (100561)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100560,NULL);\n",architecture,100561,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtTMRec,16, 100587, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtTMRec,proc_table,4,10,78350)
CheckOffset(struct _XtTMRec,proc_table,4,10,78350)
CheckMemberSize(struct _XtTMRec,current_state,4,10,78351)
CheckOffset(struct _XtTMRec,current_state,8,10,78351)
CheckMemberSize(struct _XtTMRec,lastEventTime,4,10,78352)
CheckOffset(struct _XtTMRec,lastEventTime,12,10,78352)
#elif defined __i386__
CheckTypeSize(struct _XtTMRec,16, 100587, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtTMRec,proc_table,4,2,78350)
CheckOffset(struct _XtTMRec,proc_table,4,2,78350)
CheckMemberSize(struct _XtTMRec,current_state,4,2,78351)
CheckOffset(struct _XtTMRec,current_state,8,2,78351)
CheckMemberSize(struct _XtTMRec,lastEventTime,4,2,78352)
CheckOffset(struct _XtTMRec,lastEventTime,12,2,78352)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XtTMRec,16, 100587, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtTMRec,proc_table,4,6,78350)
CheckOffset(struct _XtTMRec,proc_table,4,6,78350)
CheckMemberSize(struct _XtTMRec,current_state,4,6,78351)
CheckOffset(struct _XtTMRec,current_state,8,6,78351)
CheckMemberSize(struct _XtTMRec,lastEventTime,4,6,78352)
CheckOffset(struct _XtTMRec,lastEventTime,12,6,78352)
#else
Msg("Find size of _XtTMRec (100587)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,100587,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtTM,4, 100589, 10, 1.2, NULL, 100588, NULL)
#elif defined __i386__
CheckTypeSize(XtTM,4, 100589, 2, 1.2, NULL, 100588, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtTM,4, 100589, 6, 1.2, NULL, 100588, NULL)
#else
Msg("Find size of XtTM (100589)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100588,NULL);\n",architecture,100589,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtTypedArg,16, 100593, 10, 1.2, NULL, 100592, NULL)
#elif defined __i386__
CheckTypeSize(XtTypedArg,16, 100593, 2, 1.2, NULL, 100592, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtTypedArg,16, 100593, 6, 1.2, NULL, 100592, NULL)
#else
Msg("Find size of XtTypedArg (100593)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100592,NULL);\n",architecture,100593,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtTypedArgList,4, 100595, 10, 1.2, NULL, 100594, NULL)
#elif defined __i386__
CheckTypeSize(XtTypedArgList,4, 100595, 2, 1.2, NULL, 100594, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtTypedArgList,4, 100595, 6, 1.2, NULL, 100594, NULL)
#else
Msg("Find size of XtTypedArgList (100595)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100594,NULL);\n",architecture,100595,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtProc,4, 100618, 10, 1.2, NULL, 20504, NULL)
#elif defined __i386__
CheckTypeSize(XtProc,4, 100618, 2, 1.2, NULL, 20504, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtProc,4, 100618, 6, 1.2, NULL, 20504, NULL)
#else
Msg("Find size of XtProc (100618)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,20504,NULL);\n",architecture,100618,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtWidgetClassProc,4, 100620, 10, 1.2, NULL, 100619, NULL)
#elif defined __i386__
CheckTypeSize(XtWidgetClassProc,4, 100620, 2, 1.2, NULL, 100619, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtWidgetClassProc,4, 100620, 6, 1.2, NULL, 100619, NULL)
#else
Msg("Find size of XtWidgetClassProc (100620)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100619,NULL);\n",architecture,100620,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtInitProc,4, 100622, 10, 1.2, NULL, 100621, NULL)
#elif defined __i386__
CheckTypeSize(XtInitProc,4, 100622, 2, 1.2, NULL, 100621, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtInitProc,4, 100622, 6, 1.2, NULL, 100621, NULL)
#else
Msg("Find size of XtInitProc (100622)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100621,NULL);\n",architecture,100622,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtArgsProc,4, 100624, 10, 1.2, NULL, 100623, NULL)
#elif defined __i386__
CheckTypeSize(XtArgsProc,4, 100624, 2, 1.2, NULL, 100623, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtArgsProc,4, 100624, 6, 1.2, NULL, 100623, NULL)
#else
Msg("Find size of XtArgsProc (100624)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100623,NULL);\n",architecture,100624,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtRealizeProc,4, 100627, 10, 1.2, NULL, 100626, NULL)
#elif defined __i386__
CheckTypeSize(XtRealizeProc,4, 100627, 2, 1.2, NULL, 100626, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtRealizeProc,4, 100627, 6, 1.2, NULL, 100626, NULL)
#else
Msg("Find size of XtRealizeProc (100627)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100626,NULL);\n",architecture,100627,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtWidgetProc,4, 100629, 10, 1.2, NULL, 100628, NULL)
#elif defined __i386__
CheckTypeSize(XtWidgetProc,4, 100629, 2, 1.2, NULL, 100628, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtWidgetProc,4, 100629, 6, 1.2, NULL, 100628, NULL)
#else
Msg("Find size of XtWidgetProc (100629)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100628,NULL);\n",architecture,100629,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtExposeProc,4, 100631, 10, 1.2, NULL, 100630, NULL)
#elif defined __i386__
CheckTypeSize(XtExposeProc,4, 100631, 2, 1.2, NULL, 100630, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtExposeProc,4, 100631, 6, 1.2, NULL, 100630, NULL)
#else
Msg("Find size of XtExposeProc (100631)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100630,NULL);\n",architecture,100631,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtSetValuesFunc,4, 100633, 10, 1.2, NULL, 100632, NULL)
#elif defined __i386__
CheckTypeSize(XtSetValuesFunc,4, 100633, 2, 1.2, NULL, 100632, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtSetValuesFunc,4, 100633, 6, 1.2, NULL, 100632, NULL)
#else
Msg("Find size of XtSetValuesFunc (100633)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100632,NULL);\n",architecture,100633,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtArgsFunc,4, 100635, 10, 1.2, NULL, 100634, NULL)
#elif defined __i386__
CheckTypeSize(XtArgsFunc,4, 100635, 2, 1.2, NULL, 100634, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtArgsFunc,4, 100635, 6, 1.2, NULL, 100634, NULL)
#else
Msg("Find size of XtArgsFunc (100635)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100634,NULL);\n",architecture,100635,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtAlmostProc,4, 100637, 10, 1.2, NULL, 100636, NULL)
#elif defined __i386__
CheckTypeSize(XtAlmostProc,4, 100637, 2, 1.2, NULL, 100636, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtAlmostProc,4, 100637, 6, 1.2, NULL, 100636, NULL)
#else
Msg("Find size of XtAlmostProc (100637)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100636,NULL);\n",architecture,100637,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtAcceptFocusProc,4, 100639, 10, 1.2, NULL, 100638, NULL)
#elif defined __i386__
CheckTypeSize(XtAcceptFocusProc,4, 100639, 2, 1.2, NULL, 100638, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtAcceptFocusProc,4, 100639, 6, 1.2, NULL, 100638, NULL)
#else
Msg("Find size of XtAcceptFocusProc (100639)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100638,NULL);\n",architecture,100639,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtVersionType,4, 100640, 10, 1.2, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtVersionType,4, 100640, 2, 1.2, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtVersionType,4, 100640, 6, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtVersionType (100640)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,100640,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtGeometryHandler,4, 100642, 10, 1.2, NULL, 100641, NULL)
#elif defined __i386__
CheckTypeSize(XtGeometryHandler,4, 100642, 2, 1.2, NULL, 100641, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtGeometryHandler,4, 100642, 6, 1.2, NULL, 100641, NULL)
#else
Msg("Find size of XtGeometryHandler (100642)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100641,NULL);\n",architecture,100642,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtStringProc,4, 100644, 10, 1.2, NULL, 100643, NULL)
#elif defined __i386__
CheckTypeSize(XtStringProc,4, 100644, 2, 1.2, NULL, 100643, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtStringProc,4, 100644, 6, 1.2, NULL, 100643, NULL)
#else
Msg("Find size of XtStringProc (100644)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100643, NULL);\n",architecture,100644,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/IntrinsicP.h\n\n",pcnt,cnt);
return cnt;
#endif

}
