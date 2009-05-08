/*
 * Test of X11/EventI.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "stdio.h"
#include "X11/Intrinsic.h"
#include "X11/EventI.h"



#ifdef TET_TEST
void X11_EventI_h()
{
#else
int X11_EventI_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/EventI.h\n");
#endif

printf("Checking data structures in X11/EventI.h\n");
#if 1
CheckTypeSize(struct _XtEventRec,40, 32110, 1, 1.2, NULL, 0, NULL)
CheckBitField(struct _XtEventRec,select,1,1,78317)
CheckBitField(struct _XtEventRec,has_type_specifier,1,1,78318)
CheckBitField(struct _XtEventRec,async,1,1,78319)
#endif

#if 1
CheckTypeSize(XtGrabList,8, 32115, 1, 1.2, NULL, 32114, NULL)
#endif

#if 1
CheckTypeSize(struct _XtGrabRec,24, 32116, 1, 1.2, NULL, 0, NULL)
CheckBitField(struct _XtGrabRec,exclusive,1,1,78322)
CheckBitField(struct _XtGrabRec,spring_loaded,1,1,78323)
#endif

#if 1
CheckTypeSize(XtGrabRec,24, 32117, 1, 1.2, NULL, 32116, NULL)
#endif

#if 1
CheckTypeSize(XtEventRec,0, 39534, 1, 1.2, NULL, 32110, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/EventI.h\n\n",pcnt,cnt);
return cnt;
#endif

}
