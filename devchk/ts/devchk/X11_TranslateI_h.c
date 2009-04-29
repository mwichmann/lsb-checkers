/*
 * Test of X11/TranslateI.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/TranslateI.h\n");
#endif

printf("Checking data structures in X11/TranslateI.h\n");
#if 1
CheckTypeSize(struct _TranslationData,0, 31950, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _TranslationData on All\n");
CheckOffset(struct _TranslationData,hasBindings,0,1,216339)
CheckOffset(struct _TranslationData,operation,0,1,216340)
CheckOffset(struct _TranslationData,numStateTrees,0,1,216341)
CheckOffset(struct _TranslationData,composers,0,1,216342)
CheckOffset(struct _TranslationData,eventMask,0,1,216343)
CheckOffset(struct _TranslationData,stateTreeTbl,0,1,216344)
#endif

#if 1
CheckTypeSize(ActionPtr,8, 32059, 1, 1.2, NULL, 32058, NULL)
#endif

#if 1
CheckTypeSize(struct _ActionsRec,32, 32060, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _ActionsRec on All\n");
CheckOffset(struct _ActionsRec,idx,0,1,78226)
CheckOffset(struct _ActionsRec,params,0,1,78227)
CheckOffset(struct _ActionsRec,num_params,0,1,78228)
CheckOffset(struct _ActionsRec,next,0,1,78229)
#endif

#if 1
CheckTypeSize(ActionRec,32, 32061, 1, 1.2, NULL, 32060, NULL)
#endif

#if 1
CheckTypeSize(TMLongCard,8, 32067, 1, 1.2, NULL, 11186, NULL)
#endif

#if 1
CheckTypeSize(struct _LateBindings,16, 32068, 1, 1.2, NULL, 0, NULL)
CheckBitField(struct _LateBindings,knot,1,1,78230)
CheckBitField(struct _LateBindings,pair,1,1,78231)
#endif

#if 1
CheckTypeSize(LateBindingsPtr,8, 32070, 1, 1.2, NULL, 32069, NULL)
#endif

#if 1
CheckTypeSize(struct _TMTypeMatchRec,32, 32071, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _TMTypeMatchRec on All\n");
CheckOffset(struct _TMTypeMatchRec,eventType,0,1,78234)
CheckOffset(struct _TMTypeMatchRec,eventCode,0,1,78235)
CheckOffset(struct _TMTypeMatchRec,eventCodeMask,0,1,78236)
CheckOffset(struct _TMTypeMatchRec,matchEvent,0,1,78237)
#endif

#if 1
CheckTypeSize(TMTypeMatch,8, 32073, 1, 1.2, NULL, 32072, NULL)
#endif

#if 1
CheckTypeSize(struct _TMModifierMatchRec,32, 32074, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _TMModifierMatchRec on All\n");
CheckOffset(struct _TMModifierMatchRec,modifiers,0,1,78238)
CheckOffset(struct _TMModifierMatchRec,modifierMask,0,1,78239)
CheckOffset(struct _TMModifierMatchRec,lateModifiers,0,1,78240)
CheckOffset(struct _TMModifierMatchRec,standard,0,1,78241)
#endif

#if 1
CheckTypeSize(TMModifierMatch,8, 32076, 1, 1.2, NULL, 32075, NULL)
#endif

#if 1
CheckTypeSize(struct _EventRec,64, 32077, 1, 1.2, NULL, 0, NULL)
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
CheckTypeSize(TMEventPtr,8, 32079, 1, 1.2, NULL, 32078, NULL)
#endif

#if 1
CheckTypeSize(MatchProc,8, 32081, 1, 1.2, NULL, 32080, NULL)
#endif

#if 1
CheckTypeSize(struct _TMEventRec,72, 32082, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _TMEventRec on All\n");
CheckOffset(struct _TMEventRec,xev,0,1,78242)
CheckOffset(struct _TMEventRec,event,0,1,78243)
#endif

#if 1
CheckTypeSize(Event,64, 32083, 1, 1.2, NULL, 32077, NULL)
#endif

#if 1
CheckTypeSize(TMShortCard,2, 32085, 1, 1.2, NULL, 11209, NULL)
#endif

#if 1
CheckTypeSize(struct _TMBranchHeadRec,8, 32086, 1, 1.2, NULL, 0, NULL)
CheckBitField(struct _TMBranchHeadRec,isSimple,1,1,78255)
CheckBitField(struct _TMBranchHeadRec,hasActions,1,1,78256)
CheckBitField(struct _TMBranchHeadRec,hasCycles,1,1,78257)
CheckBitField(struct _TMBranchHeadRec,more,13,1,78258)
#endif

#if 1
CheckTypeSize(TMBranchHeadRec,8, 32087, 1, 1.2, NULL, 32086, NULL)
#endif

#if 1
CheckTypeSize(struct _TMSimpleStateTreeRec,24, 32089, 1, 1.2, NULL, 0, NULL)
CheckBitField(struct _TMSimpleStateTreeRec,isSimple,1,1,78261)
CheckBitField(struct _TMSimpleStateTreeRec,isAccelerator,1,1,78262)
CheckBitField(struct _TMSimpleStateTreeRec,mappingNotifyInterest,1,1,78263)
CheckBitField(struct _TMSimpleStateTreeRec,refCount,13,1,78264)
#endif

#if 1
CheckTypeSize(TMSimpleStateTreeRec,24, 32090, 1, 1.2, NULL, 32089, NULL)
#endif

#if 1
CheckTypeSize(struct _XtStateRec,24, 32091, 1, 1.2, NULL, 0, NULL)
CheckBitField(struct _XtStateRec,isCycleStart,1,1,78270)
CheckBitField(struct _XtStateRec,isCycleEnd,1,1,78271)
#endif

#if 1
CheckTypeSize(StatePtr,8, 32093, 1, 1.2, NULL, 32092, NULL)
#endif

#if 1
CheckTypeSize(struct _TMParseStateTreeRec,48, 32095, 1, 1.2, NULL, 0, NULL)
CheckBitField(struct _TMParseStateTreeRec,isSimple,1,1,78276)
CheckBitField(struct _TMParseStateTreeRec,isAccelerator,1,1,78277)
CheckBitField(struct _TMParseStateTreeRec,mappingNotifyInterest,1,1,78278)
CheckBitField(struct _TMParseStateTreeRec,isStackQuarks,1,1,78279)
CheckBitField(struct _TMParseStateTreeRec,isStackBranchHeads,1,1,78280)
CheckBitField(struct _TMParseStateTreeRec,isStackComplexBranchHeads,1,1,78281)
CheckBitField(struct _TMParseStateTreeRec,unused,10,1,78282)
#endif

#if 1
CheckTypeSize(TMParseStateTreeRec,48, 32096, 1, 1.2, NULL, 32095, NULL)
#endif

#if 1
CheckTypeSize(struct _TMComplexStateTreeRec,32, 32097, 1, 1.2, NULL, 0, NULL)
CheckBitField(struct _TMComplexStateTreeRec,isSimple,1,1,78293)
CheckBitField(struct _TMComplexStateTreeRec,isAccelerator,1,1,78294)
CheckBitField(struct _TMComplexStateTreeRec,mappingNotifyInterest,1,1,78295)
CheckBitField(struct _TMComplexStateTreeRec,refCount,13,1,78296)
#endif

#if 1
CheckTypeSize(TMComplexStateTreeRec,32, 32098, 1, 1.2, NULL, 32097, NULL)
#endif

#if 1
CheckTypeSize(union _TMStateTreeRec,48, 32099, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _TMStateTreeRec on All\n");
CheckOffset(union _TMStateTreeRec,simple,0,1,78303)
CheckOffset(union _TMStateTreeRec,parse,0,1,78304)
CheckOffset(union _TMStateTreeRec,complex,0,1,78305)
#endif

#if 1
CheckTypeSize(TMStateTree,8, 32101, 1, 1.2, NULL, 32100, NULL)
#endif

#if 1
CheckTypeSize(_XtTraversalProc,8, 32136, 1, 1.2, NULL, 32135, NULL)
#endif

#if 1
CheckTypeSize(struct _TMSimpleBindProcsRec,8, 32141, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _TMSimpleBindProcsRec on All\n");
CheckOffset(struct _TMSimpleBindProcsRec,procs,0,1,78359)
#endif

#if 1
CheckTypeSize(TMSimpleBindProcsRec,8, 32142, 1, 1.2, NULL, 32141, NULL)
#endif

#if 1
CheckTypeSize(struct _TMSimpleBindDataRec,16, 32144, 1, 1.2, NULL, 0, NULL)
CheckBitField(struct _TMSimpleBindDataRec,isComplex,1,1,78360)
#endif

#if 1
CheckTypeSize(TMSimpleBindDataRec,16, 32145, 1, 1.2, NULL, 32144, NULL)
#endif

#if 1
CheckTypeSize(struct _TMComplexBindProcsRec,24, 32146, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _TMComplexBindProcsRec on All\n");
CheckOffset(struct _TMComplexBindProcsRec,widget,0,1,78362)
CheckOffset(struct _TMComplexBindProcsRec,aXlations,0,1,78363)
CheckOffset(struct _TMComplexBindProcsRec,procs,0,1,78364)
#endif

#if 1
CheckTypeSize(TMComplexBindProcsRec,24, 32147, 1, 1.2, NULL, 32146, NULL)
#endif

#if 1
CheckTypeSize(struct _ATranslationData,48, 32149, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _ATranslationData on All\n");
CheckOffset(struct _ATranslationData,hasBindings,0,1,78365)
CheckOffset(struct _ATranslationData,operation,0,1,78366)
CheckOffset(struct _ATranslationData,xlations,0,1,78367)
CheckOffset(struct _ATranslationData,next,0,1,78368)
CheckOffset(struct _ATranslationData,bindTbl,0,1,78369)
#endif

#if 1
CheckTypeSize(struct _TMComplexBindDataRec,40, 32151, 1, 1.2, NULL, 0, NULL)
CheckBitField(struct _TMComplexBindDataRec,isComplex,1,1,78370)
#endif

#if 1
CheckTypeSize(TMComplexBindDataRec,40, 32152, 1, 1.2, NULL, 32151, NULL)
#endif

#if 1
CheckTypeSize(union _TMBindDataRec,40, 32153, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _TMBindDataRec on All\n");
CheckOffset(union _TMBindDataRec,simple,0,1,78373)
CheckOffset(union _TMBindDataRec,complex,0,1,78374)
#endif

#if 1
CheckTypeSize(TMBindData,8, 32155, 1, 1.2, NULL, 32154, NULL)
#endif

#if 1
CheckTypeSize(TMParseStateTree,8, 32157, 1, 1.2, NULL, 32156, NULL)
#endif

#if 1
CheckTypeSize(struct _EventSeqRec,88, 32158, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _EventSeqRec on All\n");
CheckOffset(struct _EventSeqRec,event,0,1,78375)
CheckOffset(struct _EventSeqRec,state,0,1,78376)
CheckOffset(struct _EventSeqRec,next,0,1,78377)
CheckOffset(struct _EventSeqRec,actions,0,1,78378)
#endif

#if 1
CheckTypeSize(EventSeqPtr,8, 32160, 1, 1.2, NULL, 32159, NULL)
#endif

#if 1
CheckTypeSize(TMBranchHead,8, 32162, 1, 1.2, NULL, 32161, NULL)
#endif

#if 1
CheckTypeSize(_XtTranslateOp,4, 32199, 1, 1.2, NULL, 7, NULL)
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
