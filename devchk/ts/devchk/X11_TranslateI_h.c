/*
 * Test of X11/TranslateI.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/Intrinsic.h"
#include "X11/IntrinsicP.h"
#include "X11/ConvertI.h"
#include "X11/TranslateI.h"



#ifdef TET_TEST
void X11_TranslateI_h()
{
#else
int X11_TranslateI_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/TranslateI.h\n");
#endif

printf("Checking data structures in X11/TranslateI.h\n");
#if 1
CheckTypeSize(struct _TranslationData,0, 100405, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _TranslationData on All\n");
CheckOffset(struct _TranslationData,hasBindings,0,1,216339)
CheckOffset(struct _TranslationData,operation,0,1,216340)
CheckOffset(struct _TranslationData,numStateTrees,0,1,216341)
CheckOffset(struct _TranslationData,composers,0,1,216342)
CheckOffset(struct _TranslationData,eventMask,0,1,216343)
CheckOffset(struct _TranslationData,stateTreeTbl,0,1,216344)
#endif

#if 1
CheckTypeSize(ActionPtr,8, 100514, 1, 1.2, NULL, 100513, NULL)
#endif

#if 1
CheckTypeSize(struct _ActionsRec,32, 100515, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _ActionsRec on All\n");
CheckOffset(struct _ActionsRec,idx,0,1,78226)
CheckOffset(struct _ActionsRec,params,0,1,78227)
CheckOffset(struct _ActionsRec,num_params,0,1,78228)
CheckOffset(struct _ActionsRec,next,0,1,78229)
#endif

#if 1
CheckTypeSize(ActionRec,32, 100516, 1, 1.2, NULL, 100515, NULL)
#endif

#if 1
CheckTypeSize(TMLongCard,8, 100522, 1, 1.2, NULL, 11186, NULL)
#endif

#if 1
CheckTypeSize(struct _LateBindings,16, 100523, 1, 1.2, NULL, 0, NULL)
CheckBitField(struct _LateBindings,knot,1,1,78230)
CheckBitField(struct _LateBindings,pair,1,1,78231)
#endif

#if 1
CheckTypeSize(LateBindingsPtr,8, 100525, 1, 1.2, NULL, 100524, NULL)
#endif

#if 1
CheckTypeSize(struct _TMTypeMatchRec,32, 100526, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _TMTypeMatchRec on All\n");
CheckOffset(struct _TMTypeMatchRec,eventType,0,1,78234)
CheckOffset(struct _TMTypeMatchRec,eventCode,0,1,78235)
CheckOffset(struct _TMTypeMatchRec,eventCodeMask,0,1,78236)
CheckOffset(struct _TMTypeMatchRec,matchEvent,0,1,78237)
#endif

#if 1
CheckTypeSize(TMTypeMatch,8, 100528, 1, 1.2, NULL, 100527, NULL)
#endif

#if 1
CheckTypeSize(struct _TMModifierMatchRec,32, 100529, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _TMModifierMatchRec on All\n");
CheckOffset(struct _TMModifierMatchRec,modifiers,0,1,78238)
CheckOffset(struct _TMModifierMatchRec,modifierMask,0,1,78239)
CheckOffset(struct _TMModifierMatchRec,lateModifiers,0,1,78240)
CheckOffset(struct _TMModifierMatchRec,standard,0,1,78241)
#endif

#if 1
CheckTypeSize(TMModifierMatch,8, 100531, 1, 1.2, NULL, 100530, NULL)
#endif

#if 1
CheckTypeSize(struct _EventRec,64, 100532, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _EventRec on All\n");
CheckOffset(struct _EventRec,modifiers,0,1,78247)
CheckOffset(struct _EventRec,modifierMask,0,1,78248)
CheckOffset(struct _EventRec,lateModifiers,0,1,78249)
CheckOffset(struct _EventRec,eventType,0,1,78250)
CheckOffset(struct _EventRec,eventCode,0,1,78251)
CheckOffset(struct _EventRec,eventCodeMask,0,1,78252)
CheckOffset(struct _EventRec,matchEvent,0,1,78253)
CheckOffset(struct _EventRec,standard,0,1,78254)
#endif

#if 1
CheckTypeSize(TMEventPtr,8, 100534, 1, 1.2, NULL, 100533, NULL)
#endif

#if 1
CheckTypeSize(MatchProc,8, 100536, 1, 1.2, NULL, 100535, NULL)
#endif

#if 1
CheckTypeSize(struct _TMEventRec,72, 100537, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _TMEventRec on All\n");
CheckOffset(struct _TMEventRec,xev,0,1,78242)
CheckOffset(struct _TMEventRec,event,0,1,78243)
#endif

#if 1
CheckTypeSize(Event,64, 100538, 1, 1.2, NULL, 100532, NULL)
#endif

#if 1
CheckTypeSize(TMShortCard,2, 100540, 1, 1.2, NULL, 11209, NULL)
#endif

#if 1
CheckTypeSize(struct _TMBranchHeadRec,8, 100541, 1, 1.2, NULL, 0, NULL)
CheckBitField(struct _TMBranchHeadRec,isSimple,1,1,78255)
CheckBitField(struct _TMBranchHeadRec,hasActions,1,1,78256)
CheckBitField(struct _TMBranchHeadRec,hasCycles,1,1,78257)
CheckBitField(struct _TMBranchHeadRec,more,13,1,78258)
#endif

#if 1
CheckTypeSize(TMBranchHeadRec,8, 100542, 1, 1.2, NULL, 100541, NULL)
#endif

#if 1
CheckTypeSize(struct _TMSimpleStateTreeRec,24, 100544, 1, 1.2, NULL, 0, NULL)
CheckBitField(struct _TMSimpleStateTreeRec,isSimple,1,1,78261)
CheckBitField(struct _TMSimpleStateTreeRec,isAccelerator,1,1,78262)
CheckBitField(struct _TMSimpleStateTreeRec,mappingNotifyInterest,1,1,78263)
CheckBitField(struct _TMSimpleStateTreeRec,refCount,13,1,78264)
#endif

#if 1
CheckTypeSize(TMSimpleStateTreeRec,24, 100545, 1, 1.2, NULL, 100544, NULL)
#endif

#if 1
CheckTypeSize(struct _XtStateRec,24, 100546, 1, 1.2, NULL, 0, NULL)
CheckBitField(struct _XtStateRec,isCycleStart,1,1,78270)
CheckBitField(struct _XtStateRec,isCycleEnd,1,1,78271)
#endif

#if 1
CheckTypeSize(StatePtr,8, 100548, 1, 1.2, NULL, 100547, NULL)
#endif

#if 1
CheckTypeSize(struct _TMParseStateTreeRec,48, 100550, 1, 1.2, NULL, 0, NULL)
CheckBitField(struct _TMParseStateTreeRec,isSimple,1,1,78276)
CheckBitField(struct _TMParseStateTreeRec,isAccelerator,1,1,78277)
CheckBitField(struct _TMParseStateTreeRec,mappingNotifyInterest,1,1,78278)
CheckBitField(struct _TMParseStateTreeRec,isStackQuarks,1,1,78279)
CheckBitField(struct _TMParseStateTreeRec,isStackBranchHeads,1,1,78280)
CheckBitField(struct _TMParseStateTreeRec,isStackComplexBranchHeads,1,1,78281)
CheckBitField(struct _TMParseStateTreeRec,unused,10,1,78282)
#endif

#if 1
CheckTypeSize(TMParseStateTreeRec,48, 100551, 1, 1.2, NULL, 100550, NULL)
#endif

#if 1
CheckTypeSize(struct _TMComplexStateTreeRec,32, 100552, 1, 1.2, NULL, 0, NULL)
CheckBitField(struct _TMComplexStateTreeRec,isSimple,1,1,78293)
CheckBitField(struct _TMComplexStateTreeRec,isAccelerator,1,1,78294)
CheckBitField(struct _TMComplexStateTreeRec,mappingNotifyInterest,1,1,78295)
CheckBitField(struct _TMComplexStateTreeRec,refCount,13,1,78296)
#endif

#if 1
CheckTypeSize(TMComplexStateTreeRec,32, 100553, 1, 1.2, NULL, 100552, NULL)
#endif

#if 1
CheckTypeSize(union _TMStateTreeRec,48, 100554, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _TMStateTreeRec on All\n");
CheckOffset(union _TMStateTreeRec,simple,0,1,78303)
CheckOffset(union _TMStateTreeRec,parse,0,1,78304)
CheckOffset(union _TMStateTreeRec,complex,0,1,78305)
#endif

#if 1
CheckTypeSize(TMStateTree,8, 100556, 1, 1.2, NULL, 100555, NULL)
#endif

#if 1
CheckTypeSize(_XtTraversalProc,8, 100591, 1, 1.2, NULL, 100590, NULL)
#endif

#if 1
CheckTypeSize(struct _TMSimpleBindProcsRec,8, 100596, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _TMSimpleBindProcsRec on All\n");
CheckOffset(struct _TMSimpleBindProcsRec,procs,0,1,78359)
#endif

#if 1
CheckTypeSize(TMSimpleBindProcsRec,8, 100597, 1, 1.2, NULL, 100596, NULL)
#endif

#if 1
CheckTypeSize(struct _TMSimpleBindDataRec,16, 100599, 1, 1.2, NULL, 0, NULL)
CheckBitField(struct _TMSimpleBindDataRec,isComplex,1,1,78360)
#endif

#if 1
CheckTypeSize(TMSimpleBindDataRec,16, 100600, 1, 1.2, NULL, 100599, NULL)
#endif

#if 1
CheckTypeSize(struct _TMComplexBindProcsRec,24, 100601, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _TMComplexBindProcsRec on All\n");
CheckOffset(struct _TMComplexBindProcsRec,widget,0,1,78362)
CheckOffset(struct _TMComplexBindProcsRec,aXlations,0,1,78363)
CheckOffset(struct _TMComplexBindProcsRec,procs,0,1,78364)
#endif

#if 1
CheckTypeSize(TMComplexBindProcsRec,24, 100602, 1, 1.2, NULL, 100601, NULL)
#endif

#if 1
CheckTypeSize(struct _ATranslationData,48, 100604, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _ATranslationData on All\n");
CheckOffset(struct _ATranslationData,hasBindings,0,1,78365)
CheckOffset(struct _ATranslationData,operation,0,1,78366)
CheckOffset(struct _ATranslationData,xlations,0,1,78367)
CheckOffset(struct _ATranslationData,next,0,1,78368)
CheckOffset(struct _ATranslationData,bindTbl,0,1,78369)
#endif

#if 1
CheckTypeSize(struct _TMComplexBindDataRec,40, 100606, 1, 1.2, NULL, 0, NULL)
CheckBitField(struct _TMComplexBindDataRec,isComplex,1,1,78370)
#endif

#if 1
CheckTypeSize(TMComplexBindDataRec,40, 100607, 1, 1.2, NULL, 100606, NULL)
#endif

#if 1
CheckTypeSize(union _TMBindDataRec,40, 100608, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _TMBindDataRec on All\n");
CheckOffset(union _TMBindDataRec,simple,0,1,78373)
CheckOffset(union _TMBindDataRec,complex,0,1,78374)
#endif

#if 1
CheckTypeSize(TMBindData,8, 100610, 1, 1.2, NULL, 100609, NULL)
#endif

#if 1
CheckTypeSize(TMParseStateTree,8, 100612, 1, 1.2, NULL, 100611, NULL)
#endif

#if 1
CheckTypeSize(struct _EventSeqRec,88, 100613, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _EventSeqRec on All\n");
CheckOffset(struct _EventSeqRec,event,0,1,78375)
CheckOffset(struct _EventSeqRec,state,0,1,78376)
CheckOffset(struct _EventSeqRec,next,0,1,78377)
CheckOffset(struct _EventSeqRec,actions,0,1,78378)
#endif

#if 1
CheckTypeSize(EventSeqPtr,8, 100615, 1, 1.2, NULL, 100614, NULL)
#endif

#if 1
CheckTypeSize(TMBranchHead,8, 100617, 1, 1.2, NULL, 100616, NULL)
#endif

#if 1
CheckTypeSize(_XtTranslateOp,4, 100654, 1, 1.2, NULL, 7, NULL)
#endif

#if 1
/* All */
typedef Boolean (*MatchProc_db)(TMTypeMatch, TMModifierMatch, TMEventPtr);
CheckFunctionTypedef(MatchProc,MatchProc_db);
#endif

#if 1
/* All */
typedef Boolean (*_XtTraversalProc_db)(StatePtr, XtPointer);
CheckFunctionTypedef(_XtTraversalProc,_XtTraversalProc_db);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/TranslateI.h\n\n",pcnt,cnt);
return cnt;
#endif

}
