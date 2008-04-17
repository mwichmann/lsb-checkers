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

#if 1
CheckTypeSize(Cardinal *,0, 100347, 1, 1.2, NULL, 100346, NULL)
#endif

#if 1
CheckTypeSize(XtPointer,8, 100348, 1, 1.2, NULL, 40, NULL)
#endif

#if 1
CheckTypeSize(XtPointer *,0, 100349, 1, 1.2, NULL, 100348, NULL)
#endif

#if 1
CheckTypeSize(struct _WidgetRec,0, 100351, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _WidgetRec on All\n");
#endif

#if 1
CheckTypeSize(struct _WidgetRec *,0, 100352, 1, 1.2, NULL, 100351, NULL)
#endif

#if 1
CheckTypeSize(Widget,8, 100353, 1, 1.2, NULL, 100352, NULL)
#endif

#if 1
CheckTypeSize(Widget *,0, 100354, 1, 1.2, NULL, 100353, NULL)
#endif

#if 1
CheckTypeSize(String,8, 100356, 1, 1.2, NULL, 63, NULL)
#endif

#if 1
CheckTypeSize(String *,0, 100357, 1, 1.2, NULL, 100356, NULL)
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

#if 1
CheckTypeSize(XtWidgetGeometry *,0, 100366, 1, 1.2, NULL, 100365, NULL)
#endif

#if 1
CheckTypeSize(Modifiers,4, 100368, 1, 1.2, NULL, 7, NULL)
#endif

#if 1
CheckTypeSize(Modifiers *,0, 100369, 1, 1.2, NULL, 100368, NULL)
#endif

#if 1
CheckTypeSize(XtCacheRef,8, 100372, 1, 1.2, NULL, 40, NULL)
#endif

#if 1
CheckTypeSize(XtCacheRef *,0, 100373, 1, 1.2, NULL, 100372, NULL)
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

#if 1
CheckTypeSize(struct _XtResource *,0, 100376, 1, 1.2, NULL, 100375, NULL)
#endif

#if 1
CheckTypeSize(XtResourceList,8, 100377, 1, 1.2, NULL, 100376, NULL)
#endif

#if 1
CheckTypeSize(XtResourceList *,0, 100378, 1, 1.2, NULL, 100377, NULL)
#endif

#if 1
CheckTypeSize(struct _XtAppStruct,0, 100379, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XtAppStruct on All\n");
#endif

#if 1
CheckTypeSize(struct _XtAppStruct *,0, 100380, 1, 1.2, NULL, 100379, NULL)
#endif

#if 1
CheckTypeSize(XtAppContext,8, 100381, 1, 1.2, NULL, 100380, NULL)
#endif

#if 1
CheckTypeSize(XtAppContext *,0, 100382, 1, 1.2, NULL, 100381, NULL)
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

#if 1
CheckTypeSize(struct _XtActionsRec *,0, 100386, 1, 1.2, NULL, 100385, NULL)
#endif

#if 1
CheckTypeSize(XtActionList,8, 100387, 1, 1.2, NULL, 100386, NULL)
#endif

#if 1
CheckTypeSize(XtActionList *,0, 100388, 1, 1.2, NULL, 100387, NULL)
#endif

#if 1
CheckTypeSize(Position *,0, 100390, 1, 1.2, NULL, 100362, NULL)
#endif

#if 1
CheckTypeSize(Dimension *,0, 100391, 1, 1.2, NULL, 100363, NULL)
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

#if 1
CheckTypeSize(struct _WidgetClassRec *,0, 100402, 1, 1.2, NULL, 100401, NULL)
#endif

#if 1
CheckTypeSize(WidgetClass,8, 100403, 1, 1.2, NULL, 100402, NULL)
#endif

#if 1
CheckTypeSize(WidgetList,8, 100404, 1, 1.2, NULL, 100354, NULL)
#endif

#if 1
CheckTypeSize(struct _TranslationData,0, 100405, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _TranslationData on All\n");
#endif

#if 1
CheckTypeSize(struct _TranslationData *,0, 100406, 1, 1.2, NULL, 100405, NULL)
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

#if 1
CheckTypeSize(XtConvertArgRec *,0, 100415, 1, 1.2, NULL, 100414, NULL)
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

#if 1
CheckTypeSize(Arg *,0, 100420, 1, 1.2, NULL, 100419, NULL)
#endif

#if 1
CheckTypeSize(ArgList,8, 100421, 1, 1.2, NULL, 100420, NULL)
#endif

#if 1
CheckTypeSize(XtSignalId *,0, 100422, 1, 1.2, NULL, 100397, NULL)
#endif

#if 1
CheckTypeSize(XtSignalCallbackProc,8, 100424, 1, 1.2, NULL, 100423, NULL)
#endif

#if 1
CheckEnum("XtCallbackNoList",XtCallbackNoList,0,78098)
CheckEnum("XtCallbackHasNone",XtCallbackHasNone,(0) + 1,78099)
CheckEnum("XtCallbackHasSome",XtCallbackHasSome,((0) + 1) + 1,78100)
#endif

#if 1
CheckTypeSize(XtInputId *,0, 100426, 1, 1.2, NULL, 100399, NULL)
#endif

#if 1
CheckTypeSize(XtInputCallbackProc,8, 100428, 1, 1.2, NULL, 100427, NULL)
#endif

#if 1
CheckTypeSize(XtIntervalId *,0, 100429, 1, 1.2, NULL, 100400, NULL)
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

#if 1
CheckTypeSize(struct _XtCallbackRec *,0, 100437, 1, 1.2, NULL, 100436, NULL)
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

#if 1
CheckTypeSize(Boolean *,0, 100441, 1, 1.2, NULL, 100393, NULL)
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

#if 1
CheckTypeSize(SubstitutionRec *,0, 100465, 1, 1.2, NULL, 100464, NULL)
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
Msg("Missing member data for _XtCheckpointTokenRec on All\n");
CheckOffset(struct _XtCheckpointTokenRec,save_type,0,1,78184)
CheckOffset(struct _XtCheckpointTokenRec,interact_style,0,1,78185)
CheckOffset(struct _XtCheckpointTokenRec,shutdown,0,1,78186)
CheckOffset(struct _XtCheckpointTokenRec,fast,0,1,78187)
CheckOffset(struct _XtCheckpointTokenRec,cancel_shutdown,0,1,78188)
CheckOffset(struct _XtCheckpointTokenRec,phase,0,1,78189)
CheckOffset(struct _XtCheckpointTokenRec,interact_dialog_type,0,1,78190)
CheckOffset(struct _XtCheckpointTokenRec,request_cancel,0,1,78191)
CheckOffset(struct _XtCheckpointTokenRec,request_next_phase,0,1,78192)
CheckOffset(struct _XtCheckpointTokenRec,save_success,0,1,78193)
CheckOffset(struct _XtCheckpointTokenRec,type,0,1,78194)
CheckOffset(struct _XtCheckpointTokenRec,widget,0,1,78195)
#endif

#if 1
CheckTypeSize(struct _XtCheckpointTokenRec *,0, 100485, 1, 1.2, NULL, 100484, NULL)
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

#if 1
CheckTypeSize(XtRequestId *,0, 100491, 1, 1.2, NULL, 100460, NULL)
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

#if 1
CheckTypeSize(XtErrorMsgHandler *,0, 100519, 1, 1.2, NULL, 100480, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(XtErrorHandler *,0, 100521, 1, 1.2, NULL, 100476, NULL)
#endif

#if 1
CheckTypeSize(XtCallbackProc *,0, 100563, 1, 1.2, NULL, 100435, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(XtEventTable,8, 100567, 1, 1.2, NULL, 100566, NULL)
#endif

#if 1
CheckTypeSize(XtEventTable *,0, 100568, 1, 1.2, NULL, 100567, NULL)
#endif

#if 1
CheckTypeSize(XtActionProc *,0, 100585, 1, 1.2, NULL, 100384, NULL)
#endif

#if 1
CheckTypeSize(XtBoundActions,8, 100586, 1, 1.2, NULL, 100585, NULL)
#endif

#if 1
CheckTypeSize(XtValueMask *,0, 100625, 1, 1.2, NULL, 100510, NULL)
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
