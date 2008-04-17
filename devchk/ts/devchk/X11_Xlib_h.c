/*
 * Test of X11/Xlib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <wchar.h>
#include <X11/X.h>
#include "X11/Xlib.h"



#ifdef TET_TEST
void X11_Xlib_h()
{
#else
int X11_Xlib_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Xlib.h\n");
#endif

printf("Checking data structures in X11/Xlib.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef XNPreeditCaretCallback
	CompareConstant(XNPreeditCaretCallback,"preeditCaretCallback",1000,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNPreeditCaretCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNPreeditStateNotifyCallback
	CompareConstant(XNPreeditStateNotifyCallback,"preeditStateNotifyCallback",1001,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNPreeditStateNotifyCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNPreeditAttributes
	CompareConstant(XNPreeditAttributes,"preeditAttributes",1002,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNPreeditAttributes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNStatusStartCallback
	CompareConstant(XNStatusStartCallback,"statusStartCallback",1003,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNStatusStartCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNStatusDoneCallback
	CompareConstant(XNStatusDoneCallback,"statusDoneCallback",1004,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNStatusDoneCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNStatusDrawCallback
	CompareConstant(XNStatusDrawCallback,"statusDrawCallback",1005,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNStatusDrawCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNStatusAttributes
	CompareConstant(XNStatusAttributes,"statusAttributes",1006,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNStatusAttributes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNArea
	CompareConstant(XNArea,"area",1007,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNArea\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNAreaNeeded
	CompareConstant(XNAreaNeeded,"areaNeeded",1008,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNAreaNeeded\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNSpotLocation
	CompareConstant(XNSpotLocation,"spotLocation",1009,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNSpotLocation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNColormap
	CompareConstant(XNColormap,"colorMap",1010,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNColormap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNStdColormap
	CompareConstant(XNStdColormap,"stdColorMap",1011,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNStdColormap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNForeground
	CompareConstant(XNForeground,"foreground",1012,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNForeground\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNBackground
	CompareConstant(XNBackground,"background",1013,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNBackground\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNBackgroundPixmap
	CompareConstant(XNBackgroundPixmap,"backgroundPixmap",1014,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNBackgroundPixmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNFontSet
	CompareConstant(XNFontSet,"fontSet",1015,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNFontSet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNLineSpace
	CompareConstant(XNLineSpace,"lineSpace",1016,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNLineSpace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNCursor
	CompareConstant(XNCursor,"cursor",1017,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNQueryIMValuesList
	CompareConstant(XNQueryIMValuesList,"queryIMValuesList",1018,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNQueryIMValuesList\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNQueryICValuesList
	CompareConstant(XNQueryICValuesList,"queryICValuesList",1019,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNQueryICValuesList\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNVisiblePosition
	CompareConstant(XNVisiblePosition,"visiblePosition",1020,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNVisiblePosition\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNR6PreeditCallback
	CompareConstant(XNR6PreeditCallback,"r6PreeditCallback",1021,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNR6PreeditCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNStringConversionCallback
	CompareConstant(XNStringConversionCallback,"stringConversionCallback",1022,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNStringConversionCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNStringConversion
	CompareConstant(XNStringConversion,"stringConversion",1023,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNStringConversion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNResetState
	CompareConstant(XNResetState,"resetState",1024,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNResetState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNHotKey
	CompareConstant(XNHotKey,"hotKey",1025,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNHotKey\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNHotKeyState
	CompareConstant(XNHotKeyState,"hotKeyState",1026,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNHotKeyState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNPreeditState
	CompareConstant(XNPreeditState,"preeditState",1027,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNPreeditState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNSeparatorofNestedList
	CompareConstant(XNSeparatorofNestedList,"separatorofNestedList",1028,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNSeparatorofNestedList\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XBufferOverflow
	CompareConstant(XBufferOverflow,-1,1029,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XBufferOverflow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XLookupNone
	CompareConstant(XLookupNone,1,1030,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XLookupNone\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XLookupChars
	CompareConstant(XLookupChars,2,1031,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XLookupChars\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XLookupKeySym
	CompareConstant(XLookupKeySym,3,1032,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XLookupKeySym\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XLookupBoth
	CompareConstant(XLookupBoth,4,1033,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XLookupBoth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMReverse
	CompareConstant(XIMReverse,1L,1034,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMReverse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMUnderline
	CompareConstant(XIMUnderline,(1L<<1),1035,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMUnderline\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMHighlight
	CompareConstant(XIMHighlight,(1L<<2),1036,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMHighlight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMPrimary
	CompareConstant(XIMPrimary,(1L<<5),1037,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMPrimary\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMSecondary
	CompareConstant(XIMSecondary,(1L<<6),1038,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMSecondary\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMTertiary
	CompareConstant(XIMTertiary,(1L<<7),1039,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMTertiary\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMVisibleToForward
	CompareConstant(XIMVisibleToForward,(1L<<8),1040,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMVisibleToForward\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMVisibleToBackword
	CompareConstant(XIMVisibleToBackword,(1L<<9),1041,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMVisibleToBackword\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMVisibleToCenter
	CompareConstant(XIMVisibleToCenter,(1L<<10),1042,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMVisibleToCenter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMPreeditUnKnown
	CompareConstant(XIMPreeditUnKnown,0L,1043,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMPreeditUnKnown\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMPreeditEnable
	CompareConstant(XIMPreeditEnable,1L,1044,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMPreeditEnable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMPreeditDisable
	CompareConstant(XIMPreeditDisable,(1L<<1),1045,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMPreeditDisable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMInitialState
	CompareConstant(XIMInitialState,1L,1046,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMInitialState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMPreserveState
	CompareConstant(XIMPreserveState,(1L<<1),1047,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMPreserveState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMStringConversionLeftEdge
	CompareConstant(XIMStringConversionLeftEdge,(0x00000001),1048,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMStringConversionLeftEdge\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMStringConversionRightEdge
	CompareConstant(XIMStringConversionRightEdge,(0x00000002),1049,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMStringConversionRightEdge\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMStringConversionTopEdge
	CompareConstant(XIMStringConversionTopEdge,(0x00000004),1050,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMStringConversionTopEdge\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMStringConversionBottomEdge
	CompareConstant(XIMStringConversionBottomEdge,(0x00000008),1051,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMStringConversionBottomEdge\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMStringConversionConcealed
	CompareConstant(XIMStringConversionConcealed,(0x00000010),1052,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMStringConversionConcealed\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMStringConversionWrapped
	CompareConstant(XIMStringConversionWrapped,(0x00000020),1053,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMStringConversionWrapped\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMStringConversionBuffer
	CompareConstant(XIMStringConversionBuffer,(0x0001),1054,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMStringConversionBuffer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMStringConversionLine
	CompareConstant(XIMStringConversionLine,(0x0002),1055,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMStringConversionLine\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMStringConversionWord
	CompareConstant(XIMStringConversionWord,(0x0003),1056,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMStringConversionWord\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMStringConversionChar
	CompareConstant(XIMStringConversionChar,(0x0004),1057,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMStringConversionChar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMStringConversionSubstitution
	CompareConstant(XIMStringConversionSubstitution,(0x0001),1058,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMStringConversionSubstitution\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMStringConversionRetrieval
	CompareConstant(XIMStringConversionRetrieval,(0x0002),1059,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMStringConversionRetrieval\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMHotKeyStateON
	CompareConstant(XIMHotKeyStateON,(0x0001L),1060,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMHotKeyStateON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMHotKeyStateOFF
	CompareConstant(XIMHotKeyStateOFF,(0x0002L),1061,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMHotKeyStateOFF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XlibSpecificationRelease
	CompareConstant(XlibSpecificationRelease,6,878,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XlibSpecificationRelease\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_HAVE_UTF8_STRING
	CompareConstant(X_HAVE_UTF8_STRING,1,908,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: X_HAVE_UTF8_STRING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef True
	CompareConstant(True,1,911,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: True\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef False
	CompareConstant(False,0,912,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: False\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef QueuedAlready
	CompareConstant(QueuedAlready,0,913,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: QueuedAlready\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef QueuedAfterReading
	CompareConstant(QueuedAfterReading,1,914,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: QueuedAfterReading\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef QueuedAfterFlush
	CompareConstant(QueuedAfterFlush,2,915,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: QueuedAfterFlush\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for ConnectionNumber(dpy) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for RootWindow(dpy, scr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DefaultScreen(dpy) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DefaultRootWindow(dpy) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DefaultVisual(dpy,scr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DefaultGC(dpy,scr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for BlackPixel(dpy,scr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for WhitePixel(dpy,scr) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef AllPlanes
	CompareConstant(AllPlanes,((unsigned long)~0L),924,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: AllPlanes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for QLength(dpy) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DisplayWidth(dpy,scr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DisplayHeight(dpy,scr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DisplayWidthMM(dpy,scr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DisplayHeightMM(dpy,scr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DisplayPlanes(dpy,scr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DisplayCells(dpy,scr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ScreenCount(dpy) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ServerVendor(dpy) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ProtocolVersion(dpy) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ProtocolRevision(dpy) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for VendorRelease(dpy) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DisplayString(dpy) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DefaultDepth(dpy,scr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DefaultColormap(dpy,scr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for BitmapUnit(dpy) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for BitmapBitOrder(dpy) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for BitmapPad(dpy) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ImageByteOrder(dpy) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for NextRequest(dpy) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LastKnownRequestProcessed(dpy) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ScreenOfDisplay(dpy,scr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DefaultScreenOfDisplay(dpy) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DisplayOfScreen(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for RootWindowOfScreen(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for BlackPixelOfScreen(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for WhitePixelOfScreen(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DefaultColormapOfScreen(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DefaultDepthOfScreen(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DefaultGCOfScreen(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DefaultVisualOfScreen(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for WidthOfScreen(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for HeightOfScreen(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for WidthMMOfScreen(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for HeightMMOfScreen(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PlanesOfScreen(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CellsOfScreen(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for MinCmapsOfScreen(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for MaxCmapsOfScreen(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DoesSaveUnders(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DoesBackingStore(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for EventMaskOfScreen(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XAllocID(dpy) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNRequiredCharSet
	CompareConstant(XNRequiredCharSet,"requiredCharSet",968,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNRequiredCharSet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNQueryOrientation
	CompareConstant(XNQueryOrientation,"queryOrientation",969,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNQueryOrientation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNBaseFontName
	CompareConstant(XNBaseFontName,"baseFontName",970,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNBaseFontName\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNOMAutomatic
	CompareConstant(XNOMAutomatic,"omAutomatic",971,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNOMAutomatic\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNMissingCharSet
	CompareConstant(XNMissingCharSet,"missingCharSet",972,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNMissingCharSet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNDefaultString
	CompareConstant(XNDefaultString,"defaultString",973,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNDefaultString\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNOrientation
	CompareConstant(XNOrientation,"orientation",974,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNOrientation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNDirectionalDependentDrawing
	CompareConstant(XNDirectionalDependentDrawing,"directionalDependentDrawing",975,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNDirectionalDependentDrawing\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNContextualDrawing
	CompareConstant(XNContextualDrawing,"contextualDrawing",976,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNContextualDrawing\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNFontInfo
	CompareConstant(XNFontInfo,"fontInfo",977,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNFontInfo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMPreeditArea
	CompareConstant(XIMPreeditArea,0x0001L,978,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMPreeditArea\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMPreeditCallbacks
	CompareConstant(XIMPreeditCallbacks,0x0002L,979,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMPreeditCallbacks\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMPreeditPosition
	CompareConstant(XIMPreeditPosition,0x0004L,980,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMPreeditPosition\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMPreeditNothing
	CompareConstant(XIMPreeditNothing,0x0008L,981,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMPreeditNothing\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMPreeditNone
	CompareConstant(XIMPreeditNone,0x0010L,982,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMPreeditNone\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMStatusArea
	CompareConstant(XIMStatusArea,0x0100L,983,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMStatusArea\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMStatusCallbacks
	CompareConstant(XIMStatusCallbacks,0x0200L,984,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMStatusCallbacks\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMStatusNothing
	CompareConstant(XIMStatusNothing,0x0400L,985,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMStatusNothing\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XIMStatusNone
	CompareConstant(XIMStatusNone,0x0800L,986,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XIMStatusNone\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNVaNestedList
	CompareConstant(XNVaNestedList,"XNVaNestedList",987,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNVaNestedList\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNQueryInputStyle
	CompareConstant(XNQueryInputStyle,"queryInputStyle",988,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNQueryInputStyle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNClientWindow
	CompareConstant(XNClientWindow,"clientWindow",989,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNClientWindow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNInputStyle
	CompareConstant(XNInputStyle,"inputStyle",990,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNInputStyle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNFocusWindow
	CompareConstant(XNFocusWindow,"focusWindow",991,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNFocusWindow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNResourceName
	CompareConstant(XNResourceName,"resourceName",992,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNResourceName\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNResourceClass
	CompareConstant(XNResourceClass,"resourceClass",993,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNResourceClass\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNGeometryCallback
	CompareConstant(XNGeometryCallback,"geometryCallback",994,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNGeometryCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNDestroyCallback
	CompareConstant(XNDestroyCallback,"destroyCallback",995,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNDestroyCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNFilterEvents
	CompareConstant(XNFilterEvents,"filterEvents",996,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNFilterEvents\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNPreeditStartCallback
	CompareConstant(XNPreeditStartCallback,"preeditStartCallback",997,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNPreeditStartCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNPreeditDoneCallback
	CompareConstant(XNPreeditDoneCallback,"preeditDoneCallback",998,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNPreeditDoneCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNPreeditDrawCallback
	CompareConstant(XNPreeditDrawCallback,"preeditDrawCallback",999,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNPreeditDrawCallback\n");
cnt++;
#endif

#endif

#if defined __i386__
CheckTypeSize(struct _XDisplay,176, 7053, 2, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on IA32\n");
#elif defined __ia64__
CheckTypeSize(struct _XDisplay,296, 7053, 3, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on IA64\n");
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XDisplay,176, 7053, 6, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on PPC32\n");
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XDisplay,176, 7053, 10, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on S390\n");
#elif defined __powerpc64__
CheckTypeSize(struct _XDisplay,296, 7053, 9, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on PPC64\n");
#elif defined __s390x__
CheckTypeSize(struct _XDisplay,296, 7053, 12, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on S390X\n");
#elif defined __x86_64__
CheckTypeSize(struct _XDisplay,296, 7053, 11, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on x86-64\n");
#else
Msg("Find size of _XDisplay (7053)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,7053,0);
#endif

#if defined __i386__
CheckTypeSize(struct _XrmHashBucketRec,0, 7102, 2, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XrmHashBucketRec on IA32\n");
#else
Msg("Find size of _XrmHashBucketRec (7102)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,7102,0);
#endif

#if defined __i386__
CheckTypeSize(XVaNestedList,4, 8540, 2, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(XVaNestedList,8, 8540, 3, 1.2, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XVaNestedList,4, 8540, 6, 1.2, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XVaNestedList,4, 8540, 10, 1.2, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(XVaNestedList,8, 8540, 9, 1.2, NULL, 40, NULL)
#elif defined __s390x__
CheckTypeSize(XVaNestedList,8, 8540, 12, 1.2, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(XVaNestedList,8, 8540, 11, 1.2, NULL, 40, NULL)
#else
Msg("Find size of XVaNestedList (8540)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,8540,0);
#endif

#if 1
CheckTypeSize(XIMFeedback,0, 8545, 1, 1.2, NULL, 9, NULL)
#endif

#if 1
CheckTypeSize(struct _XIMText,0, 8546, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XIMText on All\n");
CheckOffset(struct _XIMText,length,0,1,33354)
CheckOffset(struct _XIMText,feedback,0,1,33355)
CheckOffset(struct _XIMText,encoding_is_wchar,0,1,33356)
CheckOffset(struct _XIMText,string,0,1,33359)
#endif

#if 1
CheckTypeSize(XIMPreeditState,0, 8549, 1, 1.2, NULL, 9, NULL)
#endif

#if 1
CheckTypeSize(struct _XIMPreeditStateNotifyCallbackStruct,0, 8550, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XIMPreeditStateNotifyCallbackStruct on All\n");
CheckOffset(struct _XIMPreeditStateNotifyCallbackStruct,state,0,1,33360)
#endif

#if 1
CheckTypeSize(XIMPreeditStateNotifyCallbackStruct,0, 8551, 1, 1.2, NULL, 8550, NULL)
#endif

#if 1
CheckTypeSize(XIMResetState,0, 8552, 1, 1.2, NULL, 9, NULL)
#endif

#if 1
CheckTypeSize(XIMStringConversionFeedback,0, 8553, 1, 1.2, NULL, 9, NULL)
#endif

#if 1
CheckTypeSize(struct _XIMStringConversionText,0, 8554, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XIMStringConversionText on All\n");
CheckOffset(struct _XIMStringConversionText,length,0,1,33361)
CheckOffset(struct _XIMStringConversionText,feedback,0,1,33362)
CheckOffset(struct _XIMStringConversionText,encoding_is_wchar,0,1,33363)
CheckOffset(struct _XIMStringConversionText,string,0,1,33366)
#endif

#if 1
CheckTypeSize(XIMStringConversionPosition,0, 8557, 1, 1.2, NULL, 5, NULL)
#endif

#if 1
CheckTypeSize(XIMStringConversionType,0, 8558, 1, 1.2, NULL, 5, NULL)
#endif

#if 1
CheckTypeSize(XIMStringConversionOperation,0, 8559, 1, 1.2, NULL, 5, NULL)
#endif

#if 1
CheckTypeSize(struct _XIMStringConversionCallbackStruct,0, 8562, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XIMStringConversionCallbackStruct on All\n");
CheckOffset(struct _XIMStringConversionCallbackStruct,position,0,1,33379)
CheckOffset(struct _XIMStringConversionCallbackStruct,direction,0,1,33380)
CheckOffset(struct _XIMStringConversionCallbackStruct,operation,0,1,33381)
CheckOffset(struct _XIMStringConversionCallbackStruct,factor,0,1,33382)
CheckOffset(struct _XIMStringConversionCallbackStruct,text,0,1,33383)
#endif

#if 1
CheckTypeSize(XIMStringConversionCallbackStruct,0, 8563, 1, 1.2, NULL, 8562, NULL)
#endif

#if 1
CheckTypeSize(struct _XIMPreeditDrawCallbackStruct,0, 8564, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XIMPreeditDrawCallbackStruct on All\n");
CheckOffset(struct _XIMPreeditDrawCallbackStruct,caret,0,1,33384)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,chg_first,0,1,33385)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,chg_length,0,1,33386)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,text,0,1,33387)
#endif

#if 1
CheckTypeSize(XIMPreeditDrawCallbackStruct,0, 8565, 1, 1.2, NULL, 8564, NULL)
#endif

#if 1
CheckTypeSize(struct _XIMPreeditCaretCallbackStruct,0, 8568, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XIMPreeditCaretCallbackStruct on All\n");
CheckOffset(struct _XIMPreeditCaretCallbackStruct,position,0,1,33391)
CheckOffset(struct _XIMPreeditCaretCallbackStruct,direction,0,1,33392)
CheckOffset(struct _XIMPreeditCaretCallbackStruct,style,0,1,33393)
#endif

#if 1
CheckTypeSize(XIMPreeditCaretCallbackStruct,0, 8569, 1, 1.2, NULL, 8568, NULL)
#endif

#if 1
CheckTypeSize(struct _XIMStatusDrawCallbackStruct,0, 8572, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XIMStatusDrawCallbackStruct on All\n");
CheckOffset(struct _XIMStatusDrawCallbackStruct,type,0,1,33396)
CheckOffset(struct _XIMStatusDrawCallbackStruct,data,0,1,33399)
#endif

#if 1
CheckTypeSize(struct _XIMHotKeyTrigger,0, 8575, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XIMHotKeyTrigger on All\n");
CheckOffset(struct _XIMHotKeyTrigger,keysym,0,1,33400)
CheckOffset(struct _XIMHotKeyTrigger,modifier,0,1,33401)
CheckOffset(struct _XIMHotKeyTrigger,modifier_mask,0,1,33402)
#endif

#if 1
CheckTypeSize(XIMHotKeyTrigger,0, 8576, 1, 1.2, NULL, 8575, NULL)
#endif

#if 1
CheckTypeSize(struct _XIMHotKeyTriggers,0, 8577, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XIMHotKeyTriggers on All\n");
CheckOffset(struct _XIMHotKeyTriggers,num_hot_key,0,1,33403)
CheckOffset(struct _XIMHotKeyTriggers,key,0,1,33404)
#endif

#if 1
CheckTypeSize(XIMHotKeyTriggers,0, 8578, 1, 1.2, NULL, 8577, NULL)
#endif

#if 1
CheckTypeSize(XIMHotKeyState,0, 8579, 1, 1.2, NULL, 9, NULL)
#endif

#if 1
#endif

#if 1
#endif

#if 1
#endif

#if 1
#endif

#if defined __i386__
CheckTypeSize(XErrorHandler,4, 8930, 2, 1.2, NULL, 8928, NULL)
#elif defined __ia64__
CheckTypeSize(XErrorHandler,8, 8930, 3, 1.2, NULL, 8928, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XErrorHandler,4, 8930, 6, 1.2, NULL, 8928, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XErrorHandler,4, 8930, 10, 1.2, NULL, 8928, NULL)
#elif defined __powerpc64__
CheckTypeSize(XErrorHandler,8, 8930, 9, 1.2, NULL, 8928, NULL)
#elif defined __s390x__
CheckTypeSize(XErrorHandler,8, 8930, 12, 1.2, NULL, 8928, NULL)
#elif defined __x86_64__
CheckTypeSize(XErrorHandler,8, 8930, 11, 1.2, NULL, 8928, NULL)
#else
Msg("Find size of XErrorHandler (8930)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8928,NULL);\n",architecture,8930,0);
#endif

#if defined __i386__
CheckTypeSize(XIOErrorHandler,4, 8932, 2, 1.2, NULL, 8931, NULL)
#elif defined __ia64__
CheckTypeSize(XIOErrorHandler,8, 8932, 3, 1.2, NULL, 8931, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIOErrorHandler,4, 8932, 6, 1.2, NULL, 8931, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIOErrorHandler,4, 8932, 10, 1.2, NULL, 8931, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIOErrorHandler,8, 8932, 9, 1.2, NULL, 8931, NULL)
#elif defined __s390x__
CheckTypeSize(XIOErrorHandler,8, 8932, 12, 1.2, NULL, 8931, NULL)
#elif defined __x86_64__
CheckTypeSize(XIOErrorHandler,8, 8932, 11, 1.2, NULL, 8931, NULL)
#else
Msg("Find size of XIOErrorHandler (8932)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8931,NULL);\n",architecture,8932,0);
#endif

#if defined __i386__
CheckTypeSize(XConnectionWatchProc,4, 8956, 2, 1.2, NULL, 8955, NULL)
#elif defined __ia64__
CheckTypeSize(XConnectionWatchProc,8, 8956, 3, 1.2, NULL, 8955, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XConnectionWatchProc,4, 8956, 6, 1.2, NULL, 8955, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XConnectionWatchProc,4, 8956, 10, 1.2, NULL, 8955, NULL)
#elif defined __powerpc64__
CheckTypeSize(XConnectionWatchProc,8, 8956, 9, 1.2, NULL, 8955, NULL)
#elif defined __s390x__
CheckTypeSize(XConnectionWatchProc,8, 8956, 12, 1.2, NULL, 8955, NULL)
#elif defined __x86_64__
CheckTypeSize(XConnectionWatchProc,8, 8956, 11, 1.2, NULL, 8955, NULL)
#else
Msg("Find size of XConnectionWatchProc (8956)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8955,NULL);\n",architecture,8956,0);
#endif

#if 1
CheckEnum("XOMOrientation_LTR_TTB",XOMOrientation_LTR_TTB,0,33338)
CheckEnum("XOMOrientation_RTL_TTB",XOMOrientation_RTL_TTB,(0) + 1,33339)
CheckEnum("XOMOrientation_TTB_LTR",XOMOrientation_TTB_LTR,((0) + 1) + 1,33340)
CheckEnum("XOMOrientation_TTB_RTL",XOMOrientation_TTB_RTL,(((0) + 1) + 1) + 1,33341)
CheckEnum("XOMOrientation_Context",XOMOrientation_Context,((((0) + 1) + 1) + 1) + 1,33342)
#endif

#if 1
CheckEnum("XIMForwardChar",XIMForwardChar,0,33367)
CheckEnum("XIMBackwardChar",XIMBackwardChar,(0) + 1,33368)
CheckEnum("XIMForwardWord",XIMForwardWord,((0) + 1) + 1,33369)
CheckEnum("XIMBackwardWord",XIMBackwardWord,(((0) + 1) + 1) + 1,33370)
CheckEnum("XIMCaretUp",XIMCaretUp,((((0) + 1) + 1) + 1) + 1,33371)
CheckEnum("XIMCaretDown",XIMCaretDown,(((((0) + 1) + 1) + 1) + 1) + 1,33372)
CheckEnum("XIMNextLine",XIMNextLine,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,33373)
CheckEnum("XIMPreviousLine",XIMPreviousLine,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1,33374)
CheckEnum("XIMLineStart",XIMLineStart,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,33375)
CheckEnum("XIMLineEnd",XIMLineEnd,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,33376)
CheckEnum("XIMAbsolutePosition",XIMAbsolutePosition,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,33377)
CheckEnum("XIMDontChange",XIMDontChange,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,33378)
#endif

#if 1
CheckEnum("XIMIsInvisible",XIMIsInvisible,0,33388)
CheckEnum("XIMIsPrimary",XIMIsPrimary,(0) + 1,33389)
CheckEnum("XIMIsSecondary",XIMIsSecondary,((0) + 1) + 1,33390)
#endif

#if 1
CheckEnum("XIMTextType",XIMTextType,0,33394)
CheckEnum("XIMBitmapType",XIMBitmapType,(0) + 1,33395)
#endif

#if 1
CheckTypeSize(Display *,0, 100345, 1, 1.2, NULL, 8419, NULL)
#endif

#if 1
CheckTypeSize(XEvent *,0, 100355, 1, 1.2, NULL, 8497, NULL)
#endif

#if 1
#endif

#if 1
#endif

#if 1
CheckTypeSize(Screen *,0, 100360, 1, 1.2, NULL, 8381, NULL)
#endif

#if 1
CheckTypeSize(XSelectionRequestEvent *,0, 100371, 1, 1.2, NULL, 8482, NULL)
#endif

#if 1
CheckTypeSize(XGCValues *,0, 100374, 1, 1.2, NULL, 8374, NULL)
#endif

#if 1
CheckTypeSize(Visual *,0, 100508, 1, 1.2, NULL, 8377, NULL)
#endif

#if 1
CheckTypeSize(XSetWindowAttributes *,0, 100509, 1, 1.2, NULL, 8385, NULL)
#endif

#if 1
CheckTypeSize(XKeyEvent *,0, 100574, 1, 1.2, NULL, 8425, NULL)
#endif

#if 1
CheckTypeSize(XButtonEvent *,0, 100584, 1, 1.2, NULL, 8429, NULL)
#endif

#if 1
CheckTypeSize(struct _XExtData,0, 8366, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XExtData on All\n");
CheckOffset(struct _XExtData,number,0,1,32739)
CheckOffset(struct _XExtData,next,0,1,32740)
CheckOffset(struct _XExtData,free_private,0,1,32742)
CheckOffset(struct _XExtData,private_data,0,1,32743)
#endif

#if defined __i386__
CheckTypeSize(XExtData,16, 8368, 2, 1.2, NULL, 8366, NULL)
#elif defined __ia64__
CheckTypeSize(XExtData,32, 8368, 3, 1.2, NULL, 8366, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XExtData,16, 8368, 6, 1.2, NULL, 8366, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XExtData,16, 8368, 10, 1.2, NULL, 8366, NULL)
#elif defined __powerpc64__
CheckTypeSize(XExtData,32, 8368, 9, 1.2, NULL, 8366, NULL)
#elif defined __s390x__
CheckTypeSize(XExtData,32, 8368, 12, 1.2, NULL, 8366, NULL)
#elif defined __x86_64__
CheckTypeSize(XExtData,32, 8368, 11, 1.2, NULL, 8366, NULL)
#else
Msg("Find size of XExtData (8368)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8366,NULL);\n",architecture,8368,0);
#endif

#if 1
CheckTypeSize(struct _XGC,0, 7044, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XGC on All\n");
#endif

#if defined __i386__
CheckTypeSize(GC,4, 8375, 2, 1.2, NULL, 7045, NULL)
#elif defined __ia64__
CheckTypeSize(GC,8, 8375, 3, 1.2, NULL, 7045, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GC,4, 8375, 6, 1.2, NULL, 7045, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GC,4, 8375, 10, 1.2, NULL, 7045, NULL)
#elif defined __powerpc64__
CheckTypeSize(GC,8, 8375, 9, 1.2, NULL, 7045, NULL)
#elif defined __s390x__
CheckTypeSize(GC,8, 8375, 12, 1.2, NULL, 7045, NULL)
#elif defined __x86_64__
CheckTypeSize(GC,8, 8375, 11, 1.2, NULL, 7045, NULL)
#else
Msg("Find size of GC (8375)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,7045,NULL);\n",architecture,8375,0);
#endif

#if 1
CheckTypeSize(struct _XImage,0, 8390, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XImage on All\n");
CheckOffset(struct _XImage,width,0,1,32850)
CheckOffset(struct _XImage,height,0,1,32851)
CheckOffset(struct _XImage,xoffset,0,1,32852)
CheckOffset(struct _XImage,format,0,1,32853)
CheckOffset(struct _XImage,data,0,1,32854)
CheckOffset(struct _XImage,byte_order,0,1,32855)
CheckOffset(struct _XImage,bitmap_unit,0,1,32856)
CheckOffset(struct _XImage,bitmap_bit_order,0,1,32857)
CheckOffset(struct _XImage,bitmap_pad,0,1,32858)
CheckOffset(struct _XImage,depth,0,1,32859)
CheckOffset(struct _XImage,bytes_per_line,0,1,32860)
CheckOffset(struct _XImage,bits_per_pixel,0,1,32861)
CheckOffset(struct _XImage,red_mask,0,1,32862)
CheckOffset(struct _XImage,green_mask,0,1,32863)
CheckOffset(struct _XImage,blue_mask,0,1,32864)
CheckOffset(struct _XImage,obdata,0,1,32865)
CheckOffset(struct _XImage,f,0,1,32872)
#endif

#if defined __i386__
CheckTypeSize(struct XImagefuncs,4, 8391, 2, 1.2, NULL, 0, NULL)
Msg("Missing member data for XImagefuncs on IA32\n");
#else
Msg("Find size of XImagefuncs (8391)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8391,0);
#endif

#if defined __i386__
CheckTypeSize(XImage,88, 8398, 2, 1.2, NULL, 8390, NULL)
#elif defined __ia64__
CheckTypeSize(XImage,136, 8398, 3, 1.2, NULL, 8390, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XImage,88, 8398, 6, 1.2, NULL, 8390, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XImage,88, 8398, 10, 1.2, NULL, 8390, NULL)
#elif defined __powerpc64__
CheckTypeSize(XImage,136, 8398, 9, 1.2, NULL, 8390, NULL)
#elif defined __s390x__
CheckTypeSize(XImage,136, 8398, 12, 1.2, NULL, 8390, NULL)
#elif defined __x86_64__
CheckTypeSize(XImage,136, 8398, 11, 1.2, NULL, 8390, NULL)
#else
Msg("Find size of XImage (8398)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8390,NULL);\n",architecture,8398,0);
#endif

#if defined __i386__
CheckTypeSize(struct funcs,24, 9291, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct funcs,destroy_image,4,2,32867)
CheckOffset(struct funcs,destroy_image,4,2,32867)
CheckMemberSize(struct funcs,get_pixel,4,2,32868)
CheckOffset(struct funcs,get_pixel,8,2,32868)
CheckMemberSize(struct funcs,put_pixel,4,2,32869)
CheckOffset(struct funcs,put_pixel,12,2,32869)
CheckMemberSize(struct funcs,sub_image,4,2,32870)
CheckOffset(struct funcs,sub_image,16,2,32870)
CheckMemberSize(struct funcs,add_pixel,4,2,32871)
CheckOffset(struct funcs,add_pixel,20,2,32871)
#elif defined __ia64__
CheckTypeSize(struct funcs,48, 9291, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct funcs,destroy_image,8,3,32867)
CheckOffset(struct funcs,destroy_image,8,3,32867)
CheckMemberSize(struct funcs,get_pixel,8,3,32868)
CheckOffset(struct funcs,get_pixel,16,3,32868)
CheckMemberSize(struct funcs,put_pixel,8,3,32869)
CheckOffset(struct funcs,put_pixel,24,3,32869)
CheckMemberSize(struct funcs,sub_image,8,3,32870)
CheckOffset(struct funcs,sub_image,32,3,32870)
CheckMemberSize(struct funcs,add_pixel,8,3,32871)
CheckOffset(struct funcs,add_pixel,40,3,32871)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct funcs,24, 9291, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct funcs,destroy_image,4,6,32867)
CheckOffset(struct funcs,destroy_image,4,6,32867)
CheckMemberSize(struct funcs,get_pixel,4,6,32868)
CheckOffset(struct funcs,get_pixel,8,6,32868)
CheckMemberSize(struct funcs,put_pixel,4,6,32869)
CheckOffset(struct funcs,put_pixel,12,6,32869)
CheckMemberSize(struct funcs,sub_image,4,6,32870)
CheckOffset(struct funcs,sub_image,16,6,32870)
CheckMemberSize(struct funcs,add_pixel,4,6,32871)
CheckOffset(struct funcs,add_pixel,20,6,32871)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct funcs,24, 9291, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct funcs,destroy_image,4,10,32867)
CheckOffset(struct funcs,destroy_image,4,10,32867)
CheckMemberSize(struct funcs,get_pixel,4,10,32868)
CheckOffset(struct funcs,get_pixel,8,10,32868)
CheckMemberSize(struct funcs,put_pixel,4,10,32869)
CheckOffset(struct funcs,put_pixel,12,10,32869)
CheckMemberSize(struct funcs,sub_image,4,10,32870)
CheckOffset(struct funcs,sub_image,16,10,32870)
CheckMemberSize(struct funcs,add_pixel,4,10,32871)
CheckOffset(struct funcs,add_pixel,20,10,32871)
#elif defined __powerpc64__
CheckTypeSize(struct funcs,48, 9291, 9, 1.2, NULL, 0, NULL)
CheckMemberSize(struct funcs,destroy_image,8,9,32867)
CheckOffset(struct funcs,destroy_image,8,9,32867)
CheckMemberSize(struct funcs,get_pixel,8,9,32868)
CheckOffset(struct funcs,get_pixel,16,9,32868)
CheckMemberSize(struct funcs,put_pixel,8,9,32869)
CheckOffset(struct funcs,put_pixel,24,9,32869)
CheckMemberSize(struct funcs,sub_image,8,9,32870)
CheckOffset(struct funcs,sub_image,32,9,32870)
CheckMemberSize(struct funcs,add_pixel,8,9,32871)
CheckOffset(struct funcs,add_pixel,40,9,32871)
#elif defined __s390x__
CheckTypeSize(struct funcs,48, 9291, 12, 1.2, NULL, 0, NULL)
CheckMemberSize(struct funcs,destroy_image,8,12,32867)
CheckOffset(struct funcs,destroy_image,8,12,32867)
CheckMemberSize(struct funcs,get_pixel,8,12,32868)
CheckOffset(struct funcs,get_pixel,16,12,32868)
CheckMemberSize(struct funcs,put_pixel,8,12,32869)
CheckOffset(struct funcs,put_pixel,24,12,32869)
CheckMemberSize(struct funcs,sub_image,8,12,32870)
CheckOffset(struct funcs,sub_image,32,12,32870)
CheckMemberSize(struct funcs,add_pixel,8,12,32871)
CheckOffset(struct funcs,add_pixel,40,12,32871)
#elif defined __x86_64__
CheckTypeSize(struct funcs,48, 9291, 11, 1.2, NULL, 0, NULL)
CheckMemberSize(struct funcs,destroy_image,8,11,32867)
CheckOffset(struct funcs,destroy_image,8,11,32867)
CheckMemberSize(struct funcs,get_pixel,8,11,32868)
CheckOffset(struct funcs,get_pixel,16,11,32868)
CheckMemberSize(struct funcs,put_pixel,8,11,32869)
CheckOffset(struct funcs,put_pixel,24,11,32869)
CheckMemberSize(struct funcs,sub_image,8,11,32870)
CheckOffset(struct funcs,sub_image,32,11,32870)
CheckMemberSize(struct funcs,add_pixel,8,11,32871)
CheckOffset(struct funcs,add_pixel,40,11,32871)
#else
Msg("Find size of funcs (9291)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9291,0);
#endif

#if 1
CheckTypeSize(_XPrivDisplay,0, 8423, 1, 1.2, NULL, 7109, NULL)
#endif

#if defined __i386__
CheckTypeSize(XKeyPressedEvent,60, 8426, 2, 1.2, NULL, 8425, NULL)
#elif defined __ia64__
CheckTypeSize(XKeyPressedEvent,96, 8426, 3, 1.2, NULL, 8425, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XKeyPressedEvent,60, 8426, 6, 1.2, NULL, 8425, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XKeyPressedEvent,60, 8426, 10, 1.2, NULL, 8425, NULL)
#elif defined __powerpc64__
CheckTypeSize(XKeyPressedEvent,96, 8426, 9, 1.2, NULL, 8425, NULL)
#elif defined __s390x__
CheckTypeSize(XKeyPressedEvent,96, 8426, 12, 1.2, NULL, 8425, NULL)
#elif defined __x86_64__
CheckTypeSize(XKeyPressedEvent,96, 8426, 11, 1.2, NULL, 8425, NULL)
#else
Msg("Find size of XKeyPressedEvent (8426)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8425,NULL);\n",architecture,8426,0);
#endif

#if defined __i386__
CheckTypeSize(XKeyReleasedEvent,60, 8427, 2, 1.2, NULL, 8425, NULL)
#elif defined __ia64__
CheckTypeSize(XKeyReleasedEvent,96, 8427, 3, 1.2, NULL, 8425, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XKeyReleasedEvent,60, 8427, 6, 1.2, NULL, 8425, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XKeyReleasedEvent,60, 8427, 10, 1.2, NULL, 8425, NULL)
#elif defined __powerpc64__
CheckTypeSize(XKeyReleasedEvent,96, 8427, 9, 1.2, NULL, 8425, NULL)
#elif defined __s390x__
CheckTypeSize(XKeyReleasedEvent,96, 8427, 12, 1.2, NULL, 8425, NULL)
#elif defined __x86_64__
CheckTypeSize(XKeyReleasedEvent,96, 8427, 11, 1.2, NULL, 8425, NULL)
#else
Msg("Find size of XKeyReleasedEvent (8427)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8425,NULL);\n",architecture,8427,0);
#endif

#if defined __i386__
CheckTypeSize(XButtonPressedEvent,60, 8430, 2, 1.2, NULL, 8429, NULL)
#elif defined __ia64__
CheckTypeSize(XButtonPressedEvent,96, 8430, 3, 1.2, NULL, 8429, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XButtonPressedEvent,60, 8430, 6, 1.2, NULL, 8429, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XButtonPressedEvent,60, 8430, 10, 1.2, NULL, 8429, NULL)
#elif defined __powerpc64__
CheckTypeSize(XButtonPressedEvent,96, 8430, 9, 1.2, NULL, 8429, NULL)
#elif defined __s390x__
CheckTypeSize(XButtonPressedEvent,96, 8430, 12, 1.2, NULL, 8429, NULL)
#elif defined __x86_64__
CheckTypeSize(XButtonPressedEvent,96, 8430, 11, 1.2, NULL, 8429, NULL)
#else
Msg("Find size of XButtonPressedEvent (8430)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8429,NULL);\n",architecture,8430,0);
#endif

#if defined __i386__
CheckTypeSize(XButtonReleasedEvent,60, 8431, 2, 1.2, NULL, 8429, NULL)
#elif defined __ia64__
CheckTypeSize(XButtonReleasedEvent,96, 8431, 3, 1.2, NULL, 8429, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XButtonReleasedEvent,60, 8431, 6, 1.2, NULL, 8429, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XButtonReleasedEvent,60, 8431, 10, 1.2, NULL, 8429, NULL)
#elif defined __powerpc64__
CheckTypeSize(XButtonReleasedEvent,96, 8431, 9, 1.2, NULL, 8429, NULL)
#elif defined __s390x__
CheckTypeSize(XButtonReleasedEvent,96, 8431, 12, 1.2, NULL, 8429, NULL)
#elif defined __x86_64__
CheckTypeSize(XButtonReleasedEvent,96, 8431, 11, 1.2, NULL, 8429, NULL)
#else
Msg("Find size of XButtonReleasedEvent (8431)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8429,NULL);\n",architecture,8431,0);
#endif

#if defined __i386__
CheckTypeSize(XPointerMovedEvent,60, 8434, 2, 1.2, NULL, 8433, NULL)
#elif defined __ia64__
CheckTypeSize(XPointerMovedEvent,96, 8434, 3, 1.2, NULL, 8433, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XPointerMovedEvent,60, 8434, 6, 1.2, NULL, 8433, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XPointerMovedEvent,60, 8434, 10, 1.2, NULL, 8433, NULL)
#elif defined __powerpc64__
CheckTypeSize(XPointerMovedEvent,96, 8434, 9, 1.2, NULL, 8433, NULL)
#elif defined __s390x__
CheckTypeSize(XPointerMovedEvent,96, 8434, 12, 1.2, NULL, 8433, NULL)
#elif defined __x86_64__
CheckTypeSize(XPointerMovedEvent,96, 8434, 11, 1.2, NULL, 8433, NULL)
#else
Msg("Find size of XPointerMovedEvent (8434)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8433,NULL);\n",architecture,8434,0);
#endif

#if defined __i386__
CheckTypeSize(XEnterWindowEvent,68, 8437, 2, 1.2, NULL, 8436, NULL)
#elif defined __ia64__
CheckTypeSize(XEnterWindowEvent,104, 8437, 3, 1.2, NULL, 8436, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XEnterWindowEvent,68, 8437, 6, 1.2, NULL, 8436, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XEnterWindowEvent,68, 8437, 10, 1.2, NULL, 8436, NULL)
#elif defined __powerpc64__
CheckTypeSize(XEnterWindowEvent,104, 8437, 9, 1.2, NULL, 8436, NULL)
#elif defined __s390x__
CheckTypeSize(XEnterWindowEvent,104, 8437, 12, 1.2, NULL, 8436, NULL)
#elif defined __x86_64__
CheckTypeSize(XEnterWindowEvent,104, 8437, 11, 1.2, NULL, 8436, NULL)
#else
Msg("Find size of XEnterWindowEvent (8437)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8436,NULL);\n",architecture,8437,0);
#endif

#if defined __i386__
CheckTypeSize(XLeaveWindowEvent,68, 8438, 2, 1.2, NULL, 8436, NULL)
#elif defined __ia64__
CheckTypeSize(XLeaveWindowEvent,104, 8438, 3, 1.2, NULL, 8436, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XLeaveWindowEvent,68, 8438, 6, 1.2, NULL, 8436, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XLeaveWindowEvent,68, 8438, 10, 1.2, NULL, 8436, NULL)
#elif defined __powerpc64__
CheckTypeSize(XLeaveWindowEvent,104, 8438, 9, 1.2, NULL, 8436, NULL)
#elif defined __s390x__
CheckTypeSize(XLeaveWindowEvent,104, 8438, 12, 1.2, NULL, 8436, NULL)
#elif defined __x86_64__
CheckTypeSize(XLeaveWindowEvent,104, 8438, 11, 1.2, NULL, 8436, NULL)
#else
Msg("Find size of XLeaveWindowEvent (8438)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8436,NULL);\n",architecture,8438,0);
#endif

#if defined __i386__
CheckTypeSize(XFocusInEvent,28, 8441, 2, 1.2, NULL, 8440, NULL)
#elif defined __ia64__
CheckTypeSize(XFocusInEvent,48, 8441, 3, 1.2, NULL, 8440, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XFocusInEvent,28, 8441, 6, 1.2, NULL, 8440, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XFocusInEvent,28, 8441, 10, 1.2, NULL, 8440, NULL)
#elif defined __powerpc64__
CheckTypeSize(XFocusInEvent,48, 8441, 9, 1.2, NULL, 8440, NULL)
#elif defined __s390x__
CheckTypeSize(XFocusInEvent,48, 8441, 12, 1.2, NULL, 8440, NULL)
#elif defined __x86_64__
CheckTypeSize(XFocusInEvent,48, 8441, 11, 1.2, NULL, 8440, NULL)
#else
Msg("Find size of XFocusInEvent (8441)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8440,NULL);\n",architecture,8441,0);
#endif

#if defined __i386__
CheckTypeSize(XFocusOutEvent,28, 8442, 2, 1.2, NULL, 8440, NULL)
#elif defined __ia64__
CheckTypeSize(XFocusOutEvent,48, 8442, 3, 1.2, NULL, 8440, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XFocusOutEvent,28, 8442, 6, 1.2, NULL, 8440, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XFocusOutEvent,28, 8442, 10, 1.2, NULL, 8440, NULL)
#elif defined __powerpc64__
CheckTypeSize(XFocusOutEvent,48, 8442, 9, 1.2, NULL, 8440, NULL)
#elif defined __s390x__
CheckTypeSize(XFocusOutEvent,48, 8442, 12, 1.2, NULL, 8440, NULL)
#elif defined __x86_64__
CheckTypeSize(XFocusOutEvent,48, 8442, 11, 1.2, NULL, 8440, NULL)
#else
Msg("Find size of XFocusOutEvent (8442)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8440,NULL);\n",architecture,8442,0);
#endif

#if 1
CheckTypeSize(union _XEvent,0, 8496, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(union _XEvent,pad,24,1,33285)
CheckOffset(union _XEvent,pad,0,1,33285)
#endif

#if defined __i386__
CheckTypeSize(XEvent,96, 8497, 2, 1.2, NULL, 8496, NULL)
#elif defined __ia64__
CheckTypeSize(XEvent,192, 8497, 3, 1.2, NULL, 8496, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XEvent,96, 8497, 6, 1.2, NULL, 8496, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XEvent,96, 8497, 10, 1.2, NULL, 8496, NULL)
#elif defined __powerpc64__
CheckTypeSize(XEvent,192, 8497, 9, 1.2, NULL, 8496, NULL)
#elif defined __s390x__
CheckTypeSize(XEvent,192, 8497, 12, 1.2, NULL, 8496, NULL)
#elif defined __x86_64__
CheckTypeSize(XEvent,192, 8497, 11, 1.2, NULL, 8496, NULL)
#else
Msg("Find size of XEvent (8497)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8496,NULL);\n",architecture,8497,0);
#endif

#if defined __i386__
CheckTypeSize(XOM,4, 8514, 2, 1.2, NULL, 7269, NULL)
#elif defined __ia64__
CheckTypeSize(XOM,8, 8514, 3, 1.2, NULL, 7269, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XOM,4, 8514, 6, 1.2, NULL, 7269, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XOM,4, 8514, 10, 1.2, NULL, 7269, NULL)
#elif defined __powerpc64__
CheckTypeSize(XOM,8, 8514, 9, 1.2, NULL, 7269, NULL)
#elif defined __s390x__
CheckTypeSize(XOM,8, 8514, 12, 1.2, NULL, 7269, NULL)
#elif defined __x86_64__
CheckTypeSize(XOM,8, 8514, 11, 1.2, NULL, 7269, NULL)
#else
Msg("Find size of XOM (8514)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,7269,NULL);\n",architecture,8514,0);
#endif

#if defined __i386__
CheckTypeSize(XOC,4, 8515, 2, 1.2, NULL, 7272, NULL)
#elif defined __ia64__
CheckTypeSize(XOC,8, 8515, 3, 1.2, NULL, 7272, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XOC,4, 8515, 6, 1.2, NULL, 7272, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XOC,4, 8515, 10, 1.2, NULL, 7272, NULL)
#elif defined __powerpc64__
CheckTypeSize(XOC,8, 8515, 9, 1.2, NULL, 7272, NULL)
#elif defined __s390x__
CheckTypeSize(XOC,8, 8515, 12, 1.2, NULL, 7272, NULL)
#elif defined __x86_64__
CheckTypeSize(XOC,8, 8515, 11, 1.2, NULL, 7272, NULL)
#else
Msg("Find size of XOC (8515)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,7272,NULL);\n",architecture,8515,0);
#endif

#if defined __i386__
CheckTypeSize(XFontSet,4, 8516, 2, 1.2, NULL, 7272, NULL)
#elif defined __ia64__
CheckTypeSize(XFontSet,8, 8516, 3, 1.2, NULL, 7272, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XFontSet,4, 8516, 6, 1.2, NULL, 7272, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XFontSet,4, 8516, 10, 1.2, NULL, 7272, NULL)
#elif defined __powerpc64__
CheckTypeSize(XFontSet,8, 8516, 9, 1.2, NULL, 7272, NULL)
#elif defined __s390x__
CheckTypeSize(XFontSet,8, 8516, 12, 1.2, NULL, 7272, NULL)
#elif defined __x86_64__
CheckTypeSize(XFontSet,8, 8516, 11, 1.2, NULL, 7272, NULL)
#else
Msg("Find size of XFontSet (8516)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,7272,NULL);\n",architecture,8516,0);
#endif

#if defined __i386__
CheckTypeSize(XIM,4, 8529, 2, 1.2, NULL, 7293, NULL)
#elif defined __ia64__
CheckTypeSize(XIM,8, 8529, 3, 1.2, NULL, 7293, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIM,4, 8529, 6, 1.2, NULL, 7293, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIM,4, 8529, 10, 1.2, NULL, 7293, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIM,8, 8529, 9, 1.2, NULL, 7293, NULL)
#elif defined __s390x__
CheckTypeSize(XIM,8, 8529, 12, 1.2, NULL, 7293, NULL)
#elif defined __x86_64__
CheckTypeSize(XIM,8, 8529, 11, 1.2, NULL, 7293, NULL)
#else
Msg("Find size of XIM (8529)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,7293,NULL);\n",architecture,8529,0);
#endif

#if defined __i386__
CheckTypeSize(XIC,4, 8530, 2, 1.2, NULL, 7296, NULL)
#elif defined __ia64__
CheckTypeSize(XIC,8, 8530, 3, 1.2, NULL, 7296, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIC,4, 8530, 6, 1.2, NULL, 7296, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIC,4, 8530, 10, 1.2, NULL, 7296, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIC,8, 8530, 9, 1.2, NULL, 7296, NULL)
#elif defined __s390x__
CheckTypeSize(XIC,8, 8530, 12, 1.2, NULL, 7296, NULL)
#elif defined __x86_64__
CheckTypeSize(XIC,8, 8530, 11, 1.2, NULL, 7296, NULL)
#else
Msg("Find size of XIC (8530)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,7296,NULL);\n",architecture,8530,0);
#endif

#if 1
CheckTypeSize(XIMStyle,0, 8537, 1, 1.2, NULL, 9, NULL)
#endif

#if 1
CheckTypeSize(XIMProc,0, 8898, 1, 1.2, NULL, 8897, NULL)
#endif

#if 1
CheckTypeSize(XICProc,0, 8900, 1, 1.2, NULL, 8899, NULL)
#endif

#if defined __i386__
CheckTypeSize(XIDProc,4, 8902, 2, 1.2, NULL, 8901, NULL)
#elif defined __ia64__
CheckTypeSize(XIDProc,8, 8902, 3, 1.2, NULL, 8901, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIDProc,4, 8902, 6, 1.2, NULL, 8901, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIDProc,4, 8902, 10, 1.2, NULL, 8901, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIDProc,8, 8902, 9, 1.2, NULL, 8901, NULL)
#elif defined __s390x__
CheckTypeSize(XIDProc,8, 8902, 12, 1.2, NULL, 8901, NULL)
#elif defined __x86_64__
CheckTypeSize(XIDProc,8, 8902, 11, 1.2, NULL, 8901, NULL)
#else
Msg("Find size of XIDProc (8902)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8901,NULL);\n",architecture,8902,0);
#endif

#if defined __i386__
CheckTypeSize(XPointer,4, 8365, 2, 1.2, NULL, 63, NULL)
#elif defined __ia64__
CheckTypeSize(XPointer,8, 8365, 3, 1.2, NULL, 63, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XPointer,4, 8365, 6, 1.2, NULL, 63, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XPointer,4, 8365, 10, 1.2, NULL, 63, NULL)
#elif defined __powerpc64__
CheckTypeSize(XPointer,8, 8365, 9, 1.2, NULL, 63, NULL)
#elif defined __s390x__
CheckTypeSize(XPointer,8, 8365, 12, 1.2, NULL, 63, NULL)
#elif defined __x86_64__
CheckTypeSize(XPointer,8, 8365, 11, 1.2, NULL, 63, NULL)
#else
Msg("Find size of XPointer (8365)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,63, NULL);\n",architecture,8365,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xlib.h\n\n",pcnt,cnt);
return cnt;
#endif

}
