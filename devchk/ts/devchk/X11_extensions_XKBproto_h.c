/*
 * Test of X11/extensions/XKBproto.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/extensions/XKBproto.h"



#ifdef TET_TEST
void X11_extensions_XKBproto_h()
{
#else
int X11_extensions_XKBproto_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/XKBproto.h\n");
#endif

printf("Checking data structures in X11/extensions/XKBproto.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for XkbPaddedSize(n) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbUseExtensionReq
	CompareConstant(sz_xkbUseExtensionReq,8,17532,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbUseExtensionReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbUseExtensionReply
	CompareConstant(sz_xkbUseExtensionReply,32,17533,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbUseExtensionReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbSelectEventsReq
	CompareConstant(sz_xkbSelectEventsReq,16,17534,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbSelectEventsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbBellReq
	CompareConstant(sz_xkbBellReq,28,17535,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbBellReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetStateReq
	CompareConstant(sz_xkbGetStateReq,8,17536,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetStateReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetStateReply
	CompareConstant(sz_xkbGetStateReply,32,17537,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetStateReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbLatchLockStateReq
	CompareConstant(sz_xkbLatchLockStateReq,16,17538,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbLatchLockStateReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetControlsReq
	CompareConstant(sz_xkbGetControlsReq,8,17539,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetControlsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetControlsReply
	CompareConstant(sz_xkbGetControlsReply,92,17540,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetControlsReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbSetControlsReq
	CompareConstant(sz_xkbSetControlsReq,100,17541,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbSetControlsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbKTMapEntryWireDesc
	CompareConstant(sz_xkbKTMapEntryWireDesc,8,17542,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbKTMapEntryWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbKTSetMapEntryWireDesc
	CompareConstant(sz_xkbKTSetMapEntryWireDesc,4,17543,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbKTSetMapEntryWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbModsWireDesc
	CompareConstant(sz_xkbModsWireDesc,4,17544,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbModsWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbKeyTypeWireDesc
	CompareConstant(sz_xkbKeyTypeWireDesc,8,17545,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbKeyTypeWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbSymMapWireDesc
	CompareConstant(sz_xkbSymMapWireDesc,8,17546,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbSymMapWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbVModMapWireDesc
	CompareConstant(sz_xkbVModMapWireDesc,4,17547,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbVModMapWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbBehaviorWireDesc
	CompareConstant(sz_xkbBehaviorWireDesc,4,17548,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbBehaviorWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbActionWireDesc
	CompareConstant(sz_xkbActionWireDesc,8,17549,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbActionWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetMapReq
	CompareConstant(sz_xkbGetMapReq,28,17550,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetMapReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetMapReply
	CompareConstant(sz_xkbGetMapReply,40,17551,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetMapReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSetMapResizeTypes
	CompareLongConstant(XkbSetMapResizeTypes,(1L<<0),17552,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XkbSetMapResizeTypes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSetMapRecomputeActions
	CompareLongConstant(XkbSetMapRecomputeActions,(1L<<1),17553,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XkbSetMapRecomputeActions\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSetMapAllFlags
	CompareConstant(XkbSetMapAllFlags,(0x3),17554,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XkbSetMapAllFlags\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbSetMapReq
	CompareConstant(sz_xkbSetMapReq,36,17555,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbSetMapReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbSymInterpretWireDesc
	CompareConstant(sz_xkbSymInterpretWireDesc,16,17556,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbSymInterpretWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetCompatMapReq
	CompareConstant(sz_xkbGetCompatMapReq,12,17557,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetCompatMapReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetCompatMapReply
	CompareConstant(sz_xkbGetCompatMapReply,32,17558,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetCompatMapReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbSetCompatMapReq
	CompareConstant(sz_xkbSetCompatMapReq,16,17559,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbSetCompatMapReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetIndicatorStateReq
	CompareConstant(sz_xkbGetIndicatorStateReq,8,17560,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetIndicatorStateReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetIndicatorStateReply
	CompareConstant(sz_xkbGetIndicatorStateReply,32,17561,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetIndicatorStateReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetIndicatorMapReq
	CompareConstant(sz_xkbGetIndicatorMapReq,12,17562,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetIndicatorMapReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetIndicatorMapReply
	CompareConstant(sz_xkbGetIndicatorMapReply,32,17563,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetIndicatorMapReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbIndicatorMapWireDesc
	CompareConstant(sz_xkbIndicatorMapWireDesc,12,17564,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbIndicatorMapWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbSetIndicatorMapReq
	CompareConstant(sz_xkbSetIndicatorMapReq,12,17565,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbSetIndicatorMapReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetNamedIndicatorReq
	CompareConstant(sz_xkbGetNamedIndicatorReq,16,17566,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetNamedIndicatorReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetNamedIndicatorReply
	CompareConstant(sz_xkbGetNamedIndicatorReply,32,17567,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetNamedIndicatorReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbSetNamedIndicatorReq
	CompareConstant(sz_xkbSetNamedIndicatorReq,32,17568,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbSetNamedIndicatorReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetNamesReq
	CompareConstant(sz_xkbGetNamesReq,12,17569,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetNamesReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetNamesReply
	CompareConstant(sz_xkbGetNamesReply,32,17570,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetNamesReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbSetNamesReq
	CompareConstant(sz_xkbSetNamesReq,28,17571,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbSetNamesReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbPointWireDesc
	CompareConstant(sz_xkbPointWireDesc,4,17572,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbPointWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbOutlineWireDesc
	CompareConstant(sz_xkbOutlineWireDesc,4,17573,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbOutlineWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbShapeWireDesc
	CompareConstant(sz_xkbShapeWireDesc,8,17574,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbShapeWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbSectionWireDesc
	CompareConstant(sz_xkbSectionWireDesc,20,17575,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbSectionWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbRowWireDesc
	CompareConstant(sz_xkbRowWireDesc,8,17576,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbRowWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbKeyWireDesc
	CompareConstant(sz_xkbKeyWireDesc,8,17577,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbKeyWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbOverlayWireDesc
	CompareConstant(sz_xkbOverlayWireDesc,8,17578,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbOverlayWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbOverlayRowWireDesc
	CompareConstant(sz_xkbOverlayRowWireDesc,4,17579,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbOverlayRowWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbOverlayKeyWireDesc
	CompareConstant(sz_xkbOverlayKeyWireDesc,8,17580,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbOverlayKeyWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbShapeDoodadWireDesc
	CompareConstant(sz_xkbShapeDoodadWireDesc,20,17581,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbShapeDoodadWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbTextDoodadWireDesc
	CompareConstant(sz_xkbTextDoodadWireDesc,20,17582,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbTextDoodadWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbIndicatorDoodadWireDesc
	CompareConstant(sz_xkbIndicatorDoodadWireDesc,20,17583,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbIndicatorDoodadWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbLogoDoodadWireDesc
	CompareConstant(sz_xkbLogoDoodadWireDesc,20,17584,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbLogoDoodadWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbAnyDoodadWireDesc
	CompareConstant(sz_xkbAnyDoodadWireDesc,20,17585,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbAnyDoodadWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbDoodadWireDesc
	CompareConstant(sz_xkbDoodadWireDesc,20,17586,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbDoodadWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetGeometryReq
	CompareConstant(sz_xkbGetGeometryReq,12,17587,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetGeometryReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetGeometryReply
	CompareConstant(sz_xkbGetGeometryReply,32,17588,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetGeometryReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbSetGeometryReq
	CompareConstant(sz_xkbSetGeometryReq,28,17589,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbSetGeometryReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbPerClientFlagsReq
	CompareConstant(sz_xkbPerClientFlagsReq,28,17590,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbPerClientFlagsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbPerClientFlagsReply
	CompareConstant(sz_xkbPerClientFlagsReply,32,17591,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbPerClientFlagsReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbListComponentsReq
	CompareConstant(sz_xkbListComponentsReq,8,17592,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbListComponentsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbListComponentsReply
	CompareConstant(sz_xkbListComponentsReply,32,17593,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbListComponentsReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetKbdByNameReq
	CompareConstant(sz_xkbGetKbdByNameReq,12,17594,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetKbdByNameReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetKbdByNameReply
	CompareConstant(sz_xkbGetKbdByNameReply,32,17595,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetKbdByNameReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbDeviceLedsWireDesc
	CompareConstant(sz_xkbDeviceLedsWireDesc,20,17596,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbDeviceLedsWireDesc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetDeviceInfoReq
	CompareConstant(sz_xkbGetDeviceInfoReq,16,17597,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetDeviceInfoReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbGetDeviceInfoReply
	CompareConstant(sz_xkbGetDeviceInfoReply,32,17598,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbGetDeviceInfoReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbSetDeviceInfoReq
	CompareConstant(sz_xkbSetDeviceInfoReq,12,17599,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbSetDeviceInfoReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbSetDebuggingFlagsReq
	CompareConstant(sz_xkbSetDebuggingFlagsReq,24,17600,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbSetDebuggingFlagsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbSetDebuggingFlagsReply
	CompareConstant(sz_xkbSetDebuggingFlagsReply,32,17601,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbSetDebuggingFlagsReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbAnyEvent
	CompareConstant(sz_xkbAnyEvent,32,17602,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbAnyEvent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbNewKeyboardNotify
	CompareConstant(sz_xkbNewKeyboardNotify,32,17603,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbNewKeyboardNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbMapNotify
	CompareConstant(sz_xkbMapNotify,32,17604,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbMapNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbStateNotify
	CompareConstant(sz_xkbStateNotify,32,17605,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbStateNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbControlsNotify
	CompareConstant(sz_xkbControlsNotify,32,17606,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbControlsNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbIndicatorNotify
	CompareConstant(sz_xkbIndicatorNotify,32,17607,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbIndicatorNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbNamesNotify
	CompareConstant(sz_xkbNamesNotify,32,17608,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbNamesNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbCompatMapNotify
	CompareConstant(sz_xkbCompatMapNotify,32,17609,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbCompatMapNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbBellNotify
	CompareConstant(sz_xkbBellNotify,32,17610,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbBellNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbActionMessage
	CompareConstant(sz_xkbActionMessage,32,17611,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbActionMessage\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbAccessXNotify
	CompareConstant(sz_xkbAccessXNotify,32,17612,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbAccessXNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbExtensionDeviceNotify
	CompareConstant(sz_xkbExtensionDeviceNotify,32,17613,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbExtensionDeviceNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xkbEvent
	CompareConstant(sz_xkbEvent,32,17614,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xkbEvent\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(struct _xkbUseExtension,0, 39546, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbUseExtension on All\n");
CheckOffset(struct _xkbUseExtension,reqType,0,1,217827)
CheckOffset(struct _xkbUseExtension,xkbReqType,0,1,217828)
CheckOffset(struct _xkbUseExtension,length,0,1,217829)
CheckOffset(struct _xkbUseExtension,wantedMajor,0,1,217830)
CheckOffset(struct _xkbUseExtension,wantedMinor,0,1,217831)
#endif

#if 1
CheckTypeSize(xkbUseExtensionReq,0, 39547, 1, 4.0, NULL, 39546, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbUseExtensionReply,0, 39548, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbUseExtensionReply on All\n");
CheckOffset(struct _xkbUseExtensionReply,type,0,1,217832)
CheckOffset(struct _xkbUseExtensionReply,supported,0,1,217833)
CheckOffset(struct _xkbUseExtensionReply,sequenceNumber,0,1,217834)
CheckOffset(struct _xkbUseExtensionReply,length,0,1,217835)
CheckOffset(struct _xkbUseExtensionReply,serverMajor,0,1,217836)
CheckOffset(struct _xkbUseExtensionReply,serverMinor,0,1,217837)
CheckOffset(struct _xkbUseExtensionReply,pad1,0,1,217838)
CheckOffset(struct _xkbUseExtensionReply,pad2,0,1,217839)
CheckOffset(struct _xkbUseExtensionReply,pad3,0,1,217840)
CheckOffset(struct _xkbUseExtensionReply,pad4,0,1,217841)
CheckOffset(struct _xkbUseExtensionReply,pad5,0,1,217842)
#endif

#if 1
CheckTypeSize(xkbUseExtensionReply,0, 39549, 1, 4.0, NULL, 39548, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbSelectEvents,0, 39550, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbSelectEvents on All\n");
CheckOffset(struct _xkbSelectEvents,reqType,0,1,217843)
CheckOffset(struct _xkbSelectEvents,xkbReqType,0,1,217844)
CheckOffset(struct _xkbSelectEvents,length,0,1,217845)
CheckOffset(struct _xkbSelectEvents,deviceSpec,0,1,217846)
CheckOffset(struct _xkbSelectEvents,affectWhich,0,1,217847)
CheckOffset(struct _xkbSelectEvents,clear,0,1,217848)
CheckOffset(struct _xkbSelectEvents,selectAll,0,1,217849)
CheckOffset(struct _xkbSelectEvents,affectMap,0,1,217850)
CheckOffset(struct _xkbSelectEvents,map,0,1,217851)
#endif

#if 1
CheckTypeSize(xkbSelectEventsReq,0, 39551, 1, 4.0, NULL, 39550, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbBell,0, 39552, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbBell on All\n");
CheckOffset(struct _xkbBell,reqType,0,1,217852)
CheckOffset(struct _xkbBell,xkbReqType,0,1,217853)
CheckOffset(struct _xkbBell,length,0,1,217854)
CheckOffset(struct _xkbBell,deviceSpec,0,1,217855)
CheckOffset(struct _xkbBell,bellClass,0,1,217856)
CheckOffset(struct _xkbBell,bellID,0,1,217857)
CheckOffset(struct _xkbBell,percent,0,1,217858)
CheckOffset(struct _xkbBell,forceSound,0,1,217859)
CheckOffset(struct _xkbBell,eventOnly,0,1,217860)
CheckOffset(struct _xkbBell,pad1,0,1,217861)
CheckOffset(struct _xkbBell,pitch,0,1,217862)
CheckOffset(struct _xkbBell,duration,0,1,217863)
CheckOffset(struct _xkbBell,pad2,0,1,217864)
CheckOffset(struct _xkbBell,name,0,1,217865)
CheckOffset(struct _xkbBell,window,0,1,217866)
#endif

#if 1
CheckTypeSize(xkbBellReq,0, 39553, 1, 4.0, NULL, 39552, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetState,0, 39554, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetState on All\n");
CheckOffset(struct _xkbGetState,reqType,0,1,217867)
CheckOffset(struct _xkbGetState,xkbReqType,0,1,217868)
CheckOffset(struct _xkbGetState,length,0,1,217869)
CheckOffset(struct _xkbGetState,deviceSpec,0,1,217870)
CheckOffset(struct _xkbGetState,pad,0,1,217871)
#endif

#if 1
CheckTypeSize(xkbGetStateReq,0, 39555, 1, 4.0, NULL, 39554, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetStateReply,0, 39556, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetStateReply on All\n");
CheckOffset(struct _xkbGetStateReply,type,0,1,217872)
CheckOffset(struct _xkbGetStateReply,deviceID,0,1,217873)
CheckOffset(struct _xkbGetStateReply,sequenceNumber,0,1,217874)
CheckOffset(struct _xkbGetStateReply,length,0,1,217875)
CheckOffset(struct _xkbGetStateReply,mods,0,1,217876)
CheckOffset(struct _xkbGetStateReply,baseMods,0,1,217877)
CheckOffset(struct _xkbGetStateReply,latchedMods,0,1,217878)
CheckOffset(struct _xkbGetStateReply,lockedMods,0,1,217879)
CheckOffset(struct _xkbGetStateReply,group,0,1,217880)
CheckOffset(struct _xkbGetStateReply,lockedGroup,0,1,217881)
CheckOffset(struct _xkbGetStateReply,baseGroup,0,1,217882)
CheckOffset(struct _xkbGetStateReply,latchedGroup,0,1,217883)
CheckOffset(struct _xkbGetStateReply,compatState,0,1,217884)
CheckOffset(struct _xkbGetStateReply,grabMods,0,1,217885)
CheckOffset(struct _xkbGetStateReply,compatGrabMods,0,1,217886)
CheckOffset(struct _xkbGetStateReply,lookupMods,0,1,217887)
CheckOffset(struct _xkbGetStateReply,compatLookupMods,0,1,217888)
CheckOffset(struct _xkbGetStateReply,pad1,0,1,217889)
CheckOffset(struct _xkbGetStateReply,ptrBtnState,0,1,217890)
CheckOffset(struct _xkbGetStateReply,pad2,0,1,217891)
CheckOffset(struct _xkbGetStateReply,pad3,0,1,217892)
#endif

#if 1
CheckTypeSize(xkbGetStateReply,0, 39557, 1, 4.0, NULL, 39556, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbLatchLockState,0, 39558, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbLatchLockState on All\n");
CheckOffset(struct _xkbLatchLockState,reqType,0,1,217893)
CheckOffset(struct _xkbLatchLockState,xkbReqType,0,1,217894)
CheckOffset(struct _xkbLatchLockState,length,0,1,217895)
CheckOffset(struct _xkbLatchLockState,deviceSpec,0,1,217896)
CheckOffset(struct _xkbLatchLockState,affectModLocks,0,1,217897)
CheckOffset(struct _xkbLatchLockState,modLocks,0,1,217898)
CheckOffset(struct _xkbLatchLockState,lockGroup,0,1,217899)
CheckOffset(struct _xkbLatchLockState,groupLock,0,1,217900)
CheckOffset(struct _xkbLatchLockState,affectModLatches,0,1,217901)
CheckOffset(struct _xkbLatchLockState,modLatches,0,1,217902)
CheckOffset(struct _xkbLatchLockState,pad,0,1,217903)
CheckOffset(struct _xkbLatchLockState,latchGroup,0,1,217904)
CheckOffset(struct _xkbLatchLockState,groupLatch,0,1,217905)
#endif

#if 1
CheckTypeSize(xkbLatchLockStateReq,0, 39559, 1, 4.0, NULL, 39558, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetControls,0, 39560, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetControls on All\n");
CheckOffset(struct _xkbGetControls,reqType,0,1,217906)
CheckOffset(struct _xkbGetControls,xkbReqType,0,1,217907)
CheckOffset(struct _xkbGetControls,length,0,1,217908)
CheckOffset(struct _xkbGetControls,deviceSpec,0,1,217909)
CheckOffset(struct _xkbGetControls,pad,0,1,217910)
#endif

#if 1
CheckTypeSize(xkbGetControlsReq,0, 39561, 1, 4.0, NULL, 39560, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetControlsReply,0, 39562, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetControlsReply on All\n");
CheckOffset(struct _xkbGetControlsReply,type,0,1,217911)
CheckOffset(struct _xkbGetControlsReply,deviceID,0,1,217912)
CheckOffset(struct _xkbGetControlsReply,sequenceNumber,0,1,217913)
CheckOffset(struct _xkbGetControlsReply,length,0,1,217914)
CheckOffset(struct _xkbGetControlsReply,mkDfltBtn,0,1,217915)
CheckOffset(struct _xkbGetControlsReply,numGroups,0,1,217916)
CheckOffset(struct _xkbGetControlsReply,groupsWrap,0,1,217917)
CheckOffset(struct _xkbGetControlsReply,internalMods,0,1,217918)
CheckOffset(struct _xkbGetControlsReply,ignoreLockMods,0,1,217919)
CheckOffset(struct _xkbGetControlsReply,internalRealMods,0,1,217920)
CheckOffset(struct _xkbGetControlsReply,ignoreLockRealMods,0,1,217921)
CheckOffset(struct _xkbGetControlsReply,pad1,0,1,217922)
CheckOffset(struct _xkbGetControlsReply,internalVMods,0,1,217923)
CheckOffset(struct _xkbGetControlsReply,ignoreLockVMods,0,1,217924)
CheckOffset(struct _xkbGetControlsReply,repeatDelay,0,1,217925)
CheckOffset(struct _xkbGetControlsReply,repeatInterval,0,1,217926)
CheckOffset(struct _xkbGetControlsReply,slowKeysDelay,0,1,217927)
CheckOffset(struct _xkbGetControlsReply,debounceDelay,0,1,217928)
CheckOffset(struct _xkbGetControlsReply,mkDelay,0,1,217929)
CheckOffset(struct _xkbGetControlsReply,mkInterval,0,1,217930)
CheckOffset(struct _xkbGetControlsReply,mkTimeToMax,0,1,217931)
CheckOffset(struct _xkbGetControlsReply,mkMaxSpeed,0,1,217932)
CheckOffset(struct _xkbGetControlsReply,mkCurve,0,1,217933)
CheckOffset(struct _xkbGetControlsReply,axOptions,0,1,217934)
CheckOffset(struct _xkbGetControlsReply,axTimeout,0,1,217935)
CheckOffset(struct _xkbGetControlsReply,axtOptsMask,0,1,217936)
CheckOffset(struct _xkbGetControlsReply,axtOptsValues,0,1,217937)
CheckOffset(struct _xkbGetControlsReply,pad2,0,1,217938)
CheckOffset(struct _xkbGetControlsReply,axtCtrlsMask,0,1,217939)
CheckOffset(struct _xkbGetControlsReply,axtCtrlsValues,0,1,217940)
CheckOffset(struct _xkbGetControlsReply,enabledCtrls,0,1,217941)
CheckOffset(struct _xkbGetControlsReply,perKeyRepeat,0,1,217942)
#endif

#if 1
CheckTypeSize(xkbGetControlsReply,0, 39563, 1, 4.0, NULL, 39562, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbSetControls,0, 39564, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbSetControls on All\n");
CheckOffset(struct _xkbSetControls,reqType,0,1,217943)
CheckOffset(struct _xkbSetControls,xkbReqType,0,1,217944)
CheckOffset(struct _xkbSetControls,length,0,1,217945)
CheckOffset(struct _xkbSetControls,deviceSpec,0,1,217946)
CheckOffset(struct _xkbSetControls,affectInternalMods,0,1,217947)
CheckOffset(struct _xkbSetControls,internalMods,0,1,217948)
CheckOffset(struct _xkbSetControls,affectIgnoreLockMods,0,1,217949)
CheckOffset(struct _xkbSetControls,ignoreLockMods,0,1,217950)
CheckOffset(struct _xkbSetControls,affectInternalVMods,0,1,217951)
CheckOffset(struct _xkbSetControls,internalVMods,0,1,217952)
CheckOffset(struct _xkbSetControls,affectIgnoreLockVMods,0,1,217953)
CheckOffset(struct _xkbSetControls,ignoreLockVMods,0,1,217954)
CheckOffset(struct _xkbSetControls,mkDfltBtn,0,1,217955)
CheckOffset(struct _xkbSetControls,groupsWrap,0,1,217956)
CheckOffset(struct _xkbSetControls,axOptions,0,1,217957)
CheckOffset(struct _xkbSetControls,pad1,0,1,217958)
CheckOffset(struct _xkbSetControls,affectEnabledCtrls,0,1,217959)
CheckOffset(struct _xkbSetControls,enabledCtrls,0,1,217960)
CheckOffset(struct _xkbSetControls,changeCtrls,0,1,217961)
CheckOffset(struct _xkbSetControls,repeatDelay,0,1,217962)
CheckOffset(struct _xkbSetControls,repeatInterval,0,1,217963)
CheckOffset(struct _xkbSetControls,slowKeysDelay,0,1,217964)
CheckOffset(struct _xkbSetControls,debounceDelay,0,1,217965)
CheckOffset(struct _xkbSetControls,mkDelay,0,1,217966)
CheckOffset(struct _xkbSetControls,mkInterval,0,1,217967)
CheckOffset(struct _xkbSetControls,mkTimeToMax,0,1,217968)
CheckOffset(struct _xkbSetControls,mkMaxSpeed,0,1,217969)
CheckOffset(struct _xkbSetControls,mkCurve,0,1,217970)
CheckOffset(struct _xkbSetControls,axTimeout,0,1,217971)
CheckOffset(struct _xkbSetControls,axtCtrlsMask,0,1,217972)
CheckOffset(struct _xkbSetControls,axtCtrlsValues,0,1,217973)
CheckOffset(struct _xkbSetControls,axtOptsMask,0,1,217974)
CheckOffset(struct _xkbSetControls,axtOptsValues,0,1,217975)
CheckOffset(struct _xkbSetControls,perKeyRepeat,0,1,217976)
#endif

#if 1
CheckTypeSize(xkbSetControlsReq,0, 39565, 1, 4.0, NULL, 39564, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbKTMapEntryWireDesc,0, 39566, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbKTMapEntryWireDesc on All\n");
CheckOffset(struct _xkbKTMapEntryWireDesc,active,0,1,217977)
CheckOffset(struct _xkbKTMapEntryWireDesc,mask,0,1,217978)
CheckOffset(struct _xkbKTMapEntryWireDesc,level,0,1,217979)
CheckOffset(struct _xkbKTMapEntryWireDesc,realMods,0,1,217980)
CheckOffset(struct _xkbKTMapEntryWireDesc,virtualMods,0,1,217981)
CheckOffset(struct _xkbKTMapEntryWireDesc,pad,0,1,217982)
#endif

#if 1
CheckTypeSize(xkbKTMapEntryWireDesc,0, 39567, 1, 4.0, NULL, 39566, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbKTSetMapEntryWireDesc,0, 39568, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbKTSetMapEntryWireDesc on All\n");
CheckOffset(struct _xkbKTSetMapEntryWireDesc,level,0,1,217983)
CheckOffset(struct _xkbKTSetMapEntryWireDesc,realMods,0,1,217984)
CheckOffset(struct _xkbKTSetMapEntryWireDesc,virtualMods,0,1,217985)
#endif

#if 1
CheckTypeSize(xkbKTSetMapEntryWireDesc,0, 39569, 1, 4.0, NULL, 39568, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbModsWireDesc,0, 39570, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbModsWireDesc on All\n");
CheckOffset(struct _xkbModsWireDesc,mask,0,1,217986)
CheckOffset(struct _xkbModsWireDesc,realMods,0,1,217987)
CheckOffset(struct _xkbModsWireDesc,virtualMods,0,1,217988)
#endif

#if 1
CheckTypeSize(xkbModsWireDesc,0, 39571, 1, 4.0, NULL, 39570, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbKeyTypeWireDesc,0, 39572, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbKeyTypeWireDesc on All\n");
CheckOffset(struct _xkbKeyTypeWireDesc,mask,0,1,217989)
CheckOffset(struct _xkbKeyTypeWireDesc,realMods,0,1,217990)
CheckOffset(struct _xkbKeyTypeWireDesc,virtualMods,0,1,217991)
CheckOffset(struct _xkbKeyTypeWireDesc,numLevels,0,1,217992)
CheckOffset(struct _xkbKeyTypeWireDesc,nMapEntries,0,1,217993)
CheckOffset(struct _xkbKeyTypeWireDesc,preserve,0,1,217994)
CheckOffset(struct _xkbKeyTypeWireDesc,pad,0,1,217995)
#endif

#if 1
CheckTypeSize(xkbKeyTypeWireDesc,0, 39573, 1, 4.0, NULL, 39572, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbSymMapWireDesc,0, 39574, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbSymMapWireDesc on All\n");
CheckOffset(struct _xkbSymMapWireDesc,ktIndex,0,1,217996)
CheckOffset(struct _xkbSymMapWireDesc,groupInfo,0,1,217997)
CheckOffset(struct _xkbSymMapWireDesc,width,0,1,217998)
CheckOffset(struct _xkbSymMapWireDesc,nSyms,0,1,217999)
#endif

#if 1
CheckTypeSize(xkbSymMapWireDesc,0, 39575, 1, 4.0, NULL, 39574, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbVModMapWireDesc,0, 39576, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbVModMapWireDesc on All\n");
CheckOffset(struct _xkbVModMapWireDesc,key,0,1,218000)
CheckOffset(struct _xkbVModMapWireDesc,pad,0,1,218001)
CheckOffset(struct _xkbVModMapWireDesc,vmods,0,1,218002)
#endif

#if 1
CheckTypeSize(xkbVModMapWireDesc,0, 39577, 1, 4.0, NULL, 39576, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbBehaviorWireDesc,0, 39578, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbBehaviorWireDesc on All\n");
CheckOffset(struct _xkbBehaviorWireDesc,key,0,1,218003)
CheckOffset(struct _xkbBehaviorWireDesc,type,0,1,218004)
CheckOffset(struct _xkbBehaviorWireDesc,data,0,1,218005)
CheckOffset(struct _xkbBehaviorWireDesc,pad,0,1,218006)
#endif

#if 1
CheckTypeSize(xkbBehaviorWireDesc,0, 39579, 1, 4.0, NULL, 39578, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbActionWireDesc,0, 39580, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbActionWireDesc on All\n");
CheckOffset(struct _xkbActionWireDesc,type,0,1,218007)
CheckOffset(struct _xkbActionWireDesc,data,0,1,218008)
#endif

#if 1
CheckTypeSize(xkbActionWireDesc,0, 39581, 1, 4.0, NULL, 39580, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetMap,0, 39582, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetMap on All\n");
CheckOffset(struct _xkbGetMap,reqType,0,1,218009)
CheckOffset(struct _xkbGetMap,xkbReqType,0,1,218010)
CheckOffset(struct _xkbGetMap,length,0,1,218011)
CheckOffset(struct _xkbGetMap,deviceSpec,0,1,218012)
CheckOffset(struct _xkbGetMap,full,0,1,218013)
CheckOffset(struct _xkbGetMap,partial,0,1,218014)
CheckOffset(struct _xkbGetMap,firstType,0,1,218015)
CheckOffset(struct _xkbGetMap,nTypes,0,1,218016)
CheckOffset(struct _xkbGetMap,firstKeySym,0,1,218017)
CheckOffset(struct _xkbGetMap,nKeySyms,0,1,218018)
CheckOffset(struct _xkbGetMap,firstKeyAct,0,1,218019)
CheckOffset(struct _xkbGetMap,nKeyActs,0,1,218020)
CheckOffset(struct _xkbGetMap,firstKeyBehavior,0,1,218021)
CheckOffset(struct _xkbGetMap,nKeyBehaviors,0,1,218022)
CheckOffset(struct _xkbGetMap,virtualMods,0,1,218023)
CheckOffset(struct _xkbGetMap,firstKeyExplicit,0,1,218024)
CheckOffset(struct _xkbGetMap,nKeyExplicit,0,1,218025)
CheckOffset(struct _xkbGetMap,firstModMapKey,0,1,218026)
CheckOffset(struct _xkbGetMap,nModMapKeys,0,1,218027)
CheckOffset(struct _xkbGetMap,firstVModMapKey,0,1,218028)
CheckOffset(struct _xkbGetMap,nVModMapKeys,0,1,218029)
CheckOffset(struct _xkbGetMap,pad1,0,1,218030)
#endif

#if 1
CheckTypeSize(xkbGetMapReq,0, 39583, 1, 4.0, NULL, 39582, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetMapReply,0, 39584, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetMapReply on All\n");
CheckOffset(struct _xkbGetMapReply,type,0,1,218031)
CheckOffset(struct _xkbGetMapReply,deviceID,0,1,218032)
CheckOffset(struct _xkbGetMapReply,sequenceNumber,0,1,218033)
CheckOffset(struct _xkbGetMapReply,length,0,1,218034)
CheckOffset(struct _xkbGetMapReply,pad1,0,1,218035)
CheckOffset(struct _xkbGetMapReply,minKeyCode,0,1,218036)
CheckOffset(struct _xkbGetMapReply,maxKeyCode,0,1,218037)
CheckOffset(struct _xkbGetMapReply,present,0,1,218038)
CheckOffset(struct _xkbGetMapReply,firstType,0,1,218039)
CheckOffset(struct _xkbGetMapReply,nTypes,0,1,218040)
CheckOffset(struct _xkbGetMapReply,totalTypes,0,1,218041)
CheckOffset(struct _xkbGetMapReply,firstKeySym,0,1,218042)
CheckOffset(struct _xkbGetMapReply,totalSyms,0,1,218043)
CheckOffset(struct _xkbGetMapReply,nKeySyms,0,1,218044)
CheckOffset(struct _xkbGetMapReply,firstKeyAct,0,1,218045)
CheckOffset(struct _xkbGetMapReply,totalActs,0,1,218046)
CheckOffset(struct _xkbGetMapReply,nKeyActs,0,1,218047)
CheckOffset(struct _xkbGetMapReply,firstKeyBehavior,0,1,218048)
CheckOffset(struct _xkbGetMapReply,nKeyBehaviors,0,1,218049)
CheckOffset(struct _xkbGetMapReply,totalKeyBehaviors,0,1,218050)
CheckOffset(struct _xkbGetMapReply,firstKeyExplicit,0,1,218051)
CheckOffset(struct _xkbGetMapReply,nKeyExplicit,0,1,218052)
CheckOffset(struct _xkbGetMapReply,totalKeyExplicit,0,1,218053)
CheckOffset(struct _xkbGetMapReply,firstModMapKey,0,1,218054)
CheckOffset(struct _xkbGetMapReply,nModMapKeys,0,1,218055)
CheckOffset(struct _xkbGetMapReply,totalModMapKeys,0,1,218056)
CheckOffset(struct _xkbGetMapReply,firstVModMapKey,0,1,218057)
CheckOffset(struct _xkbGetMapReply,nVModMapKeys,0,1,218058)
CheckOffset(struct _xkbGetMapReply,totalVModMapKeys,0,1,218059)
CheckOffset(struct _xkbGetMapReply,pad2,0,1,218060)
CheckOffset(struct _xkbGetMapReply,virtualMods,0,1,218061)
#endif

#if 1
CheckTypeSize(xkbGetMapReply,0, 39585, 1, 4.0, NULL, 39584, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbSetMap,0, 39586, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbSetMap on All\n");
CheckOffset(struct _xkbSetMap,reqType,0,1,218062)
CheckOffset(struct _xkbSetMap,xkbReqType,0,1,218063)
CheckOffset(struct _xkbSetMap,length,0,1,218064)
CheckOffset(struct _xkbSetMap,deviceSpec,0,1,218065)
CheckOffset(struct _xkbSetMap,present,0,1,218066)
CheckOffset(struct _xkbSetMap,flags,0,1,218067)
CheckOffset(struct _xkbSetMap,minKeyCode,0,1,218068)
CheckOffset(struct _xkbSetMap,maxKeyCode,0,1,218069)
CheckOffset(struct _xkbSetMap,firstType,0,1,218070)
CheckOffset(struct _xkbSetMap,nTypes,0,1,218071)
CheckOffset(struct _xkbSetMap,firstKeySym,0,1,218072)
CheckOffset(struct _xkbSetMap,nKeySyms,0,1,218073)
CheckOffset(struct _xkbSetMap,totalSyms,0,1,218074)
CheckOffset(struct _xkbSetMap,firstKeyAct,0,1,218075)
CheckOffset(struct _xkbSetMap,nKeyActs,0,1,218076)
CheckOffset(struct _xkbSetMap,totalActs,0,1,218077)
CheckOffset(struct _xkbSetMap,firstKeyBehavior,0,1,218078)
CheckOffset(struct _xkbSetMap,nKeyBehaviors,0,1,218079)
CheckOffset(struct _xkbSetMap,totalKeyBehaviors,0,1,218080)
CheckOffset(struct _xkbSetMap,firstKeyExplicit,0,1,218081)
CheckOffset(struct _xkbSetMap,nKeyExplicit,0,1,218082)
CheckOffset(struct _xkbSetMap,totalKeyExplicit,0,1,218083)
CheckOffset(struct _xkbSetMap,firstModMapKey,0,1,218084)
CheckOffset(struct _xkbSetMap,nModMapKeys,0,1,218085)
CheckOffset(struct _xkbSetMap,totalModMapKeys,0,1,218086)
CheckOffset(struct _xkbSetMap,firstVModMapKey,0,1,218087)
CheckOffset(struct _xkbSetMap,nVModMapKeys,0,1,218088)
CheckOffset(struct _xkbSetMap,totalVModMapKeys,0,1,218089)
CheckOffset(struct _xkbSetMap,virtualMods,0,1,218090)
#endif

#if 1
CheckTypeSize(xkbSetMapReq,0, 39587, 1, 4.0, NULL, 39586, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbSymInterpretWireDesc,0, 39588, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbSymInterpretWireDesc on All\n");
CheckOffset(struct _xkbSymInterpretWireDesc,sym,0,1,218091)
CheckOffset(struct _xkbSymInterpretWireDesc,mods,0,1,218092)
CheckOffset(struct _xkbSymInterpretWireDesc,match,0,1,218093)
CheckOffset(struct _xkbSymInterpretWireDesc,virtualMod,0,1,218094)
CheckOffset(struct _xkbSymInterpretWireDesc,flags,0,1,218095)
CheckOffset(struct _xkbSymInterpretWireDesc,act,0,1,218096)
#endif

#if 1
CheckTypeSize(xkbSymInterpretWireDesc,0, 39589, 1, 4.0, NULL, 39588, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetCompatMap,0, 39590, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetCompatMap on All\n");
CheckOffset(struct _xkbGetCompatMap,reqType,0,1,218097)
CheckOffset(struct _xkbGetCompatMap,xkbReqType,0,1,218098)
CheckOffset(struct _xkbGetCompatMap,length,0,1,218099)
CheckOffset(struct _xkbGetCompatMap,deviceSpec,0,1,218100)
CheckOffset(struct _xkbGetCompatMap,groups,0,1,218101)
CheckOffset(struct _xkbGetCompatMap,getAllSI,0,1,218102)
CheckOffset(struct _xkbGetCompatMap,firstSI,0,1,218103)
CheckOffset(struct _xkbGetCompatMap,nSI,0,1,218104)
#endif

#if 1
CheckTypeSize(xkbGetCompatMapReq,0, 39591, 1, 4.0, NULL, 39590, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetCompatMapReply,0, 39592, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetCompatMapReply on All\n");
CheckOffset(struct _xkbGetCompatMapReply,type,0,1,218105)
CheckOffset(struct _xkbGetCompatMapReply,deviceID,0,1,218106)
CheckOffset(struct _xkbGetCompatMapReply,sequenceNumber,0,1,218107)
CheckOffset(struct _xkbGetCompatMapReply,length,0,1,218108)
CheckOffset(struct _xkbGetCompatMapReply,groups,0,1,218109)
CheckOffset(struct _xkbGetCompatMapReply,pad1,0,1,218110)
CheckOffset(struct _xkbGetCompatMapReply,firstSI,0,1,218111)
CheckOffset(struct _xkbGetCompatMapReply,nSI,0,1,218112)
CheckOffset(struct _xkbGetCompatMapReply,nTotalSI,0,1,218113)
CheckOffset(struct _xkbGetCompatMapReply,pad2,0,1,218114)
CheckOffset(struct _xkbGetCompatMapReply,pad3,0,1,218115)
CheckOffset(struct _xkbGetCompatMapReply,pad4,0,1,218116)
CheckOffset(struct _xkbGetCompatMapReply,pad5,0,1,218117)
#endif

#if 1
CheckTypeSize(xkbGetCompatMapReply,0, 39593, 1, 4.0, NULL, 39592, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbSetCompatMap,0, 39594, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbSetCompatMap on All\n");
CheckOffset(struct _xkbSetCompatMap,reqType,0,1,218118)
CheckOffset(struct _xkbSetCompatMap,xkbReqType,0,1,218119)
CheckOffset(struct _xkbSetCompatMap,length,0,1,218120)
CheckOffset(struct _xkbSetCompatMap,deviceSpec,0,1,218121)
CheckOffset(struct _xkbSetCompatMap,pad1,0,1,218122)
CheckOffset(struct _xkbSetCompatMap,recomputeActions,0,1,218123)
CheckOffset(struct _xkbSetCompatMap,truncateSI,0,1,218124)
CheckOffset(struct _xkbSetCompatMap,groups,0,1,218125)
CheckOffset(struct _xkbSetCompatMap,firstSI,0,1,218126)
CheckOffset(struct _xkbSetCompatMap,nSI,0,1,218127)
CheckOffset(struct _xkbSetCompatMap,pad2,0,1,218128)
#endif

#if 1
CheckTypeSize(xkbSetCompatMapReq,0, 39595, 1, 4.0, NULL, 39594, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetIndicatorState,0, 39596, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetIndicatorState on All\n");
CheckOffset(struct _xkbGetIndicatorState,reqType,0,1,218129)
CheckOffset(struct _xkbGetIndicatorState,xkbReqType,0,1,218130)
CheckOffset(struct _xkbGetIndicatorState,length,0,1,218131)
CheckOffset(struct _xkbGetIndicatorState,deviceSpec,0,1,218132)
CheckOffset(struct _xkbGetIndicatorState,pad1,0,1,218133)
#endif

#if 1
CheckTypeSize(xkbGetIndicatorStateReq,0, 39597, 1, 4.0, NULL, 39596, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetIndicatorStateReply,0, 39598, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetIndicatorStateReply on All\n");
CheckOffset(struct _xkbGetIndicatorStateReply,type,0,1,218134)
CheckOffset(struct _xkbGetIndicatorStateReply,deviceID,0,1,218135)
CheckOffset(struct _xkbGetIndicatorStateReply,sequenceNumber,0,1,218136)
CheckOffset(struct _xkbGetIndicatorStateReply,length,0,1,218137)
CheckOffset(struct _xkbGetIndicatorStateReply,state,0,1,218138)
CheckOffset(struct _xkbGetIndicatorStateReply,pad1,0,1,218139)
CheckOffset(struct _xkbGetIndicatorStateReply,pad2,0,1,218140)
CheckOffset(struct _xkbGetIndicatorStateReply,pad3,0,1,218141)
CheckOffset(struct _xkbGetIndicatorStateReply,pad4,0,1,218142)
CheckOffset(struct _xkbGetIndicatorStateReply,pad5,0,1,218143)
#endif

#if 1
CheckTypeSize(xkbGetIndicatorStateReply,0, 39599, 1, 4.0, NULL, 39598, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetIndicatorMap,0, 39600, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetIndicatorMap on All\n");
CheckOffset(struct _xkbGetIndicatorMap,reqType,0,1,218144)
CheckOffset(struct _xkbGetIndicatorMap,xkbReqType,0,1,218145)
CheckOffset(struct _xkbGetIndicatorMap,length,0,1,218146)
CheckOffset(struct _xkbGetIndicatorMap,deviceSpec,0,1,218147)
CheckOffset(struct _xkbGetIndicatorMap,pad,0,1,218148)
CheckOffset(struct _xkbGetIndicatorMap,which,0,1,218149)
#endif

#if 1
CheckTypeSize(xkbGetIndicatorMapReq,0, 39601, 1, 4.0, NULL, 39600, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetIndicatorMapReply,0, 39602, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetIndicatorMapReply on All\n");
CheckOffset(struct _xkbGetIndicatorMapReply,type,0,1,218150)
CheckOffset(struct _xkbGetIndicatorMapReply,deviceID,0,1,218151)
CheckOffset(struct _xkbGetIndicatorMapReply,sequenceNumber,0,1,218152)
CheckOffset(struct _xkbGetIndicatorMapReply,length,0,1,218153)
CheckOffset(struct _xkbGetIndicatorMapReply,which,0,1,218154)
CheckOffset(struct _xkbGetIndicatorMapReply,realIndicators,0,1,218155)
CheckOffset(struct _xkbGetIndicatorMapReply,nIndicators,0,1,218156)
CheckOffset(struct _xkbGetIndicatorMapReply,pad1,0,1,218157)
CheckOffset(struct _xkbGetIndicatorMapReply,pad2,0,1,218158)
CheckOffset(struct _xkbGetIndicatorMapReply,pad3,0,1,218159)
CheckOffset(struct _xkbGetIndicatorMapReply,pad4,0,1,218160)
CheckOffset(struct _xkbGetIndicatorMapReply,pad5,0,1,218161)
#endif

#if 1
CheckTypeSize(xkbGetIndicatorMapReply,0, 39603, 1, 4.0, NULL, 39602, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbIndicatorMapWireDesc,0, 39604, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbIndicatorMapWireDesc on All\n");
CheckOffset(struct _xkbIndicatorMapWireDesc,flags,0,1,218162)
CheckOffset(struct _xkbIndicatorMapWireDesc,whichGroups,0,1,218163)
CheckOffset(struct _xkbIndicatorMapWireDesc,groups,0,1,218164)
CheckOffset(struct _xkbIndicatorMapWireDesc,whichMods,0,1,218165)
CheckOffset(struct _xkbIndicatorMapWireDesc,mods,0,1,218166)
CheckOffset(struct _xkbIndicatorMapWireDesc,realMods,0,1,218167)
CheckOffset(struct _xkbIndicatorMapWireDesc,virtualMods,0,1,218168)
CheckOffset(struct _xkbIndicatorMapWireDesc,ctrls,0,1,218169)
#endif

#if 1
CheckTypeSize(xkbIndicatorMapWireDesc,0, 39605, 1, 4.0, NULL, 39604, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbSetIndicatorMap,0, 39606, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbSetIndicatorMap on All\n");
CheckOffset(struct _xkbSetIndicatorMap,reqType,0,1,218170)
CheckOffset(struct _xkbSetIndicatorMap,xkbReqType,0,1,218171)
CheckOffset(struct _xkbSetIndicatorMap,length,0,1,218172)
CheckOffset(struct _xkbSetIndicatorMap,deviceSpec,0,1,218173)
CheckOffset(struct _xkbSetIndicatorMap,pad1,0,1,218174)
CheckOffset(struct _xkbSetIndicatorMap,which,0,1,218175)
#endif

#if 1
CheckTypeSize(xkbSetIndicatorMapReq,0, 39607, 1, 4.0, NULL, 39606, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetNamedIndicator,0, 39608, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetNamedIndicator on All\n");
CheckOffset(struct _xkbGetNamedIndicator,reqType,0,1,218176)
CheckOffset(struct _xkbGetNamedIndicator,xkbReqType,0,1,218177)
CheckOffset(struct _xkbGetNamedIndicator,length,0,1,218178)
CheckOffset(struct _xkbGetNamedIndicator,deviceSpec,0,1,218179)
CheckOffset(struct _xkbGetNamedIndicator,ledClass,0,1,218180)
CheckOffset(struct _xkbGetNamedIndicator,ledID,0,1,218181)
CheckOffset(struct _xkbGetNamedIndicator,pad1,0,1,218182)
CheckOffset(struct _xkbGetNamedIndicator,indicator,0,1,218183)
#endif

#if 1
CheckTypeSize(xkbGetNamedIndicatorReq,0, 39609, 1, 4.0, NULL, 39608, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetNamedIndicatorReply,0, 39610, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetNamedIndicatorReply on All\n");
CheckOffset(struct _xkbGetNamedIndicatorReply,type,0,1,218184)
CheckOffset(struct _xkbGetNamedIndicatorReply,deviceID,0,1,218185)
CheckOffset(struct _xkbGetNamedIndicatorReply,sequenceNumber,0,1,218186)
CheckOffset(struct _xkbGetNamedIndicatorReply,length,0,1,218187)
CheckOffset(struct _xkbGetNamedIndicatorReply,indicator,0,1,218188)
CheckOffset(struct _xkbGetNamedIndicatorReply,found,0,1,218189)
CheckOffset(struct _xkbGetNamedIndicatorReply,on,0,1,218190)
CheckOffset(struct _xkbGetNamedIndicatorReply,realIndicator,0,1,218191)
CheckOffset(struct _xkbGetNamedIndicatorReply,ndx,0,1,218192)
CheckOffset(struct _xkbGetNamedIndicatorReply,flags,0,1,218193)
CheckOffset(struct _xkbGetNamedIndicatorReply,whichGroups,0,1,218194)
CheckOffset(struct _xkbGetNamedIndicatorReply,groups,0,1,218195)
CheckOffset(struct _xkbGetNamedIndicatorReply,whichMods,0,1,218196)
CheckOffset(struct _xkbGetNamedIndicatorReply,mods,0,1,218197)
CheckOffset(struct _xkbGetNamedIndicatorReply,realMods,0,1,218198)
CheckOffset(struct _xkbGetNamedIndicatorReply,virtualMods,0,1,218199)
CheckOffset(struct _xkbGetNamedIndicatorReply,ctrls,0,1,218200)
CheckOffset(struct _xkbGetNamedIndicatorReply,supported,0,1,218201)
CheckOffset(struct _xkbGetNamedIndicatorReply,pad1,0,1,218202)
CheckOffset(struct _xkbGetNamedIndicatorReply,pad2,0,1,218203)
#endif

#if 1
CheckTypeSize(xkbGetNamedIndicatorReply,0, 39611, 1, 4.0, NULL, 39610, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbSetNamedIndicator,0, 39612, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbSetNamedIndicator on All\n");
CheckOffset(struct _xkbSetNamedIndicator,reqType,0,1,218204)
CheckOffset(struct _xkbSetNamedIndicator,xkbReqType,0,1,218205)
CheckOffset(struct _xkbSetNamedIndicator,length,0,1,218206)
CheckOffset(struct _xkbSetNamedIndicator,deviceSpec,0,1,218207)
CheckOffset(struct _xkbSetNamedIndicator,ledClass,0,1,218208)
CheckOffset(struct _xkbSetNamedIndicator,ledID,0,1,218209)
CheckOffset(struct _xkbSetNamedIndicator,pad1,0,1,218210)
CheckOffset(struct _xkbSetNamedIndicator,indicator,0,1,218211)
CheckOffset(struct _xkbSetNamedIndicator,setState,0,1,218212)
CheckOffset(struct _xkbSetNamedIndicator,on,0,1,218213)
CheckOffset(struct _xkbSetNamedIndicator,setMap,0,1,218214)
CheckOffset(struct _xkbSetNamedIndicator,createMap,0,1,218215)
CheckOffset(struct _xkbSetNamedIndicator,pad2,0,1,218216)
CheckOffset(struct _xkbSetNamedIndicator,flags,0,1,218217)
CheckOffset(struct _xkbSetNamedIndicator,whichGroups,0,1,218218)
CheckOffset(struct _xkbSetNamedIndicator,groups,0,1,218219)
CheckOffset(struct _xkbSetNamedIndicator,whichMods,0,1,218220)
CheckOffset(struct _xkbSetNamedIndicator,realMods,0,1,218221)
CheckOffset(struct _xkbSetNamedIndicator,virtualMods,0,1,218222)
CheckOffset(struct _xkbSetNamedIndicator,ctrls,0,1,218223)
#endif

#if 1
CheckTypeSize(xkbSetNamedIndicatorReq,0, 39613, 1, 4.0, NULL, 39612, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetNames,0, 39614, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetNames on All\n");
CheckOffset(struct _xkbGetNames,reqType,0,1,218224)
CheckOffset(struct _xkbGetNames,xkbReqType,0,1,218225)
CheckOffset(struct _xkbGetNames,length,0,1,218226)
CheckOffset(struct _xkbGetNames,deviceSpec,0,1,218227)
CheckOffset(struct _xkbGetNames,pad,0,1,218228)
CheckOffset(struct _xkbGetNames,which,0,1,218229)
#endif

#if 1
CheckTypeSize(xkbGetNamesReq,0, 39615, 1, 4.0, NULL, 39614, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetNamesReply,0, 39616, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetNamesReply on All\n");
CheckOffset(struct _xkbGetNamesReply,type,0,1,218230)
CheckOffset(struct _xkbGetNamesReply,deviceID,0,1,218231)
CheckOffset(struct _xkbGetNamesReply,sequenceNumber,0,1,218232)
CheckOffset(struct _xkbGetNamesReply,length,0,1,218233)
CheckOffset(struct _xkbGetNamesReply,which,0,1,218234)
CheckOffset(struct _xkbGetNamesReply,minKeyCode,0,1,218235)
CheckOffset(struct _xkbGetNamesReply,maxKeyCode,0,1,218236)
CheckOffset(struct _xkbGetNamesReply,nTypes,0,1,218237)
CheckOffset(struct _xkbGetNamesReply,groupNames,0,1,218238)
CheckOffset(struct _xkbGetNamesReply,virtualMods,0,1,218239)
CheckOffset(struct _xkbGetNamesReply,firstKey,0,1,218240)
CheckOffset(struct _xkbGetNamesReply,nKeys,0,1,218241)
CheckOffset(struct _xkbGetNamesReply,indicators,0,1,218242)
CheckOffset(struct _xkbGetNamesReply,nRadioGroups,0,1,218243)
CheckOffset(struct _xkbGetNamesReply,nKeyAliases,0,1,218244)
CheckOffset(struct _xkbGetNamesReply,nKTLevels,0,1,218245)
CheckOffset(struct _xkbGetNamesReply,pad3,0,1,218246)
#endif

#if 1
CheckTypeSize(xkbGetNamesReply,0, 39617, 1, 4.0, NULL, 39616, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbSetNames,0, 39618, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbSetNames on All\n");
CheckOffset(struct _xkbSetNames,reqType,0,1,218247)
CheckOffset(struct _xkbSetNames,xkbReqType,0,1,218248)
CheckOffset(struct _xkbSetNames,length,0,1,218249)
CheckOffset(struct _xkbSetNames,deviceSpec,0,1,218250)
CheckOffset(struct _xkbSetNames,virtualMods,0,1,218251)
CheckOffset(struct _xkbSetNames,which,0,1,218252)
CheckOffset(struct _xkbSetNames,firstType,0,1,218253)
CheckOffset(struct _xkbSetNames,nTypes,0,1,218254)
CheckOffset(struct _xkbSetNames,firstKTLevel,0,1,218255)
CheckOffset(struct _xkbSetNames,nKTLevels,0,1,218256)
CheckOffset(struct _xkbSetNames,indicators,0,1,218257)
CheckOffset(struct _xkbSetNames,groupNames,0,1,218258)
CheckOffset(struct _xkbSetNames,nRadioGroups,0,1,218259)
CheckOffset(struct _xkbSetNames,firstKey,0,1,218260)
CheckOffset(struct _xkbSetNames,nKeys,0,1,218261)
CheckOffset(struct _xkbSetNames,nKeyAliases,0,1,218262)
CheckOffset(struct _xkbSetNames,pad1,0,1,218263)
CheckOffset(struct _xkbSetNames,totalKTLevelNames,0,1,218264)
#endif

#if 1
CheckTypeSize(xkbSetNamesReq,0, 39619, 1, 4.0, NULL, 39618, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbPointWireDesc,0, 39620, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbPointWireDesc on All\n");
CheckOffset(struct _xkbPointWireDesc,x,0,1,218265)
CheckOffset(struct _xkbPointWireDesc,y,0,1,218266)
#endif

#if 1
CheckTypeSize(xkbPointWireDesc,0, 39621, 1, 4.0, NULL, 39620, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbOutlineWireDesc,0, 39622, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbOutlineWireDesc on All\n");
CheckOffset(struct _xkbOutlineWireDesc,nPoints,0,1,218267)
CheckOffset(struct _xkbOutlineWireDesc,cornerRadius,0,1,218268)
CheckOffset(struct _xkbOutlineWireDesc,pad,0,1,218269)
#endif

#if 1
CheckTypeSize(xkbOutlineWireDesc,0, 39623, 1, 4.0, NULL, 39622, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbShapeWireDesc,0, 39624, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbShapeWireDesc on All\n");
CheckOffset(struct _xkbShapeWireDesc,name,0,1,218270)
CheckOffset(struct _xkbShapeWireDesc,nOutlines,0,1,218271)
CheckOffset(struct _xkbShapeWireDesc,primaryNdx,0,1,218272)
CheckOffset(struct _xkbShapeWireDesc,approxNdx,0,1,218273)
CheckOffset(struct _xkbShapeWireDesc,pad,0,1,218274)
#endif

#if 1
CheckTypeSize(xkbShapeWireDesc,0, 39625, 1, 4.0, NULL, 39624, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbSectionWireDesc,0, 39626, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbSectionWireDesc on All\n");
CheckOffset(struct _xkbSectionWireDesc,name,0,1,218275)
CheckOffset(struct _xkbSectionWireDesc,top,0,1,218276)
CheckOffset(struct _xkbSectionWireDesc,left,0,1,218277)
CheckOffset(struct _xkbSectionWireDesc,width,0,1,218278)
CheckOffset(struct _xkbSectionWireDesc,height,0,1,218279)
CheckOffset(struct _xkbSectionWireDesc,angle,0,1,218280)
CheckOffset(struct _xkbSectionWireDesc,priority,0,1,218281)
CheckOffset(struct _xkbSectionWireDesc,nRows,0,1,218282)
CheckOffset(struct _xkbSectionWireDesc,nDoodads,0,1,218283)
CheckOffset(struct _xkbSectionWireDesc,nOverlays,0,1,218284)
CheckOffset(struct _xkbSectionWireDesc,pad,0,1,218285)
#endif

#if 1
CheckTypeSize(xkbSectionWireDesc,0, 39627, 1, 4.0, NULL, 39626, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbRowWireDesc,0, 39628, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbRowWireDesc on All\n");
CheckOffset(struct _xkbRowWireDesc,top,0,1,218286)
CheckOffset(struct _xkbRowWireDesc,left,0,1,218287)
CheckOffset(struct _xkbRowWireDesc,nKeys,0,1,218288)
CheckOffset(struct _xkbRowWireDesc,vertical,0,1,218289)
CheckOffset(struct _xkbRowWireDesc,pad,0,1,218290)
#endif

#if 1
CheckTypeSize(xkbRowWireDesc,0, 39629, 1, 4.0, NULL, 39628, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbKeyWireDesc,0, 39630, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbKeyWireDesc on All\n");
CheckOffset(struct _xkbKeyWireDesc,name,0,1,218291)
CheckOffset(struct _xkbKeyWireDesc,gap,0,1,218292)
CheckOffset(struct _xkbKeyWireDesc,shapeNdx,0,1,218293)
CheckOffset(struct _xkbKeyWireDesc,colorNdx,0,1,218294)
#endif

#if 1
CheckTypeSize(xkbKeyWireDesc,0, 39631, 1, 4.0, NULL, 39630, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbOverlayWireDesc,0, 39632, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbOverlayWireDesc on All\n");
CheckOffset(struct _xkbOverlayWireDesc,name,0,1,218295)
CheckOffset(struct _xkbOverlayWireDesc,nRows,0,1,218296)
CheckOffset(struct _xkbOverlayWireDesc,pad1,0,1,218297)
CheckOffset(struct _xkbOverlayWireDesc,pad2,0,1,218298)
#endif

#if 1
CheckTypeSize(xkbOverlayWireDesc,0, 39633, 1, 4.0, NULL, 39632, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbOverlayRowWireDesc,0, 39634, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbOverlayRowWireDesc on All\n");
CheckOffset(struct _xkbOverlayRowWireDesc,rowUnder,0,1,218299)
CheckOffset(struct _xkbOverlayRowWireDesc,nKeys,0,1,218300)
CheckOffset(struct _xkbOverlayRowWireDesc,pad1,0,1,218301)
#endif

#if 1
CheckTypeSize(xkbOverlayRowWireDesc,0, 39635, 1, 4.0, NULL, 39634, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbOverlayKeyWireDesc,0, 39636, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbOverlayKeyWireDesc on All\n");
CheckOffset(struct _xkbOverlayKeyWireDesc,over,0,1,218302)
CheckOffset(struct _xkbOverlayKeyWireDesc,under,0,1,218303)
#endif

#if 1
CheckTypeSize(xkbOverlayKeyWireDesc,0, 39637, 1, 4.0, NULL, 39636, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbShapeDoodadWireDesc,0, 39638, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbShapeDoodadWireDesc on All\n");
CheckOffset(struct _xkbShapeDoodadWireDesc,name,0,1,218304)
CheckOffset(struct _xkbShapeDoodadWireDesc,type,0,1,218305)
CheckOffset(struct _xkbShapeDoodadWireDesc,priority,0,1,218306)
CheckOffset(struct _xkbShapeDoodadWireDesc,top,0,1,218307)
CheckOffset(struct _xkbShapeDoodadWireDesc,left,0,1,218308)
CheckOffset(struct _xkbShapeDoodadWireDesc,angle,0,1,218309)
CheckOffset(struct _xkbShapeDoodadWireDesc,colorNdx,0,1,218310)
CheckOffset(struct _xkbShapeDoodadWireDesc,shapeNdx,0,1,218311)
CheckOffset(struct _xkbShapeDoodadWireDesc,pad1,0,1,218312)
CheckOffset(struct _xkbShapeDoodadWireDesc,pad2,0,1,218313)
#endif

#if 1
CheckTypeSize(xkbShapeDoodadWireDesc,0, 39639, 1, 4.0, NULL, 39638, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbTextDoodadWireDesc,0, 39640, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbTextDoodadWireDesc on All\n");
CheckOffset(struct _xkbTextDoodadWireDesc,name,0,1,218314)
CheckOffset(struct _xkbTextDoodadWireDesc,type,0,1,218315)
CheckOffset(struct _xkbTextDoodadWireDesc,priority,0,1,218316)
CheckOffset(struct _xkbTextDoodadWireDesc,top,0,1,218317)
CheckOffset(struct _xkbTextDoodadWireDesc,left,0,1,218318)
CheckOffset(struct _xkbTextDoodadWireDesc,angle,0,1,218319)
CheckOffset(struct _xkbTextDoodadWireDesc,width,0,1,218320)
CheckOffset(struct _xkbTextDoodadWireDesc,height,0,1,218321)
CheckOffset(struct _xkbTextDoodadWireDesc,colorNdx,0,1,218322)
CheckOffset(struct _xkbTextDoodadWireDesc,pad1,0,1,218323)
CheckOffset(struct _xkbTextDoodadWireDesc,pad2,0,1,218324)
#endif

#if 1
CheckTypeSize(xkbTextDoodadWireDesc,0, 39641, 1, 4.0, NULL, 39640, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbIndicatorDoodadWireDesc,0, 39642, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbIndicatorDoodadWireDesc on All\n");
CheckOffset(struct _xkbIndicatorDoodadWireDesc,name,0,1,218325)
CheckOffset(struct _xkbIndicatorDoodadWireDesc,type,0,1,218326)
CheckOffset(struct _xkbIndicatorDoodadWireDesc,priority,0,1,218327)
CheckOffset(struct _xkbIndicatorDoodadWireDesc,top,0,1,218328)
CheckOffset(struct _xkbIndicatorDoodadWireDesc,left,0,1,218329)
CheckOffset(struct _xkbIndicatorDoodadWireDesc,angle,0,1,218330)
CheckOffset(struct _xkbIndicatorDoodadWireDesc,shapeNdx,0,1,218331)
CheckOffset(struct _xkbIndicatorDoodadWireDesc,onColorNdx,0,1,218332)
CheckOffset(struct _xkbIndicatorDoodadWireDesc,offColorNdx,0,1,218333)
CheckOffset(struct _xkbIndicatorDoodadWireDesc,pad1,0,1,218334)
CheckOffset(struct _xkbIndicatorDoodadWireDesc,pad2,0,1,218335)
#endif

#if 1
CheckTypeSize(xkbIndicatorDoodadWireDesc,0, 39643, 1, 4.0, NULL, 39642, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbLogoDoodadWireDesc,0, 39644, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbLogoDoodadWireDesc on All\n");
CheckOffset(struct _xkbLogoDoodadWireDesc,name,0,1,218336)
CheckOffset(struct _xkbLogoDoodadWireDesc,type,0,1,218337)
CheckOffset(struct _xkbLogoDoodadWireDesc,priority,0,1,218338)
CheckOffset(struct _xkbLogoDoodadWireDesc,top,0,1,218339)
CheckOffset(struct _xkbLogoDoodadWireDesc,left,0,1,218340)
CheckOffset(struct _xkbLogoDoodadWireDesc,angle,0,1,218341)
CheckOffset(struct _xkbLogoDoodadWireDesc,colorNdx,0,1,218342)
CheckOffset(struct _xkbLogoDoodadWireDesc,shapeNdx,0,1,218343)
CheckOffset(struct _xkbLogoDoodadWireDesc,pad1,0,1,218344)
CheckOffset(struct _xkbLogoDoodadWireDesc,pad2,0,1,218345)
#endif

#if 1
CheckTypeSize(xkbLogoDoodadWireDesc,0, 39645, 1, 4.0, NULL, 39644, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbAnyDoodadWireDesc,0, 39646, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbAnyDoodadWireDesc on All\n");
CheckOffset(struct _xkbAnyDoodadWireDesc,name,0,1,218346)
CheckOffset(struct _xkbAnyDoodadWireDesc,type,0,1,218347)
CheckOffset(struct _xkbAnyDoodadWireDesc,priority,0,1,218348)
CheckOffset(struct _xkbAnyDoodadWireDesc,top,0,1,218349)
CheckOffset(struct _xkbAnyDoodadWireDesc,left,0,1,218350)
CheckOffset(struct _xkbAnyDoodadWireDesc,angle,0,1,218351)
CheckOffset(struct _xkbAnyDoodadWireDesc,pad2,0,1,218352)
CheckOffset(struct _xkbAnyDoodadWireDesc,pad3,0,1,218353)
#endif

#if 1
CheckTypeSize(xkbAnyDoodadWireDesc,0, 39647, 1, 4.0, NULL, 39646, NULL)
#endif

#if 1
CheckTypeSize(union _xkbDoodadWireDesc,0, 39648, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbDoodadWireDesc on All\n");
CheckOffset(union _xkbDoodadWireDesc,any,0,1,218354)
CheckOffset(union _xkbDoodadWireDesc,shape,0,1,218355)
CheckOffset(union _xkbDoodadWireDesc,text,0,1,218356)
CheckOffset(union _xkbDoodadWireDesc,indicator,0,1,218357)
CheckOffset(union _xkbDoodadWireDesc,logo,0,1,218358)
#endif

#if 1
CheckTypeSize(xkbDoodadWireDesc,0, 39649, 1, 4.0, NULL, 39648, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetGeometry,0, 39650, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetGeometry on All\n");
CheckOffset(struct _xkbGetGeometry,reqType,0,1,218359)
CheckOffset(struct _xkbGetGeometry,xkbReqType,0,1,218360)
CheckOffset(struct _xkbGetGeometry,length,0,1,218361)
CheckOffset(struct _xkbGetGeometry,deviceSpec,0,1,218362)
CheckOffset(struct _xkbGetGeometry,pad,0,1,218363)
CheckOffset(struct _xkbGetGeometry,name,0,1,218364)
#endif

#if 1
CheckTypeSize(xkbGetGeometryReq,0, 39651, 1, 4.0, NULL, 39650, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetGeometryReply,0, 39652, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetGeometryReply on All\n");
CheckOffset(struct _xkbGetGeometryReply,type,0,1,218365)
CheckOffset(struct _xkbGetGeometryReply,deviceID,0,1,218366)
CheckOffset(struct _xkbGetGeometryReply,sequenceNumber,0,1,218367)
CheckOffset(struct _xkbGetGeometryReply,length,0,1,218368)
CheckOffset(struct _xkbGetGeometryReply,name,0,1,218369)
CheckOffset(struct _xkbGetGeometryReply,found,0,1,218370)
CheckOffset(struct _xkbGetGeometryReply,pad,0,1,218371)
CheckOffset(struct _xkbGetGeometryReply,widthMM,0,1,218372)
CheckOffset(struct _xkbGetGeometryReply,heightMM,0,1,218373)
CheckOffset(struct _xkbGetGeometryReply,nProperties,0,1,218374)
CheckOffset(struct _xkbGetGeometryReply,nColors,0,1,218375)
CheckOffset(struct _xkbGetGeometryReply,nShapes,0,1,218376)
CheckOffset(struct _xkbGetGeometryReply,nSections,0,1,218377)
CheckOffset(struct _xkbGetGeometryReply,nDoodads,0,1,218378)
CheckOffset(struct _xkbGetGeometryReply,nKeyAliases,0,1,218379)
CheckOffset(struct _xkbGetGeometryReply,baseColorNdx,0,1,218380)
CheckOffset(struct _xkbGetGeometryReply,labelColorNdx,0,1,218381)
#endif

#if 1
CheckTypeSize(xkbGetGeometryReply,0, 39653, 1, 4.0, NULL, 39652, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbSetGeometry,0, 39654, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbSetGeometry on All\n");
CheckOffset(struct _xkbSetGeometry,reqType,0,1,218382)
CheckOffset(struct _xkbSetGeometry,xkbReqType,0,1,218383)
CheckOffset(struct _xkbSetGeometry,length,0,1,218384)
CheckOffset(struct _xkbSetGeometry,deviceSpec,0,1,218385)
CheckOffset(struct _xkbSetGeometry,nShapes,0,1,218386)
CheckOffset(struct _xkbSetGeometry,nSections,0,1,218387)
CheckOffset(struct _xkbSetGeometry,name,0,1,218388)
CheckOffset(struct _xkbSetGeometry,widthMM,0,1,218389)
CheckOffset(struct _xkbSetGeometry,heightMM,0,1,218390)
CheckOffset(struct _xkbSetGeometry,nProperties,0,1,218391)
CheckOffset(struct _xkbSetGeometry,nColors,0,1,218392)
CheckOffset(struct _xkbSetGeometry,nDoodads,0,1,218393)
CheckOffset(struct _xkbSetGeometry,nKeyAliases,0,1,218394)
CheckOffset(struct _xkbSetGeometry,baseColorNdx,0,1,218395)
CheckOffset(struct _xkbSetGeometry,labelColorNdx,0,1,218396)
CheckOffset(struct _xkbSetGeometry,pad,0,1,218397)
#endif

#if 1
CheckTypeSize(xkbSetGeometryReq,0, 39655, 1, 4.0, NULL, 39654, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbPerClientFlags,0, 39656, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbPerClientFlags on All\n");
CheckOffset(struct _xkbPerClientFlags,reqType,0,1,218398)
CheckOffset(struct _xkbPerClientFlags,xkbReqType,0,1,218399)
CheckOffset(struct _xkbPerClientFlags,length,0,1,218400)
CheckOffset(struct _xkbPerClientFlags,deviceSpec,0,1,218401)
CheckOffset(struct _xkbPerClientFlags,pad1,0,1,218402)
CheckOffset(struct _xkbPerClientFlags,change,0,1,218403)
CheckOffset(struct _xkbPerClientFlags,value,0,1,218404)
CheckOffset(struct _xkbPerClientFlags,ctrlsToChange,0,1,218405)
CheckOffset(struct _xkbPerClientFlags,autoCtrls,0,1,218406)
CheckOffset(struct _xkbPerClientFlags,autoCtrlValues,0,1,218407)
#endif

#if 1
CheckTypeSize(xkbPerClientFlagsReq,0, 39657, 1, 4.0, NULL, 39656, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbPerClientFlagsReply,0, 39658, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbPerClientFlagsReply on All\n");
CheckOffset(struct _xkbPerClientFlagsReply,type,0,1,218408)
CheckOffset(struct _xkbPerClientFlagsReply,deviceID,0,1,218409)
CheckOffset(struct _xkbPerClientFlagsReply,sequenceNumber,0,1,218410)
CheckOffset(struct _xkbPerClientFlagsReply,length,0,1,218411)
CheckOffset(struct _xkbPerClientFlagsReply,supported,0,1,218412)
CheckOffset(struct _xkbPerClientFlagsReply,value,0,1,218413)
CheckOffset(struct _xkbPerClientFlagsReply,autoCtrls,0,1,218414)
CheckOffset(struct _xkbPerClientFlagsReply,autoCtrlValues,0,1,218415)
CheckOffset(struct _xkbPerClientFlagsReply,pad1,0,1,218416)
CheckOffset(struct _xkbPerClientFlagsReply,pad2,0,1,218417)
#endif

#if 1
CheckTypeSize(xkbPerClientFlagsReply,0, 39659, 1, 4.0, NULL, 39658, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbListComponents,0, 39660, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbListComponents on All\n");
CheckOffset(struct _xkbListComponents,reqType,0,1,218418)
CheckOffset(struct _xkbListComponents,xkbReqType,0,1,218419)
CheckOffset(struct _xkbListComponents,length,0,1,218420)
CheckOffset(struct _xkbListComponents,deviceSpec,0,1,218421)
CheckOffset(struct _xkbListComponents,maxNames,0,1,218422)
#endif

#if 1
CheckTypeSize(xkbListComponentsReq,0, 39661, 1, 4.0, NULL, 39660, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbListComponentsReply,0, 39662, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbListComponentsReply on All\n");
CheckOffset(struct _xkbListComponentsReply,type,0,1,218423)
CheckOffset(struct _xkbListComponentsReply,deviceID,0,1,218424)
CheckOffset(struct _xkbListComponentsReply,sequenceNumber,0,1,218425)
CheckOffset(struct _xkbListComponentsReply,length,0,1,218426)
CheckOffset(struct _xkbListComponentsReply,nKeymaps,0,1,218427)
CheckOffset(struct _xkbListComponentsReply,nKeycodes,0,1,218428)
CheckOffset(struct _xkbListComponentsReply,nTypes,0,1,218429)
CheckOffset(struct _xkbListComponentsReply,nCompatMaps,0,1,218430)
CheckOffset(struct _xkbListComponentsReply,nSymbols,0,1,218431)
CheckOffset(struct _xkbListComponentsReply,nGeometries,0,1,218432)
CheckOffset(struct _xkbListComponentsReply,extra,0,1,218433)
CheckOffset(struct _xkbListComponentsReply,pad1,0,1,218434)
CheckOffset(struct _xkbListComponentsReply,pad2,0,1,218435)
CheckOffset(struct _xkbListComponentsReply,pad3,0,1,218436)
#endif

#if 1
CheckTypeSize(xkbListComponentsReply,0, 39663, 1, 4.0, NULL, 39662, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetKbdByName,0, 39664, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetKbdByName on All\n");
CheckOffset(struct _xkbGetKbdByName,reqType,0,1,218437)
CheckOffset(struct _xkbGetKbdByName,xkbReqType,0,1,218438)
CheckOffset(struct _xkbGetKbdByName,length,0,1,218439)
CheckOffset(struct _xkbGetKbdByName,deviceSpec,0,1,218440)
CheckOffset(struct _xkbGetKbdByName,need,0,1,218441)
CheckOffset(struct _xkbGetKbdByName,want,0,1,218442)
CheckOffset(struct _xkbGetKbdByName,load,0,1,218443)
CheckOffset(struct _xkbGetKbdByName,pad,0,1,218444)
#endif

#if 1
CheckTypeSize(xkbGetKbdByNameReq,0, 39665, 1, 4.0, NULL, 39664, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetKbdByNameReply,0, 39666, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetKbdByNameReply on All\n");
CheckOffset(struct _xkbGetKbdByNameReply,type,0,1,218445)
CheckOffset(struct _xkbGetKbdByNameReply,deviceID,0,1,218446)
CheckOffset(struct _xkbGetKbdByNameReply,sequenceNumber,0,1,218447)
CheckOffset(struct _xkbGetKbdByNameReply,length,0,1,218448)
CheckOffset(struct _xkbGetKbdByNameReply,minKeyCode,0,1,218449)
CheckOffset(struct _xkbGetKbdByNameReply,maxKeyCode,0,1,218450)
CheckOffset(struct _xkbGetKbdByNameReply,loaded,0,1,218451)
CheckOffset(struct _xkbGetKbdByNameReply,newKeyboard,0,1,218452)
CheckOffset(struct _xkbGetKbdByNameReply,found,0,1,218453)
CheckOffset(struct _xkbGetKbdByNameReply,reported,0,1,218454)
CheckOffset(struct _xkbGetKbdByNameReply,pad1,0,1,218455)
CheckOffset(struct _xkbGetKbdByNameReply,pad2,0,1,218456)
CheckOffset(struct _xkbGetKbdByNameReply,pad3,0,1,218457)
CheckOffset(struct _xkbGetKbdByNameReply,pad4,0,1,218458)
#endif

#if 1
CheckTypeSize(xkbGetKbdByNameReply,0, 39667, 1, 4.0, NULL, 39666, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbDeviceLedsWireDesc,0, 39668, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbDeviceLedsWireDesc on All\n");
CheckOffset(struct _xkbDeviceLedsWireDesc,ledClass,0,1,218459)
CheckOffset(struct _xkbDeviceLedsWireDesc,ledID,0,1,218460)
CheckOffset(struct _xkbDeviceLedsWireDesc,namesPresent,0,1,218461)
CheckOffset(struct _xkbDeviceLedsWireDesc,mapsPresent,0,1,218462)
CheckOffset(struct _xkbDeviceLedsWireDesc,physIndicators,0,1,218463)
CheckOffset(struct _xkbDeviceLedsWireDesc,state,0,1,218464)
#endif

#if 1
CheckTypeSize(xkbDeviceLedsWireDesc,0, 39669, 1, 4.0, NULL, 39668, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetDeviceInfo,0, 39670, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetDeviceInfo on All\n");
CheckOffset(struct _xkbGetDeviceInfo,reqType,0,1,218465)
CheckOffset(struct _xkbGetDeviceInfo,xkbReqType,0,1,218466)
CheckOffset(struct _xkbGetDeviceInfo,length,0,1,218467)
CheckOffset(struct _xkbGetDeviceInfo,deviceSpec,0,1,218468)
CheckOffset(struct _xkbGetDeviceInfo,wanted,0,1,218469)
CheckOffset(struct _xkbGetDeviceInfo,allBtns,0,1,218470)
CheckOffset(struct _xkbGetDeviceInfo,firstBtn,0,1,218471)
CheckOffset(struct _xkbGetDeviceInfo,nBtns,0,1,218472)
CheckOffset(struct _xkbGetDeviceInfo,pad,0,1,218473)
CheckOffset(struct _xkbGetDeviceInfo,ledClass,0,1,218474)
CheckOffset(struct _xkbGetDeviceInfo,ledID,0,1,218475)
#endif

#if 1
CheckTypeSize(xkbGetDeviceInfoReq,0, 39671, 1, 4.0, NULL, 39670, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbGetDeviceInfoReply,0, 39672, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbGetDeviceInfoReply on All\n");
CheckOffset(struct _xkbGetDeviceInfoReply,type,0,1,218476)
CheckOffset(struct _xkbGetDeviceInfoReply,deviceID,0,1,218477)
CheckOffset(struct _xkbGetDeviceInfoReply,sequenceNumber,0,1,218478)
CheckOffset(struct _xkbGetDeviceInfoReply,length,0,1,218479)
CheckOffset(struct _xkbGetDeviceInfoReply,present,0,1,218480)
CheckOffset(struct _xkbGetDeviceInfoReply,supported,0,1,218481)
CheckOffset(struct _xkbGetDeviceInfoReply,unsupported,0,1,218482)
CheckOffset(struct _xkbGetDeviceInfoReply,nDeviceLedFBs,0,1,218483)
CheckOffset(struct _xkbGetDeviceInfoReply,firstBtnWanted,0,1,218484)
CheckOffset(struct _xkbGetDeviceInfoReply,nBtnsWanted,0,1,218485)
CheckOffset(struct _xkbGetDeviceInfoReply,firstBtnRtrn,0,1,218486)
CheckOffset(struct _xkbGetDeviceInfoReply,nBtnsRtrn,0,1,218487)
CheckOffset(struct _xkbGetDeviceInfoReply,totalBtns,0,1,218488)
CheckOffset(struct _xkbGetDeviceInfoReply,hasOwnState,0,1,218489)
CheckOffset(struct _xkbGetDeviceInfoReply,dfltKbdFB,0,1,218490)
CheckOffset(struct _xkbGetDeviceInfoReply,dfltLedFB,0,1,218491)
CheckOffset(struct _xkbGetDeviceInfoReply,pad,0,1,218492)
CheckOffset(struct _xkbGetDeviceInfoReply,devType,0,1,218493)
#endif

#if 1
CheckTypeSize(xkbGetDeviceInfoReply,0, 39673, 1, 4.0, NULL, 39672, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbSetDeviceInfo,0, 39674, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbSetDeviceInfo on All\n");
CheckOffset(struct _xkbSetDeviceInfo,reqType,0,1,218494)
CheckOffset(struct _xkbSetDeviceInfo,xkbReqType,0,1,218495)
CheckOffset(struct _xkbSetDeviceInfo,length,0,1,218496)
CheckOffset(struct _xkbSetDeviceInfo,deviceSpec,0,1,218497)
CheckOffset(struct _xkbSetDeviceInfo,firstBtn,0,1,218498)
CheckOffset(struct _xkbSetDeviceInfo,nBtns,0,1,218499)
CheckOffset(struct _xkbSetDeviceInfo,change,0,1,218500)
CheckOffset(struct _xkbSetDeviceInfo,nDeviceLedFBs,0,1,218501)
#endif

#if 1
CheckTypeSize(xkbSetDeviceInfoReq,0, 39675, 1, 4.0, NULL, 39674, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbSetDebuggingFlags,0, 39676, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbSetDebuggingFlags on All\n");
CheckOffset(struct _xkbSetDebuggingFlags,reqType,0,1,218502)
CheckOffset(struct _xkbSetDebuggingFlags,xkbReqType,0,1,218503)
CheckOffset(struct _xkbSetDebuggingFlags,length,0,1,218504)
CheckOffset(struct _xkbSetDebuggingFlags,msgLength,0,1,218505)
CheckOffset(struct _xkbSetDebuggingFlags,pad,0,1,218506)
CheckOffset(struct _xkbSetDebuggingFlags,affectFlags,0,1,218507)
CheckOffset(struct _xkbSetDebuggingFlags,flags,0,1,218508)
CheckOffset(struct _xkbSetDebuggingFlags,affectCtrls,0,1,218509)
CheckOffset(struct _xkbSetDebuggingFlags,ctrls,0,1,218510)
#endif

#if 1
CheckTypeSize(xkbSetDebuggingFlagsReq,0, 39677, 1, 4.0, NULL, 39676, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbSetDebuggingFlagsReply,0, 39678, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbSetDebuggingFlagsReply on All\n");
CheckOffset(struct _xkbSetDebuggingFlagsReply,type,0,1,218511)
CheckOffset(struct _xkbSetDebuggingFlagsReply,pad0,0,1,218512)
CheckOffset(struct _xkbSetDebuggingFlagsReply,sequenceNumber,0,1,218513)
CheckOffset(struct _xkbSetDebuggingFlagsReply,length,0,1,218514)
CheckOffset(struct _xkbSetDebuggingFlagsReply,currentFlags,0,1,218515)
CheckOffset(struct _xkbSetDebuggingFlagsReply,currentCtrls,0,1,218516)
CheckOffset(struct _xkbSetDebuggingFlagsReply,supportedFlags,0,1,218517)
CheckOffset(struct _xkbSetDebuggingFlagsReply,supportedCtrls,0,1,218518)
CheckOffset(struct _xkbSetDebuggingFlagsReply,pad1,0,1,218519)
CheckOffset(struct _xkbSetDebuggingFlagsReply,pad2,0,1,218520)
#endif

#if 1
CheckTypeSize(xkbSetDebuggingFlagsReply,0, 39679, 1, 4.0, NULL, 39678, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbAnyEvent,0, 39680, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbAnyEvent on All\n");
CheckOffset(struct _xkbAnyEvent,type,0,1,218521)
CheckOffset(struct _xkbAnyEvent,xkbType,0,1,218522)
CheckOffset(struct _xkbAnyEvent,sequenceNumber,0,1,218523)
CheckOffset(struct _xkbAnyEvent,time,0,1,218524)
CheckOffset(struct _xkbAnyEvent,deviceID,0,1,218525)
CheckOffset(struct _xkbAnyEvent,pad1,0,1,218526)
CheckOffset(struct _xkbAnyEvent,pad2,0,1,218527)
CheckOffset(struct _xkbAnyEvent,pad3,0,1,218528)
CheckOffset(struct _xkbAnyEvent,pad4,0,1,218529)
CheckOffset(struct _xkbAnyEvent,pad5,0,1,218530)
CheckOffset(struct _xkbAnyEvent,pad6,0,1,218531)
CheckOffset(struct _xkbAnyEvent,pad7,0,1,218532)
#endif

#if 1
CheckTypeSize(xkbAnyEvent,0, 39681, 1, 4.0, NULL, 39680, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbNewKeyboardNotify,0, 39682, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbNewKeyboardNotify on All\n");
CheckOffset(struct _xkbNewKeyboardNotify,type,0,1,218533)
CheckOffset(struct _xkbNewKeyboardNotify,xkbType,0,1,218534)
CheckOffset(struct _xkbNewKeyboardNotify,sequenceNumber,0,1,218535)
CheckOffset(struct _xkbNewKeyboardNotify,time,0,1,218536)
CheckOffset(struct _xkbNewKeyboardNotify,deviceID,0,1,218537)
CheckOffset(struct _xkbNewKeyboardNotify,oldDeviceID,0,1,218538)
CheckOffset(struct _xkbNewKeyboardNotify,minKeyCode,0,1,218539)
CheckOffset(struct _xkbNewKeyboardNotify,maxKeyCode,0,1,218540)
CheckOffset(struct _xkbNewKeyboardNotify,oldMinKeyCode,0,1,218541)
CheckOffset(struct _xkbNewKeyboardNotify,oldMaxKeyCode,0,1,218542)
CheckOffset(struct _xkbNewKeyboardNotify,requestMajor,0,1,218543)
CheckOffset(struct _xkbNewKeyboardNotify,requestMinor,0,1,218544)
CheckOffset(struct _xkbNewKeyboardNotify,changed,0,1,218545)
CheckOffset(struct _xkbNewKeyboardNotify,detail,0,1,218546)
CheckOffset(struct _xkbNewKeyboardNotify,pad1,0,1,218547)
CheckOffset(struct _xkbNewKeyboardNotify,pad2,0,1,218548)
CheckOffset(struct _xkbNewKeyboardNotify,pad3,0,1,218549)
CheckOffset(struct _xkbNewKeyboardNotify,pad4,0,1,218550)
#endif

#if 1
CheckTypeSize(xkbNewKeyboardNotify,0, 39683, 1, 4.0, NULL, 39682, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbMapNotify,0, 39684, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbMapNotify on All\n");
CheckOffset(struct _xkbMapNotify,type,0,1,218551)
CheckOffset(struct _xkbMapNotify,xkbType,0,1,218552)
CheckOffset(struct _xkbMapNotify,sequenceNumber,0,1,218553)
CheckOffset(struct _xkbMapNotify,time,0,1,218554)
CheckOffset(struct _xkbMapNotify,deviceID,0,1,218555)
CheckOffset(struct _xkbMapNotify,ptrBtnActions,0,1,218556)
CheckOffset(struct _xkbMapNotify,changed,0,1,218557)
CheckOffset(struct _xkbMapNotify,minKeyCode,0,1,218558)
CheckOffset(struct _xkbMapNotify,maxKeyCode,0,1,218559)
CheckOffset(struct _xkbMapNotify,firstType,0,1,218560)
CheckOffset(struct _xkbMapNotify,nTypes,0,1,218561)
CheckOffset(struct _xkbMapNotify,firstKeySym,0,1,218562)
CheckOffset(struct _xkbMapNotify,nKeySyms,0,1,218563)
CheckOffset(struct _xkbMapNotify,firstKeyAct,0,1,218564)
CheckOffset(struct _xkbMapNotify,nKeyActs,0,1,218565)
CheckOffset(struct _xkbMapNotify,firstKeyBehavior,0,1,218566)
CheckOffset(struct _xkbMapNotify,nKeyBehaviors,0,1,218567)
CheckOffset(struct _xkbMapNotify,firstKeyExplicit,0,1,218568)
CheckOffset(struct _xkbMapNotify,nKeyExplicit,0,1,218569)
CheckOffset(struct _xkbMapNotify,firstModMapKey,0,1,218570)
CheckOffset(struct _xkbMapNotify,nModMapKeys,0,1,218571)
CheckOffset(struct _xkbMapNotify,firstVModMapKey,0,1,218572)
CheckOffset(struct _xkbMapNotify,nVModMapKeys,0,1,218573)
CheckOffset(struct _xkbMapNotify,virtualMods,0,1,218574)
CheckOffset(struct _xkbMapNotify,pad1,0,1,218575)
#endif

#if 1
CheckTypeSize(xkbMapNotify,0, 39685, 1, 4.0, NULL, 39684, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbStateNotify,0, 39686, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbStateNotify on All\n");
CheckOffset(struct _xkbStateNotify,type,0,1,218576)
CheckOffset(struct _xkbStateNotify,xkbType,0,1,218577)
CheckOffset(struct _xkbStateNotify,sequenceNumber,0,1,218578)
CheckOffset(struct _xkbStateNotify,time,0,1,218579)
CheckOffset(struct _xkbStateNotify,deviceID,0,1,218580)
CheckOffset(struct _xkbStateNotify,mods,0,1,218581)
CheckOffset(struct _xkbStateNotify,baseMods,0,1,218582)
CheckOffset(struct _xkbStateNotify,latchedMods,0,1,218583)
CheckOffset(struct _xkbStateNotify,lockedMods,0,1,218584)
CheckOffset(struct _xkbStateNotify,group,0,1,218585)
CheckOffset(struct _xkbStateNotify,baseGroup,0,1,218586)
CheckOffset(struct _xkbStateNotify,latchedGroup,0,1,218587)
CheckOffset(struct _xkbStateNotify,lockedGroup,0,1,218588)
CheckOffset(struct _xkbStateNotify,compatState,0,1,218589)
CheckOffset(struct _xkbStateNotify,grabMods,0,1,218590)
CheckOffset(struct _xkbStateNotify,compatGrabMods,0,1,218591)
CheckOffset(struct _xkbStateNotify,lookupMods,0,1,218592)
CheckOffset(struct _xkbStateNotify,compatLookupMods,0,1,218593)
CheckOffset(struct _xkbStateNotify,ptrBtnState,0,1,218594)
CheckOffset(struct _xkbStateNotify,changed,0,1,218595)
CheckOffset(struct _xkbStateNotify,keycode,0,1,218596)
CheckOffset(struct _xkbStateNotify,eventType,0,1,218597)
CheckOffset(struct _xkbStateNotify,requestMajor,0,1,218598)
CheckOffset(struct _xkbStateNotify,requestMinor,0,1,218599)
#endif

#if 1
CheckTypeSize(xkbStateNotify,0, 39687, 1, 4.0, NULL, 39686, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbControlsNotify,0, 39688, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbControlsNotify on All\n");
CheckOffset(struct _xkbControlsNotify,type,0,1,218600)
CheckOffset(struct _xkbControlsNotify,xkbType,0,1,218601)
CheckOffset(struct _xkbControlsNotify,sequenceNumber,0,1,218602)
CheckOffset(struct _xkbControlsNotify,time,0,1,218603)
CheckOffset(struct _xkbControlsNotify,deviceID,0,1,218604)
CheckOffset(struct _xkbControlsNotify,numGroups,0,1,218605)
CheckOffset(struct _xkbControlsNotify,pad1,0,1,218606)
CheckOffset(struct _xkbControlsNotify,changedControls,0,1,218607)
CheckOffset(struct _xkbControlsNotify,enabledControls,0,1,218608)
CheckOffset(struct _xkbControlsNotify,enabledControlChanges,0,1,218609)
CheckOffset(struct _xkbControlsNotify,keycode,0,1,218610)
CheckOffset(struct _xkbControlsNotify,eventType,0,1,218611)
CheckOffset(struct _xkbControlsNotify,requestMajor,0,1,218612)
CheckOffset(struct _xkbControlsNotify,requestMinor,0,1,218613)
CheckOffset(struct _xkbControlsNotify,pad2,0,1,218614)
#endif

#if 1
CheckTypeSize(xkbControlsNotify,0, 39689, 1, 4.0, NULL, 39688, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbIndicatorNotify,0, 39690, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbIndicatorNotify on All\n");
CheckOffset(struct _xkbIndicatorNotify,type,0,1,218615)
CheckOffset(struct _xkbIndicatorNotify,xkbType,0,1,218616)
CheckOffset(struct _xkbIndicatorNotify,sequenceNumber,0,1,218617)
CheckOffset(struct _xkbIndicatorNotify,time,0,1,218618)
CheckOffset(struct _xkbIndicatorNotify,deviceID,0,1,218619)
CheckOffset(struct _xkbIndicatorNotify,pad1,0,1,218620)
CheckOffset(struct _xkbIndicatorNotify,pad2,0,1,218621)
CheckOffset(struct _xkbIndicatorNotify,state,0,1,218622)
CheckOffset(struct _xkbIndicatorNotify,changed,0,1,218623)
CheckOffset(struct _xkbIndicatorNotify,pad3,0,1,218624)
CheckOffset(struct _xkbIndicatorNotify,pad4,0,1,218625)
CheckOffset(struct _xkbIndicatorNotify,pad5,0,1,218626)
#endif

#if 1
CheckTypeSize(xkbIndicatorNotify,0, 39691, 1, 4.0, NULL, 39690, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbNamesNotify,0, 39692, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbNamesNotify on All\n");
CheckOffset(struct _xkbNamesNotify,type,0,1,218627)
CheckOffset(struct _xkbNamesNotify,xkbType,0,1,218628)
CheckOffset(struct _xkbNamesNotify,sequenceNumber,0,1,218629)
CheckOffset(struct _xkbNamesNotify,time,0,1,218630)
CheckOffset(struct _xkbNamesNotify,deviceID,0,1,218631)
CheckOffset(struct _xkbNamesNotify,pad1,0,1,218632)
CheckOffset(struct _xkbNamesNotify,changed,0,1,218633)
CheckOffset(struct _xkbNamesNotify,firstType,0,1,218634)
CheckOffset(struct _xkbNamesNotify,nTypes,0,1,218635)
CheckOffset(struct _xkbNamesNotify,firstLevelName,0,1,218636)
CheckOffset(struct _xkbNamesNotify,nLevelNames,0,1,218637)
CheckOffset(struct _xkbNamesNotify,pad2,0,1,218638)
CheckOffset(struct _xkbNamesNotify,nRadioGroups,0,1,218639)
CheckOffset(struct _xkbNamesNotify,nAliases,0,1,218640)
CheckOffset(struct _xkbNamesNotify,changedGroupNames,0,1,218641)
CheckOffset(struct _xkbNamesNotify,changedVirtualMods,0,1,218642)
CheckOffset(struct _xkbNamesNotify,firstKey,0,1,218643)
CheckOffset(struct _xkbNamesNotify,nKeys,0,1,218644)
CheckOffset(struct _xkbNamesNotify,changedIndicators,0,1,218645)
CheckOffset(struct _xkbNamesNotify,pad3,0,1,218646)
#endif

#if 1
CheckTypeSize(xkbNamesNotify,0, 39693, 1, 4.0, NULL, 39692, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbCompatMapNotify,0, 39694, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbCompatMapNotify on All\n");
CheckOffset(struct _xkbCompatMapNotify,type,0,1,218647)
CheckOffset(struct _xkbCompatMapNotify,xkbType,0,1,218648)
CheckOffset(struct _xkbCompatMapNotify,sequenceNumber,0,1,218649)
CheckOffset(struct _xkbCompatMapNotify,time,0,1,218650)
CheckOffset(struct _xkbCompatMapNotify,deviceID,0,1,218651)
CheckOffset(struct _xkbCompatMapNotify,changedGroups,0,1,218652)
CheckOffset(struct _xkbCompatMapNotify,firstSI,0,1,218653)
CheckOffset(struct _xkbCompatMapNotify,nSI,0,1,218654)
CheckOffset(struct _xkbCompatMapNotify,nTotalSI,0,1,218655)
CheckOffset(struct _xkbCompatMapNotify,pad1,0,1,218656)
CheckOffset(struct _xkbCompatMapNotify,pad2,0,1,218657)
CheckOffset(struct _xkbCompatMapNotify,pad3,0,1,218658)
CheckOffset(struct _xkbCompatMapNotify,pad4,0,1,218659)
#endif

#if 1
CheckTypeSize(xkbCompatMapNotify,0, 39695, 1, 4.0, NULL, 39694, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbBellNotify,0, 39696, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbBellNotify on All\n");
CheckOffset(struct _xkbBellNotify,type,0,1,218660)
CheckOffset(struct _xkbBellNotify,xkbType,0,1,218661)
CheckOffset(struct _xkbBellNotify,sequenceNumber,0,1,218662)
CheckOffset(struct _xkbBellNotify,time,0,1,218663)
CheckOffset(struct _xkbBellNotify,deviceID,0,1,218664)
CheckOffset(struct _xkbBellNotify,bellClass,0,1,218665)
CheckOffset(struct _xkbBellNotify,bellID,0,1,218666)
CheckOffset(struct _xkbBellNotify,percent,0,1,218667)
CheckOffset(struct _xkbBellNotify,pitch,0,1,218668)
CheckOffset(struct _xkbBellNotify,duration,0,1,218669)
CheckOffset(struct _xkbBellNotify,name,0,1,218670)
CheckOffset(struct _xkbBellNotify,window,0,1,218671)
CheckOffset(struct _xkbBellNotify,eventOnly,0,1,218672)
CheckOffset(struct _xkbBellNotify,pad1,0,1,218673)
CheckOffset(struct _xkbBellNotify,pad2,0,1,218674)
CheckOffset(struct _xkbBellNotify,pad3,0,1,218675)
#endif

#if 1
CheckTypeSize(xkbBellNotify,0, 39697, 1, 4.0, NULL, 39696, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbActionMessage,0, 39699, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbActionMessage on All\n");
CheckOffset(struct _xkbActionMessage,type,0,1,218676)
CheckOffset(struct _xkbActionMessage,xkbType,0,1,218677)
CheckOffset(struct _xkbActionMessage,sequenceNumber,0,1,218678)
CheckOffset(struct _xkbActionMessage,time,0,1,218679)
CheckOffset(struct _xkbActionMessage,deviceID,0,1,218680)
CheckOffset(struct _xkbActionMessage,keycode,0,1,218681)
CheckOffset(struct _xkbActionMessage,press,0,1,218682)
CheckOffset(struct _xkbActionMessage,keyEventFollows,0,1,218683)
CheckOffset(struct _xkbActionMessage,mods,0,1,218684)
CheckOffset(struct _xkbActionMessage,group,0,1,218685)
CheckOffset(struct _xkbActionMessage,message,0,1,218686)
CheckOffset(struct _xkbActionMessage,pad1,0,1,218687)
CheckOffset(struct _xkbActionMessage,pad2,0,1,218688)
CheckOffset(struct _xkbActionMessage,pad3,0,1,218689)
#endif

#if 1
CheckTypeSize(xkbActionMessage,0, 39700, 1, 4.0, NULL, 39699, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbAccessXNotify,0, 39701, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbAccessXNotify on All\n");
CheckOffset(struct _xkbAccessXNotify,type,0,1,218690)
CheckOffset(struct _xkbAccessXNotify,xkbType,0,1,218691)
CheckOffset(struct _xkbAccessXNotify,sequenceNumber,0,1,218692)
CheckOffset(struct _xkbAccessXNotify,time,0,1,218693)
CheckOffset(struct _xkbAccessXNotify,deviceID,0,1,218694)
CheckOffset(struct _xkbAccessXNotify,keycode,0,1,218695)
CheckOffset(struct _xkbAccessXNotify,detail,0,1,218696)
CheckOffset(struct _xkbAccessXNotify,slowKeysDelay,0,1,218697)
CheckOffset(struct _xkbAccessXNotify,debounceDelay,0,1,218698)
CheckOffset(struct _xkbAccessXNotify,pad1,0,1,218699)
CheckOffset(struct _xkbAccessXNotify,pad2,0,1,218700)
CheckOffset(struct _xkbAccessXNotify,pad3,0,1,218701)
CheckOffset(struct _xkbAccessXNotify,pad4,0,1,218702)
#endif

#if 1
CheckTypeSize(xkbAccessXNotify,0, 39702, 1, 4.0, NULL, 39701, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbExtensionDeviceNotify,0, 39703, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbExtensionDeviceNotify on All\n");
CheckOffset(struct _xkbExtensionDeviceNotify,type,0,1,218703)
CheckOffset(struct _xkbExtensionDeviceNotify,xkbType,0,1,218704)
CheckOffset(struct _xkbExtensionDeviceNotify,sequenceNumber,0,1,218705)
CheckOffset(struct _xkbExtensionDeviceNotify,time,0,1,218706)
CheckOffset(struct _xkbExtensionDeviceNotify,deviceID,0,1,218707)
CheckOffset(struct _xkbExtensionDeviceNotify,pad1,0,1,218708)
CheckOffset(struct _xkbExtensionDeviceNotify,reason,0,1,218709)
CheckOffset(struct _xkbExtensionDeviceNotify,ledClass,0,1,218710)
CheckOffset(struct _xkbExtensionDeviceNotify,ledID,0,1,218711)
CheckOffset(struct _xkbExtensionDeviceNotify,ledsDefined,0,1,218712)
CheckOffset(struct _xkbExtensionDeviceNotify,ledState,0,1,218713)
CheckOffset(struct _xkbExtensionDeviceNotify,firstBtn,0,1,218714)
CheckOffset(struct _xkbExtensionDeviceNotify,nBtns,0,1,218715)
CheckOffset(struct _xkbExtensionDeviceNotify,supported,0,1,218716)
CheckOffset(struct _xkbExtensionDeviceNotify,unsupported,0,1,218717)
CheckOffset(struct _xkbExtensionDeviceNotify,pad3,0,1,218718)
#endif

#if 1
CheckTypeSize(xkbExtensionDeviceNotify,0, 39704, 1, 4.0, NULL, 39703, NULL)
#endif

#if 1
CheckTypeSize(struct _xkbEvent,0, 39706, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xkbEvent on All\n");
CheckOffset(struct _xkbEvent,u,0,1,218731)
#endif

#if 1
CheckTypeSize(xkbEvent,0, 39707, 1, 4.0, NULL, 39706, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/XKBproto.h\n\n",pcnt,cnt);
return cnt;
#endif

}
