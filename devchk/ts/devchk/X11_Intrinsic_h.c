/*
 * Test of X11/Intrinsic.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef __i386__
CheckTypeSize(String,4, 9575, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9575,0);
#endif

#ifdef __i386__
CheckTypeSize(Widget,4, 9578, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9578,0);
#endif

#ifdef __i386__
CheckTypeSize(WidgetClass,4, 9583, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9583,0);
#endif

#ifdef __i386__
CheckTypeSize(XtActionList,4, 9589, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9589,0);
#endif

#ifdef __i386__
CheckTypeSize(XtAppContext,4, 9595, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9595,0);
#endif

#ifdef __i386__
CheckTypeSize(XtIntervalId,4, 9597, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9597,0);
#endif

#ifdef __i386__
CheckTypeSize(XtInputId,4, 9598, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9598,0);
#endif

#ifdef __i386__
CheckTypeSize(XtWorkProcId,4, 9599, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9599,0);
#endif

#ifdef __i386__
CheckTypeSize(XtSignalId,4, 9600, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9600,0);
#endif

#ifdef __i386__
CheckTypeSize(XtGCMask,4, 9602, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9602,0);
#endif

#ifdef __i386__
CheckTypeSize(XtCacheType,4, 9604, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9604,0);
#endif

#ifdef __i386__
CheckTypeSize(Boolean,1, 9605, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9605,0);
#endif

#ifdef __i386__
CheckTypeSize(Cardinal,4, 9608, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9608,0);
#endif

#ifdef __i386__
CheckTypeSize(XtPointer,4, 9611, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9611,0);
#endif

#ifdef __i386__
CheckTypeSize(XtTranslations,4, 9615, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9615,0);
#endif

#ifdef __i386__
CheckTypeSize(XtAccelerators,4, 9616, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9616,0);
#endif

#ifdef __i386__
CheckTypeSize(Modifiers,4, 9617, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9617,0);
#endif

#ifdef __i386__
CheckTypeSize(XtActionProc,4, 9621, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9621,0);
#endif

#ifdef __i386__
CheckTypeSize(XtConvertArgList,4, 9631, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9631,0);
#endif

#ifdef __i386__
CheckTypeSize(XtConverter,4, 9637, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9637,0);
#endif

#ifdef __i386__
CheckTypeSize(XtTypeConverter,4, 9640, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9640,0);
#endif

#ifdef __i386__
CheckTypeSize(XtDestructor,4, 9642, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9642,0);
#endif

#ifdef __i386__
CheckTypeSize(XtActionHookId,4, 9644, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9644,0);
#endif

#ifdef __i386__
CheckTypeSize(XtActionHookProc,4, 9646, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9646,0);
#endif

#ifdef __i386__
CheckTypeSize(XtBlockHookId,4, 9647, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9647,0);
#endif

#ifdef __i386__
CheckTypeSize(XtBlockHookProc,4, 9649, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9649,0);
#endif

#ifdef __i386__
CheckTypeSize(XtKeyProc,4, 9652, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9652,0);
#endif

#ifdef __i386__
CheckTypeSize(XtCaseProc,4, 9654, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9654,0);
#endif

#ifdef __i386__
CheckTypeSize(XtEventHandler,4, 9657, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9657,0);
#endif

#ifdef __i386__
CheckTypeSize(EventMask,4, 9658, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9658,0);
#endif

#ifdef __i386__
CheckTypeSize(XtListPosition,4, 9660, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9660,0);
#endif

#ifdef __i386__
CheckTypeSize(XtInputMask,4, 9661, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9661,0);
#endif

#ifdef __i386__
CheckTypeSize(XtTimerCallbackProc,4, 9664, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9664,0);
#endif

#ifdef __i386__
CheckTypeSize(XtInputCallbackProc,4, 9667, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9667,0);
#endif

#ifdef __i386__
CheckTypeSize(XtSignalCallbackProc,4, 9670, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9670,0);
#endif

#ifdef __i386__
CheckTypeSize(ArgList,4, 9675, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9675,0);
#endif

#ifdef __i386__
CheckTypeSize(XtVarArgsList,4, 9676, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9676,0);
#endif

#ifdef __i386__
CheckTypeSize(XtCallbackProc,4, 9678, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9678,0);
#endif

#ifdef __i386__
CheckTypeSize(XtCallbackList,4, 9682, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9682,0);
#endif

#ifdef __i386__
CheckTypeSize(XtCallbackStatus,4, 9684, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9684,0);
#endif

#ifdef __i386__
CheckTypeSize(XtGeometryResult,4, 9686, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9686,0);
#endif

#ifdef __i386__
CheckTypeSize(XtGrabKind,4, 9688, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9688,0);
#endif

#ifdef __i386__
CheckTypeSize(XtResourceList,4, 9697, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9697,0);
#endif

#ifdef __i386__
CheckTypeSize(XtLanguageProc,4, 9701, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9701,0);
#endif

#ifdef __i386__
CheckTypeSize(XtErrorMsgHandler,4, 9703, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9703,0);
#endif

#ifdef __i386__
CheckTypeSize(XtErrorHandler,4, 9705, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9705,0);
#endif

#ifdef __i386__
CheckTypeSize(XtWorkProc,4, 9709, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9709,0);
#endif

#ifdef __i386__
CheckTypeSize(Substitution,4, 9714, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9714,0);
#endif

#ifdef __i386__
CheckTypeSize(XtFilePredicate,4, 9716, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9716,0);
#endif

#ifdef __i386__
CheckTypeSize(XtRequestId,4, 9717, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9717,0);
#endif

#ifdef __i386__
CheckTypeSize(XtConvertSelectionProc,4, 9719, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9719,0);
#endif

#ifdef __i386__
CheckTypeSize(XtLoseSelectionProc,4, 9721, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9721,0);
#endif

#ifdef __i386__
CheckTypeSize(XtSelectionDoneProc,4, 9723, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9723,0);
#endif

#ifdef __i386__
CheckTypeSize(XtSelectionCallbackProc,4, 9725, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9725,0);
#endif

#ifdef __i386__
CheckTypeSize(XtLoseSelectionIncrProc,4, 9727, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9727,0);
#endif

#ifdef __i386__
CheckTypeSize(XtSelectionDoneIncrProc,4, 9730, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9730,0);
#endif

#ifdef __i386__
CheckTypeSize(XtConvertSelectionIncrProc,4, 9732, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9732,0);
#endif

#ifdef __i386__
CheckTypeSize(XtCancelConvertSelectionProc,4, 9734, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9734,0);
#endif

#ifdef __i386__
CheckTypeSize(XtEventDispatchProc,4, 9736, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9736,0);
#endif

#ifdef __i386__
CheckTypeSize(XtExtensionSelectProc,4, 9738, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9738,0);
#endif

#ifdef __i386__
CheckTypeSize(XtCheckpointToken,4, 9752, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9752,0);
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
