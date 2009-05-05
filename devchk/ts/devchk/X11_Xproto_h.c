/*
 * Test of X11/Xproto.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/Xproto.h"



#ifdef TET_TEST
void X11_Xproto_h()
{
#else
int X11_Xproto_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/Xproto.h\n");
#endif

printf("Checking data structures in X11/Xproto.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef sz_xSegment
	CompareConstant(sz_xSegment,8,16302,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSegment\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xPoint
	CompareConstant(sz_xPoint,4,16303,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xPoint\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xRectangle
	CompareConstant(sz_xRectangle,8,16304,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xRectangle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xArc
	CompareConstant(sz_xArc,12,16305,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xArc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xConnClientPrefix
	CompareConstant(sz_xConnClientPrefix,12,16306,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xConnClientPrefix\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xConnSetupPrefix
	CompareConstant(sz_xConnSetupPrefix,8,16307,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xConnSetupPrefix\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xConnSetup
	CompareConstant(sz_xConnSetup,32,16308,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xConnSetup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xPixmapFormat
	CompareConstant(sz_xPixmapFormat,8,16309,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xPixmapFormat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xDepth
	CompareConstant(sz_xDepth,8,16310,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xDepth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xVisualType
	CompareConstant(sz_xVisualType,24,16311,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xVisualType\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xWindowRoot
	CompareConstant(sz_xWindowRoot,40,16312,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xWindowRoot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xTimecoord
	CompareConstant(sz_xTimecoord,8,16313,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xTimecoord\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xHostEntry
	CompareConstant(sz_xHostEntry,4,16314,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xHostEntry\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xCharInfo
	CompareConstant(sz_xCharInfo,12,16315,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xCharInfo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xFontProp
	CompareConstant(sz_xFontProp,8,16316,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xFontProp\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xTextElt
	CompareConstant(sz_xTextElt,2,16317,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xTextElt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xColorItem
	CompareConstant(sz_xColorItem,12,16318,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xColorItem\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xrgb
	CompareConstant(sz_xrgb,8,16319,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xrgb\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGenericReply
	CompareConstant(sz_xGenericReply,32,16320,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGenericReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetWindowAttributesReply
	CompareConstant(sz_xGetWindowAttributesReply,44,16321,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetWindowAttributesReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetGeometryReply
	CompareConstant(sz_xGetGeometryReply,32,16322,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetGeometryReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xQueryTreeReply
	CompareConstant(sz_xQueryTreeReply,32,16323,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xQueryTreeReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xInternAtomReply
	CompareConstant(sz_xInternAtomReply,32,16324,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xInternAtomReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetAtomNameReply
	CompareConstant(sz_xGetAtomNameReply,32,16325,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetAtomNameReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetPropertyReply
	CompareConstant(sz_xGetPropertyReply,32,16326,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetPropertyReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xListPropertiesReply
	CompareConstant(sz_xListPropertiesReply,32,16327,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xListPropertiesReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetSelectionOwnerReply
	CompareConstant(sz_xGetSelectionOwnerReply,32,16328,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetSelectionOwnerReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGrabPointerReply
	CompareConstant(sz_xGrabPointerReply,32,16329,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGrabPointerReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xQueryPointerReply
	CompareConstant(sz_xQueryPointerReply,32,16330,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xQueryPointerReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetMotionEventsReply
	CompareConstant(sz_xGetMotionEventsReply,32,16331,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetMotionEventsReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xTranslateCoordsReply
	CompareConstant(sz_xTranslateCoordsReply,32,16332,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xTranslateCoordsReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetInputFocusReply
	CompareConstant(sz_xGetInputFocusReply,32,16333,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetInputFocusReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xQueryKeymapReply
	CompareConstant(sz_xQueryKeymapReply,40,16334,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xQueryKeymapReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xQueryFontReply
	CompareConstant(sz_xQueryFontReply,60,16335,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xQueryFontReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xQueryTextExtentsReply
	CompareConstant(sz_xQueryTextExtentsReply,32,16336,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xQueryTextExtentsReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xListFontsReply
	CompareConstant(sz_xListFontsReply,32,16337,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xListFontsReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetFontPathReply
	CompareConstant(sz_xGetFontPathReply,32,16338,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetFontPathReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetImageReply
	CompareConstant(sz_xGetImageReply,32,16339,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetImageReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xListInstalledColormapsReply
	CompareConstant(sz_xListInstalledColormapsReply,32,16340,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xListInstalledColormapsReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xAllocColorReply
	CompareConstant(sz_xAllocColorReply,32,16341,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xAllocColorReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xAllocNamedColorReply
	CompareConstant(sz_xAllocNamedColorReply,32,16342,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xAllocNamedColorReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xAllocColorCellsReply
	CompareConstant(sz_xAllocColorCellsReply,32,16343,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xAllocColorCellsReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xAllocColorPlanesReply
	CompareConstant(sz_xAllocColorPlanesReply,32,16344,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xAllocColorPlanesReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xQueryColorsReply
	CompareConstant(sz_xQueryColorsReply,32,16345,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xQueryColorsReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xLookupColorReply
	CompareConstant(sz_xLookupColorReply,32,16346,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xLookupColorReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xQueryBestSizeReply
	CompareConstant(sz_xQueryBestSizeReply,32,16347,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xQueryBestSizeReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xQueryExtensionReply
	CompareConstant(sz_xQueryExtensionReply,32,16348,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xQueryExtensionReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xListExtensionsReply
	CompareConstant(sz_xListExtensionsReply,32,16349,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xListExtensionsReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetMappingReply
	CompareConstant(sz_xSetMappingReply,32,16350,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetMappingReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetKeyboardControlReply
	CompareConstant(sz_xGetKeyboardControlReply,52,16351,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetKeyboardControlReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetPointerControlReply
	CompareConstant(sz_xGetPointerControlReply,32,16352,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetPointerControlReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetScreenSaverReply
	CompareConstant(sz_xGetScreenSaverReply,32,16353,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetScreenSaverReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xListHostsReply
	CompareConstant(sz_xListHostsReply,32,16354,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xListHostsReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetModifierMappingReply
	CompareConstant(sz_xSetModifierMappingReply,32,16355,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetModifierMappingReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xError
	CompareConstant(sz_xError,32,16356,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xError\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xEvent
	CompareConstant(sz_xEvent,32,16357,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xEvent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xKeymapEvent
	CompareConstant(sz_xKeymapEvent,32,16358,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xKeymapEvent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xReq
	CompareConstant(sz_xReq,4,16359,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xResourceReq
	CompareConstant(sz_xResourceReq,8,16360,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xResourceReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xCreateWindowReq
	CompareConstant(sz_xCreateWindowReq,32,16361,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xCreateWindowReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xChangeWindowAttributesReq
	CompareConstant(sz_xChangeWindowAttributesReq,12,16362,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xChangeWindowAttributesReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xChangeSaveSetReq
	CompareConstant(sz_xChangeSaveSetReq,8,16363,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xChangeSaveSetReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xReparentWindowReq
	CompareConstant(sz_xReparentWindowReq,16,16364,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xReparentWindowReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xConfigureWindowReq
	CompareConstant(sz_xConfigureWindowReq,12,16365,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xConfigureWindowReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xCirculateWindowReq
	CompareConstant(sz_xCirculateWindowReq,8,16366,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xCirculateWindowReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xInternAtomReq
	CompareConstant(sz_xInternAtomReq,8,16367,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xInternAtomReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xChangePropertyReq
	CompareConstant(sz_xChangePropertyReq,24,16368,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xChangePropertyReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xDeletePropertyReq
	CompareConstant(sz_xDeletePropertyReq,12,16369,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xDeletePropertyReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetPropertyReq
	CompareConstant(sz_xGetPropertyReq,24,16370,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetPropertyReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetSelectionOwnerReq
	CompareConstant(sz_xSetSelectionOwnerReq,16,16371,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetSelectionOwnerReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xConvertSelectionReq
	CompareConstant(sz_xConvertSelectionReq,24,16372,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xConvertSelectionReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSendEventReq
	CompareConstant(sz_xSendEventReq,44,16373,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSendEventReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGrabPointerReq
	CompareConstant(sz_xGrabPointerReq,24,16374,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGrabPointerReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGrabButtonReq
	CompareConstant(sz_xGrabButtonReq,24,16375,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGrabButtonReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xUngrabButtonReq
	CompareConstant(sz_xUngrabButtonReq,12,16376,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xUngrabButtonReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xChangeActivePointerGrabReq
	CompareConstant(sz_xChangeActivePointerGrabReq,16,16377,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xChangeActivePointerGrabReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGrabKeyboardReq
	CompareConstant(sz_xGrabKeyboardReq,16,16378,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGrabKeyboardReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGrabKeyReq
	CompareConstant(sz_xGrabKeyReq,16,16379,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGrabKeyReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xUngrabKeyReq
	CompareConstant(sz_xUngrabKeyReq,12,16380,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xUngrabKeyReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xAllowEventsReq
	CompareConstant(sz_xAllowEventsReq,8,16381,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xAllowEventsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetMotionEventsReq
	CompareConstant(sz_xGetMotionEventsReq,16,16382,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetMotionEventsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xTranslateCoordsReq
	CompareConstant(sz_xTranslateCoordsReq,16,16383,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xTranslateCoordsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xWarpPointerReq
	CompareConstant(sz_xWarpPointerReq,24,16384,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xWarpPointerReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetInputFocusReq
	CompareConstant(sz_xSetInputFocusReq,12,16385,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetInputFocusReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xOpenFontReq
	CompareConstant(sz_xOpenFontReq,12,16386,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xOpenFontReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xQueryTextExtentsReq
	CompareConstant(sz_xQueryTextExtentsReq,8,16387,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xQueryTextExtentsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xListFontsReq
	CompareConstant(sz_xListFontsReq,8,16388,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xListFontsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetFontPathReq
	CompareConstant(sz_xSetFontPathReq,8,16389,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetFontPathReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xCreatePixmapReq
	CompareConstant(sz_xCreatePixmapReq,16,16390,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xCreatePixmapReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xCreateGCReq
	CompareConstant(sz_xCreateGCReq,16,16391,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xCreateGCReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xChangeGCReq
	CompareConstant(sz_xChangeGCReq,12,16392,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xChangeGCReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xCopyGCReq
	CompareConstant(sz_xCopyGCReq,16,16393,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xCopyGCReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetDashesReq
	CompareConstant(sz_xSetDashesReq,12,16394,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetDashesReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetClipRectanglesReq
	CompareConstant(sz_xSetClipRectanglesReq,12,16395,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetClipRectanglesReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xCopyAreaReq
	CompareConstant(sz_xCopyAreaReq,28,16396,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xCopyAreaReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xCopyPlaneReq
	CompareConstant(sz_xCopyPlaneReq,32,16397,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xCopyPlaneReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xPolyPointReq
	CompareConstant(sz_xPolyPointReq,12,16398,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xPolyPointReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xPolySegmentReq
	CompareConstant(sz_xPolySegmentReq,12,16399,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xPolySegmentReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xFillPolyReq
	CompareConstant(sz_xFillPolyReq,16,16400,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xFillPolyReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xPutImageReq
	CompareConstant(sz_xPutImageReq,24,16401,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xPutImageReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetImageReq
	CompareConstant(sz_xGetImageReq,20,16402,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetImageReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xPolyTextReq
	CompareConstant(sz_xPolyTextReq,16,16403,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xPolyTextReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xImageTextReq
	CompareConstant(sz_xImageTextReq,16,16404,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xImageTextReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xCreateColormapReq
	CompareConstant(sz_xCreateColormapReq,16,16405,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xCreateColormapReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xCopyColormapAndFreeReq
	CompareConstant(sz_xCopyColormapAndFreeReq,12,16406,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xCopyColormapAndFreeReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xAllocColorReq
	CompareConstant(sz_xAllocColorReq,16,16407,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xAllocColorReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xAllocNamedColorReq
	CompareConstant(sz_xAllocNamedColorReq,12,16408,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xAllocNamedColorReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xAllocColorCellsReq
	CompareConstant(sz_xAllocColorCellsReq,12,16409,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xAllocColorCellsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xAllocColorPlanesReq
	CompareConstant(sz_xAllocColorPlanesReq,16,16410,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xAllocColorPlanesReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xFreeColorsReq
	CompareConstant(sz_xFreeColorsReq,12,16411,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xFreeColorsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xStoreColorsReq
	CompareConstant(sz_xStoreColorsReq,8,16412,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xStoreColorsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xStoreNamedColorReq
	CompareConstant(sz_xStoreNamedColorReq,16,16413,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xStoreNamedColorReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xQueryColorsReq
	CompareConstant(sz_xQueryColorsReq,8,16414,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xQueryColorsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xLookupColorReq
	CompareConstant(sz_xLookupColorReq,12,16415,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xLookupColorReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xCreateCursorReq
	CompareConstant(sz_xCreateCursorReq,32,16416,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xCreateCursorReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xCreateGlyphCursorReq
	CompareConstant(sz_xCreateGlyphCursorReq,32,16417,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xCreateGlyphCursorReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xRecolorCursorReq
	CompareConstant(sz_xRecolorCursorReq,20,16418,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xRecolorCursorReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xQueryBestSizeReq
	CompareConstant(sz_xQueryBestSizeReq,12,16419,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xQueryBestSizeReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xQueryExtensionReq
	CompareConstant(sz_xQueryExtensionReq,8,16420,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xQueryExtensionReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xChangeKeyboardControlReq
	CompareConstant(sz_xChangeKeyboardControlReq,8,16421,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xChangeKeyboardControlReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xBellReq
	CompareConstant(sz_xBellReq,4,16422,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xBellReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xChangePointerControlReq
	CompareConstant(sz_xChangePointerControlReq,12,16423,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xChangePointerControlReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetScreenSaverReq
	CompareConstant(sz_xSetScreenSaverReq,12,16424,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetScreenSaverReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xChangeHostsReq
	CompareConstant(sz_xChangeHostsReq,8,16425,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xChangeHostsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xListHostsReq
	CompareConstant(sz_xListHostsReq,4,16426,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xListHostsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xChangeModeReq
	CompareConstant(sz_xChangeModeReq,4,16427,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xChangeModeReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xRotatePropertiesReq
	CompareConstant(sz_xRotatePropertiesReq,12,16428,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xRotatePropertiesReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xReply
	CompareConstant(sz_xReply,32,16429,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGrabKeyboardReply
	CompareConstant(sz_xGrabKeyboardReply,32,16430,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGrabKeyboardReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xListFontsWithInfoReply
	CompareConstant(sz_xListFontsWithInfoReply,60,16431,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xListFontsWithInfoReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetPointerMappingReply
	CompareConstant(sz_xSetPointerMappingReply,32,16432,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetPointerMappingReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetKeyboardMappingReply
	CompareConstant(sz_xGetKeyboardMappingReply,32,16433,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetKeyboardMappingReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetPointerMappingReply
	CompareConstant(sz_xGetPointerMappingReply,32,16434,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetPointerMappingReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetModifierMappingReply
	CompareConstant(sz_xGetModifierMappingReply,32,16435,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetModifierMappingReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xListFontsWithInfoReq
	CompareConstant(sz_xListFontsWithInfoReq,8,16436,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xListFontsWithInfoReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xPolyLineReq
	CompareConstant(sz_xPolyLineReq,12,16437,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xPolyLineReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xPolyArcReq
	CompareConstant(sz_xPolyArcReq,12,16438,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xPolyArcReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xPolyRectangleReq
	CompareConstant(sz_xPolyRectangleReq,12,16439,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xPolyRectangleReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xPolyFillRectangleReq
	CompareConstant(sz_xPolyFillRectangleReq,12,16440,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xPolyFillRectangleReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xPolyFillArcReq
	CompareConstant(sz_xPolyFillArcReq,12,16441,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xPolyFillArcReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xPolyText8Req
	CompareConstant(sz_xPolyText8Req,16,16442,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xPolyText8Req\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xPolyText16Req
	CompareConstant(sz_xPolyText16Req,16,16443,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xPolyText16Req\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xImageText8Req
	CompareConstant(sz_xImageText8Req,16,16444,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xImageText8Req\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xImageText16Req
	CompareConstant(sz_xImageText16Req,16,16445,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xImageText16Req\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetPointerMappingReq
	CompareConstant(sz_xSetPointerMappingReq,4,16446,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetPointerMappingReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xForceScreenSaverReq
	CompareConstant(sz_xForceScreenSaverReq,4,16447,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xForceScreenSaverReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetCloseDownModeReq
	CompareConstant(sz_xSetCloseDownModeReq,4,16448,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetCloseDownModeReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xClearAreaReq
	CompareConstant(sz_xClearAreaReq,16,16449,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xClearAreaReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetAccessControlReq
	CompareConstant(sz_xSetAccessControlReq,4,16450,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetAccessControlReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetKeyboardMappingReq
	CompareConstant(sz_xGetKeyboardMappingReq,8,16451,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetKeyboardMappingReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetModifierMappingReq
	CompareConstant(sz_xSetModifierMappingReq,4,16452,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetModifierMappingReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xPropIconSize
	CompareConstant(sz_xPropIconSize,24,16453,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xPropIconSize\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xChangeKeyboardMappingReq
	CompareConstant(sz_xChangeKeyboardMappingReq,8,16454,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sz_xChangeKeyboardMappingReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_TCP_PORT
	CompareConstant(X_TCP_PORT,6000,16467,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_TCP_PORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef xTrue
	CompareConstant(xTrue,1,16468,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: xTrue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef xFalse
	CompareConstant(xFalse,0,16469,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: xFalse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELFlagFocus
	CompareConstant(ELFlagFocus,(1<<0),16470,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ELFlagFocus\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELFlagSameScreen
	CompareConstant(ELFlagSameScreen,(1<<1),16471,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ELFlagSameScreen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XEventSize
	CompareConstant(XEventSize,(sizeof(xEvent)),16472,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XEventSize\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_Reply
	CompareConstant(X_Reply,1,16473,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_Reply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_Error
	CompareConstant(X_Error,0,16474,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_Error\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_CreateWindow
	CompareConstant(X_CreateWindow,1,16475,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_CreateWindow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ChangeWindowAttributes
	CompareConstant(X_ChangeWindowAttributes,2,16476,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ChangeWindowAttributes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetWindowAttributes
	CompareConstant(X_GetWindowAttributes,3,16477,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetWindowAttributes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_DestroyWindow
	CompareConstant(X_DestroyWindow,4,16478,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_DestroyWindow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_DestroySubwindows
	CompareConstant(X_DestroySubwindows,5,16479,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_DestroySubwindows\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ChangeSaveSet
	CompareConstant(X_ChangeSaveSet,6,16480,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ChangeSaveSet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ReparentWindow
	CompareConstant(X_ReparentWindow,7,16481,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ReparentWindow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_MapWindow
	CompareConstant(X_MapWindow,8,16482,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_MapWindow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_MapSubwindows
	CompareConstant(X_MapSubwindows,9,16483,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_MapSubwindows\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_UnmapWindow
	CompareConstant(X_UnmapWindow,10,16484,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_UnmapWindow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_UnmapSubwindows
	CompareConstant(X_UnmapSubwindows,11,16485,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_UnmapSubwindows\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ConfigureWindow
	CompareConstant(X_ConfigureWindow,12,16486,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ConfigureWindow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_CirculateWindow
	CompareConstant(X_CirculateWindow,13,16487,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_CirculateWindow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetGeometry
	CompareConstant(X_GetGeometry,14,16488,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetGeometry\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_QueryTree
	CompareConstant(X_QueryTree,15,16489,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_QueryTree\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_InternAtom
	CompareConstant(X_InternAtom,16,16490,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_InternAtom\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetAtomName
	CompareConstant(X_GetAtomName,17,16491,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetAtomName\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ChangeProperty
	CompareConstant(X_ChangeProperty,18,16492,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ChangeProperty\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_DeleteProperty
	CompareConstant(X_DeleteProperty,19,16493,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_DeleteProperty\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetProperty
	CompareConstant(X_GetProperty,20,16494,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetProperty\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ListProperties
	CompareConstant(X_ListProperties,21,16495,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ListProperties\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SetSelectionOwner
	CompareConstant(X_SetSelectionOwner,22,16496,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_SetSelectionOwner\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetSelectionOwner
	CompareConstant(X_GetSelectionOwner,23,16497,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetSelectionOwner\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ConvertSelection
	CompareConstant(X_ConvertSelection,24,16498,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ConvertSelection\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SendEvent
	CompareConstant(X_SendEvent,25,16499,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_SendEvent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GrabPointer
	CompareConstant(X_GrabPointer,26,16500,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GrabPointer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_UngrabPointer
	CompareConstant(X_UngrabPointer,27,16501,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_UngrabPointer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GrabButton
	CompareConstant(X_GrabButton,28,16502,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GrabButton\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_UngrabButton
	CompareConstant(X_UngrabButton,29,16503,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_UngrabButton\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ChangeActivePointerGrab
	CompareConstant(X_ChangeActivePointerGrab,30,16504,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ChangeActivePointerGrab\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GrabKeyboard
	CompareConstant(X_GrabKeyboard,31,16505,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GrabKeyboard\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_UngrabKeyboard
	CompareConstant(X_UngrabKeyboard,32,16506,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_UngrabKeyboard\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GrabKey
	CompareConstant(X_GrabKey,33,16507,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GrabKey\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_UngrabKey
	CompareConstant(X_UngrabKey,34,16508,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_UngrabKey\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_AllowEvents
	CompareConstant(X_AllowEvents,35,16509,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_AllowEvents\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GrabServer
	CompareConstant(X_GrabServer,36,16510,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GrabServer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_UngrabServer
	CompareConstant(X_UngrabServer,37,16511,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_UngrabServer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_QueryPointer
	CompareConstant(X_QueryPointer,38,16512,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_QueryPointer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetMotionEvents
	CompareConstant(X_GetMotionEvents,39,16513,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetMotionEvents\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_TranslateCoords
	CompareConstant(X_TranslateCoords,40,16514,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_TranslateCoords\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_WarpPointer
	CompareConstant(X_WarpPointer,41,16515,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_WarpPointer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SetInputFocus
	CompareConstant(X_SetInputFocus,42,16516,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_SetInputFocus\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetInputFocus
	CompareConstant(X_GetInputFocus,43,16517,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetInputFocus\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_QueryKeymap
	CompareConstant(X_QueryKeymap,44,16518,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_QueryKeymap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_OpenFont
	CompareConstant(X_OpenFont,45,16519,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_OpenFont\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_CloseFont
	CompareConstant(X_CloseFont,46,16520,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_CloseFont\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_QueryFont
	CompareConstant(X_QueryFont,47,16521,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_QueryFont\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_QueryTextExtents
	CompareConstant(X_QueryTextExtents,48,16522,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_QueryTextExtents\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ListFonts
	CompareConstant(X_ListFonts,49,16523,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ListFonts\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ListFontsWithInfo
	CompareConstant(X_ListFontsWithInfo,50,16524,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ListFontsWithInfo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SetFontPath
	CompareConstant(X_SetFontPath,51,16525,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_SetFontPath\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetFontPath
	CompareConstant(X_GetFontPath,52,16526,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetFontPath\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_CreatePixmap
	CompareConstant(X_CreatePixmap,53,16527,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_CreatePixmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_FreePixmap
	CompareConstant(X_FreePixmap,54,16528,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_FreePixmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_CreateGC
	CompareConstant(X_CreateGC,55,16529,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_CreateGC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ChangeGC
	CompareConstant(X_ChangeGC,56,16530,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ChangeGC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_CopyGC
	CompareConstant(X_CopyGC,57,16531,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_CopyGC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SetDashes
	CompareConstant(X_SetDashes,58,16532,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_SetDashes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SetClipRectangles
	CompareConstant(X_SetClipRectangles,59,16533,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_SetClipRectangles\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_FreeGC
	CompareConstant(X_FreeGC,60,16534,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_FreeGC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ClearArea
	CompareConstant(X_ClearArea,61,16535,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ClearArea\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_CopyArea
	CompareConstant(X_CopyArea,62,16536,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_CopyArea\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_CopyPlane
	CompareConstant(X_CopyPlane,63,16537,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_CopyPlane\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_PolyPoint
	CompareConstant(X_PolyPoint,64,16538,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_PolyPoint\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_PolyLine
	CompareConstant(X_PolyLine,65,16539,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_PolyLine\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_PolySegment
	CompareConstant(X_PolySegment,66,16540,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_PolySegment\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_PolyRectangle
	CompareConstant(X_PolyRectangle,67,16541,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_PolyRectangle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_PolyArc
	CompareConstant(X_PolyArc,68,16542,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_PolyArc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_FillPoly
	CompareConstant(X_FillPoly,69,16543,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_FillPoly\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_PolyFillRectangle
	CompareConstant(X_PolyFillRectangle,70,16544,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_PolyFillRectangle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_PolyFillArc
	CompareConstant(X_PolyFillArc,71,16545,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_PolyFillArc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_PutImage
	CompareConstant(X_PutImage,72,16546,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_PutImage\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetImage
	CompareConstant(X_GetImage,73,16547,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetImage\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_PolyText8
	CompareConstant(X_PolyText8,74,16548,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_PolyText8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_PolyText16
	CompareConstant(X_PolyText16,75,16549,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_PolyText16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ImageText8
	CompareConstant(X_ImageText8,76,16550,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ImageText8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ImageText16
	CompareConstant(X_ImageText16,77,16551,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ImageText16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_CreateColormap
	CompareConstant(X_CreateColormap,78,16552,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_CreateColormap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_FreeColormap
	CompareConstant(X_FreeColormap,79,16553,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_FreeColormap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_CopyColormapAndFree
	CompareConstant(X_CopyColormapAndFree,80,16554,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_CopyColormapAndFree\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_InstallColormap
	CompareConstant(X_InstallColormap,81,16555,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_InstallColormap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_UninstallColormap
	CompareConstant(X_UninstallColormap,82,16556,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_UninstallColormap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ListInstalledColormaps
	CompareConstant(X_ListInstalledColormaps,83,16557,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ListInstalledColormaps\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_AllocColor
	CompareConstant(X_AllocColor,84,16558,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_AllocColor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_AllocNamedColor
	CompareConstant(X_AllocNamedColor,85,16559,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_AllocNamedColor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_AllocColorCells
	CompareConstant(X_AllocColorCells,86,16560,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_AllocColorCells\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_AllocColorPlanes
	CompareConstant(X_AllocColorPlanes,87,16561,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_AllocColorPlanes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_FreeColors
	CompareConstant(X_FreeColors,88,16562,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_FreeColors\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_StoreColors
	CompareConstant(X_StoreColors,89,16563,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_StoreColors\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_StoreNamedColor
	CompareConstant(X_StoreNamedColor,90,16564,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_StoreNamedColor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_QueryColors
	CompareConstant(X_QueryColors,91,16565,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_QueryColors\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_LookupColor
	CompareConstant(X_LookupColor,92,16566,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_LookupColor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_CreateCursor
	CompareConstant(X_CreateCursor,93,16567,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_CreateCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_CreateGlyphCursor
	CompareConstant(X_CreateGlyphCursor,94,16568,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_CreateGlyphCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_FreeCursor
	CompareConstant(X_FreeCursor,95,16569,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_FreeCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RecolorCursor
	CompareConstant(X_RecolorCursor,96,16570,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_RecolorCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_QueryBestSize
	CompareConstant(X_QueryBestSize,97,16571,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_QueryBestSize\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_QueryExtension
	CompareConstant(X_QueryExtension,98,16572,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_QueryExtension\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ListExtensions
	CompareConstant(X_ListExtensions,99,16573,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ListExtensions\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ChangeKeyboardMapping
	CompareConstant(X_ChangeKeyboardMapping,100,16574,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ChangeKeyboardMapping\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetKeyboardMapping
	CompareConstant(X_GetKeyboardMapping,101,16575,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetKeyboardMapping\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ChangeKeyboardControl
	CompareConstant(X_ChangeKeyboardControl,102,16576,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ChangeKeyboardControl\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetKeyboardControl
	CompareConstant(X_GetKeyboardControl,103,16577,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetKeyboardControl\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_Bell
	CompareConstant(X_Bell,104,16578,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_Bell\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ChangePointerControl
	CompareConstant(X_ChangePointerControl,105,16579,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ChangePointerControl\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetPointerControl
	CompareConstant(X_GetPointerControl,106,16580,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetPointerControl\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SetScreenSaver
	CompareConstant(X_SetScreenSaver,107,16581,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_SetScreenSaver\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetScreenSaver
	CompareConstant(X_GetScreenSaver,108,16582,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetScreenSaver\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ChangeHosts
	CompareConstant(X_ChangeHosts,109,16583,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ChangeHosts\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ListHosts
	CompareConstant(X_ListHosts,110,16584,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ListHosts\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SetAccessControl
	CompareConstant(X_SetAccessControl,111,16585,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_SetAccessControl\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SetCloseDownMode
	CompareConstant(X_SetCloseDownMode,112,16586,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_SetCloseDownMode\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_KillClient
	CompareConstant(X_KillClient,113,16587,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_KillClient\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RotateProperties
	CompareConstant(X_RotateProperties,114,16588,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_RotateProperties\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ForceScreenSaver
	CompareConstant(X_ForceScreenSaver,115,16589,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ForceScreenSaver\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SetPointerMapping
	CompareConstant(X_SetPointerMapping,116,16590,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_SetPointerMapping\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetPointerMapping
	CompareConstant(X_GetPointerMapping,117,16591,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetPointerMapping\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SetModifierMapping
	CompareConstant(X_SetModifierMapping,118,16592,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_SetModifierMapping\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetModifierMapping
	CompareConstant(X_GetModifierMapping,119,16593,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetModifierMapping\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_NoOperation
	CompareConstant(X_NoOperation,127,16594,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_NoOperation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/Xproto.h depends on X11/Xprotostr.h */
#endif

#if 1
CheckTypeSize(struct _xEvent,0, 32383, 1, , NULL, 0, NULL)
Msg("Missing member data for _xEvent on All\n");
CheckOffset(struct _xEvent,u,0,1,216266)
#endif

#if 1
CheckTypeSize(xEvent,0, 32384, 1, 1.0, NULL, 32383, NULL)
#endif

#if 1
CheckTypeSize(xError,0, 32386, 1, 1.0, NULL, 36577, NULL)
#endif

#if 1
CheckTypeSize(KeyButMask,0, 36152, 1, 1.0, NULL, 8957, NULL)
#endif

#if 1
CheckTypeSize(xConnClientPrefix,0, 36468, 1, 1.0, NULL, 36467, NULL)
#endif

#if 1
CheckTypeSize(xConnSetupPrefix,0, 36470, 1, 1.0, NULL, 36469, NULL)
#endif

#if 1
CheckTypeSize(xConnSetup,0, 36472, 1, 1.0, NULL, 36471, NULL)
#endif

#if 1
CheckTypeSize(xPixmapFormat,0, 36474, 1, 1.0, NULL, 36473, NULL)
#endif

#if 1
CheckTypeSize(xDepth,0, 36476, 1, 1.0, NULL, 36475, NULL)
#endif

#if 1
CheckTypeSize(xVisualType,0, 36478, 1, 1.0, NULL, 36477, NULL)
#endif

#if 1
CheckTypeSize(xWindowRoot,0, 36480, 1, 1.0, NULL, 36479, NULL)
#endif

#if 1
CheckTypeSize(xTimecoord,0, 36482, 1, 1.0, NULL, 36481, NULL)
#endif

#if 1
CheckTypeSize(xHostEntry,0, 36484, 1, 1.0, NULL, 36483, NULL)
#endif

#if 1
CheckTypeSize(xCharInfo,0, 36486, 1, 1.0, NULL, 36485, NULL)
#endif

#if 1
CheckTypeSize(xFontProp,0, 36488, 1, 1.0, NULL, 36487, NULL)
#endif

#if 1
CheckTypeSize(xTextElt,0, 36490, 1, 1.0, NULL, 36489, NULL)
#endif

#if 1
CheckTypeSize(xColorItem,0, 36492, 1, 1.0, NULL, 36491, NULL)
#endif

#if 1
CheckTypeSize(xrgb,0, 36494, 1, 1.0, NULL, 36493, NULL)
#endif

#if 1
CheckTypeSize(KEYCODE,0, 36495, 1, 1.0, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(xGenericReply,0, 36497, 1, 1.0, NULL, 36496, NULL)
#endif

#if 1
CheckTypeSize(xGetWindowAttributesReply,0, 36499, 1, 1.0, NULL, 36498, NULL)
#endif

#if 1
CheckTypeSize(xGetGeometryReply,0, 36501, 1, 1.0, NULL, 36500, NULL)
#endif

#if 1
CheckTypeSize(xQueryTreeReply,0, 36503, 1, 1.0, NULL, 36502, NULL)
#endif

#if 1
CheckTypeSize(xInternAtomReply,0, 36505, 1, 1.0, NULL, 36504, NULL)
#endif

#if 1
CheckTypeSize(xGetAtomNameReply,0, 36507, 1, 1.0, NULL, 36506, NULL)
#endif

#if 1
CheckTypeSize(xGetPropertyReply,0, 36509, 1, 1.0, NULL, 36508, NULL)
#endif

#if 1
CheckTypeSize(xListPropertiesReply,0, 36511, 1, 1.0, NULL, 36510, NULL)
#endif

#if 1
CheckTypeSize(xGetSelectionOwnerReply,0, 36513, 1, 1.0, NULL, 36512, NULL)
#endif

#if 1
CheckTypeSize(xGrabPointerReply,0, 36515, 1, 1.0, NULL, 36514, NULL)
#endif

#if 1
CheckTypeSize(xGrabKeyboardReply,0, 36516, 1, 1.0, NULL, 36515, NULL)
#endif

#if 1
CheckTypeSize(xQueryPointerReply,0, 36518, 1, 1.0, NULL, 36517, NULL)
#endif

#if 1
CheckTypeSize(xGetMotionEventsReply,0, 36520, 1, 1.0, NULL, 36519, NULL)
#endif

#if 1
CheckTypeSize(xTranslateCoordsReply,0, 36522, 1, 1.0, NULL, 36521, NULL)
#endif

#if 1
CheckTypeSize(xGetInputFocusReply,0, 36524, 1, 1.0, NULL, 36523, NULL)
#endif

#if 1
CheckTypeSize(xQueryKeymapReply,0, 36526, 1, 1.0, NULL, 36525, NULL)
#endif

#if 1
CheckTypeSize(struct _xQueryFontReply,0, 36527, 1, , NULL, 0, NULL)
Msg("Missing member data for _xQueryFontReply on All\n");
CheckOffset(struct _xQueryFontReply,type,0,1,215188)
CheckOffset(struct _xQueryFontReply,pad1,0,1,215189)
CheckOffset(struct _xQueryFontReply,sequenceNumber,0,1,215190)
CheckOffset(struct _xQueryFontReply,length,0,1,215191)
CheckOffset(struct _xQueryFontReply,minBounds,0,1,215192)
CheckOffset(struct _xQueryFontReply,walign1,0,1,215193)
CheckOffset(struct _xQueryFontReply,maxBounds,0,1,215194)
CheckOffset(struct _xQueryFontReply,walign2,0,1,215195)
CheckOffset(struct _xQueryFontReply,minCharOrByte2,0,1,215196)
CheckOffset(struct _xQueryFontReply,maxCharOrByte2,0,1,215197)
CheckOffset(struct _xQueryFontReply,defaultChar,0,1,215198)
CheckOffset(struct _xQueryFontReply,nFontProps,0,1,215199)
CheckOffset(struct _xQueryFontReply,drawDirection,0,1,215200)
CheckOffset(struct _xQueryFontReply,minByte1,0,1,215201)
CheckOffset(struct _xQueryFontReply,maxByte1,0,1,215202)
CheckOffset(struct _xQueryFontReply,allCharsExist,0,1,215203)
CheckOffset(struct _xQueryFontReply,fontAscent,0,1,215204)
CheckOffset(struct _xQueryFontReply,fontDescent,0,1,215205)
CheckOffset(struct _xQueryFontReply,nCharInfos,0,1,215206)
#endif

#if 1
CheckTypeSize(xQueryFontReply,0, 36528, 1, 1.0, NULL, 36527, NULL)
#endif

#if 1
CheckTypeSize(xQueryTextExtentsReply,0, 36530, 1, 1.0, NULL, 36529, NULL)
#endif

#if 1
CheckTypeSize(xListFontsReply,0, 36532, 1, 1.0, NULL, 36531, NULL)
#endif

#if 1
CheckTypeSize(xListFontsWithInfoReply,0, 36534, 1, 1.0, NULL, 36533, NULL)
#endif

#if 1
CheckTypeSize(xGetFontPathReply,0, 36536, 1, 1.0, NULL, 36535, NULL)
#endif

#if 1
CheckTypeSize(xGetImageReply,0, 36538, 1, 1.0, NULL, 36537, NULL)
#endif

#if 1
CheckTypeSize(xListInstalledColormapsReply,0, 36540, 1, 1.0, NULL, 36539, NULL)
#endif

#if 1
CheckTypeSize(xAllocColorReply,0, 36542, 1, 1.0, NULL, 36541, NULL)
#endif

#if 1
CheckTypeSize(xAllocNamedColorReply,0, 36544, 1, 1.0, NULL, 36543, NULL)
#endif

#if 1
CheckTypeSize(xAllocColorCellsReply,0, 36546, 1, 1.0, NULL, 36545, NULL)
#endif

#if 1
CheckTypeSize(xAllocColorPlanesReply,0, 36548, 1, 1.0, NULL, 36547, NULL)
#endif

#if 1
CheckTypeSize(xQueryColorsReply,0, 36550, 1, 1.0, NULL, 36549, NULL)
#endif

#if 1
CheckTypeSize(xLookupColorReply,0, 36552, 1, 1.0, NULL, 36551, NULL)
#endif

#if 1
CheckTypeSize(xQueryBestSizeReply,0, 36554, 1, 1.0, NULL, 36553, NULL)
#endif

#if 1
CheckTypeSize(xQueryExtensionReply,0, 36556, 1, 1.0, NULL, 36555, NULL)
#endif

#if 1
CheckTypeSize(xListExtensionsReply,0, 36558, 1, 1.0, NULL, 36557, NULL)
#endif

#if 1
CheckTypeSize(xSetMappingReply,0, 36560, 1, 1.0, NULL, 36559, NULL)
#endif

#if 1
CheckTypeSize(xSetPointerMappingReply,0, 36561, 1, 1.0, NULL, 36560, NULL)
#endif

#if 1
CheckTypeSize(xSetModifierMappingReply,0, 36562, 1, 1.0, NULL, 36560, NULL)
#endif

#if 1
CheckTypeSize(xGetPointerMappingReply,0, 36564, 1, 1.0, NULL, 36563, NULL)
#endif

#if 1
CheckTypeSize(xGetKeyboardMappingReply,0, 36566, 1, 1.0, NULL, 36565, NULL)
#endif

#if 1
CheckTypeSize(xGetModifierMappingReply,0, 36568, 1, 1.0, NULL, 36567, NULL)
#endif

#if 1
CheckTypeSize(xGetKeyboardControlReply,0, 36570, 1, 1.0, NULL, 36569, NULL)
#endif

#if 1
CheckTypeSize(xGetPointerControlReply,0, 36572, 1, 1.0, NULL, 36571, NULL)
#endif

#if 1
CheckTypeSize(xGetScreenSaverReply,0, 36574, 1, 1.0, NULL, 36573, NULL)
#endif

#if 1
CheckTypeSize(xListHostsReply,0, 36576, 1, 1.0, NULL, 36575, NULL)
#endif

#if 1
CheckTypeSize(xKeymapEvent,0, 36612, 1, 1.0, NULL, 36611, NULL)
#endif

#if 1
CheckTypeSize(struct _xReq,0, 36615, 1, , NULL, 0, NULL)
Msg("Missing member data for _xReq on All\n");
CheckOffset(struct _xReq,reqType,0,1,215759)
CheckOffset(struct _xReq,data,0,1,215760)
CheckOffset(struct _xReq,length,0,1,215761)
#endif

#if 1
CheckTypeSize(xReq,0, 36616, 1, 1.0, NULL, 36615, NULL)
#endif

#if 1
CheckTypeSize(xResourceReq,0, 36618, 1, 1.0, NULL, 36617, NULL)
#endif

#if 1
CheckTypeSize(xCreateWindowReq,0, 36620, 1, 1.0, NULL, 36619, NULL)
#endif

#if 1
CheckTypeSize(xChangeWindowAttributesReq,0, 36622, 1, 1.0, NULL, 36621, NULL)
#endif

#if 1
CheckTypeSize(xChangeSaveSetReq,0, 36624, 1, 1.0, NULL, 36623, NULL)
#endif

#if 1
CheckTypeSize(xReparentWindowReq,0, 36626, 1, 1.0, NULL, 36625, NULL)
#endif

#if 1
CheckTypeSize(xConfigureWindowReq,0, 36628, 1, 1.0, NULL, 36627, NULL)
#endif

#if 1
CheckTypeSize(xCirculateWindowReq,0, 36630, 1, 1.0, NULL, 36629, NULL)
#endif

#if 1
CheckTypeSize(xInternAtomReq,0, 36632, 1, 1.0, NULL, 36631, NULL)
#endif

#if 1
CheckTypeSize(xChangePropertyReq,0, 36635, 1, 1.0, NULL, 36634, NULL)
#endif

#if 1
CheckTypeSize(xDeletePropertyReq,0, 36637, 1, 1.0, NULL, 36636, NULL)
#endif

#if 1
CheckTypeSize(xGetPropertyReq,0, 36639, 1, 1.0, NULL, 36638, NULL)
#endif

#if 1
CheckTypeSize(xSetSelectionOwnerReq,0, 36641, 1, 1.0, NULL, 36640, NULL)
#endif

#if 1
CheckTypeSize(xConvertSelectionReq,0, 36643, 1, 1.0, NULL, 36642, NULL)
#endif

#if 1
CheckTypeSize(xGrabPointerReq,0, 36647, 1, 1.0, NULL, 36646, NULL)
#endif

#if 1
CheckTypeSize(xGrabButtonReq,0, 36649, 1, 1.0, NULL, 36648, NULL)
#endif

#if 1
CheckTypeSize(xUngrabButtonReq,0, 36651, 1, 1.0, NULL, 36650, NULL)
#endif

#if 1
CheckTypeSize(xChangeActivePointerGrabReq,0, 36653, 1, 1.0, NULL, 36652, NULL)
#endif

#if 1
CheckTypeSize(xGrabKeyboardReq,0, 36655, 1, 1.0, NULL, 36654, NULL)
#endif

#if 1
CheckTypeSize(xGrabKeyReq,0, 36657, 1, 1.0, NULL, 36656, NULL)
#endif

#if 1
CheckTypeSize(xUngrabKeyReq,0, 36659, 1, 1.0, NULL, 36658, NULL)
#endif

#if 1
CheckTypeSize(xAllowEventsReq,0, 36661, 1, 1.0, NULL, 36660, NULL)
#endif

#if 1
CheckTypeSize(xGetMotionEventsReq,0, 36663, 1, 1.0, NULL, 36662, NULL)
#endif

#if 1
CheckTypeSize(xTranslateCoordsReq,0, 36665, 1, 1.0, NULL, 36664, NULL)
#endif

#if 1
CheckTypeSize(xWarpPointerReq,0, 36667, 1, 1.0, NULL, 36666, NULL)
#endif

#if 1
CheckTypeSize(xSetInputFocusReq,0, 36669, 1, 1.0, NULL, 36668, NULL)
#endif

#if 1
CheckTypeSize(xOpenFontReq,0, 36671, 1, 1.0, NULL, 36670, NULL)
#endif

#if 1
CheckTypeSize(xQueryTextExtentsReq,0, 36673, 1, 1.0, NULL, 36672, NULL)
#endif

#if 1
CheckTypeSize(xListFontsReq,0, 36675, 1, 1.0, NULL, 36674, NULL)
#endif

#if 1
CheckTypeSize(xListFontsWithInfoReq,0, 36676, 1, 1.0, NULL, 36675, NULL)
#endif

#if 1
CheckTypeSize(xSetFontPathReq,0, 36678, 1, 1.0, NULL, 36677, NULL)
#endif

#if 1
CheckTypeSize(xCreatePixmapReq,0, 36680, 1, 1.0, NULL, 36679, NULL)
#endif

#if 1
CheckTypeSize(xCreateGCReq,0, 36682, 1, 1.0, NULL, 36681, NULL)
#endif

#if 1
CheckTypeSize(xChangeGCReq,0, 36684, 1, 1.0, NULL, 36683, NULL)
#endif

#if 1
CheckTypeSize(xCopyGCReq,0, 36686, 1, 1.0, NULL, 36685, NULL)
#endif

#if 1
CheckTypeSize(xSetDashesReq,0, 36688, 1, 1.0, NULL, 36687, NULL)
#endif

#if 1
CheckTypeSize(xSetClipRectanglesReq,0, 36690, 1, 1.0, NULL, 36689, NULL)
#endif

#if 1
CheckTypeSize(xClearAreaReq,0, 36692, 1, 1.0, NULL, 36691, NULL)
#endif

#if 1
CheckTypeSize(xCopyAreaReq,0, 36694, 1, 1.0, NULL, 36693, NULL)
#endif

#if 1
CheckTypeSize(xCopyPlaneReq,0, 36696, 1, 1.0, NULL, 36695, NULL)
#endif

#if 1
CheckTypeSize(xPolyPointReq,0, 36698, 1, 1.0, NULL, 36697, NULL)
#endif

#if 1
CheckTypeSize(xPolyLineReq,0, 36699, 1, 1.0, NULL, 36698, NULL)
#endif

#if 1
CheckTypeSize(xPolySegmentReq,0, 36701, 1, 1.0, NULL, 36700, NULL)
#endif

#if 1
CheckTypeSize(xPolyArcReq,0, 36702, 1, 1.0, NULL, 36701, NULL)
#endif

#if 1
CheckTypeSize(xPolyRectangleReq,0, 36703, 1, 1.0, NULL, 36701, NULL)
#endif

#if 1
CheckTypeSize(xPolyFillRectangleReq,0, 36704, 1, 1.0, NULL, 36701, NULL)
#endif

#if 1
CheckTypeSize(xPolyFillArcReq,0, 36705, 1, 1.0, NULL, 36701, NULL)
#endif

#if 1
CheckTypeSize(struct _FillPolyReq,0, 36706, 1, , NULL, 0, NULL)
Msg("Missing member data for _FillPolyReq on All\n");
CheckOffset(struct _FillPolyReq,reqType,0,1,216046)
CheckOffset(struct _FillPolyReq,pad,0,1,216047)
CheckOffset(struct _FillPolyReq,length,0,1,216048)
CheckOffset(struct _FillPolyReq,drawable,0,1,216049)
CheckOffset(struct _FillPolyReq,gc,0,1,216050)
CheckOffset(struct _FillPolyReq,shape,0,1,216051)
CheckOffset(struct _FillPolyReq,coordMode,0,1,216052)
CheckOffset(struct _FillPolyReq,pad1,0,1,216053)
#endif

#if 1
CheckTypeSize(xFillPolyReq,0, 36707, 1, 1.0, NULL, 36706, NULL)
#endif

#if 1
CheckTypeSize(struct _PutImageReq,0, 36708, 1, , NULL, 0, NULL)
Msg("Missing member data for _PutImageReq on All\n");
CheckOffset(struct _PutImageReq,reqType,0,1,216054)
CheckOffset(struct _PutImageReq,format,0,1,216055)
CheckOffset(struct _PutImageReq,length,0,1,216056)
CheckOffset(struct _PutImageReq,drawable,0,1,216057)
CheckOffset(struct _PutImageReq,gc,0,1,216058)
CheckOffset(struct _PutImageReq,width,0,1,216059)
CheckOffset(struct _PutImageReq,height,0,1,216060)
CheckOffset(struct _PutImageReq,dstX,0,1,216061)
CheckOffset(struct _PutImageReq,dstY,0,1,216062)
CheckOffset(struct _PutImageReq,leftPad,0,1,216063)
CheckOffset(struct _PutImageReq,depth,0,1,216064)
CheckOffset(struct _PutImageReq,pad,0,1,216065)
#endif

#if 1
CheckTypeSize(xPutImageReq,0, 36709, 1, 1.0, NULL, 36708, NULL)
#endif

#if 1
CheckTypeSize(xGetImageReq,0, 36711, 1, 1.0, NULL, 36710, NULL)
#endif

#if 1
CheckTypeSize(xPolyTextReq,0, 36713, 1, 1.0, NULL, 36712, NULL)
#endif

#if 1
CheckTypeSize(xPolyText8Req,0, 36714, 1, 1.0, NULL, 36713, NULL)
#endif

#if 1
CheckTypeSize(xPolyText16Req,0, 36715, 1, 1.0, NULL, 36713, NULL)
#endif

#if 1
CheckTypeSize(xImageTextReq,0, 36717, 1, 1.0, NULL, 36716, NULL)
#endif

#if 1
CheckTypeSize(xImageText8Req,0, 36718, 1, 1.0, NULL, 36717, NULL)
#endif

#if 1
CheckTypeSize(xImageText16Req,0, 36719, 1, 1.0, NULL, 36717, NULL)
#endif

#if 1
CheckTypeSize(xCreateColormapReq,0, 36721, 1, 1.0, NULL, 36720, NULL)
#endif

#if 1
CheckTypeSize(xCopyColormapAndFreeReq,0, 36723, 1, 1.0, NULL, 36722, NULL)
#endif

#if 1
CheckTypeSize(xAllocColorReq,0, 36725, 1, 1.0, NULL, 36724, NULL)
#endif

#if 1
CheckTypeSize(xAllocNamedColorReq,0, 36727, 1, 1.0, NULL, 36726, NULL)
#endif

#if 1
CheckTypeSize(xAllocColorCellsReq,0, 36729, 1, 1.0, NULL, 36728, NULL)
#endif

#if 1
CheckTypeSize(xAllocColorPlanesReq,0, 36731, 1, 1.0, NULL, 36730, NULL)
#endif

#if 1
CheckTypeSize(xFreeColorsReq,0, 36733, 1, 1.0, NULL, 36732, NULL)
#endif

#if 1
CheckTypeSize(xStoreColorsReq,0, 36735, 1, 1.0, NULL, 36734, NULL)
#endif

#if 1
CheckTypeSize(xStoreNamedColorReq,0, 36737, 1, 1.0, NULL, 36736, NULL)
#endif

#if 1
CheckTypeSize(xQueryColorsReq,0, 36739, 1, 1.0, NULL, 36738, NULL)
#endif

#if 1
CheckTypeSize(xLookupColorReq,0, 36741, 1, 1.0, NULL, 36740, NULL)
#endif

#if 1
CheckTypeSize(xCreateCursorReq,0, 36743, 1, 1.0, NULL, 36742, NULL)
#endif

#if 1
CheckTypeSize(xCreateGlyphCursorReq,0, 36745, 1, 1.0, NULL, 36744, NULL)
#endif

#if 1
CheckTypeSize(xRecolorCursorReq,0, 36747, 1, 1.0, NULL, 36746, NULL)
#endif

#if 1
CheckTypeSize(xQueryBestSizeReq,0, 36749, 1, 1.0, NULL, 36748, NULL)
#endif

#if 1
CheckTypeSize(xQueryExtensionReq,0, 36751, 1, 1.0, NULL, 36750, NULL)
#endif

#if 1
CheckTypeSize(xSetModifierMappingReq,0, 36753, 1, 1.0, NULL, 36752, NULL)
#endif

#if 1
CheckTypeSize(xSetPointerMappingReq,0, 36755, 1, 1.0, NULL, 36754, NULL)
#endif

#if 1
CheckTypeSize(xGetKeyboardMappingReq,0, 36757, 1, 1.0, NULL, 36756, NULL)
#endif

#if 1
CheckTypeSize(xChangeKeyboardMappingReq,0, 36759, 1, 1.0, NULL, 36758, NULL)
#endif

#if 1
CheckTypeSize(xChangeKeyboardControlReq,0, 36761, 1, 1.0, NULL, 36760, NULL)
#endif

#if 1
CheckTypeSize(xBellReq,0, 36763, 1, 1.0, NULL, 36762, NULL)
#endif

#if 1
CheckTypeSize(xChangePointerControlReq,0, 36765, 1, 1.0, NULL, 36764, NULL)
#endif

#if 1
CheckTypeSize(xSetScreenSaverReq,0, 36767, 1, 1.0, NULL, 36766, NULL)
#endif

#if 1
CheckTypeSize(xChangeHostsReq,0, 36769, 1, 1.0, NULL, 36768, NULL)
#endif

#if 1
CheckTypeSize(xListHostsReq,0, 36771, 1, 1.0, NULL, 36770, NULL)
#endif

#if 1
CheckTypeSize(xChangeModeReq,0, 36773, 1, 1.0, NULL, 36772, NULL)
#endif

#if 1
CheckTypeSize(xSetAccessControlReq,0, 36774, 1, 1.0, NULL, 36773, NULL)
#endif

#if 1
CheckTypeSize(xSetCloseDownModeReq,0, 36775, 1, 1.0, NULL, 36773, NULL)
#endif

#if 1
CheckTypeSize(xForceScreenSaverReq,0, 36776, 1, 1.0, NULL, 36773, NULL)
#endif

#if 1
CheckTypeSize(xRotatePropertiesReq,0, 36778, 1, 1.0, NULL, 36777, NULL)
#endif

#if 1
CheckTypeSize(xReply,0, 36614, 1, 1.0, NULL, 36613, NULL)
#endif

#if 1
CheckTypeSize(xSendEventReq,0, 36645, 1, 1.0, NULL, 36644, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xproto.h\n\n",pcnt,cnt);
return cnt;
#endif

}
