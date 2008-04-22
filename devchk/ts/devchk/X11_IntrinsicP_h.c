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
#if 1
CheckTypeSize(XrmResource,48, 100559, 1, 1.2, NULL, 100558, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XrmResource *,4, 100560, 10, 1.2, NULL, 100559, NULL)
#elif defined __i386__
CheckTypeSize(XrmResource *,4, 100560, 2, 1.2, NULL, 100559, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmResource *,4, 100560, 6, 1.2, NULL, 100559, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmResource *,8, 100560, 11, 1.2, NULL, 100559, NULL)
#elif defined __s390x__
CheckTypeSize(XrmResource *,8, 100560, 12, 1.2, NULL, 100559, NULL)
#elif defined __ia64__
CheckTypeSize(XrmResource *,8, 100560, 3, 1.2, NULL, 100559, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmResource *,8, 100560, 9, 1.2, NULL, 100559, NULL)
#else
Msg("Find size of XrmResource * (100560)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100559,NULL);\n",architecture,100560,0);
#endif

#if 1
CheckTypeSize(XrmResourceList,8, 100561, 1, 1.2, NULL, 100560, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XrmResourceList *,4, 100562, 10, 1.2, NULL, 100561, NULL)
#elif defined __i386__
CheckTypeSize(XrmResourceList *,4, 100562, 2, 1.2, NULL, 100561, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmResourceList *,4, 100562, 6, 1.2, NULL, 100561, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmResourceList *,8, 100562, 11, 1.2, NULL, 100561, NULL)
#elif defined __s390x__
CheckTypeSize(XrmResourceList *,8, 100562, 12, 1.2, NULL, 100561, NULL)
#elif defined __ia64__
CheckTypeSize(XrmResourceList *,8, 100562, 3, 1.2, NULL, 100561, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmResourceList *,8, 100562, 9, 1.2, NULL, 100561, NULL)
#else
Msg("Find size of XrmResourceList * (100562)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100561,NULL);\n",architecture,100562,0);
#endif

#if 1
CheckTypeSize(struct _XtTMRec,32, 100587, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XtTMRec on All\n");
CheckOffset(struct _XtTMRec,translations,0,1,78349)
CheckOffset(struct _XtTMRec,proc_table,0,1,78350)
CheckOffset(struct _XtTMRec,current_state,0,1,78351)
CheckOffset(struct _XtTMRec,lastEventTime,0,1,78352)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtTMRec *,4, 100588, 10, 1.2, NULL, 100587, NULL)
#elif defined __i386__
CheckTypeSize(struct _XtTMRec *,4, 100588, 2, 1.2, NULL, 100587, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XtTMRec *,4, 100588, 6, 1.2, NULL, 100587, NULL)
#elif defined __x86_64__
CheckTypeSize(struct _XtTMRec *,8, 100588, 11, 1.2, NULL, 100587, NULL)
#elif defined __s390x__
CheckTypeSize(struct _XtTMRec *,8, 100588, 12, 1.2, NULL, 100587, NULL)
#elif defined __ia64__
CheckTypeSize(struct _XtTMRec *,8, 100588, 3, 1.2, NULL, 100587, NULL)
#elif defined __powerpc64__
CheckTypeSize(struct _XtTMRec *,8, 100588, 9, 1.2, NULL, 100587, NULL)
#else
Msg("Find size of _XtTMRec * (100588)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100587,NULL);\n",architecture,100588,0);
#endif

#if 1
CheckTypeSize(XtTM,8, 100589, 1, 1.2, NULL, 100588, NULL)
#endif

#if 1
CheckTypeSize(XtTypedArg,32, 100593, 1, 1.2, NULL, 100592, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XtTypedArg *,4, 100594, 10, 1.2, NULL, 100593, NULL)
#elif defined __i386__
CheckTypeSize(XtTypedArg *,4, 100594, 2, 1.2, NULL, 100593, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtTypedArg *,4, 100594, 6, 1.2, NULL, 100593, NULL)
#elif defined __x86_64__
CheckTypeSize(XtTypedArg *,8, 100594, 11, 1.2, NULL, 100593, NULL)
#elif defined __s390x__
CheckTypeSize(XtTypedArg *,8, 100594, 12, 1.2, NULL, 100593, NULL)
#elif defined __ia64__
CheckTypeSize(XtTypedArg *,8, 100594, 3, 1.2, NULL, 100593, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtTypedArg *,8, 100594, 9, 1.2, NULL, 100593, NULL)
#else
Msg("Find size of XtTypedArg * (100594)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100593,NULL);\n",architecture,100594,0);
#endif

#if 1
CheckTypeSize(XtTypedArgList,8, 100595, 1, 1.2, NULL, 100594, NULL)
#endif

#if 1
CheckTypeSize(XtProc,8, 100618, 1, 1.2, NULL, 20504, NULL)
#endif

#if 1
CheckTypeSize(XtWidgetClassProc,8, 100620, 1, 1.2, NULL, 100619, NULL)
#endif

#if 1
CheckTypeSize(XtInitProc,8, 100622, 1, 1.2, NULL, 100621, NULL)
#endif

#if 1
CheckTypeSize(XtArgsProc,8, 100624, 1, 1.2, NULL, 100623, NULL)
#endif

#if 1
CheckTypeSize(XtRealizeProc,8, 100627, 1, 1.2, NULL, 100626, NULL)
#endif

#if 1
CheckTypeSize(XtWidgetProc,8, 100629, 1, 1.2, NULL, 100628, NULL)
#endif

#if 1
CheckTypeSize(XtExposeProc,8, 100631, 1, 1.2, NULL, 100630, NULL)
#endif

#if 1
CheckTypeSize(XtSetValuesFunc,8, 100633, 1, 1.2, NULL, 100632, NULL)
#endif

#if 1
CheckTypeSize(XtArgsFunc,8, 100635, 1, 1.2, NULL, 100634, NULL)
#endif

#if 1
CheckTypeSize(XtAlmostProc,8, 100637, 1, 1.2, NULL, 100636, NULL)
#endif

#if 1
CheckTypeSize(XtAcceptFocusProc,8, 100639, 1, 1.2, NULL, 100638, NULL)
#endif

#if 1
CheckTypeSize(XtVersionType,8, 100640, 1, 1.2, NULL, 11186, NULL)
#endif

#if 1
CheckTypeSize(XtGeometryHandler,8, 100642, 1, 1.2, NULL, 100641, NULL)
#endif

#if 1
CheckTypeSize(XtStringProc,8, 100644, 1, 1.2, NULL, 100643, NULL)
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
