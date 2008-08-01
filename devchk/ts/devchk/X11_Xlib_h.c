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

#if defined __s390x__
CheckTypeSize(struct _XDisplay,296, 7053, 12, 1.3, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on S390X\n");
#elif defined __x86_64__
CheckTypeSize(struct _XDisplay,296, 7053, 11, 2.0, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on x86-64\n");
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XDisplay,176, 7053, 10, 1.3, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on S390\n");
#elif defined __powerpc64__
CheckTypeSize(struct _XDisplay,296, 7053, 9, 2.0, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on PPC64\n");
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XDisplay,176, 7053, 6, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on PPC32\n");
#elif defined __ia64__
CheckTypeSize(struct _XDisplay,296, 7053, 3, 1.3, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on IA64\n");
#elif defined __i386__
CheckTypeSize(struct _XDisplay,176, 7053, 2, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on IA32\n");
#else
Msg("Find size of _XDisplay (7053)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,7053,0);
#endif

#if defined __s390x__
CheckTypeSize(XVaNestedList,8, 8540, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(XVaNestedList,8, 8540, 11, 2.0, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XVaNestedList,4, 8540, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(XVaNestedList,8, 8540, 9, 2.0, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XVaNestedList,4, 8540, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(XVaNestedList,8, 8540, 3, 1.3, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(XVaNestedList,4, 8540, 2, 1.2, NULL, 40, NULL)
#else
Msg("Find size of XVaNestedList (8540)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,8540,0);
#endif

#if defined __s390x__
CheckTypeSize(XIMFeedback,8, 8545, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(XIMFeedback,8, 8545, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIMFeedback,4, 8545, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIMFeedback,8, 8545, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIMFeedback,4, 8545, 6, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(XIMFeedback,8, 8545, 3, 1.3, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(XIMFeedback,4, 8545, 2, 1.2, NULL, 9, NULL)
#else
Msg("Find size of XIMFeedback (8545)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9,NULL);\n",architecture,8545,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XIMText,32, 8546, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMText,feedback,8,12,33355)
CheckOffset(struct _XIMText,feedback,8,12,33355)
CheckMemberSize(struct _XIMText,encoding_is_wchar,4,12,33356)
CheckOffset(struct _XIMText,encoding_is_wchar,16,12,33356)
CheckMemberSize(struct _XIMText,string,8,12,33359)
CheckOffset(struct _XIMText,string,24,12,33359)
#elif defined __x86_64__
CheckTypeSize(struct _XIMText,32, 8546, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XIMText,feedback,8,11,33355)
CheckOffset(struct _XIMText,feedback,8,11,33355)
CheckMemberSize(struct _XIMText,encoding_is_wchar,4,11,33356)
CheckOffset(struct _XIMText,encoding_is_wchar,16,11,33356)
CheckMemberSize(struct _XIMText,string,8,11,33359)
CheckOffset(struct _XIMText,string,24,11,33359)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XIMText,16, 8546, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMText,feedback,4,10,33355)
CheckOffset(struct _XIMText,feedback,4,10,33355)
CheckMemberSize(struct _XIMText,encoding_is_wchar,4,10,33356)
CheckOffset(struct _XIMText,encoding_is_wchar,8,10,33356)
CheckMemberSize(struct _XIMText,string,4,10,33359)
CheckOffset(struct _XIMText,string,12,10,33359)
#elif defined __powerpc64__
CheckTypeSize(struct _XIMText,32, 8546, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XIMText,feedback,8,9,33355)
CheckOffset(struct _XIMText,feedback,8,9,33355)
CheckMemberSize(struct _XIMText,encoding_is_wchar,4,9,33356)
CheckOffset(struct _XIMText,encoding_is_wchar,16,9,33356)
CheckMemberSize(struct _XIMText,string,8,9,33359)
CheckOffset(struct _XIMText,string,24,9,33359)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XIMText,16, 8546, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XIMText,feedback,4,6,33355)
CheckOffset(struct _XIMText,feedback,4,6,33355)
CheckMemberSize(struct _XIMText,encoding_is_wchar,4,6,33356)
CheckOffset(struct _XIMText,encoding_is_wchar,8,6,33356)
CheckMemberSize(struct _XIMText,string,4,6,33359)
CheckOffset(struct _XIMText,string,12,6,33359)
#elif defined __ia64__
CheckTypeSize(struct _XIMText,32, 8546, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMText,feedback,8,3,33355)
CheckOffset(struct _XIMText,feedback,8,3,33355)
CheckMemberSize(struct _XIMText,encoding_is_wchar,4,3,33356)
CheckOffset(struct _XIMText,encoding_is_wchar,16,3,33356)
CheckMemberSize(struct _XIMText,string,8,3,33359)
CheckOffset(struct _XIMText,string,24,3,33359)
#elif defined __i386__
CheckTypeSize(struct _XIMText,16, 8546, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XIMText,feedback,4,2,33355)
CheckOffset(struct _XIMText,feedback,4,2,33355)
CheckMemberSize(struct _XIMText,encoding_is_wchar,4,2,33356)
CheckOffset(struct _XIMText,encoding_is_wchar,8,2,33356)
CheckMemberSize(struct _XIMText,string,4,2,33359)
CheckOffset(struct _XIMText,string,12,2,33359)
#else
Msg("Find size of _XIMText (8546)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8546,0);
#endif

#if defined __s390x__
CheckTypeSize(XIMPreeditState,8, 8549, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(XIMPreeditState,8, 8549, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIMPreeditState,4, 8549, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIMPreeditState,8, 8549, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIMPreeditState,4, 8549, 6, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(XIMPreeditState,8, 8549, 3, 1.3, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(XIMPreeditState,4, 8549, 2, 1.2, NULL, 9, NULL)
#else
Msg("Find size of XIMPreeditState (8549)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9,NULL);\n",architecture,8549,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XIMPreeditStateNotifyCallbackStruct,8, 8550, 12, 1.3, NULL, 0, NULL)
Msg("Missing member data for _XIMPreeditStateNotifyCallbackStruct on S390X\n");
CheckOffset(struct _XIMPreeditStateNotifyCallbackStruct,state,0,12,33360)
#elif defined __x86_64__
CheckTypeSize(struct _XIMPreeditStateNotifyCallbackStruct,8, 8550, 11, 2.0, NULL, 0, NULL)
Msg("Missing member data for _XIMPreeditStateNotifyCallbackStruct on x86-64\n");
CheckOffset(struct _XIMPreeditStateNotifyCallbackStruct,state,0,11,33360)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XIMPreeditStateNotifyCallbackStruct,4, 8550, 10, 1.3, NULL, 0, NULL)
Msg("Missing member data for _XIMPreeditStateNotifyCallbackStruct on S390\n");
CheckOffset(struct _XIMPreeditStateNotifyCallbackStruct,state,0,10,33360)
#elif defined __powerpc64__
CheckTypeSize(struct _XIMPreeditStateNotifyCallbackStruct,8, 8550, 9, 2.0, NULL, 0, NULL)
Msg("Missing member data for _XIMPreeditStateNotifyCallbackStruct on PPC64\n");
CheckOffset(struct _XIMPreeditStateNotifyCallbackStruct,state,0,9,33360)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XIMPreeditStateNotifyCallbackStruct,4, 8550, 6, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XIMPreeditStateNotifyCallbackStruct on PPC32\n");
CheckOffset(struct _XIMPreeditStateNotifyCallbackStruct,state,0,6,33360)
#elif defined __ia64__
CheckTypeSize(struct _XIMPreeditStateNotifyCallbackStruct,8, 8550, 3, 1.3, NULL, 0, NULL)
Msg("Missing member data for _XIMPreeditStateNotifyCallbackStruct on IA64\n");
CheckOffset(struct _XIMPreeditStateNotifyCallbackStruct,state,0,3,33360)
#elif defined __i386__
CheckTypeSize(struct _XIMPreeditStateNotifyCallbackStruct,4, 8550, 2, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XIMPreeditStateNotifyCallbackStruct on IA32\n");
CheckOffset(struct _XIMPreeditStateNotifyCallbackStruct,state,0,2,33360)
#else
Msg("Find size of _XIMPreeditStateNotifyCallbackStruct (8550)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8550,0);
#endif

#if defined __s390x__
CheckTypeSize(XIMPreeditStateNotifyCallbackStruct,8, 8551, 12, 1.3, NULL, 8550, NULL)
#elif defined __x86_64__
CheckTypeSize(XIMPreeditStateNotifyCallbackStruct,8, 8551, 11, 2.0, NULL, 8550, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIMPreeditStateNotifyCallbackStruct,4, 8551, 10, 1.3, NULL, 8550, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIMPreeditStateNotifyCallbackStruct,8, 8551, 9, 2.0, NULL, 8550, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIMPreeditStateNotifyCallbackStruct,4, 8551, 6, 1.2, NULL, 8550, NULL)
#elif defined __ia64__
CheckTypeSize(XIMPreeditStateNotifyCallbackStruct,8, 8551, 3, 1.3, NULL, 8550, NULL)
#elif defined __i386__
CheckTypeSize(XIMPreeditStateNotifyCallbackStruct,4, 8551, 2, 1.2, NULL, 8550, NULL)
#else
Msg("Find size of XIMPreeditStateNotifyCallbackStruct (8551)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8550,NULL);\n",architecture,8551,0);
#endif

#if defined __s390x__
CheckTypeSize(XIMResetState,8, 8552, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(XIMResetState,8, 8552, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIMResetState,4, 8552, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIMResetState,8, 8552, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIMResetState,4, 8552, 6, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(XIMResetState,8, 8552, 3, 1.3, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(XIMResetState,4, 8552, 2, 1.2, NULL, 9, NULL)
#else
Msg("Find size of XIMResetState (8552)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9,NULL);\n",architecture,8552,0);
#endif

#if defined __s390x__
CheckTypeSize(XIMStringConversionFeedback,8, 8553, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(XIMStringConversionFeedback,8, 8553, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIMStringConversionFeedback,4, 8553, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIMStringConversionFeedback,8, 8553, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIMStringConversionFeedback,4, 8553, 6, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(XIMStringConversionFeedback,8, 8553, 3, 1.3, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(XIMStringConversionFeedback,4, 8553, 2, 1.2, NULL, 9, NULL)
#else
Msg("Find size of XIMStringConversionFeedback (8553)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9,NULL);\n",architecture,8553,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XIMStringConversionText,32, 8554, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMStringConversionText,feedback,8,12,33362)
CheckOffset(struct _XIMStringConversionText,feedback,8,12,33362)
CheckMemberSize(struct _XIMStringConversionText,encoding_is_wchar,4,12,33363)
CheckOffset(struct _XIMStringConversionText,encoding_is_wchar,16,12,33363)
CheckMemberSize(struct _XIMStringConversionText,string,8,12,33366)
CheckOffset(struct _XIMStringConversionText,string,24,12,33366)
#elif defined __x86_64__
CheckTypeSize(struct _XIMStringConversionText,32, 8554, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XIMStringConversionText,feedback,8,11,33362)
CheckOffset(struct _XIMStringConversionText,feedback,8,11,33362)
CheckMemberSize(struct _XIMStringConversionText,encoding_is_wchar,4,11,33363)
CheckOffset(struct _XIMStringConversionText,encoding_is_wchar,16,11,33363)
CheckMemberSize(struct _XIMStringConversionText,string,8,11,33366)
CheckOffset(struct _XIMStringConversionText,string,24,11,33366)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XIMStringConversionText,16, 8554, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMStringConversionText,feedback,4,10,33362)
CheckOffset(struct _XIMStringConversionText,feedback,4,10,33362)
CheckMemberSize(struct _XIMStringConversionText,encoding_is_wchar,4,10,33363)
CheckOffset(struct _XIMStringConversionText,encoding_is_wchar,8,10,33363)
CheckMemberSize(struct _XIMStringConversionText,string,4,10,33366)
CheckOffset(struct _XIMStringConversionText,string,12,10,33366)
#elif defined __powerpc64__
CheckTypeSize(struct _XIMStringConversionText,32, 8554, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XIMStringConversionText,feedback,8,9,33362)
CheckOffset(struct _XIMStringConversionText,feedback,8,9,33362)
CheckMemberSize(struct _XIMStringConversionText,encoding_is_wchar,4,9,33363)
CheckOffset(struct _XIMStringConversionText,encoding_is_wchar,16,9,33363)
CheckMemberSize(struct _XIMStringConversionText,string,8,9,33366)
CheckOffset(struct _XIMStringConversionText,string,24,9,33366)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XIMStringConversionText,16, 8554, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XIMStringConversionText,feedback,4,6,33362)
CheckOffset(struct _XIMStringConversionText,feedback,4,6,33362)
CheckMemberSize(struct _XIMStringConversionText,encoding_is_wchar,4,6,33363)
CheckOffset(struct _XIMStringConversionText,encoding_is_wchar,8,6,33363)
CheckMemberSize(struct _XIMStringConversionText,string,4,6,33366)
CheckOffset(struct _XIMStringConversionText,string,12,6,33366)
#elif defined __ia64__
CheckTypeSize(struct _XIMStringConversionText,32, 8554, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMStringConversionText,feedback,8,3,33362)
CheckOffset(struct _XIMStringConversionText,feedback,8,3,33362)
CheckMemberSize(struct _XIMStringConversionText,encoding_is_wchar,4,3,33363)
CheckOffset(struct _XIMStringConversionText,encoding_is_wchar,16,3,33363)
CheckMemberSize(struct _XIMStringConversionText,string,8,3,33366)
CheckOffset(struct _XIMStringConversionText,string,24,3,33366)
#elif defined __i386__
CheckTypeSize(struct _XIMStringConversionText,16, 8554, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XIMStringConversionText,feedback,4,2,33362)
CheckOffset(struct _XIMStringConversionText,feedback,4,2,33362)
CheckMemberSize(struct _XIMStringConversionText,encoding_is_wchar,4,2,33363)
CheckOffset(struct _XIMStringConversionText,encoding_is_wchar,8,2,33363)
CheckMemberSize(struct _XIMStringConversionText,string,4,2,33366)
CheckOffset(struct _XIMStringConversionText,string,12,2,33366)
#else
Msg("Find size of _XIMStringConversionText (8554)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8554,0);
#endif

#if 1
CheckTypeSize(XIMStringConversionPosition,2, 8557, 1, 1.2, NULL, 5, NULL)
#endif

#if 1
CheckTypeSize(XIMStringConversionType,2, 8558, 1, 1.2, NULL, 5, NULL)
#endif

#if 1
CheckTypeSize(XIMStringConversionOperation,2, 8559, 1, 1.2, NULL, 5, NULL)
#endif

#if defined __s390x__
CheckTypeSize(struct _XIMStringConversionCallbackStruct,24, 8562, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,direction,4,12,33380)
CheckOffset(struct _XIMStringConversionCallbackStruct,direction,4,12,33380)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,operation,2,12,33381)
CheckOffset(struct _XIMStringConversionCallbackStruct,operation,8,12,33381)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,factor,2,12,33382)
CheckOffset(struct _XIMStringConversionCallbackStruct,factor,10,12,33382)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,text,8,12,33383)
CheckOffset(struct _XIMStringConversionCallbackStruct,text,16,12,33383)
#elif defined __x86_64__
CheckTypeSize(struct _XIMStringConversionCallbackStruct,24, 8562, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,direction,4,11,33380)
CheckOffset(struct _XIMStringConversionCallbackStruct,direction,4,11,33380)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,operation,2,11,33381)
CheckOffset(struct _XIMStringConversionCallbackStruct,operation,8,11,33381)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,factor,2,11,33382)
CheckOffset(struct _XIMStringConversionCallbackStruct,factor,10,11,33382)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,text,8,11,33383)
CheckOffset(struct _XIMStringConversionCallbackStruct,text,16,11,33383)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XIMStringConversionCallbackStruct,16, 8562, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,direction,4,10,33380)
CheckOffset(struct _XIMStringConversionCallbackStruct,direction,4,10,33380)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,operation,2,10,33381)
CheckOffset(struct _XIMStringConversionCallbackStruct,operation,8,10,33381)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,factor,2,10,33382)
CheckOffset(struct _XIMStringConversionCallbackStruct,factor,10,10,33382)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,text,4,10,33383)
CheckOffset(struct _XIMStringConversionCallbackStruct,text,12,10,33383)
#elif defined __powerpc64__
CheckTypeSize(struct _XIMStringConversionCallbackStruct,24, 8562, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,direction,4,9,33380)
CheckOffset(struct _XIMStringConversionCallbackStruct,direction,4,9,33380)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,operation,2,9,33381)
CheckOffset(struct _XIMStringConversionCallbackStruct,operation,8,9,33381)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,factor,2,9,33382)
CheckOffset(struct _XIMStringConversionCallbackStruct,factor,10,9,33382)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,text,8,9,33383)
CheckOffset(struct _XIMStringConversionCallbackStruct,text,16,9,33383)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XIMStringConversionCallbackStruct,16, 8562, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,direction,4,6,33380)
CheckOffset(struct _XIMStringConversionCallbackStruct,direction,4,6,33380)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,operation,2,6,33381)
CheckOffset(struct _XIMStringConversionCallbackStruct,operation,8,6,33381)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,factor,2,6,33382)
CheckOffset(struct _XIMStringConversionCallbackStruct,factor,10,6,33382)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,text,4,6,33383)
CheckOffset(struct _XIMStringConversionCallbackStruct,text,12,6,33383)
#elif defined __ia64__
CheckTypeSize(struct _XIMStringConversionCallbackStruct,24, 8562, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,direction,4,3,33380)
CheckOffset(struct _XIMStringConversionCallbackStruct,direction,4,3,33380)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,operation,2,3,33381)
CheckOffset(struct _XIMStringConversionCallbackStruct,operation,8,3,33381)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,factor,2,3,33382)
CheckOffset(struct _XIMStringConversionCallbackStruct,factor,10,3,33382)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,text,8,3,33383)
CheckOffset(struct _XIMStringConversionCallbackStruct,text,16,3,33383)
#elif defined __i386__
CheckTypeSize(struct _XIMStringConversionCallbackStruct,16, 8562, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,direction,4,2,33380)
CheckOffset(struct _XIMStringConversionCallbackStruct,direction,4,2,33380)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,operation,2,2,33381)
CheckOffset(struct _XIMStringConversionCallbackStruct,operation,8,2,33381)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,factor,2,2,33382)
CheckOffset(struct _XIMStringConversionCallbackStruct,factor,10,2,33382)
CheckMemberSize(struct _XIMStringConversionCallbackStruct,text,4,2,33383)
CheckOffset(struct _XIMStringConversionCallbackStruct,text,12,2,33383)
#else
Msg("Find size of _XIMStringConversionCallbackStruct (8562)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8562,0);
#endif

#if defined __s390x__
CheckTypeSize(XIMStringConversionCallbackStruct,24, 8563, 12, 1.3, NULL, 8562, NULL)
#elif defined __x86_64__
CheckTypeSize(XIMStringConversionCallbackStruct,24, 8563, 11, 2.0, NULL, 8562, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIMStringConversionCallbackStruct,16, 8563, 10, 1.3, NULL, 8562, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIMStringConversionCallbackStruct,24, 8563, 9, 2.0, NULL, 8562, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIMStringConversionCallbackStruct,16, 8563, 6, 1.2, NULL, 8562, NULL)
#elif defined __ia64__
CheckTypeSize(XIMStringConversionCallbackStruct,24, 8563, 3, 1.3, NULL, 8562, NULL)
#elif defined __i386__
CheckTypeSize(XIMStringConversionCallbackStruct,16, 8563, 2, 1.2, NULL, 8562, NULL)
#else
Msg("Find size of XIMStringConversionCallbackStruct (8563)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8562,NULL);\n",architecture,8563,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XIMPreeditDrawCallbackStruct,24, 8564, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,chg_first,4,12,33385)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,chg_first,4,12,33385)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,chg_length,4,12,33386)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,chg_length,8,12,33386)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,text,8,12,33387)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,text,16,12,33387)
#elif defined __x86_64__
CheckTypeSize(struct _XIMPreeditDrawCallbackStruct,24, 8564, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,chg_first,4,11,33385)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,chg_first,4,11,33385)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,chg_length,4,11,33386)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,chg_length,8,11,33386)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,text,8,11,33387)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,text,16,11,33387)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XIMPreeditDrawCallbackStruct,16, 8564, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,chg_first,4,10,33385)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,chg_first,4,10,33385)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,chg_length,4,10,33386)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,chg_length,8,10,33386)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,text,4,10,33387)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,text,12,10,33387)
#elif defined __powerpc64__
CheckTypeSize(struct _XIMPreeditDrawCallbackStruct,24, 8564, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,chg_first,4,9,33385)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,chg_first,4,9,33385)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,chg_length,4,9,33386)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,chg_length,8,9,33386)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,text,8,9,33387)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,text,16,9,33387)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XIMPreeditDrawCallbackStruct,16, 8564, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,chg_first,4,6,33385)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,chg_first,4,6,33385)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,chg_length,4,6,33386)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,chg_length,8,6,33386)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,text,4,6,33387)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,text,12,6,33387)
#elif defined __ia64__
CheckTypeSize(struct _XIMPreeditDrawCallbackStruct,24, 8564, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,chg_first,4,3,33385)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,chg_first,4,3,33385)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,chg_length,4,3,33386)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,chg_length,8,3,33386)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,text,8,3,33387)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,text,16,3,33387)
#elif defined __i386__
CheckTypeSize(struct _XIMPreeditDrawCallbackStruct,16, 8564, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,chg_first,4,2,33385)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,chg_first,4,2,33385)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,chg_length,4,2,33386)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,chg_length,8,2,33386)
CheckMemberSize(struct _XIMPreeditDrawCallbackStruct,text,4,2,33387)
CheckOffset(struct _XIMPreeditDrawCallbackStruct,text,12,2,33387)
#else
Msg("Find size of _XIMPreeditDrawCallbackStruct (8564)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8564,0);
#endif

#if defined __s390x__
CheckTypeSize(XIMPreeditDrawCallbackStruct,24, 8565, 12, 1.3, NULL, 8564, NULL)
#elif defined __x86_64__
CheckTypeSize(XIMPreeditDrawCallbackStruct,24, 8565, 11, 2.0, NULL, 8564, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIMPreeditDrawCallbackStruct,16, 8565, 10, 1.3, NULL, 8564, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIMPreeditDrawCallbackStruct,24, 8565, 9, 2.0, NULL, 8564, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIMPreeditDrawCallbackStruct,16, 8565, 6, 1.2, NULL, 8564, NULL)
#elif defined __ia64__
CheckTypeSize(XIMPreeditDrawCallbackStruct,24, 8565, 3, 1.3, NULL, 8564, NULL)
#elif defined __i386__
CheckTypeSize(XIMPreeditDrawCallbackStruct,16, 8565, 2, 1.2, NULL, 8564, NULL)
#else
Msg("Find size of XIMPreeditDrawCallbackStruct (8565)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8564,NULL);\n",architecture,8565,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XIMPreeditCaretCallbackStruct,12, 8568, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMPreeditCaretCallbackStruct,direction,4,12,33392)
CheckOffset(struct _XIMPreeditCaretCallbackStruct,direction,4,12,33392)
CheckMemberSize(struct _XIMPreeditCaretCallbackStruct,style,4,12,33393)
CheckOffset(struct _XIMPreeditCaretCallbackStruct,style,8,12,33393)
#elif defined __x86_64__
CheckTypeSize(struct _XIMPreeditCaretCallbackStruct,12, 8568, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XIMPreeditCaretCallbackStruct,direction,4,11,33392)
CheckOffset(struct _XIMPreeditCaretCallbackStruct,direction,4,11,33392)
CheckMemberSize(struct _XIMPreeditCaretCallbackStruct,style,4,11,33393)
CheckOffset(struct _XIMPreeditCaretCallbackStruct,style,8,11,33393)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XIMPreeditCaretCallbackStruct,12, 8568, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMPreeditCaretCallbackStruct,direction,4,10,33392)
CheckOffset(struct _XIMPreeditCaretCallbackStruct,direction,4,10,33392)
CheckMemberSize(struct _XIMPreeditCaretCallbackStruct,style,4,10,33393)
CheckOffset(struct _XIMPreeditCaretCallbackStruct,style,8,10,33393)
#elif defined __powerpc64__
CheckTypeSize(struct _XIMPreeditCaretCallbackStruct,12, 8568, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XIMPreeditCaretCallbackStruct,direction,4,9,33392)
CheckOffset(struct _XIMPreeditCaretCallbackStruct,direction,4,9,33392)
CheckMemberSize(struct _XIMPreeditCaretCallbackStruct,style,4,9,33393)
CheckOffset(struct _XIMPreeditCaretCallbackStruct,style,8,9,33393)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XIMPreeditCaretCallbackStruct,12, 8568, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XIMPreeditCaretCallbackStruct,direction,4,6,33392)
CheckOffset(struct _XIMPreeditCaretCallbackStruct,direction,4,6,33392)
CheckMemberSize(struct _XIMPreeditCaretCallbackStruct,style,4,6,33393)
CheckOffset(struct _XIMPreeditCaretCallbackStruct,style,8,6,33393)
#elif defined __ia64__
CheckTypeSize(struct _XIMPreeditCaretCallbackStruct,12, 8568, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMPreeditCaretCallbackStruct,direction,4,3,33392)
CheckOffset(struct _XIMPreeditCaretCallbackStruct,direction,4,3,33392)
CheckMemberSize(struct _XIMPreeditCaretCallbackStruct,style,4,3,33393)
CheckOffset(struct _XIMPreeditCaretCallbackStruct,style,8,3,33393)
#elif defined __i386__
CheckTypeSize(struct _XIMPreeditCaretCallbackStruct,12, 8568, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XIMPreeditCaretCallbackStruct,direction,4,2,33392)
CheckOffset(struct _XIMPreeditCaretCallbackStruct,direction,4,2,33392)
CheckMemberSize(struct _XIMPreeditCaretCallbackStruct,style,4,2,33393)
CheckOffset(struct _XIMPreeditCaretCallbackStruct,style,8,2,33393)
#else
Msg("Find size of _XIMPreeditCaretCallbackStruct (8568)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8568,0);
#endif

#if defined __s390x__
CheckTypeSize(XIMPreeditCaretCallbackStruct,12, 8569, 12, 1.3, NULL, 8568, NULL)
#elif defined __x86_64__
CheckTypeSize(XIMPreeditCaretCallbackStruct,12, 8569, 11, 2.0, NULL, 8568, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIMPreeditCaretCallbackStruct,12, 8569, 10, 1.3, NULL, 8568, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIMPreeditCaretCallbackStruct,12, 8569, 9, 2.0, NULL, 8568, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIMPreeditCaretCallbackStruct,12, 8569, 6, 1.2, NULL, 8568, NULL)
#elif defined __ia64__
CheckTypeSize(XIMPreeditCaretCallbackStruct,12, 8569, 3, 1.3, NULL, 8568, NULL)
#elif defined __i386__
CheckTypeSize(XIMPreeditCaretCallbackStruct,12, 8569, 2, 1.2, NULL, 8568, NULL)
#else
Msg("Find size of XIMPreeditCaretCallbackStruct (8569)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8568,NULL);\n",architecture,8569,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XIMStatusDrawCallbackStruct,16, 8572, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMStatusDrawCallbackStruct,data,8,12,33399)
CheckOffset(struct _XIMStatusDrawCallbackStruct,data,8,12,33399)
#elif defined __x86_64__
CheckTypeSize(struct _XIMStatusDrawCallbackStruct,16, 8572, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XIMStatusDrawCallbackStruct,data,8,11,33399)
CheckOffset(struct _XIMStatusDrawCallbackStruct,data,8,11,33399)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XIMStatusDrawCallbackStruct,8, 8572, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMStatusDrawCallbackStruct,data,4,10,33399)
CheckOffset(struct _XIMStatusDrawCallbackStruct,data,4,10,33399)
#elif defined __powerpc64__
CheckTypeSize(struct _XIMStatusDrawCallbackStruct,16, 8572, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XIMStatusDrawCallbackStruct,data,8,9,33399)
CheckOffset(struct _XIMStatusDrawCallbackStruct,data,8,9,33399)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XIMStatusDrawCallbackStruct,8, 8572, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XIMStatusDrawCallbackStruct,data,4,6,33399)
CheckOffset(struct _XIMStatusDrawCallbackStruct,data,4,6,33399)
#elif defined __ia64__
CheckTypeSize(struct _XIMStatusDrawCallbackStruct,16, 8572, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMStatusDrawCallbackStruct,data,8,3,33399)
CheckOffset(struct _XIMStatusDrawCallbackStruct,data,8,3,33399)
#elif defined __i386__
CheckTypeSize(struct _XIMStatusDrawCallbackStruct,8, 8572, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XIMStatusDrawCallbackStruct,data,4,2,33399)
CheckOffset(struct _XIMStatusDrawCallbackStruct,data,4,2,33399)
#else
Msg("Find size of _XIMStatusDrawCallbackStruct (8572)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8572,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XIMHotKeyTrigger,16, 8575, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMHotKeyTrigger,modifier,4,12,33401)
CheckOffset(struct _XIMHotKeyTrigger,modifier,8,12,33401)
CheckMemberSize(struct _XIMHotKeyTrigger,modifier_mask,4,12,33402)
CheckOffset(struct _XIMHotKeyTrigger,modifier_mask,12,12,33402)
#elif defined __x86_64__
CheckTypeSize(struct _XIMHotKeyTrigger,16, 8575, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XIMHotKeyTrigger,modifier,4,11,33401)
CheckOffset(struct _XIMHotKeyTrigger,modifier,8,11,33401)
CheckMemberSize(struct _XIMHotKeyTrigger,modifier_mask,4,11,33402)
CheckOffset(struct _XIMHotKeyTrigger,modifier_mask,12,11,33402)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XIMHotKeyTrigger,12, 8575, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMHotKeyTrigger,modifier,4,10,33401)
CheckOffset(struct _XIMHotKeyTrigger,modifier,4,10,33401)
CheckMemberSize(struct _XIMHotKeyTrigger,modifier_mask,4,10,33402)
CheckOffset(struct _XIMHotKeyTrigger,modifier_mask,8,10,33402)
#elif defined __powerpc64__
CheckTypeSize(struct _XIMHotKeyTrigger,16, 8575, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XIMHotKeyTrigger,modifier,4,9,33401)
CheckOffset(struct _XIMHotKeyTrigger,modifier,8,9,33401)
CheckMemberSize(struct _XIMHotKeyTrigger,modifier_mask,4,9,33402)
CheckOffset(struct _XIMHotKeyTrigger,modifier_mask,12,9,33402)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XIMHotKeyTrigger,12, 8575, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XIMHotKeyTrigger,modifier,4,6,33401)
CheckOffset(struct _XIMHotKeyTrigger,modifier,4,6,33401)
CheckMemberSize(struct _XIMHotKeyTrigger,modifier_mask,4,6,33402)
CheckOffset(struct _XIMHotKeyTrigger,modifier_mask,8,6,33402)
#elif defined __ia64__
CheckTypeSize(struct _XIMHotKeyTrigger,16, 8575, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMHotKeyTrigger,modifier,4,3,33401)
CheckOffset(struct _XIMHotKeyTrigger,modifier,8,3,33401)
CheckMemberSize(struct _XIMHotKeyTrigger,modifier_mask,4,3,33402)
CheckOffset(struct _XIMHotKeyTrigger,modifier_mask,12,3,33402)
#elif defined __i386__
CheckTypeSize(struct _XIMHotKeyTrigger,12, 8575, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XIMHotKeyTrigger,modifier,4,2,33401)
CheckOffset(struct _XIMHotKeyTrigger,modifier,4,2,33401)
CheckMemberSize(struct _XIMHotKeyTrigger,modifier_mask,4,2,33402)
CheckOffset(struct _XIMHotKeyTrigger,modifier_mask,8,2,33402)
#else
Msg("Find size of _XIMHotKeyTrigger (8575)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8575,0);
#endif

#if defined __s390x__
CheckTypeSize(XIMHotKeyTrigger,16, 8576, 12, 1.3, NULL, 8575, NULL)
#elif defined __x86_64__
CheckTypeSize(XIMHotKeyTrigger,16, 8576, 11, 2.0, NULL, 8575, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIMHotKeyTrigger,12, 8576, 10, 1.3, NULL, 8575, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIMHotKeyTrigger,16, 8576, 9, 2.0, NULL, 8575, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIMHotKeyTrigger,12, 8576, 6, 1.2, NULL, 8575, NULL)
#elif defined __ia64__
CheckTypeSize(XIMHotKeyTrigger,16, 8576, 3, 1.3, NULL, 8575, NULL)
#elif defined __i386__
CheckTypeSize(XIMHotKeyTrigger,12, 8576, 2, 1.2, NULL, 8575, NULL)
#else
Msg("Find size of XIMHotKeyTrigger (8576)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8575,NULL);\n",architecture,8576,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XIMHotKeyTriggers,16, 8577, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMHotKeyTriggers,key,8,12,33404)
CheckOffset(struct _XIMHotKeyTriggers,key,8,12,33404)
#elif defined __x86_64__
CheckTypeSize(struct _XIMHotKeyTriggers,16, 8577, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XIMHotKeyTriggers,key,8,11,33404)
CheckOffset(struct _XIMHotKeyTriggers,key,8,11,33404)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XIMHotKeyTriggers,8, 8577, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMHotKeyTriggers,key,4,10,33404)
CheckOffset(struct _XIMHotKeyTriggers,key,4,10,33404)
#elif defined __powerpc64__
CheckTypeSize(struct _XIMHotKeyTriggers,16, 8577, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XIMHotKeyTriggers,key,8,9,33404)
CheckOffset(struct _XIMHotKeyTriggers,key,8,9,33404)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XIMHotKeyTriggers,8, 8577, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XIMHotKeyTriggers,key,4,6,33404)
CheckOffset(struct _XIMHotKeyTriggers,key,4,6,33404)
#elif defined __ia64__
CheckTypeSize(struct _XIMHotKeyTriggers,16, 8577, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIMHotKeyTriggers,key,8,3,33404)
CheckOffset(struct _XIMHotKeyTriggers,key,8,3,33404)
#elif defined __i386__
CheckTypeSize(struct _XIMHotKeyTriggers,8, 8577, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XIMHotKeyTriggers,key,4,2,33404)
CheckOffset(struct _XIMHotKeyTriggers,key,4,2,33404)
#else
Msg("Find size of _XIMHotKeyTriggers (8577)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8577,0);
#endif

#if defined __s390x__
CheckTypeSize(XIMHotKeyTriggers,16, 8578, 12, 1.3, NULL, 8577, NULL)
#elif defined __x86_64__
CheckTypeSize(XIMHotKeyTriggers,16, 8578, 11, 2.0, NULL, 8577, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIMHotKeyTriggers,8, 8578, 10, 1.3, NULL, 8577, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIMHotKeyTriggers,16, 8578, 9, 2.0, NULL, 8577, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIMHotKeyTriggers,8, 8578, 6, 1.2, NULL, 8577, NULL)
#elif defined __ia64__
CheckTypeSize(XIMHotKeyTriggers,16, 8578, 3, 1.3, NULL, 8577, NULL)
#elif defined __i386__
CheckTypeSize(XIMHotKeyTriggers,8, 8578, 2, 1.2, NULL, 8577, NULL)
#else
Msg("Find size of XIMHotKeyTriggers (8578)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8577,NULL);\n",architecture,8578,0);
#endif

#if defined __s390x__
CheckTypeSize(XIMHotKeyState,8, 8579, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(XIMHotKeyState,8, 8579, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIMHotKeyState,4, 8579, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIMHotKeyState,8, 8579, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIMHotKeyState,4, 8579, 6, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(XIMHotKeyState,8, 8579, 3, 1.3, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(XIMHotKeyState,4, 8579, 2, 1.2, NULL, 9, NULL)
#else
Msg("Find size of XIMHotKeyState (8579)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9,NULL);\n",architecture,8579,0);
#endif

#if 1
#endif

#if 1
#endif

#if 1
#endif

#if 1
#endif

#if defined __s390x__
CheckTypeSize(XErrorHandler,8, 8930, 12, 1.3, NULL, 8928, NULL)
#elif defined __x86_64__
CheckTypeSize(XErrorHandler,8, 8930, 11, 2.0, NULL, 8928, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XErrorHandler,4, 8930, 10, 1.3, NULL, 8928, NULL)
#elif defined __powerpc64__
CheckTypeSize(XErrorHandler,8, 8930, 9, 2.0, NULL, 8928, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XErrorHandler,4, 8930, 6, 1.2, NULL, 8928, NULL)
#elif defined __ia64__
CheckTypeSize(XErrorHandler,8, 8930, 3, 1.3, NULL, 8928, NULL)
#elif defined __i386__
CheckTypeSize(XErrorHandler,4, 8930, 2, 1.2, NULL, 8928, NULL)
#else
Msg("Find size of XErrorHandler (8930)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8928,NULL);\n",architecture,8930,0);
#endif

#if defined __s390x__
CheckTypeSize(XIOErrorHandler,8, 8932, 12, 1.3, NULL, 8931, NULL)
#elif defined __x86_64__
CheckTypeSize(XIOErrorHandler,8, 8932, 11, 2.0, NULL, 8931, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIOErrorHandler,4, 8932, 10, 1.3, NULL, 8931, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIOErrorHandler,8, 8932, 9, 2.0, NULL, 8931, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIOErrorHandler,4, 8932, 6, 1.2, NULL, 8931, NULL)
#elif defined __ia64__
CheckTypeSize(XIOErrorHandler,8, 8932, 3, 1.3, NULL, 8931, NULL)
#elif defined __i386__
CheckTypeSize(XIOErrorHandler,4, 8932, 2, 1.2, NULL, 8931, NULL)
#else
Msg("Find size of XIOErrorHandler (8932)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8931,NULL);\n",architecture,8932,0);
#endif

#if defined __s390x__
CheckTypeSize(XConnectionWatchProc,8, 8956, 12, 1.3, NULL, 8955, NULL)
#elif defined __x86_64__
CheckTypeSize(XConnectionWatchProc,8, 8956, 11, 2.0, NULL, 8955, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XConnectionWatchProc,4, 8956, 10, 1.3, NULL, 8955, NULL)
#elif defined __powerpc64__
CheckTypeSize(XConnectionWatchProc,8, 8956, 9, 2.0, NULL, 8955, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XConnectionWatchProc,4, 8956, 6, 1.2, NULL, 8955, NULL)
#elif defined __ia64__
CheckTypeSize(XConnectionWatchProc,8, 8956, 3, 1.3, NULL, 8955, NULL)
#elif defined __i386__
CheckTypeSize(XConnectionWatchProc,4, 8956, 2, 1.2, NULL, 8955, NULL)
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

#if defined __s390x__
CheckTypeSize(struct _XExtData,32, 8366, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XExtData,next,8,12,32740)
CheckOffset(struct _XExtData,next,8,12,32740)
CheckMemberSize(struct _XExtData,free_private,8,12,32742)
CheckOffset(struct _XExtData,free_private,16,12,32742)
CheckMemberSize(struct _XExtData,private_data,8,12,32743)
CheckOffset(struct _XExtData,private_data,24,12,32743)
#elif defined __x86_64__
CheckTypeSize(struct _XExtData,32, 8366, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XExtData,next,8,11,32740)
CheckOffset(struct _XExtData,next,8,11,32740)
CheckMemberSize(struct _XExtData,free_private,8,11,32742)
CheckOffset(struct _XExtData,free_private,16,11,32742)
CheckMemberSize(struct _XExtData,private_data,8,11,32743)
CheckOffset(struct _XExtData,private_data,24,11,32743)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XExtData,16, 8366, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XExtData,next,4,10,32740)
CheckOffset(struct _XExtData,next,4,10,32740)
CheckMemberSize(struct _XExtData,free_private,4,10,32742)
CheckOffset(struct _XExtData,free_private,8,10,32742)
CheckMemberSize(struct _XExtData,private_data,4,10,32743)
CheckOffset(struct _XExtData,private_data,12,10,32743)
#elif defined __powerpc64__
CheckTypeSize(struct _XExtData,32, 8366, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XExtData,next,8,9,32740)
CheckOffset(struct _XExtData,next,8,9,32740)
CheckMemberSize(struct _XExtData,free_private,8,9,32742)
CheckOffset(struct _XExtData,free_private,16,9,32742)
CheckMemberSize(struct _XExtData,private_data,8,9,32743)
CheckOffset(struct _XExtData,private_data,24,9,32743)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XExtData,16, 8366, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XExtData,next,4,6,32740)
CheckOffset(struct _XExtData,next,4,6,32740)
CheckMemberSize(struct _XExtData,free_private,4,6,32742)
CheckOffset(struct _XExtData,free_private,8,6,32742)
CheckMemberSize(struct _XExtData,private_data,4,6,32743)
CheckOffset(struct _XExtData,private_data,12,6,32743)
#elif defined __ia64__
CheckTypeSize(struct _XExtData,32, 8366, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XExtData,next,8,3,32740)
CheckOffset(struct _XExtData,next,8,3,32740)
CheckMemberSize(struct _XExtData,free_private,8,3,32742)
CheckOffset(struct _XExtData,free_private,16,3,32742)
CheckMemberSize(struct _XExtData,private_data,8,3,32743)
CheckOffset(struct _XExtData,private_data,24,3,32743)
#elif defined __i386__
CheckTypeSize(struct _XExtData,16, 8366, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XExtData,next,4,2,32740)
CheckOffset(struct _XExtData,next,4,2,32740)
CheckMemberSize(struct _XExtData,free_private,4,2,32742)
CheckOffset(struct _XExtData,free_private,8,2,32742)
CheckMemberSize(struct _XExtData,private_data,4,2,32743)
CheckOffset(struct _XExtData,private_data,12,2,32743)
#else
Msg("Find size of _XExtData (8366)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8366,0);
#endif

#if defined __s390x__
CheckTypeSize(XExtData,32, 8368, 12, 1.3, NULL, 8366, NULL)
#elif defined __x86_64__
CheckTypeSize(XExtData,32, 8368, 11, 2.0, NULL, 8366, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XExtData,16, 8368, 10, 1.3, NULL, 8366, NULL)
#elif defined __powerpc64__
CheckTypeSize(XExtData,32, 8368, 9, 2.0, NULL, 8366, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XExtData,16, 8368, 6, 1.2, NULL, 8366, NULL)
#elif defined __ia64__
CheckTypeSize(XExtData,32, 8368, 3, 1.3, NULL, 8366, NULL)
#elif defined __i386__
CheckTypeSize(XExtData,16, 8368, 2, 1.2, NULL, 8366, NULL)
#else
Msg("Find size of XExtData (8368)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8366,NULL);\n",architecture,8368,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XGC,16, 7044, 12, 1.3, NULL, 0, NULL)
Msg("Missing member data for _XGC on S390X\n");
#elif defined __x86_64__
CheckTypeSize(struct _XGC,16, 7044, 11, 2.0, NULL, 0, NULL)
Msg("Missing member data for _XGC on x86-64\n");
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XGC,8, 7044, 10, 1.3, NULL, 0, NULL)
Msg("Missing member data for _XGC on S390\n");
#elif defined __powerpc64__
CheckTypeSize(struct _XGC,16, 7044, 9, 2.0, NULL, 0, NULL)
Msg("Missing member data for _XGC on PPC64\n");
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XGC,8, 7044, 6, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XGC on PPC32\n");
#elif defined __ia64__
CheckTypeSize(struct _XGC,16, 7044, 3, 1.3, NULL, 0, NULL)
Msg("Missing member data for _XGC on IA64\n");
#elif defined __i386__
CheckTypeSize(struct _XGC,8, 7044, 2, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XGC on IA32\n");
#else
Msg("Find size of _XGC (7044)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,7044,0);
#endif

#if defined __s390x__
CheckTypeSize(GC,8, 8375, 12, 1.3, NULL, 7045, NULL)
#elif defined __x86_64__
CheckTypeSize(GC,8, 8375, 11, 2.0, NULL, 7045, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GC,4, 8375, 10, 1.3, NULL, 7045, NULL)
#elif defined __powerpc64__
CheckTypeSize(GC,8, 8375, 9, 2.0, NULL, 7045, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GC,4, 8375, 6, 1.2, NULL, 7045, NULL)
#elif defined __ia64__
CheckTypeSize(GC,8, 8375, 3, 1.3, NULL, 7045, NULL)
#elif defined __i386__
CheckTypeSize(GC,4, 8375, 2, 1.2, NULL, 7045, NULL)
#else
Msg("Find size of GC (8375)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,7045,NULL);\n",architecture,8375,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XImage,136, 8390, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XImage,data,8,12,32854)
CheckOffset(struct _XImage,data,16,12,32854)
CheckMemberSize(struct _XImage,byte_order,4,12,32855)
CheckOffset(struct _XImage,byte_order,24,12,32855)
CheckMemberSize(struct _XImage,bitmap_unit,4,12,32856)
CheckOffset(struct _XImage,bitmap_unit,28,12,32856)
CheckMemberSize(struct _XImage,bitmap_bit_order,4,12,32857)
CheckOffset(struct _XImage,bitmap_bit_order,32,12,32857)
CheckMemberSize(struct _XImage,bitmap_pad,4,12,32858)
CheckOffset(struct _XImage,bitmap_pad,36,12,32858)
CheckMemberSize(struct _XImage,depth,4,12,32859)
CheckOffset(struct _XImage,depth,40,12,32859)
CheckMemberSize(struct _XImage,bytes_per_line,4,12,32860)
CheckOffset(struct _XImage,bytes_per_line,44,12,32860)
CheckMemberSize(struct _XImage,bits_per_pixel,4,12,32861)
CheckOffset(struct _XImage,bits_per_pixel,48,12,32861)
CheckMemberSize(struct _XImage,red_mask,8,12,32862)
CheckOffset(struct _XImage,red_mask,56,12,32862)
CheckMemberSize(struct _XImage,green_mask,8,12,32863)
CheckOffset(struct _XImage,green_mask,64,12,32863)
CheckMemberSize(struct _XImage,blue_mask,8,12,32864)
CheckOffset(struct _XImage,blue_mask,72,12,32864)
CheckMemberSize(struct _XImage,obdata,8,12,32865)
CheckOffset(struct _XImage,obdata,80,12,32865)
CheckMemberSize(struct _XImage,f,48,12,32872)
CheckOffset(struct _XImage,f,88,12,32872)
#elif defined __x86_64__
CheckTypeSize(struct _XImage,136, 8390, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XImage,data,8,11,32854)
CheckOffset(struct _XImage,data,16,11,32854)
CheckMemberSize(struct _XImage,byte_order,4,11,32855)
CheckOffset(struct _XImage,byte_order,24,11,32855)
CheckMemberSize(struct _XImage,bitmap_unit,4,11,32856)
CheckOffset(struct _XImage,bitmap_unit,28,11,32856)
CheckMemberSize(struct _XImage,bitmap_bit_order,4,11,32857)
CheckOffset(struct _XImage,bitmap_bit_order,32,11,32857)
CheckMemberSize(struct _XImage,bitmap_pad,4,11,32858)
CheckOffset(struct _XImage,bitmap_pad,36,11,32858)
CheckMemberSize(struct _XImage,depth,4,11,32859)
CheckOffset(struct _XImage,depth,40,11,32859)
CheckMemberSize(struct _XImage,bytes_per_line,4,11,32860)
CheckOffset(struct _XImage,bytes_per_line,44,11,32860)
CheckMemberSize(struct _XImage,bits_per_pixel,4,11,32861)
CheckOffset(struct _XImage,bits_per_pixel,48,11,32861)
CheckMemberSize(struct _XImage,red_mask,8,11,32862)
CheckOffset(struct _XImage,red_mask,56,11,32862)
CheckMemberSize(struct _XImage,green_mask,8,11,32863)
CheckOffset(struct _XImage,green_mask,64,11,32863)
CheckMemberSize(struct _XImage,blue_mask,8,11,32864)
CheckOffset(struct _XImage,blue_mask,72,11,32864)
CheckMemberSize(struct _XImage,obdata,8,11,32865)
CheckOffset(struct _XImage,obdata,80,11,32865)
CheckMemberSize(struct _XImage,f,48,11,32872)
CheckOffset(struct _XImage,f,88,11,32872)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XImage,88, 8390, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XImage,data,4,10,32854)
CheckOffset(struct _XImage,data,16,10,32854)
CheckMemberSize(struct _XImage,byte_order,4,10,32855)
CheckOffset(struct _XImage,byte_order,20,10,32855)
CheckMemberSize(struct _XImage,bitmap_unit,4,10,32856)
CheckOffset(struct _XImage,bitmap_unit,24,10,32856)
CheckMemberSize(struct _XImage,bitmap_bit_order,4,10,32857)
CheckOffset(struct _XImage,bitmap_bit_order,28,10,32857)
CheckMemberSize(struct _XImage,bitmap_pad,4,10,32858)
CheckOffset(struct _XImage,bitmap_pad,32,10,32858)
CheckMemberSize(struct _XImage,depth,4,10,32859)
CheckOffset(struct _XImage,depth,36,10,32859)
CheckMemberSize(struct _XImage,bytes_per_line,4,10,32860)
CheckOffset(struct _XImage,bytes_per_line,40,10,32860)
CheckMemberSize(struct _XImage,bits_per_pixel,4,10,32861)
CheckOffset(struct _XImage,bits_per_pixel,44,10,32861)
CheckMemberSize(struct _XImage,red_mask,4,10,32862)
CheckOffset(struct _XImage,red_mask,48,10,32862)
CheckMemberSize(struct _XImage,green_mask,4,10,32863)
CheckOffset(struct _XImage,green_mask,52,10,32863)
CheckMemberSize(struct _XImage,blue_mask,4,10,32864)
CheckOffset(struct _XImage,blue_mask,56,10,32864)
CheckMemberSize(struct _XImage,obdata,4,10,32865)
CheckOffset(struct _XImage,obdata,60,10,32865)
CheckMemberSize(struct _XImage,f,24,10,32872)
CheckOffset(struct _XImage,f,64,10,32872)
#elif defined __powerpc64__
CheckTypeSize(struct _XImage,136, 8390, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XImage,data,8,9,32854)
CheckOffset(struct _XImage,data,16,9,32854)
CheckMemberSize(struct _XImage,byte_order,4,9,32855)
CheckOffset(struct _XImage,byte_order,24,9,32855)
CheckMemberSize(struct _XImage,bitmap_unit,4,9,32856)
CheckOffset(struct _XImage,bitmap_unit,28,9,32856)
CheckMemberSize(struct _XImage,bitmap_bit_order,4,9,32857)
CheckOffset(struct _XImage,bitmap_bit_order,32,9,32857)
CheckMemberSize(struct _XImage,bitmap_pad,4,9,32858)
CheckOffset(struct _XImage,bitmap_pad,36,9,32858)
CheckMemberSize(struct _XImage,depth,4,9,32859)
CheckOffset(struct _XImage,depth,40,9,32859)
CheckMemberSize(struct _XImage,bytes_per_line,4,9,32860)
CheckOffset(struct _XImage,bytes_per_line,44,9,32860)
CheckMemberSize(struct _XImage,bits_per_pixel,4,9,32861)
CheckOffset(struct _XImage,bits_per_pixel,48,9,32861)
CheckMemberSize(struct _XImage,red_mask,8,9,32862)
CheckOffset(struct _XImage,red_mask,56,9,32862)
CheckMemberSize(struct _XImage,green_mask,8,9,32863)
CheckOffset(struct _XImage,green_mask,64,9,32863)
CheckMemberSize(struct _XImage,blue_mask,8,9,32864)
CheckOffset(struct _XImage,blue_mask,72,9,32864)
CheckMemberSize(struct _XImage,obdata,8,9,32865)
CheckOffset(struct _XImage,obdata,80,9,32865)
CheckMemberSize(struct _XImage,f,48,9,32872)
CheckOffset(struct _XImage,f,88,9,32872)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XImage,88, 8390, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XImage,data,4,6,32854)
CheckOffset(struct _XImage,data,16,6,32854)
CheckMemberSize(struct _XImage,byte_order,4,6,32855)
CheckOffset(struct _XImage,byte_order,20,6,32855)
CheckMemberSize(struct _XImage,bitmap_unit,4,6,32856)
CheckOffset(struct _XImage,bitmap_unit,24,6,32856)
CheckMemberSize(struct _XImage,bitmap_bit_order,4,6,32857)
CheckOffset(struct _XImage,bitmap_bit_order,28,6,32857)
CheckMemberSize(struct _XImage,bitmap_pad,4,6,32858)
CheckOffset(struct _XImage,bitmap_pad,32,6,32858)
CheckMemberSize(struct _XImage,depth,4,6,32859)
CheckOffset(struct _XImage,depth,36,6,32859)
CheckMemberSize(struct _XImage,bytes_per_line,4,6,32860)
CheckOffset(struct _XImage,bytes_per_line,40,6,32860)
CheckMemberSize(struct _XImage,bits_per_pixel,4,6,32861)
CheckOffset(struct _XImage,bits_per_pixel,44,6,32861)
CheckMemberSize(struct _XImage,red_mask,4,6,32862)
CheckOffset(struct _XImage,red_mask,48,6,32862)
CheckMemberSize(struct _XImage,green_mask,4,6,32863)
CheckOffset(struct _XImage,green_mask,52,6,32863)
CheckMemberSize(struct _XImage,blue_mask,4,6,32864)
CheckOffset(struct _XImage,blue_mask,56,6,32864)
CheckMemberSize(struct _XImage,obdata,4,6,32865)
CheckOffset(struct _XImage,obdata,60,6,32865)
CheckMemberSize(struct _XImage,f,24,6,32872)
CheckOffset(struct _XImage,f,64,6,32872)
#elif defined __ia64__
CheckTypeSize(struct _XImage,136, 8390, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XImage,data,8,3,32854)
CheckOffset(struct _XImage,data,16,3,32854)
CheckMemberSize(struct _XImage,byte_order,4,3,32855)
CheckOffset(struct _XImage,byte_order,24,3,32855)
CheckMemberSize(struct _XImage,bitmap_unit,4,3,32856)
CheckOffset(struct _XImage,bitmap_unit,28,3,32856)
CheckMemberSize(struct _XImage,bitmap_bit_order,4,3,32857)
CheckOffset(struct _XImage,bitmap_bit_order,32,3,32857)
CheckMemberSize(struct _XImage,bitmap_pad,4,3,32858)
CheckOffset(struct _XImage,bitmap_pad,36,3,32858)
CheckMemberSize(struct _XImage,depth,4,3,32859)
CheckOffset(struct _XImage,depth,40,3,32859)
CheckMemberSize(struct _XImage,bytes_per_line,4,3,32860)
CheckOffset(struct _XImage,bytes_per_line,44,3,32860)
CheckMemberSize(struct _XImage,bits_per_pixel,4,3,32861)
CheckOffset(struct _XImage,bits_per_pixel,48,3,32861)
CheckMemberSize(struct _XImage,red_mask,8,3,32862)
CheckOffset(struct _XImage,red_mask,56,3,32862)
CheckMemberSize(struct _XImage,green_mask,8,3,32863)
CheckOffset(struct _XImage,green_mask,64,3,32863)
CheckMemberSize(struct _XImage,blue_mask,8,3,32864)
CheckOffset(struct _XImage,blue_mask,72,3,32864)
CheckMemberSize(struct _XImage,obdata,8,3,32865)
CheckOffset(struct _XImage,obdata,80,3,32865)
CheckMemberSize(struct _XImage,f,48,3,32872)
CheckOffset(struct _XImage,f,88,3,32872)
#elif defined __i386__
CheckTypeSize(struct _XImage,88, 8390, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XImage,data,4,2,32854)
CheckOffset(struct _XImage,data,16,2,32854)
CheckMemberSize(struct _XImage,byte_order,4,2,32855)
CheckOffset(struct _XImage,byte_order,20,2,32855)
CheckMemberSize(struct _XImage,bitmap_unit,4,2,32856)
CheckOffset(struct _XImage,bitmap_unit,24,2,32856)
CheckMemberSize(struct _XImage,bitmap_bit_order,4,2,32857)
CheckOffset(struct _XImage,bitmap_bit_order,28,2,32857)
CheckMemberSize(struct _XImage,bitmap_pad,4,2,32858)
CheckOffset(struct _XImage,bitmap_pad,32,2,32858)
CheckMemberSize(struct _XImage,depth,4,2,32859)
CheckOffset(struct _XImage,depth,36,2,32859)
CheckMemberSize(struct _XImage,bytes_per_line,4,2,32860)
CheckOffset(struct _XImage,bytes_per_line,40,2,32860)
CheckMemberSize(struct _XImage,bits_per_pixel,4,2,32861)
CheckOffset(struct _XImage,bits_per_pixel,44,2,32861)
CheckMemberSize(struct _XImage,red_mask,4,2,32862)
CheckOffset(struct _XImage,red_mask,48,2,32862)
CheckMemberSize(struct _XImage,green_mask,4,2,32863)
CheckOffset(struct _XImage,green_mask,52,2,32863)
CheckMemberSize(struct _XImage,blue_mask,4,2,32864)
CheckOffset(struct _XImage,blue_mask,56,2,32864)
CheckMemberSize(struct _XImage,obdata,4,2,32865)
CheckOffset(struct _XImage,obdata,60,2,32865)
CheckMemberSize(struct _XImage,f,24,2,32872)
CheckOffset(struct _XImage,f,64,2,32872)
#else
Msg("Find size of _XImage (8390)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8390,0);
#endif

#if defined __s390x__
CheckTypeSize(XImage,136, 8398, 12, 1.3, NULL, 8390, NULL)
#elif defined __x86_64__
CheckTypeSize(XImage,136, 8398, 11, 2.0, NULL, 8390, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XImage,88, 8398, 10, 1.3, NULL, 8390, NULL)
#elif defined __powerpc64__
CheckTypeSize(XImage,136, 8398, 9, 2.0, NULL, 8390, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XImage,88, 8398, 6, 1.2, NULL, 8390, NULL)
#elif defined __ia64__
CheckTypeSize(XImage,136, 8398, 3, 1.3, NULL, 8390, NULL)
#elif defined __i386__
CheckTypeSize(XImage,88, 8398, 2, 1.2, NULL, 8390, NULL)
#else
Msg("Find size of XImage (8398)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8390,NULL);\n",architecture,8398,0);
#endif

#if defined __s390x__
CheckTypeSize(struct funcs,48, 9291, 12, 1.3, NULL, 0, NULL)
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
CheckTypeSize(struct funcs,48, 9291, 11, 2.0, NULL, 0, NULL)
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
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct funcs,24, 9291, 10, 1.3, NULL, 0, NULL)
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
CheckTypeSize(struct funcs,48, 9291, 9, 2.0, NULL, 0, NULL)
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
#elif defined __ia64__
CheckTypeSize(struct funcs,48, 9291, 3, 1.3, NULL, 0, NULL)
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
#elif defined __i386__
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
#else
Msg("Find size of funcs (9291)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9291,0);
#endif

#if defined __s390x__
CheckTypeSize(_XPrivDisplay,8, 8423, 12, 1.3, NULL, 7109, NULL)
#elif defined __x86_64__
CheckTypeSize(_XPrivDisplay,8, 8423, 11, 2.0, NULL, 7109, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_XPrivDisplay,4, 8423, 10, 1.3, NULL, 7109, NULL)
#elif defined __powerpc64__
CheckTypeSize(_XPrivDisplay,8, 8423, 9, 2.0, NULL, 7109, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_XPrivDisplay,4, 8423, 6, 1.2, NULL, 7109, NULL)
#elif defined __ia64__
CheckTypeSize(_XPrivDisplay,8, 8423, 3, 1.3, NULL, 7109, NULL)
#elif defined __i386__
CheckTypeSize(_XPrivDisplay,4, 8423, 2, 1.2, NULL, 7109, NULL)
#else
Msg("Find size of _XPrivDisplay (8423)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,7109,NULL);\n",architecture,8423,0);
#endif

#if defined __s390x__
CheckTypeSize(XKeyPressedEvent,96, 8426, 12, 1.3, NULL, 8425, NULL)
#elif defined __x86_64__
CheckTypeSize(XKeyPressedEvent,96, 8426, 11, 2.0, NULL, 8425, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XKeyPressedEvent,60, 8426, 10, 1.3, NULL, 8425, NULL)
#elif defined __powerpc64__
CheckTypeSize(XKeyPressedEvent,96, 8426, 9, 2.0, NULL, 8425, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XKeyPressedEvent,60, 8426, 6, 1.2, NULL, 8425, NULL)
#elif defined __ia64__
CheckTypeSize(XKeyPressedEvent,96, 8426, 3, 1.3, NULL, 8425, NULL)
#elif defined __i386__
CheckTypeSize(XKeyPressedEvent,60, 8426, 2, 1.2, NULL, 8425, NULL)
#else
Msg("Find size of XKeyPressedEvent (8426)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8425,NULL);\n",architecture,8426,0);
#endif

#if defined __s390x__
CheckTypeSize(XKeyReleasedEvent,96, 8427, 12, 1.3, NULL, 8425, NULL)
#elif defined __x86_64__
CheckTypeSize(XKeyReleasedEvent,96, 8427, 11, 2.0, NULL, 8425, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XKeyReleasedEvent,60, 8427, 10, 1.3, NULL, 8425, NULL)
#elif defined __powerpc64__
CheckTypeSize(XKeyReleasedEvent,96, 8427, 9, 2.0, NULL, 8425, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XKeyReleasedEvent,60, 8427, 6, 1.2, NULL, 8425, NULL)
#elif defined __ia64__
CheckTypeSize(XKeyReleasedEvent,96, 8427, 3, 1.3, NULL, 8425, NULL)
#elif defined __i386__
CheckTypeSize(XKeyReleasedEvent,60, 8427, 2, 1.2, NULL, 8425, NULL)
#else
Msg("Find size of XKeyReleasedEvent (8427)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8425,NULL);\n",architecture,8427,0);
#endif

#if defined __s390x__
CheckTypeSize(XButtonPressedEvent,96, 8430, 12, 1.3, NULL, 8429, NULL)
#elif defined __x86_64__
CheckTypeSize(XButtonPressedEvent,96, 8430, 11, 2.0, NULL, 8429, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XButtonPressedEvent,60, 8430, 10, 1.3, NULL, 8429, NULL)
#elif defined __powerpc64__
CheckTypeSize(XButtonPressedEvent,96, 8430, 9, 2.0, NULL, 8429, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XButtonPressedEvent,60, 8430, 6, 1.2, NULL, 8429, NULL)
#elif defined __ia64__
CheckTypeSize(XButtonPressedEvent,96, 8430, 3, 1.3, NULL, 8429, NULL)
#elif defined __i386__
CheckTypeSize(XButtonPressedEvent,60, 8430, 2, 1.2, NULL, 8429, NULL)
#else
Msg("Find size of XButtonPressedEvent (8430)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8429,NULL);\n",architecture,8430,0);
#endif

#if defined __s390x__
CheckTypeSize(XButtonReleasedEvent,96, 8431, 12, 1.3, NULL, 8429, NULL)
#elif defined __x86_64__
CheckTypeSize(XButtonReleasedEvent,96, 8431, 11, 2.0, NULL, 8429, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XButtonReleasedEvent,60, 8431, 10, 1.3, NULL, 8429, NULL)
#elif defined __powerpc64__
CheckTypeSize(XButtonReleasedEvent,96, 8431, 9, 2.0, NULL, 8429, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XButtonReleasedEvent,60, 8431, 6, 1.2, NULL, 8429, NULL)
#elif defined __ia64__
CheckTypeSize(XButtonReleasedEvent,96, 8431, 3, 1.3, NULL, 8429, NULL)
#elif defined __i386__
CheckTypeSize(XButtonReleasedEvent,60, 8431, 2, 1.2, NULL, 8429, NULL)
#else
Msg("Find size of XButtonReleasedEvent (8431)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8429,NULL);\n",architecture,8431,0);
#endif

#if defined __s390x__
CheckTypeSize(XPointerMovedEvent,96, 8434, 12, 1.3, NULL, 8433, NULL)
#elif defined __x86_64__
CheckTypeSize(XPointerMovedEvent,96, 8434, 11, 2.0, NULL, 8433, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XPointerMovedEvent,60, 8434, 10, 1.3, NULL, 8433, NULL)
#elif defined __powerpc64__
CheckTypeSize(XPointerMovedEvent,96, 8434, 9, 2.0, NULL, 8433, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XPointerMovedEvent,60, 8434, 6, 1.2, NULL, 8433, NULL)
#elif defined __ia64__
CheckTypeSize(XPointerMovedEvent,96, 8434, 3, 1.3, NULL, 8433, NULL)
#elif defined __i386__
CheckTypeSize(XPointerMovedEvent,60, 8434, 2, 1.2, NULL, 8433, NULL)
#else
Msg("Find size of XPointerMovedEvent (8434)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8433,NULL);\n",architecture,8434,0);
#endif

#if defined __s390x__
CheckTypeSize(XEnterWindowEvent,104, 8437, 12, 1.3, NULL, 8436, NULL)
#elif defined __x86_64__
CheckTypeSize(XEnterWindowEvent,104, 8437, 11, 2.0, NULL, 8436, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XEnterWindowEvent,68, 8437, 10, 1.3, NULL, 8436, NULL)
#elif defined __powerpc64__
CheckTypeSize(XEnterWindowEvent,104, 8437, 9, 2.0, NULL, 8436, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XEnterWindowEvent,68, 8437, 6, 1.2, NULL, 8436, NULL)
#elif defined __ia64__
CheckTypeSize(XEnterWindowEvent,104, 8437, 3, 1.3, NULL, 8436, NULL)
#elif defined __i386__
CheckTypeSize(XEnterWindowEvent,68, 8437, 2, 1.2, NULL, 8436, NULL)
#else
Msg("Find size of XEnterWindowEvent (8437)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8436,NULL);\n",architecture,8437,0);
#endif

#if defined __s390x__
CheckTypeSize(XLeaveWindowEvent,104, 8438, 12, 1.3, NULL, 8436, NULL)
#elif defined __x86_64__
CheckTypeSize(XLeaveWindowEvent,104, 8438, 11, 2.0, NULL, 8436, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XLeaveWindowEvent,68, 8438, 10, 1.3, NULL, 8436, NULL)
#elif defined __powerpc64__
CheckTypeSize(XLeaveWindowEvent,104, 8438, 9, 2.0, NULL, 8436, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XLeaveWindowEvent,68, 8438, 6, 1.2, NULL, 8436, NULL)
#elif defined __ia64__
CheckTypeSize(XLeaveWindowEvent,104, 8438, 3, 1.3, NULL, 8436, NULL)
#elif defined __i386__
CheckTypeSize(XLeaveWindowEvent,68, 8438, 2, 1.2, NULL, 8436, NULL)
#else
Msg("Find size of XLeaveWindowEvent (8438)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8436,NULL);\n",architecture,8438,0);
#endif

#if defined __s390x__
CheckTypeSize(XFocusInEvent,48, 8441, 12, 1.3, NULL, 8440, NULL)
#elif defined __x86_64__
CheckTypeSize(XFocusInEvent,48, 8441, 11, 2.0, NULL, 8440, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XFocusInEvent,28, 8441, 10, 1.3, NULL, 8440, NULL)
#elif defined __powerpc64__
CheckTypeSize(XFocusInEvent,48, 8441, 9, 2.0, NULL, 8440, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XFocusInEvent,28, 8441, 6, 1.2, NULL, 8440, NULL)
#elif defined __ia64__
CheckTypeSize(XFocusInEvent,48, 8441, 3, 1.3, NULL, 8440, NULL)
#elif defined __i386__
CheckTypeSize(XFocusInEvent,28, 8441, 2, 1.2, NULL, 8440, NULL)
#else
Msg("Find size of XFocusInEvent (8441)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8440,NULL);\n",architecture,8441,0);
#endif

#if defined __s390x__
CheckTypeSize(XFocusOutEvent,48, 8442, 12, 1.3, NULL, 8440, NULL)
#elif defined __x86_64__
CheckTypeSize(XFocusOutEvent,48, 8442, 11, 2.0, NULL, 8440, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XFocusOutEvent,28, 8442, 10, 1.3, NULL, 8440, NULL)
#elif defined __powerpc64__
CheckTypeSize(XFocusOutEvent,48, 8442, 9, 2.0, NULL, 8440, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XFocusOutEvent,28, 8442, 6, 1.2, NULL, 8440, NULL)
#elif defined __ia64__
CheckTypeSize(XFocusOutEvent,48, 8442, 3, 1.3, NULL, 8440, NULL)
#elif defined __i386__
CheckTypeSize(XFocusOutEvent,28, 8442, 2, 1.2, NULL, 8440, NULL)
#else
Msg("Find size of XFocusOutEvent (8442)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8440,NULL);\n",architecture,8442,0);
#endif

#if defined __s390x__
CheckTypeSize(union _XEvent,192, 8496, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(union _XEvent,pad,192,12,33285)
CheckOffset(union _XEvent,pad,0,12,33285)
#elif defined __x86_64__
CheckTypeSize(union _XEvent,192, 8496, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(union _XEvent,pad,192,11,33285)
CheckOffset(union _XEvent,pad,0,11,33285)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(union _XEvent,96, 8496, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(union _XEvent,pad,96,10,33285)
CheckOffset(union _XEvent,pad,0,10,33285)
#elif defined __powerpc64__
CheckTypeSize(union _XEvent,192, 8496, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(union _XEvent,pad,192,9,33285)
CheckOffset(union _XEvent,pad,0,9,33285)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(union _XEvent,96, 8496, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(union _XEvent,pad,96,6,33285)
CheckOffset(union _XEvent,pad,0,6,33285)
#elif defined __ia64__
CheckTypeSize(union _XEvent,192, 8496, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(union _XEvent,pad,192,3,33285)
CheckOffset(union _XEvent,pad,0,3,33285)
#elif defined __i386__
CheckTypeSize(union _XEvent,96, 8496, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(union _XEvent,pad,96,2,33285)
CheckOffset(union _XEvent,pad,0,2,33285)
#else
Msg("Find size of _XEvent (8496)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8496,0);
#endif

#if defined __s390x__
CheckTypeSize(XEvent,192, 8497, 12, 1.3, NULL, 8496, NULL)
#elif defined __x86_64__
CheckTypeSize(XEvent,192, 8497, 11, 2.0, NULL, 8496, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XEvent,96, 8497, 10, 1.3, NULL, 8496, NULL)
#elif defined __powerpc64__
CheckTypeSize(XEvent,192, 8497, 9, 2.0, NULL, 8496, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XEvent,96, 8497, 6, 1.2, NULL, 8496, NULL)
#elif defined __ia64__
CheckTypeSize(XEvent,192, 8497, 3, 1.3, NULL, 8496, NULL)
#elif defined __i386__
CheckTypeSize(XEvent,96, 8497, 2, 1.2, NULL, 8496, NULL)
#else
Msg("Find size of XEvent (8497)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8496,NULL);\n",architecture,8497,0);
#endif

#if defined __s390x__
CheckTypeSize(XOM,8, 8514, 12, 1.3, NULL, 7269, NULL)
#elif defined __x86_64__
CheckTypeSize(XOM,8, 8514, 11, 2.0, NULL, 7269, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XOM,4, 8514, 10, 1.3, NULL, 7269, NULL)
#elif defined __powerpc64__
CheckTypeSize(XOM,8, 8514, 9, 2.0, NULL, 7269, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XOM,4, 8514, 6, 1.2, NULL, 7269, NULL)
#elif defined __ia64__
CheckTypeSize(XOM,8, 8514, 3, 1.3, NULL, 7269, NULL)
#elif defined __i386__
CheckTypeSize(XOM,4, 8514, 2, 1.2, NULL, 7269, NULL)
#else
Msg("Find size of XOM (8514)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,7269,NULL);\n",architecture,8514,0);
#endif

#if defined __s390x__
CheckTypeSize(XOC,8, 8515, 12, 1.3, NULL, 7272, NULL)
#elif defined __x86_64__
CheckTypeSize(XOC,8, 8515, 11, 2.0, NULL, 7272, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XOC,4, 8515, 10, 1.3, NULL, 7272, NULL)
#elif defined __powerpc64__
CheckTypeSize(XOC,8, 8515, 9, 2.0, NULL, 7272, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XOC,4, 8515, 6, 1.2, NULL, 7272, NULL)
#elif defined __ia64__
CheckTypeSize(XOC,8, 8515, 3, 1.3, NULL, 7272, NULL)
#elif defined __i386__
CheckTypeSize(XOC,4, 8515, 2, 1.2, NULL, 7272, NULL)
#else
Msg("Find size of XOC (8515)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,7272,NULL);\n",architecture,8515,0);
#endif

#if defined __s390x__
CheckTypeSize(XFontSet,8, 8516, 12, 1.3, NULL, 7272, NULL)
#elif defined __x86_64__
CheckTypeSize(XFontSet,8, 8516, 11, 2.0, NULL, 7272, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XFontSet,4, 8516, 10, 1.3, NULL, 7272, NULL)
#elif defined __powerpc64__
CheckTypeSize(XFontSet,8, 8516, 9, 2.0, NULL, 7272, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XFontSet,4, 8516, 6, 1.2, NULL, 7272, NULL)
#elif defined __ia64__
CheckTypeSize(XFontSet,8, 8516, 3, 1.3, NULL, 7272, NULL)
#elif defined __i386__
CheckTypeSize(XFontSet,4, 8516, 2, 1.2, NULL, 7272, NULL)
#else
Msg("Find size of XFontSet (8516)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,7272,NULL);\n",architecture,8516,0);
#endif

#if defined __s390x__
CheckTypeSize(XIM,8, 8529, 12, 1.3, NULL, 7293, NULL)
#elif defined __x86_64__
CheckTypeSize(XIM,8, 8529, 11, 2.0, NULL, 7293, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIM,4, 8529, 10, 1.3, NULL, 7293, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIM,8, 8529, 9, 2.0, NULL, 7293, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIM,4, 8529, 6, 1.2, NULL, 7293, NULL)
#elif defined __ia64__
CheckTypeSize(XIM,8, 8529, 3, 1.3, NULL, 7293, NULL)
#elif defined __i386__
CheckTypeSize(XIM,4, 8529, 2, 1.2, NULL, 7293, NULL)
#else
Msg("Find size of XIM (8529)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,7293,NULL);\n",architecture,8529,0);
#endif

#if defined __s390x__
CheckTypeSize(XIC,8, 8530, 12, 1.3, NULL, 7296, NULL)
#elif defined __x86_64__
CheckTypeSize(XIC,8, 8530, 11, 2.0, NULL, 7296, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIC,4, 8530, 10, 1.3, NULL, 7296, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIC,8, 8530, 9, 2.0, NULL, 7296, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIC,4, 8530, 6, 1.2, NULL, 7296, NULL)
#elif defined __ia64__
CheckTypeSize(XIC,8, 8530, 3, 1.3, NULL, 7296, NULL)
#elif defined __i386__
CheckTypeSize(XIC,4, 8530, 2, 1.2, NULL, 7296, NULL)
#else
Msg("Find size of XIC (8530)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,7296,NULL);\n",architecture,8530,0);
#endif

#if defined __s390x__
CheckTypeSize(XIMStyle,8, 8537, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(XIMStyle,8, 8537, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIMStyle,4, 8537, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIMStyle,8, 8537, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIMStyle,4, 8537, 6, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(XIMStyle,8, 8537, 3, 1.3, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(XIMStyle,4, 8537, 2, 1.2, NULL, 9, NULL)
#else
Msg("Find size of XIMStyle (8537)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9,NULL);\n",architecture,8537,0);
#endif

#if defined __s390x__
CheckTypeSize(XIMProc,8, 8898, 12, 1.3, NULL, 8897, NULL)
#elif defined __x86_64__
CheckTypeSize(XIMProc,8, 8898, 11, 2.0, NULL, 8897, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIMProc,4, 8898, 10, 1.3, NULL, 8897, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIMProc,8, 8898, 9, 2.0, NULL, 8897, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIMProc,4, 8898, 6, 1.2, NULL, 8897, NULL)
#elif defined __ia64__
CheckTypeSize(XIMProc,8, 8898, 3, 1.3, NULL, 8897, NULL)
#elif defined __i386__
CheckTypeSize(XIMProc,4, 8898, 2, 1.2, NULL, 8897, NULL)
#else
Msg("Find size of XIMProc (8898)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8897,NULL);\n",architecture,8898,0);
#endif

#if defined __s390x__
CheckTypeSize(XICProc,8, 8900, 12, 1.3, NULL, 8899, NULL)
#elif defined __x86_64__
CheckTypeSize(XICProc,8, 8900, 11, 2.0, NULL, 8899, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XICProc,4, 8900, 10, 1.3, NULL, 8899, NULL)
#elif defined __powerpc64__
CheckTypeSize(XICProc,8, 8900, 9, 2.0, NULL, 8899, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XICProc,4, 8900, 6, 1.2, NULL, 8899, NULL)
#elif defined __ia64__
CheckTypeSize(XICProc,8, 8900, 3, 1.3, NULL, 8899, NULL)
#elif defined __i386__
CheckTypeSize(XICProc,4, 8900, 2, 1.2, NULL, 8899, NULL)
#else
Msg("Find size of XICProc (8900)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8899,NULL);\n",architecture,8900,0);
#endif

#if defined __s390x__
CheckTypeSize(XIDProc,8, 8902, 12, 1.3, NULL, 8901, NULL)
#elif defined __x86_64__
CheckTypeSize(XIDProc,8, 8902, 11, 2.0, NULL, 8901, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIDProc,4, 8902, 10, 1.3, NULL, 8901, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIDProc,8, 8902, 9, 2.0, NULL, 8901, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIDProc,4, 8902, 6, 1.2, NULL, 8901, NULL)
#elif defined __ia64__
CheckTypeSize(XIDProc,8, 8902, 3, 1.3, NULL, 8901, NULL)
#elif defined __i386__
CheckTypeSize(XIDProc,4, 8902, 2, 1.2, NULL, 8901, NULL)
#else
Msg("Find size of XIDProc (8902)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8901,NULL);\n",architecture,8902,0);
#endif

#if defined __s390x__
CheckTypeSize(XPointer,8, 8365, 12, 1.3, NULL, 63, NULL)
#elif defined __x86_64__
CheckTypeSize(XPointer,8, 8365, 11, 2.0, NULL, 63, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XPointer,4, 8365, 10, 1.3, NULL, 63, NULL)
#elif defined __powerpc64__
CheckTypeSize(XPointer,8, 8365, 9, 2.0, NULL, 63, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XPointer,4, 8365, 6, 1.2, NULL, 63, NULL)
#elif defined __ia64__
CheckTypeSize(XPointer,8, 8365, 3, 1.3, NULL, 63, NULL)
#elif defined __i386__
CheckTypeSize(XPointer,4, 8365, 2, 1.2, NULL, 63, NULL)
#else
Msg("Find size of XPointer (8365)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,63, NULL);\n",architecture,8365,0);
#endif

#if defined __s390x__
/* S390X */
typedef int (*XErrorHandler_db)(Display *, XErrorEvent *);
CheckFunctionTypedef(XErrorHandler,XErrorHandler_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*XErrorHandler_db)(Display *, XErrorEvent *);
CheckFunctionTypedef(XErrorHandler,XErrorHandler_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*XErrorHandler_db)(Display *, XErrorEvent *);
CheckFunctionTypedef(XErrorHandler,XErrorHandler_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*XErrorHandler_db)(Display *, XErrorEvent *);
CheckFunctionTypedef(XErrorHandler,XErrorHandler_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*XErrorHandler_db)(Display *, XErrorEvent *);
CheckFunctionTypedef(XErrorHandler,XErrorHandler_db);
#elif defined __ia64__
/* IA64 */
typedef int (*XErrorHandler_db)(Display *, XErrorEvent *);
CheckFunctionTypedef(XErrorHandler,XErrorHandler_db);
#elif defined __i386__
/* IA32 */
typedef int (*XErrorHandler_db)(Display *, XErrorEvent *);
CheckFunctionTypedef(XErrorHandler,XErrorHandler_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*XIOErrorHandler_db)(Display *);
CheckFunctionTypedef(XIOErrorHandler,XIOErrorHandler_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*XIOErrorHandler_db)(Display *);
CheckFunctionTypedef(XIOErrorHandler,XIOErrorHandler_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*XIOErrorHandler_db)(Display *);
CheckFunctionTypedef(XIOErrorHandler,XIOErrorHandler_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*XIOErrorHandler_db)(Display *);
CheckFunctionTypedef(XIOErrorHandler,XIOErrorHandler_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*XIOErrorHandler_db)(Display *);
CheckFunctionTypedef(XIOErrorHandler,XIOErrorHandler_db);
#elif defined __ia64__
/* IA64 */
typedef int (*XIOErrorHandler_db)(Display *);
CheckFunctionTypedef(XIOErrorHandler,XIOErrorHandler_db);
#elif defined __i386__
/* IA32 */
typedef int (*XIOErrorHandler_db)(Display *);
CheckFunctionTypedef(XIOErrorHandler,XIOErrorHandler_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XConnectionWatchProc_db)(Display *, XPointer, int, int, XPointer *);
CheckFunctionTypedef(XConnectionWatchProc,XConnectionWatchProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XConnectionWatchProc_db)(Display *, XPointer, int, int, XPointer *);
CheckFunctionTypedef(XConnectionWatchProc,XConnectionWatchProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XConnectionWatchProc_db)(Display *, XPointer, int, int, XPointer *);
CheckFunctionTypedef(XConnectionWatchProc,XConnectionWatchProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XConnectionWatchProc_db)(Display *, XPointer, int, int, XPointer *);
CheckFunctionTypedef(XConnectionWatchProc,XConnectionWatchProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XConnectionWatchProc_db)(Display *, XPointer, int, int, XPointer *);
CheckFunctionTypedef(XConnectionWatchProc,XConnectionWatchProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XConnectionWatchProc_db)(Display *, XPointer, int, int, XPointer *);
CheckFunctionTypedef(XConnectionWatchProc,XConnectionWatchProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XConnectionWatchProc_db)(Display *, XPointer, int, int, XPointer *);
CheckFunctionTypedef(XConnectionWatchProc,XConnectionWatchProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XIMProc_db)(XIM, XPointer, XPointer);
CheckFunctionTypedef(XIMProc,XIMProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XIMProc_db)(XIM, XPointer, XPointer);
CheckFunctionTypedef(XIMProc,XIMProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XIMProc_db)(XIM, XPointer, XPointer);
CheckFunctionTypedef(XIMProc,XIMProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XIMProc_db)(XIM, XPointer, XPointer);
CheckFunctionTypedef(XIMProc,XIMProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XIMProc_db)(XIM, XPointer, XPointer);
CheckFunctionTypedef(XIMProc,XIMProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XIMProc_db)(XIM, XPointer, XPointer);
CheckFunctionTypedef(XIMProc,XIMProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XIMProc_db)(XIM, XPointer, XPointer);
CheckFunctionTypedef(XIMProc,XIMProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*XICProc_db)(XIC, XPointer, XPointer);
CheckFunctionTypedef(XICProc,XICProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*XICProc_db)(XIC, XPointer, XPointer);
CheckFunctionTypedef(XICProc,XICProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*XICProc_db)(XIC, XPointer, XPointer);
CheckFunctionTypedef(XICProc,XICProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*XICProc_db)(XIC, XPointer, XPointer);
CheckFunctionTypedef(XICProc,XICProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*XICProc_db)(XIC, XPointer, XPointer);
CheckFunctionTypedef(XICProc,XICProc_db);
#elif defined __ia64__
/* IA64 */
typedef int (*XICProc_db)(XIC, XPointer, XPointer);
CheckFunctionTypedef(XICProc,XICProc_db);
#elif defined __i386__
/* IA32 */
typedef int (*XICProc_db)(XIC, XPointer, XPointer);
CheckFunctionTypedef(XICProc,XICProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XIDProc_db)(Display *, XPointer, XPointer);
CheckFunctionTypedef(XIDProc,XIDProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XIDProc_db)(Display *, XPointer, XPointer);
CheckFunctionTypedef(XIDProc,XIDProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XIDProc_db)(Display *, XPointer, XPointer);
CheckFunctionTypedef(XIDProc,XIDProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XIDProc_db)(Display *, XPointer, XPointer);
CheckFunctionTypedef(XIDProc,XIDProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XIDProc_db)(Display *, XPointer, XPointer);
CheckFunctionTypedef(XIDProc,XIDProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XIDProc_db)(Display *, XPointer, XPointer);
CheckFunctionTypedef(XIDProc,XIDProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XIDProc_db)(Display *, XPointer, XPointer);
CheckFunctionTypedef(XIDProc,XIDProc_db);
#endif

extern int XActivateScreenSaver_db(Display *);
CheckInterfacedef(XActivateScreenSaver,XActivateScreenSaver_db);
extern int XAddConnectionWatch_db(Display *, XConnectionWatchProc, XPointer);
CheckInterfacedef(XAddConnectionWatch,XAddConnectionWatch_db);
extern XExtCodes * XAddExtension_db(Display *);
CheckInterfacedef(XAddExtension,XAddExtension_db);
extern int XAddHost_db(Display *, XHostAddress *);
CheckInterfacedef(XAddHost,XAddHost_db);
extern int XAddHosts_db(Display *, XHostAddress *, int);
CheckInterfacedef(XAddHosts,XAddHosts_db);
extern int XAddToExtensionList_db(struct _XExtData * *, XExtData *);
CheckInterfacedef(XAddToExtensionList,XAddToExtensionList_db);
extern int XAddToSaveSet_db(Display *, Window);
CheckInterfacedef(XAddToSaveSet,XAddToSaveSet_db);
extern unsigned long int XAllPlanes_db(void);
CheckInterfacedef(XAllPlanes,XAllPlanes_db);
extern int XAllocColor_db(Display *, Colormap, XColor *);
CheckInterfacedef(XAllocColor,XAllocColor_db);
extern int XAllocColorCells_db(Display *, Colormap, int, unsigned long int *, unsigned int, unsigned long int *, unsigned int);
CheckInterfacedef(XAllocColorCells,XAllocColorCells_db);
extern int XAllocColorPlanes_db(Display *, Colormap, int, unsigned long int *, int, int, int, int, unsigned long int *, unsigned long int *, unsigned long int *);
CheckInterfacedef(XAllocColorPlanes,XAllocColorPlanes_db);
extern int XAllocNamedColor_db(Display *, Colormap, const char *, XColor *, XColor *);
CheckInterfacedef(XAllocNamedColor,XAllocNamedColor_db);
extern int XAllowEvents_db(Display *, int, Time);
CheckInterfacedef(XAllowEvents,XAllowEvents_db);
extern int XAutoRepeatOff_db(Display *);
CheckInterfacedef(XAutoRepeatOff,XAutoRepeatOff_db);
extern int XAutoRepeatOn_db(Display *);
CheckInterfacedef(XAutoRepeatOn,XAutoRepeatOn_db);
extern char * XBaseFontNameListOfFontSet_db(XFontSet);
CheckInterfacedef(XBaseFontNameListOfFontSet,XBaseFontNameListOfFontSet_db);
extern int XBell_db(Display *, int);
CheckInterfacedef(XBell,XBell_db);
extern int XBitmapBitOrder_db(Display *);
CheckInterfacedef(XBitmapBitOrder,XBitmapBitOrder_db);
extern int XBitmapPad_db(Display *);
CheckInterfacedef(XBitmapPad,XBitmapPad_db);
extern int XBitmapUnit_db(Display *);
CheckInterfacedef(XBitmapUnit,XBitmapUnit_db);
extern unsigned long int XBlackPixel_db(Display *, int);
CheckInterfacedef(XBlackPixel,XBlackPixel_db);
extern unsigned long int XBlackPixelOfScreen_db(Screen *);
CheckInterfacedef(XBlackPixelOfScreen,XBlackPixelOfScreen_db);
extern int XCellsOfScreen_db(Screen *);
CheckInterfacedef(XCellsOfScreen,XCellsOfScreen_db);
extern int XChangeActivePointerGrab_db(Display *, unsigned int, Cursor, Time);
CheckInterfacedef(XChangeActivePointerGrab,XChangeActivePointerGrab_db);
extern int XChangeGC_db(Display *, GC, unsigned long int, XGCValues *);
CheckInterfacedef(XChangeGC,XChangeGC_db);
extern int XChangeKeyboardControl_db(Display *, unsigned long int, XKeyboardControl *);
CheckInterfacedef(XChangeKeyboardControl,XChangeKeyboardControl_db);
extern int XChangeKeyboardMapping_db(Display *, int, int, KeySym *, int);
CheckInterfacedef(XChangeKeyboardMapping,XChangeKeyboardMapping_db);
extern int XChangePointerControl_db(Display *, int, int, int, int, int);
CheckInterfacedef(XChangePointerControl,XChangePointerControl_db);
extern int XChangeProperty_db(Display *, Window, Atom, Atom, int, int, const unsigned char *, int);
CheckInterfacedef(XChangeProperty,XChangeProperty_db);
extern int XChangeSaveSet_db(Display *, Window, int);
CheckInterfacedef(XChangeSaveSet,XChangeSaveSet_db);
extern int XChangeWindowAttributes_db(Display *, Window, unsigned long int, XSetWindowAttributes *);
CheckInterfacedef(XChangeWindowAttributes,XChangeWindowAttributes_db);
extern int XCheckIfEvent_db(Display *, XEvent *, int(*fptr0)(Display *,XEvent *,XPointer)
, XPointer);
CheckInterfacedef(XCheckIfEvent,XCheckIfEvent_db);
extern int XCheckMaskEvent_db(Display *, long int, XEvent *);
CheckInterfacedef(XCheckMaskEvent,XCheckMaskEvent_db);
extern int XCheckTypedEvent_db(Display *, int, XEvent *);
CheckInterfacedef(XCheckTypedEvent,XCheckTypedEvent_db);
extern int XCheckTypedWindowEvent_db(Display *, Window, int, XEvent *);
CheckInterfacedef(XCheckTypedWindowEvent,XCheckTypedWindowEvent_db);
extern int XCheckWindowEvent_db(Display *, Window, long int, XEvent *);
CheckInterfacedef(XCheckWindowEvent,XCheckWindowEvent_db);
extern int XCirculateSubwindows_db(Display *, Window, int);
CheckInterfacedef(XCirculateSubwindows,XCirculateSubwindows_db);
extern int XCirculateSubwindowsDown_db(Display *, Window);
CheckInterfacedef(XCirculateSubwindowsDown,XCirculateSubwindowsDown_db);
extern int XCirculateSubwindowsUp_db(Display *, Window);
CheckInterfacedef(XCirculateSubwindowsUp,XCirculateSubwindowsUp_db);
extern int XClearArea_db(Display *, Window, int, int, unsigned int, unsigned int, int);
CheckInterfacedef(XClearArea,XClearArea_db);
extern int XClearWindow_db(Display *, Window);
CheckInterfacedef(XClearWindow,XClearWindow_db);
extern int XCloseDisplay_db(Display *);
CheckInterfacedef(XCloseDisplay,XCloseDisplay_db);
extern int XCloseIM_db(XIM);
CheckInterfacedef(XCloseIM,XCloseIM_db);
extern int XCloseOM_db(XOM);
CheckInterfacedef(XCloseOM,XCloseOM_db);
extern int XConfigureWindow_db(Display *, Window, unsigned int, XWindowChanges *);
CheckInterfacedef(XConfigureWindow,XConfigureWindow_db);
extern int XConnectionNumber_db(Display *);
CheckInterfacedef(XConnectionNumber,XConnectionNumber_db);
extern int XContextDependentDrawing_db(XFontSet);
CheckInterfacedef(XContextDependentDrawing,XContextDependentDrawing_db);
extern int XContextualDrawing_db(XFontSet);
CheckInterfacedef(XContextualDrawing,XContextualDrawing_db);
extern int XConvertSelection_db(Display *, Atom, Atom, Atom, Window, Time);
CheckInterfacedef(XConvertSelection,XConvertSelection_db);
extern int XCopyArea_db(Display *, Drawable, Drawable, GC, int, int, unsigned int, unsigned int, int, int);
CheckInterfacedef(XCopyArea,XCopyArea_db);
extern Colormap XCopyColormapAndFree_db(Display *, Colormap);
CheckInterfacedef(XCopyColormapAndFree,XCopyColormapAndFree_db);
extern int XCopyGC_db(Display *, GC, unsigned long int, GC);
CheckInterfacedef(XCopyGC,XCopyGC_db);
extern int XCopyPlane_db(Display *, Drawable, Drawable, GC, int, int, unsigned int, unsigned int, int, int, unsigned long int);
CheckInterfacedef(XCopyPlane,XCopyPlane_db);
extern Pixmap XCreateBitmapFromData_db(Display *, Drawable, const char *, unsigned int, unsigned int);
CheckInterfacedef(XCreateBitmapFromData,XCreateBitmapFromData_db);
extern Colormap XCreateColormap_db(Display *, Window, Visual *, int);
CheckInterfacedef(XCreateColormap,XCreateColormap_db);
extern Cursor XCreateFontCursor_db(Display *, unsigned int);
CheckInterfacedef(XCreateFontCursor,XCreateFontCursor_db);
extern XFontSet XCreateFontSet_db(Display *, const char *, char * * *, int *, char * *);
CheckInterfacedef(XCreateFontSet,XCreateFontSet_db);
extern GC XCreateGC_db(Display *, Drawable, unsigned long int, XGCValues *);
CheckInterfacedef(XCreateGC,XCreateGC_db);
extern Cursor XCreateGlyphCursor_db(Display *, Font, Font, unsigned int, unsigned int, XColor *, XColor *);
CheckInterfacedef(XCreateGlyphCursor,XCreateGlyphCursor_db);
extern XIC XCreateIC_db(XIM, ...);
CheckInterfacedef(XCreateIC,XCreateIC_db);
extern XImage * XCreateImage_db(Display *, Visual *, unsigned int, int, int, char *, unsigned int, unsigned int, int, int);
CheckInterfacedef(XCreateImage,XCreateImage_db);
extern XOC XCreateOC_db(XOM, ...);
CheckInterfacedef(XCreateOC,XCreateOC_db);
extern Pixmap XCreatePixmap_db(Display *, Drawable, unsigned int, unsigned int, unsigned int);
CheckInterfacedef(XCreatePixmap,XCreatePixmap_db);
extern Cursor XCreatePixmapCursor_db(Display *, Pixmap, Pixmap, XColor *, XColor *, unsigned int, unsigned int);
CheckInterfacedef(XCreatePixmapCursor,XCreatePixmapCursor_db);
extern Pixmap XCreatePixmapFromBitmapData_db(Display *, Drawable, char *, unsigned int, unsigned int, unsigned long int, unsigned long int, unsigned int);
CheckInterfacedef(XCreatePixmapFromBitmapData,XCreatePixmapFromBitmapData_db);
extern Window XCreateSimpleWindow_db(Display *, Window, int, int, unsigned int, unsigned int, unsigned int, unsigned long int, unsigned long int);
CheckInterfacedef(XCreateSimpleWindow,XCreateSimpleWindow_db);
extern Window XCreateWindow_db(Display *, Window, int, int, unsigned int, unsigned int, unsigned int, int, unsigned int, Visual *, unsigned long int, XSetWindowAttributes *);
CheckInterfacedef(XCreateWindow,XCreateWindow_db);
extern Colormap XDefaultColormap_db(Display *, int);
CheckInterfacedef(XDefaultColormap,XDefaultColormap_db);
extern Colormap XDefaultColormapOfScreen_db(Screen *);
CheckInterfacedef(XDefaultColormapOfScreen,XDefaultColormapOfScreen_db);
extern int XDefaultDepth_db(Display *, int);
CheckInterfacedef(XDefaultDepth,XDefaultDepth_db);
extern int XDefaultDepthOfScreen_db(Screen *);
CheckInterfacedef(XDefaultDepthOfScreen,XDefaultDepthOfScreen_db);
extern GC XDefaultGC_db(Display *, int);
CheckInterfacedef(XDefaultGC,XDefaultGC_db);
extern GC XDefaultGCOfScreen_db(Screen *);
CheckInterfacedef(XDefaultGCOfScreen,XDefaultGCOfScreen_db);
extern Window XDefaultRootWindow_db(Display *);
CheckInterfacedef(XDefaultRootWindow,XDefaultRootWindow_db);
extern int XDefaultScreen_db(Display *);
CheckInterfacedef(XDefaultScreen,XDefaultScreen_db);
extern Screen * XDefaultScreenOfDisplay_db(Display *);
CheckInterfacedef(XDefaultScreenOfDisplay,XDefaultScreenOfDisplay_db);
extern Visual * XDefaultVisual_db(Display *, int);
CheckInterfacedef(XDefaultVisual,XDefaultVisual_db);
extern Visual * XDefaultVisualOfScreen_db(Screen *);
CheckInterfacedef(XDefaultVisualOfScreen,XDefaultVisualOfScreen_db);
extern int XDefineCursor_db(Display *, Window, Cursor);
CheckInterfacedef(XDefineCursor,XDefineCursor_db);
extern XModifierKeymap * XDeleteModifiermapEntry_db(XModifierKeymap *, unsigned int, int);
CheckInterfacedef(XDeleteModifiermapEntry,XDeleteModifiermapEntry_db);
extern int XDeleteProperty_db(Display *, Window, Atom);
CheckInterfacedef(XDeleteProperty,XDeleteProperty_db);
extern void XDestroyIC_db(XIC);
CheckInterfacedef(XDestroyIC,XDestroyIC_db);
extern void XDestroyOC_db(XOC);
CheckInterfacedef(XDestroyOC,XDestroyOC_db);
extern int XDestroySubwindows_db(Display *, Window);
CheckInterfacedef(XDestroySubwindows,XDestroySubwindows_db);
extern int XDestroyWindow_db(Display *, Window);
CheckInterfacedef(XDestroyWindow,XDestroyWindow_db);
extern int XDirectionalDependentDrawing_db(XFontSet);
CheckInterfacedef(XDirectionalDependentDrawing,XDirectionalDependentDrawing_db);
extern int XDisableAccessControl_db(Display *);
CheckInterfacedef(XDisableAccessControl,XDisableAccessControl_db);
extern int XDisplayCells_db(Display *, int);
CheckInterfacedef(XDisplayCells,XDisplayCells_db);
extern int XDisplayHeight_db(Display *, int);
CheckInterfacedef(XDisplayHeight,XDisplayHeight_db);
extern int XDisplayHeightMM_db(Display *, int);
CheckInterfacedef(XDisplayHeightMM,XDisplayHeightMM_db);
extern int XDisplayKeycodes_db(Display *, int *, int *);
CheckInterfacedef(XDisplayKeycodes,XDisplayKeycodes_db);
extern unsigned long int XDisplayMotionBufferSize_db(Display *);
CheckInterfacedef(XDisplayMotionBufferSize,XDisplayMotionBufferSize_db);
extern char * XDisplayName_db(const char *);
CheckInterfacedef(XDisplayName,XDisplayName_db);
extern Display * XDisplayOfIM_db(XIM);
CheckInterfacedef(XDisplayOfIM,XDisplayOfIM_db);
extern Display * XDisplayOfOM_db(XOM);
CheckInterfacedef(XDisplayOfOM,XDisplayOfOM_db);
extern Display * XDisplayOfScreen_db(Screen *);
CheckInterfacedef(XDisplayOfScreen,XDisplayOfScreen_db);
extern int XDisplayPlanes_db(Display *, int);
CheckInterfacedef(XDisplayPlanes,XDisplayPlanes_db);
extern char * XDisplayString_db(Display *);
CheckInterfacedef(XDisplayString,XDisplayString_db);
extern int XDisplayWidth_db(Display *, int);
CheckInterfacedef(XDisplayWidth,XDisplayWidth_db);
extern int XDisplayWidthMM_db(Display *, int);
CheckInterfacedef(XDisplayWidthMM,XDisplayWidthMM_db);
extern int XDoesBackingStore_db(Screen *);
CheckInterfacedef(XDoesBackingStore,XDoesBackingStore_db);
extern int XDoesSaveUnders_db(Screen *);
CheckInterfacedef(XDoesSaveUnders,XDoesSaveUnders_db);
extern int XDrawArc_db(Display *, Drawable, GC, int, int, unsigned int, unsigned int, int, int);
CheckInterfacedef(XDrawArc,XDrawArc_db);
extern int XDrawArcs_db(Display *, Drawable, GC, XArc *, int);
CheckInterfacedef(XDrawArcs,XDrawArcs_db);
extern int XDrawImageString_db(Display *, Drawable, GC, int, int, const char *, int);
CheckInterfacedef(XDrawImageString,XDrawImageString_db);
extern int XDrawImageString16_db(Display *, Drawable, GC, int, int, XChar2b *, int);
CheckInterfacedef(XDrawImageString16,XDrawImageString16_db);
extern int XDrawLine_db(Display *, Drawable, GC, int, int, int, int);
CheckInterfacedef(XDrawLine,XDrawLine_db);
extern int XDrawLines_db(Display *, Drawable, GC, XPoint *, int, int);
CheckInterfacedef(XDrawLines,XDrawLines_db);
extern int XDrawPoint_db(Display *, Drawable, GC, int, int);
CheckInterfacedef(XDrawPoint,XDrawPoint_db);
extern int XDrawPoints_db(Display *, Drawable, GC, XPoint *, int, int);
CheckInterfacedef(XDrawPoints,XDrawPoints_db);
extern int XDrawRectangle_db(Display *, Drawable, GC, int, int, unsigned int, unsigned int);
CheckInterfacedef(XDrawRectangle,XDrawRectangle_db);
extern int XDrawRectangles_db(Display *, Drawable, GC, XRectangle *, int);
CheckInterfacedef(XDrawRectangles,XDrawRectangles_db);
extern int XDrawSegments_db(Display *, Drawable, GC, XSegment *, int);
CheckInterfacedef(XDrawSegments,XDrawSegments_db);
extern int XDrawString_db(Display *, Drawable, GC, int, int, const char *, int);
CheckInterfacedef(XDrawString,XDrawString_db);
extern int XDrawString16_db(Display *, Drawable, GC, int, int, XChar2b *, int);
CheckInterfacedef(XDrawString16,XDrawString16_db);
extern int XDrawText_db(Display *, Drawable, GC, int, int, XTextItem *, int);
CheckInterfacedef(XDrawText,XDrawText_db);
extern int XDrawText16_db(Display *, Drawable, GC, int, int, XTextItem16 *, int);
CheckInterfacedef(XDrawText16,XDrawText16_db);
extern XExtData * * XEHeadOfExtensionList_db(XEDataObject);
CheckInterfacedef(XEHeadOfExtensionList,XEHeadOfExtensionList_db);
extern int XEnableAccessControl_db(Display *);
CheckInterfacedef(XEnableAccessControl,XEnableAccessControl_db);
extern long int XEventMaskOfScreen_db(Screen *);
CheckInterfacedef(XEventMaskOfScreen,XEventMaskOfScreen_db);
extern int XEventsQueued_db(Display *, int);
CheckInterfacedef(XEventsQueued,XEventsQueued_db);
extern long int XExtendedMaxRequestSize_db(Display *);
CheckInterfacedef(XExtendedMaxRequestSize,XExtendedMaxRequestSize_db);
extern XFontSetExtents * XExtentsOfFontSet_db(XFontSet);
CheckInterfacedef(XExtentsOfFontSet,XExtentsOfFontSet_db);
extern char * XFetchBuffer_db(Display *, int *, int);
CheckInterfacedef(XFetchBuffer,XFetchBuffer_db);
extern char * XFetchBytes_db(Display *, int *);
CheckInterfacedef(XFetchBytes,XFetchBytes_db);
extern int XFetchName_db(Display *, Window, char * *);
CheckInterfacedef(XFetchName,XFetchName_db);
extern int XFillArc_db(Display *, Drawable, GC, int, int, unsigned int, unsigned int, int, int);
CheckInterfacedef(XFillArc,XFillArc_db);
extern int XFillArcs_db(Display *, Drawable, GC, XArc *, int);
CheckInterfacedef(XFillArcs,XFillArcs_db);
extern int XFillPolygon_db(Display *, Drawable, GC, XPoint *, int, int, int);
CheckInterfacedef(XFillPolygon,XFillPolygon_db);
extern int XFillRectangle_db(Display *, Drawable, GC, int, int, unsigned int, unsigned int);
CheckInterfacedef(XFillRectangle,XFillRectangle_db);
extern int XFillRectangles_db(Display *, Drawable, GC, XRectangle *, int);
CheckInterfacedef(XFillRectangles,XFillRectangles_db);
extern int XFilterEvent_db(XEvent *, Window);
CheckInterfacedef(XFilterEvent,XFilterEvent_db);
extern XExtData * XFindOnExtensionList_db(XExtData * *, int);
CheckInterfacedef(XFindOnExtensionList,XFindOnExtensionList_db);
extern int XFlush_db(Display *);
CheckInterfacedef(XFlush,XFlush_db);
extern void XFlushGC_db(Display *, GC);
CheckInterfacedef(XFlushGC,XFlushGC_db);
extern int XFontsOfFontSet_db(XFontSet, XFontStruct * * *, char * * *);
CheckInterfacedef(XFontsOfFontSet,XFontsOfFontSet_db);
extern int XForceScreenSaver_db(Display *, int);
CheckInterfacedef(XForceScreenSaver,XForceScreenSaver_db);
extern int XFree_db(void *);
CheckInterfacedef(XFree,XFree_db);
extern int XFreeColormap_db(Display *, Colormap);
CheckInterfacedef(XFreeColormap,XFreeColormap_db);
extern int XFreeColors_db(Display *, Colormap, unsigned long int *, int, unsigned long int);
CheckInterfacedef(XFreeColors,XFreeColors_db);
extern int XFreeCursor_db(Display *, Cursor);
CheckInterfacedef(XFreeCursor,XFreeCursor_db);
extern int XFreeExtensionList_db(char * *);
CheckInterfacedef(XFreeExtensionList,XFreeExtensionList_db);
extern int XFreeFont_db(Display *, XFontStruct *);
CheckInterfacedef(XFreeFont,XFreeFont_db);
extern int XFreeFontInfo_db(char * *, XFontStruct *, int);
CheckInterfacedef(XFreeFontInfo,XFreeFontInfo_db);
extern int XFreeFontNames_db(char * *);
CheckInterfacedef(XFreeFontNames,XFreeFontNames_db);
extern int XFreeFontPath_db(char * *);
CheckInterfacedef(XFreeFontPath,XFreeFontPath_db);
extern void XFreeFontSet_db(Display *, XFontSet);
CheckInterfacedef(XFreeFontSet,XFreeFontSet_db);
extern int XFreeGC_db(Display *, GC);
CheckInterfacedef(XFreeGC,XFreeGC_db);
extern int XFreeModifiermap_db(XModifierKeymap *);
CheckInterfacedef(XFreeModifiermap,XFreeModifiermap_db);
extern int XFreePixmap_db(Display *, Pixmap);
CheckInterfacedef(XFreePixmap,XFreePixmap_db);
extern void XFreeStringList_db(char * *);
CheckInterfacedef(XFreeStringList,XFreeStringList_db);
extern GContext XGContextFromGC_db(GC);
CheckInterfacedef(XGContextFromGC,XGContextFromGC_db);
extern int XGeometry_db(Display *, int, const char *, const char *, unsigned int, unsigned int, unsigned int, int, int, int *, int *, int *, int *);
CheckInterfacedef(XGeometry,XGeometry_db);
extern char * XGetAtomName_db(Display *, Atom);
CheckInterfacedef(XGetAtomName,XGetAtomName_db);
extern int XGetAtomNames_db(Display *, Atom *, int, char * *);
CheckInterfacedef(XGetAtomNames,XGetAtomNames_db);
extern int XGetCommand_db(Display *, Window, char * * *, int *);
CheckInterfacedef(XGetCommand,XGetCommand_db);
extern char * XGetDefault_db(Display *, const char *, const char *);
CheckInterfacedef(XGetDefault,XGetDefault_db);
extern int XGetErrorDatabaseText_db(Display *, const char *, const char *, const char *, char *, int);
CheckInterfacedef(XGetErrorDatabaseText,XGetErrorDatabaseText_db);
extern int XGetErrorText_db(Display *, int, char *, int);
CheckInterfacedef(XGetErrorText,XGetErrorText_db);
extern char * * XGetFontPath_db(Display *, int *);
CheckInterfacedef(XGetFontPath,XGetFontPath_db);
extern int XGetFontProperty_db(XFontStruct *, Atom, unsigned long int *);
CheckInterfacedef(XGetFontProperty,XGetFontProperty_db);
extern int XGetGCValues_db(Display *, GC, unsigned long int, XGCValues *);
CheckInterfacedef(XGetGCValues,XGetGCValues_db);
extern int XGetGeometry_db(Display *, Drawable, Window *, int *, int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *);
CheckInterfacedef(XGetGeometry,XGetGeometry_db);
extern char * XGetICValues_db(XIC, ...);
CheckInterfacedef(XGetICValues,XGetICValues_db);
extern char * XGetIMValues_db(XIM, ...);
CheckInterfacedef(XGetIMValues,XGetIMValues_db);
extern int XGetIconName_db(Display *, Window, char * *);
CheckInterfacedef(XGetIconName,XGetIconName_db);
extern XImage * XGetImage_db(Display *, Drawable, int, int, unsigned int, unsigned int, unsigned long int, int);
CheckInterfacedef(XGetImage,XGetImage_db);
extern int XGetInputFocus_db(Display *, Window *, int *);
CheckInterfacedef(XGetInputFocus,XGetInputFocus_db);
extern int XGetKeyboardControl_db(Display *, XKeyboardState *);
CheckInterfacedef(XGetKeyboardControl,XGetKeyboardControl_db);
extern KeySym * XGetKeyboardMapping_db(Display *, unsigned int, int, int *);
CheckInterfacedef(XGetKeyboardMapping,XGetKeyboardMapping_db);
extern XModifierKeymap * XGetModifierMapping_db(Display *);
CheckInterfacedef(XGetModifierMapping,XGetModifierMapping_db);
extern XTimeCoord * XGetMotionEvents_db(Display *, Window, Time, Time, int *);
CheckInterfacedef(XGetMotionEvents,XGetMotionEvents_db);
extern char * XGetOCValues_db(XOC, ...);
CheckInterfacedef(XGetOCValues,XGetOCValues_db);
extern char * XGetOMValues_db(XOM, ...);
CheckInterfacedef(XGetOMValues,XGetOMValues_db);
extern int XGetPointerControl_db(Display *, int *, int *, int *);
CheckInterfacedef(XGetPointerControl,XGetPointerControl_db);
extern int XGetPointerMapping_db(Display *, unsigned char *, int);
CheckInterfacedef(XGetPointerMapping,XGetPointerMapping_db);
extern int XGetScreenSaver_db(Display *, int *, int *, int *, int *);
CheckInterfacedef(XGetScreenSaver,XGetScreenSaver_db);
extern Window XGetSelectionOwner_db(Display *, Atom);
CheckInterfacedef(XGetSelectionOwner,XGetSelectionOwner_db);
extern XImage * XGetSubImage_db(Display *, Drawable, int, int, unsigned int, unsigned int, unsigned long int, int, XImage *, int, int);
CheckInterfacedef(XGetSubImage,XGetSubImage_db);
extern int XGetTransientForHint_db(Display *, Window, Window *);
CheckInterfacedef(XGetTransientForHint,XGetTransientForHint_db);
extern int XGetWMColormapWindows_db(Display *, Window, Window * *, int *);
CheckInterfacedef(XGetWMColormapWindows,XGetWMColormapWindows_db);
extern int XGetWMProtocols_db(Display *, Window, Atom * *, int *);
CheckInterfacedef(XGetWMProtocols,XGetWMProtocols_db);
extern int XGetWindowAttributes_db(Display *, Window, XWindowAttributes *);
CheckInterfacedef(XGetWindowAttributes,XGetWindowAttributes_db);
extern int XGetWindowProperty_db(Display *, Window, Atom, long int, long int, int, Atom, Atom *, int *, unsigned long int *, unsigned long int *, unsigned char * *);
CheckInterfacedef(XGetWindowProperty,XGetWindowProperty_db);
extern int XGrabButton_db(Display *, unsigned int, unsigned int, Window, int, unsigned int, int, int, Window, Cursor);
CheckInterfacedef(XGrabButton,XGrabButton_db);
extern int XGrabKey_db(Display *, int, unsigned int, Window, int, int, int);
CheckInterfacedef(XGrabKey,XGrabKey_db);
extern int XGrabKeyboard_db(Display *, Window, int, int, int, Time);
CheckInterfacedef(XGrabKeyboard,XGrabKeyboard_db);
extern int XGrabPointer_db(Display *, Window, int, unsigned int, int, int, Window, Cursor, Time);
CheckInterfacedef(XGrabPointer,XGrabPointer_db);
extern int XGrabServer_db(Display *);
CheckInterfacedef(XGrabServer,XGrabServer_db);
extern int XHeightMMOfScreen_db(Screen *);
CheckInterfacedef(XHeightMMOfScreen,XHeightMMOfScreen_db);
extern int XHeightOfScreen_db(Screen *);
CheckInterfacedef(XHeightOfScreen,XHeightOfScreen_db);
extern XIM XIMOfIC_db(XIC);
CheckInterfacedef(XIMOfIC,XIMOfIC_db);
extern int XIconifyWindow_db(Display *, Window, int);
CheckInterfacedef(XIconifyWindow,XIconifyWindow_db);
extern int XIfEvent_db(Display *, XEvent *, int(*fptr1)(Display *,XEvent *,XPointer)
, XPointer);
CheckInterfacedef(XIfEvent,XIfEvent_db);
extern int XImageByteOrder_db(Display *);
CheckInterfacedef(XImageByteOrder,XImageByteOrder_db);
extern XExtCodes * XInitExtension_db(Display *, const char *);
CheckInterfacedef(XInitExtension,XInitExtension_db);
extern int XInitImage_db(XImage *);
CheckInterfacedef(XInitImage,XInitImage_db);
extern int XInitThreads_db(void);
CheckInterfacedef(XInitThreads,XInitThreads_db);
extern XModifierKeymap * XInsertModifiermapEntry_db(XModifierKeymap *, unsigned int, int);
CheckInterfacedef(XInsertModifiermapEntry,XInsertModifiermapEntry_db);
extern int XInstallColormap_db(Display *, Colormap);
CheckInterfacedef(XInstallColormap,XInstallColormap_db);
extern Atom XInternAtom_db(Display *, const char *, int);
CheckInterfacedef(XInternAtom,XInternAtom_db);
extern int XInternAtoms_db(Display *, char * *, int, int, Atom *);
CheckInterfacedef(XInternAtoms,XInternAtoms_db);
extern int XInternalConnectionNumbers_db(Display *, int * *, int *);
CheckInterfacedef(XInternalConnectionNumbers,XInternalConnectionNumbers_db);
extern KeySym XKeycodeToKeysym_db(Display *, unsigned int, int);
CheckInterfacedef(XKeycodeToKeysym,XKeycodeToKeysym_db);
extern KeyCode XKeysymToKeycode_db(Display *, KeySym);
CheckInterfacedef(XKeysymToKeycode,XKeysymToKeycode_db);
extern char * XKeysymToString_db(KeySym);
CheckInterfacedef(XKeysymToString,XKeysymToString_db);
extern int XKillClient_db(Display *, XID);
CheckInterfacedef(XKillClient,XKillClient_db);
extern unsigned long int XLastKnownRequestProcessed_db(Display *);
CheckInterfacedef(XLastKnownRequestProcessed,XLastKnownRequestProcessed_db);
extern int * XListDepths_db(Display *, int, int *);
CheckInterfacedef(XListDepths,XListDepths_db);
extern char * * XListExtensions_db(Display *, int *);
CheckInterfacedef(XListExtensions,XListExtensions_db);
extern char * * XListFonts_db(Display *, const char *, int, int *);
CheckInterfacedef(XListFonts,XListFonts_db);
extern char * * XListFontsWithInfo_db(Display *, const char *, int, int *, XFontStruct * *);
CheckInterfacedef(XListFontsWithInfo,XListFontsWithInfo_db);
extern XHostAddress * XListHosts_db(Display *, int *, int *);
CheckInterfacedef(XListHosts,XListHosts_db);
extern Colormap * XListInstalledColormaps_db(Display *, Window, int *);
CheckInterfacedef(XListInstalledColormaps,XListInstalledColormaps_db);
extern XPixmapFormatValues * XListPixmapFormats_db(Display *, int *);
CheckInterfacedef(XListPixmapFormats,XListPixmapFormats_db);
extern Atom * XListProperties_db(Display *, Window, int *);
CheckInterfacedef(XListProperties,XListProperties_db);
extern Font XLoadFont_db(Display *, const char *);
CheckInterfacedef(XLoadFont,XLoadFont_db);
extern XFontStruct * XLoadQueryFont_db(Display *, const char *);
CheckInterfacedef(XLoadQueryFont,XLoadQueryFont_db);
extern char * XLocaleOfFontSet_db(XFontSet);
CheckInterfacedef(XLocaleOfFontSet,XLocaleOfFontSet_db);
extern char * XLocaleOfIM_db(XIM);
CheckInterfacedef(XLocaleOfIM,XLocaleOfIM_db);
extern char * XLocaleOfOM_db(XOM);
CheckInterfacedef(XLocaleOfOM,XLocaleOfOM_db);
extern void XLockDisplay_db(Display *);
CheckInterfacedef(XLockDisplay,XLockDisplay_db);
extern int XLookupColor_db(Display *, Colormap, const char *, XColor *, XColor *);
CheckInterfacedef(XLookupColor,XLookupColor_db);
extern KeySym XLookupKeysym_db(XKeyEvent *, int);
CheckInterfacedef(XLookupKeysym,XLookupKeysym_db);
extern int XLowerWindow_db(Display *, Window);
CheckInterfacedef(XLowerWindow,XLowerWindow_db);
extern int XMapRaised_db(Display *, Window);
CheckInterfacedef(XMapRaised,XMapRaised_db);
extern int XMapSubwindows_db(Display *, Window);
CheckInterfacedef(XMapSubwindows,XMapSubwindows_db);
extern int XMapWindow_db(Display *, Window);
CheckInterfacedef(XMapWindow,XMapWindow_db);
extern int XMaskEvent_db(Display *, long int, XEvent *);
CheckInterfacedef(XMaskEvent,XMaskEvent_db);
extern int XMaxCmapsOfScreen_db(Screen *);
CheckInterfacedef(XMaxCmapsOfScreen,XMaxCmapsOfScreen_db);
extern long int XMaxRequestSize_db(Display *);
CheckInterfacedef(XMaxRequestSize,XMaxRequestSize_db);
extern int XMinCmapsOfScreen_db(Screen *);
CheckInterfacedef(XMinCmapsOfScreen,XMinCmapsOfScreen_db);
extern int XMoveResizeWindow_db(Display *, Window, int, int, unsigned int, unsigned int);
CheckInterfacedef(XMoveResizeWindow,XMoveResizeWindow_db);
extern int XMoveWindow_db(Display *, Window, int, int);
CheckInterfacedef(XMoveWindow,XMoveWindow_db);
extern XModifierKeymap * XNewModifiermap_db(int);
CheckInterfacedef(XNewModifiermap,XNewModifiermap_db);
extern int XNextEvent_db(Display *, XEvent *);
CheckInterfacedef(XNextEvent,XNextEvent_db);
extern unsigned long int XNextRequest_db(Display *);
CheckInterfacedef(XNextRequest,XNextRequest_db);
extern int XNoOp_db(Display *);
CheckInterfacedef(XNoOp,XNoOp_db);
extern XOM XOMOfOC_db(XOC);
CheckInterfacedef(XOMOfOC,XOMOfOC_db);
extern Display * XOpenDisplay_db(const char *);
CheckInterfacedef(XOpenDisplay,XOpenDisplay_db);
extern XIM XOpenIM_db(Display *, struct _XrmHashBucketRec *, char *, char *);
CheckInterfacedef(XOpenIM,XOpenIM_db);
extern XOM XOpenOM_db(Display *, struct _XrmHashBucketRec *, const char *, const char *);
CheckInterfacedef(XOpenOM,XOpenOM_db);
extern int XParseColor_db(Display *, Colormap, const char *, XColor *);
CheckInterfacedef(XParseColor,XParseColor_db);
extern int XParseGeometry_db(const char *, int *, int *, unsigned int *, unsigned int *);
CheckInterfacedef(XParseGeometry,XParseGeometry_db);
extern int XPeekEvent_db(Display *, XEvent *);
CheckInterfacedef(XPeekEvent,XPeekEvent_db);
extern int XPeekIfEvent_db(Display *, XEvent *, int(*fptr2)(Display *,XEvent *,XPointer)
, XPointer);
CheckInterfacedef(XPeekIfEvent,XPeekIfEvent_db);
extern int XPending_db(Display *);
CheckInterfacedef(XPending,XPending_db);
extern int XPlanesOfScreen_db(Screen *);
CheckInterfacedef(XPlanesOfScreen,XPlanesOfScreen_db);
extern void XProcessInternalConnection_db(Display *, int);
CheckInterfacedef(XProcessInternalConnection,XProcessInternalConnection_db);
extern int XProtocolRevision_db(Display *);
CheckInterfacedef(XProtocolRevision,XProtocolRevision_db);
extern int XProtocolVersion_db(Display *);
CheckInterfacedef(XProtocolVersion,XProtocolVersion_db);
extern int XPutBackEvent_db(Display *, XEvent *);
CheckInterfacedef(XPutBackEvent,XPutBackEvent_db);
extern int XPutImage_db(Display *, Drawable, GC, XImage *, int, int, int, int, unsigned int, unsigned int);
CheckInterfacedef(XPutImage,XPutImage_db);
extern int XQLength_db(Display *);
CheckInterfacedef(XQLength,XQLength_db);
extern int XQueryBestCursor_db(Display *, Drawable, unsigned int, unsigned int, unsigned int *, unsigned int *);
CheckInterfacedef(XQueryBestCursor,XQueryBestCursor_db);
extern int XQueryBestSize_db(Display *, int, Drawable, unsigned int, unsigned int, unsigned int *, unsigned int *);
CheckInterfacedef(XQueryBestSize,XQueryBestSize_db);
extern int XQueryBestStipple_db(Display *, Drawable, unsigned int, unsigned int, unsigned int *, unsigned int *);
CheckInterfacedef(XQueryBestStipple,XQueryBestStipple_db);
extern int XQueryBestTile_db(Display *, Drawable, unsigned int, unsigned int, unsigned int *, unsigned int *);
CheckInterfacedef(XQueryBestTile,XQueryBestTile_db);
extern int XQueryColor_db(Display *, Colormap, XColor *);
CheckInterfacedef(XQueryColor,XQueryColor_db);
extern int XQueryColors_db(Display *, Colormap, XColor *, int);
CheckInterfacedef(XQueryColors,XQueryColors_db);
extern int XQueryExtension_db(Display *, const char *, int *, int *, int *);
CheckInterfacedef(XQueryExtension,XQueryExtension_db);
extern XFontStruct * XQueryFont_db(Display *, XID);
CheckInterfacedef(XQueryFont,XQueryFont_db);
extern int XQueryKeymap_db(Display *, char[]);
CheckInterfacedef(XQueryKeymap,XQueryKeymap_db);
extern int XQueryPointer_db(Display *, Window, Window *, Window *, int *, int *, int *, int *, unsigned int *);
CheckInterfacedef(XQueryPointer,XQueryPointer_db);
extern int XQueryTextExtents_db(Display *, XID, const char *, int, int *, int *, int *, XCharStruct *);
CheckInterfacedef(XQueryTextExtents,XQueryTextExtents_db);
extern int XQueryTextExtents16_db(Display *, XID, XChar2b *, int, int *, int *, int *, XCharStruct *);
CheckInterfacedef(XQueryTextExtents16,XQueryTextExtents16_db);
extern int XQueryTree_db(Display *, Window, Window *, Window *, Window * *, unsigned int *);
CheckInterfacedef(XQueryTree,XQueryTree_db);
extern int XRaiseWindow_db(Display *, Window);
CheckInterfacedef(XRaiseWindow,XRaiseWindow_db);
extern int XReadBitmapFile_db(Display *, Drawable, const char *, unsigned int *, unsigned int *, Pixmap *, int *, int *);
CheckInterfacedef(XReadBitmapFile,XReadBitmapFile_db);
extern int XReadBitmapFileData_db(const char *, unsigned int *, unsigned int *, unsigned char * *, int *, int *);
CheckInterfacedef(XReadBitmapFileData,XReadBitmapFileData_db);
extern int XRebindKeysym_db(Display *, KeySym, KeySym *, int, const unsigned char *, int);
CheckInterfacedef(XRebindKeysym,XRebindKeysym_db);
extern int XRecolorCursor_db(Display *, Cursor, XColor *, XColor *);
CheckInterfacedef(XRecolorCursor,XRecolorCursor_db);
extern int XReconfigureWMWindow_db(Display *, Window, int, unsigned int, XWindowChanges *);
CheckInterfacedef(XReconfigureWMWindow,XReconfigureWMWindow_db);
extern int XRefreshKeyboardMapping_db(XMappingEvent *);
CheckInterfacedef(XRefreshKeyboardMapping,XRefreshKeyboardMapping_db);
extern int XRegisterIMInstantiateCallback_db(Display *, struct _XrmHashBucketRec *, char *, char *, XIDProc, XPointer);
CheckInterfacedef(XRegisterIMInstantiateCallback,XRegisterIMInstantiateCallback_db);
extern void XRemoveConnectionWatch_db(Display *, XConnectionWatchProc, XPointer);
CheckInterfacedef(XRemoveConnectionWatch,XRemoveConnectionWatch_db);
extern int XRemoveFromSaveSet_db(Display *, Window);
CheckInterfacedef(XRemoveFromSaveSet,XRemoveFromSaveSet_db);
extern int XRemoveHost_db(Display *, XHostAddress *);
CheckInterfacedef(XRemoveHost,XRemoveHost_db);
extern int XRemoveHosts_db(Display *, XHostAddress *, int);
CheckInterfacedef(XRemoveHosts,XRemoveHosts_db);
extern int XReparentWindow_db(Display *, Window, Window, int, int);
CheckInterfacedef(XReparentWindow,XReparentWindow_db);
extern int XResetScreenSaver_db(Display *);
CheckInterfacedef(XResetScreenSaver,XResetScreenSaver_db);
extern int XResizeWindow_db(Display *, Window, unsigned int, unsigned int);
CheckInterfacedef(XResizeWindow,XResizeWindow_db);
extern char * XResourceManagerString_db(Display *);
CheckInterfacedef(XResourceManagerString,XResourceManagerString_db);
extern int XRestackWindows_db(Display *, Window *, int);
CheckInterfacedef(XRestackWindows,XRestackWindows_db);
extern Window XRootWindow_db(Display *, int);
CheckInterfacedef(XRootWindow,XRootWindow_db);
extern Window XRootWindowOfScreen_db(Screen *);
CheckInterfacedef(XRootWindowOfScreen,XRootWindowOfScreen_db);
extern int XRotateBuffers_db(Display *, int);
CheckInterfacedef(XRotateBuffers,XRotateBuffers_db);
extern int XRotateWindowProperties_db(Display *, Window, Atom *, int, int);
CheckInterfacedef(XRotateWindowProperties,XRotateWindowProperties_db);
extern int XScreenCount_db(Display *);
CheckInterfacedef(XScreenCount,XScreenCount_db);
extern int XScreenNumberOfScreen_db(Screen *);
CheckInterfacedef(XScreenNumberOfScreen,XScreenNumberOfScreen_db);
extern Screen * XScreenOfDisplay_db(Display *, int);
CheckInterfacedef(XScreenOfDisplay,XScreenOfDisplay_db);
extern char * XScreenResourceString_db(Screen *);
CheckInterfacedef(XScreenResourceString,XScreenResourceString_db);
extern int XSelectInput_db(Display *, Window, long int);
CheckInterfacedef(XSelectInput,XSelectInput_db);
extern int XSendEvent_db(Display *, Window, int, long int, XEvent *);
CheckInterfacedef(XSendEvent,XSendEvent_db);
extern char * XServerVendor_db(Display *);
CheckInterfacedef(XServerVendor,XServerVendor_db);
extern int XSetAccessControl_db(Display *, int);
CheckInterfacedef(XSetAccessControl,XSetAccessControl_db);
extern int XSetArcMode_db(Display *, GC, int);
CheckInterfacedef(XSetArcMode,XSetArcMode_db);
extern void XSetAuthorization_db(char *, int, char *, int);
CheckInterfacedef(XSetAuthorization,XSetAuthorization_db);
extern int XSetBackground_db(Display *, GC, unsigned long int);
CheckInterfacedef(XSetBackground,XSetBackground_db);
extern int XSetClipMask_db(Display *, GC, Pixmap);
CheckInterfacedef(XSetClipMask,XSetClipMask_db);
extern int XSetClipOrigin_db(Display *, GC, int, int);
CheckInterfacedef(XSetClipOrigin,XSetClipOrigin_db);
extern int XSetClipRectangles_db(Display *, GC, int, int, XRectangle *, int, int);
CheckInterfacedef(XSetClipRectangles,XSetClipRectangles_db);
extern int XSetCloseDownMode_db(Display *, int);
CheckInterfacedef(XSetCloseDownMode,XSetCloseDownMode_db);
extern int XSetCommand_db(Display *, Window, char * *, int);
CheckInterfacedef(XSetCommand,XSetCommand_db);
extern int XSetDashes_db(Display *, GC, int, const char *, int);
CheckInterfacedef(XSetDashes,XSetDashes_db);
extern XErrorHandler XSetErrorHandler_db(XErrorHandler);
CheckInterfacedef(XSetErrorHandler,XSetErrorHandler_db);
extern int XSetFillRule_db(Display *, GC, int);
CheckInterfacedef(XSetFillRule,XSetFillRule_db);
extern int XSetFillStyle_db(Display *, GC, int);
CheckInterfacedef(XSetFillStyle,XSetFillStyle_db);
extern int XSetFont_db(Display *, GC, Font);
CheckInterfacedef(XSetFont,XSetFont_db);
extern int XSetFontPath_db(Display *, char * *, int);
CheckInterfacedef(XSetFontPath,XSetFontPath_db);
extern int XSetForeground_db(Display *, GC, unsigned long int);
CheckInterfacedef(XSetForeground,XSetForeground_db);
extern int XSetFunction_db(Display *, GC, int);
CheckInterfacedef(XSetFunction,XSetFunction_db);
extern int XSetGraphicsExposures_db(Display *, GC, int);
CheckInterfacedef(XSetGraphicsExposures,XSetGraphicsExposures_db);
extern void XSetICFocus_db(XIC);
CheckInterfacedef(XSetICFocus,XSetICFocus_db);
extern char * XSetICValues_db(XIC, ...);
CheckInterfacedef(XSetICValues,XSetICValues_db);
extern  XSetIMValues_db(void);
CheckInterfacedef(XSetIMValues,XSetIMValues_db);
extern XIOErrorHandler XSetIOErrorHandler_db(XIOErrorHandler);
CheckInterfacedef(XSetIOErrorHandler,XSetIOErrorHandler_db);
extern int XSetIconName_db(Display *, Window, const char *);
CheckInterfacedef(XSetIconName,XSetIconName_db);
extern int XSetInputFocus_db(Display *, Window, int, Time);
CheckInterfacedef(XSetInputFocus,XSetInputFocus_db);
extern int XSetLineAttributes_db(Display *, GC, unsigned int, int, int, int);
CheckInterfacedef(XSetLineAttributes,XSetLineAttributes_db);
extern char * XSetLocaleModifiers_db(const char *);
CheckInterfacedef(XSetLocaleModifiers,XSetLocaleModifiers_db);
extern int XSetModifierMapping_db(Display *, XModifierKeymap *);
CheckInterfacedef(XSetModifierMapping,XSetModifierMapping_db);
extern char * XSetOCValues_db(XOC, ...);
CheckInterfacedef(XSetOCValues,XSetOCValues_db);
extern char * XSetOMValues_db(XOM, ...);
CheckInterfacedef(XSetOMValues,XSetOMValues_db);
extern int XSetPlaneMask_db(Display *, GC, unsigned long int);
CheckInterfacedef(XSetPlaneMask,XSetPlaneMask_db);
extern int XSetPointerMapping_db(Display *, const unsigned char *, int);
CheckInterfacedef(XSetPointerMapping,XSetPointerMapping_db);
extern int XSetScreenSaver_db(Display *, int, int, int, int);
CheckInterfacedef(XSetScreenSaver,XSetScreenSaver_db);
extern int XSetSelectionOwner_db(Display *, Atom, Window, Time);
CheckInterfacedef(XSetSelectionOwner,XSetSelectionOwner_db);
extern int XSetState_db(Display *, GC, unsigned long int, unsigned long int, int, unsigned long int);
CheckInterfacedef(XSetState,XSetState_db);
extern int XSetStipple_db(Display *, GC, Pixmap);
CheckInterfacedef(XSetStipple,XSetStipple_db);
extern int XSetSubwindowMode_db(Display *, GC, int);
CheckInterfacedef(XSetSubwindowMode,XSetSubwindowMode_db);
extern int XSetTSOrigin_db(Display *, GC, int, int);
CheckInterfacedef(XSetTSOrigin,XSetTSOrigin_db);
extern int XSetTile_db(Display *, GC, Pixmap);
CheckInterfacedef(XSetTile,XSetTile_db);
extern int XSetTransientForHint_db(Display *, Window, Window);
CheckInterfacedef(XSetTransientForHint,XSetTransientForHint_db);
extern int XSetWMColormapWindows_db(Display *, Window, Window *, int);
CheckInterfacedef(XSetWMColormapWindows,XSetWMColormapWindows_db);
extern int XSetWMProtocols_db(Display *, Window, Atom *, int);
CheckInterfacedef(XSetWMProtocols,XSetWMProtocols_db);
extern int XSetWindowBackground_db(Display *, Window, unsigned long int);
CheckInterfacedef(XSetWindowBackground,XSetWindowBackground_db);
extern int XSetWindowBackgroundPixmap_db(Display *, Window, Pixmap);
CheckInterfacedef(XSetWindowBackgroundPixmap,XSetWindowBackgroundPixmap_db);
extern int XSetWindowBorder_db(Display *, Window, unsigned long int);
CheckInterfacedef(XSetWindowBorder,XSetWindowBorder_db);
extern int XSetWindowBorderPixmap_db(Display *, Window, Pixmap);
CheckInterfacedef(XSetWindowBorderPixmap,XSetWindowBorderPixmap_db);
extern int XSetWindowBorderWidth_db(Display *, Window, unsigned int);
CheckInterfacedef(XSetWindowBorderWidth,XSetWindowBorderWidth_db);
extern int XSetWindowColormap_db(Display *, Window, Colormap);
CheckInterfacedef(XSetWindowColormap,XSetWindowColormap_db);
extern int XStoreBuffer_db(Display *, const char *, int, int);
CheckInterfacedef(XStoreBuffer,XStoreBuffer_db);
extern int XStoreBytes_db(Display *, const char *, int);
CheckInterfacedef(XStoreBytes,XStoreBytes_db);
extern int XStoreColor_db(Display *, Colormap, XColor *);
CheckInterfacedef(XStoreColor,XStoreColor_db);
extern int XStoreColors_db(Display *, Colormap, XColor *, int);
CheckInterfacedef(XStoreColors,XStoreColors_db);
extern int XStoreName_db(Display *, Window, const char *);
CheckInterfacedef(XStoreName,XStoreName_db);
extern int XStoreNamedColor_db(Display *, Colormap, const char *, unsigned long int, int);
CheckInterfacedef(XStoreNamedColor,XStoreNamedColor_db);
extern KeySym XStringToKeysym_db(const char *);
CheckInterfacedef(XStringToKeysym,XStringToKeysym_db);
extern int XSupportsLocale_db(void);
CheckInterfacedef(XSupportsLocale,XSupportsLocale_db);
extern int XSync_db(Display *, int);
CheckInterfacedef(XSync,XSync_db);
extern int XTextExtents_db(XFontStruct *, const char *, int, int *, int *, int *, XCharStruct *);
CheckInterfacedef(XTextExtents,XTextExtents_db);
extern int XTextExtents16_db(XFontStruct *, XChar2b *, int, int *, int *, int *, XCharStruct *);
CheckInterfacedef(XTextExtents16,XTextExtents16_db);
extern int XTextWidth_db(XFontStruct *, const char *, int);
CheckInterfacedef(XTextWidth,XTextWidth_db);
extern int XTextWidth16_db(XFontStruct *, XChar2b *, int);
CheckInterfacedef(XTextWidth16,XTextWidth16_db);
extern int XTranslateCoordinates_db(Display *, Window, Window, int, int, int *, int *, Window *);
CheckInterfacedef(XTranslateCoordinates,XTranslateCoordinates_db);
extern int XUndefineCursor_db(Display *, Window);
CheckInterfacedef(XUndefineCursor,XUndefineCursor_db);
extern int XUngrabButton_db(Display *, unsigned int, unsigned int, Window);
CheckInterfacedef(XUngrabButton,XUngrabButton_db);
extern int XUngrabKey_db(Display *, int, unsigned int, Window);
CheckInterfacedef(XUngrabKey,XUngrabKey_db);
extern int XUngrabKeyboard_db(Display *, Time);
CheckInterfacedef(XUngrabKeyboard,XUngrabKeyboard_db);
extern int XUngrabPointer_db(Display *, Time);
CheckInterfacedef(XUngrabPointer,XUngrabPointer_db);
extern int XUngrabServer_db(Display *);
CheckInterfacedef(XUngrabServer,XUngrabServer_db);
extern int XUninstallColormap_db(Display *, Colormap);
CheckInterfacedef(XUninstallColormap,XUninstallColormap_db);
extern int XUnloadFont_db(Display *, Font);
CheckInterfacedef(XUnloadFont,XUnloadFont_db);
extern void XUnlockDisplay_db(Display *);
CheckInterfacedef(XUnlockDisplay,XUnlockDisplay_db);
extern int XUnmapSubwindows_db(Display *, Window);
CheckInterfacedef(XUnmapSubwindows,XUnmapSubwindows_db);
extern int XUnmapWindow_db(Display *, Window);
CheckInterfacedef(XUnmapWindow,XUnmapWindow_db);
extern int XUnregisterIMInstantiateCallback_db(Display *, struct _XrmHashBucketRec *, char *, char *, XIDProc, XPointer);
CheckInterfacedef(XUnregisterIMInstantiateCallback,XUnregisterIMInstantiateCallback_db);
extern void XUnsetICFocus_db(XIC);
CheckInterfacedef(XUnsetICFocus,XUnsetICFocus_db);
extern XVaNestedList XVaCreateNestedList_db(int, ...);
CheckInterfacedef(XVaCreateNestedList,XVaCreateNestedList_db);
extern int XVendorRelease_db(Display *);
CheckInterfacedef(XVendorRelease,XVendorRelease_db);
extern VisualID XVisualIDFromVisual_db(Visual *);
CheckInterfacedef(XVisualIDFromVisual,XVisualIDFromVisual_db);
extern int XWarpPointer_db(Display *, Window, Window, int, int, unsigned int, unsigned int, int, int);
CheckInterfacedef(XWarpPointer,XWarpPointer_db);
extern unsigned long int XWhitePixel_db(Display *, int);
CheckInterfacedef(XWhitePixel,XWhitePixel_db);
extern unsigned long int XWhitePixelOfScreen_db(Screen *);
CheckInterfacedef(XWhitePixelOfScreen,XWhitePixelOfScreen_db);
extern int XWidthMMOfScreen_db(Screen *);
CheckInterfacedef(XWidthMMOfScreen,XWidthMMOfScreen_db);
extern int XWidthOfScreen_db(Screen *);
CheckInterfacedef(XWidthOfScreen,XWidthOfScreen_db);
extern int XWindowEvent_db(Display *, Window, long int, XEvent *);
CheckInterfacedef(XWindowEvent,XWindowEvent_db);
extern int XWithdrawWindow_db(Display *, Window, int);
CheckInterfacedef(XWithdrawWindow,XWithdrawWindow_db);
extern int XWriteBitmapFile_db(Display *, const char *, Pixmap, unsigned int, unsigned int, int, int);
CheckInterfacedef(XWriteBitmapFile,XWriteBitmapFile_db);
extern void XmbDrawImageString_db(Display *, Drawable, XFontSet, GC, int, int, const char *, int);
CheckInterfacedef(XmbDrawImageString,XmbDrawImageString_db);
extern void XmbDrawString_db(Display *, Drawable, XFontSet, GC, int, int, const char *, int);
CheckInterfacedef(XmbDrawString,XmbDrawString_db);
extern void XmbDrawText_db(Display *, Drawable, GC, int, int, XmbTextItem *, int);
CheckInterfacedef(XmbDrawText,XmbDrawText_db);
extern int XmbLookupString_db(XIC, XKeyPressedEvent *, char *, int, KeySym *, int *);
CheckInterfacedef(XmbLookupString,XmbLookupString_db);
extern char * XmbResetIC_db(XIC);
CheckInterfacedef(XmbResetIC,XmbResetIC_db);
extern int XmbTextEscapement_db(XFontSet, const char *, int);
CheckInterfacedef(XmbTextEscapement,XmbTextEscapement_db);
extern int XmbTextExtents_db(XFontSet, const char *, int, XRectangle *, XRectangle *);
CheckInterfacedef(XmbTextExtents,XmbTextExtents_db);
extern int XmbTextPerCharExtents_db(XFontSet, const char *, int, XRectangle *, XRectangle *, int, int *, XRectangle *, XRectangle *);
CheckInterfacedef(XmbTextPerCharExtents,XmbTextPerCharExtents_db);
extern void XrmInitialize_db(void);
CheckInterfacedef(XrmInitialize,XrmInitialize_db);
extern void XwcDrawImageString_db(Display *, Drawable, XFontSet, GC, int, int, wchar_t *, int);
CheckInterfacedef(XwcDrawImageString,XwcDrawImageString_db);
extern void XwcDrawString_db(Display *, Drawable, XFontSet, GC, int, int, wchar_t *, int);
CheckInterfacedef(XwcDrawString,XwcDrawString_db);
extern void XwcDrawText_db(Display *, Drawable, GC, int, int, XwcTextItem *, int);
CheckInterfacedef(XwcDrawText,XwcDrawText_db);
extern int XwcLookupString_db(XIC, XKeyPressedEvent *, wchar_t *, int, KeySym *, int *);
CheckInterfacedef(XwcLookupString,XwcLookupString_db);
extern wchar_t * XwcResetIC_db(XIC);
CheckInterfacedef(XwcResetIC,XwcResetIC_db);
extern int XwcTextEscapement_db(XFontSet, wchar_t *, int);
CheckInterfacedef(XwcTextEscapement,XwcTextEscapement_db);
extern int XwcTextExtents_db(XFontSet, wchar_t *, int, XRectangle *, XRectangle *);
CheckInterfacedef(XwcTextExtents,XwcTextExtents_db);
extern int XwcTextPerCharExtents_db(XFontSet, wchar_t *, int, XRectangle *, XRectangle *, int, int *, XRectangle *, XRectangle *);
CheckInterfacedef(XwcTextPerCharExtents,XwcTextPerCharExtents_db);
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
