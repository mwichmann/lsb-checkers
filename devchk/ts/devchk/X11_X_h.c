/*
 * Test of X11/X.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "X11/X.h"



#ifdef TET_TEST
void X11_X_h()
{
#else
int X11_X_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/X.h\n");
#endif

#ifdef None
	CompareConstant(None,0L)
#else
Msg( "Warning: Constant not found: None\n");
#endif

#ifdef ParentRelative
	CompareConstant(ParentRelative,1L)
#else
Msg( "Warning: Constant not found: ParentRelative\n");
#endif

#ifdef CopyFromParent
	CompareConstant(CopyFromParent,0L)
#else
Msg( "Warning: Constant not found: CopyFromParent\n");
#endif

#ifdef PointerWindow
	CompareConstant(PointerWindow,0L)
#else
Msg( "Warning: Constant not found: PointerWindow\n");
#endif

#ifdef InputFocus
	CompareConstant(InputFocus,1L)
#else
Msg( "Warning: Constant not found: InputFocus\n");
#endif

#ifdef PointerRoot
	CompareConstant(PointerRoot,1L)
#else
Msg( "Warning: Constant not found: PointerRoot\n");
#endif

#ifdef AnyPropertyType
	CompareConstant(AnyPropertyType,0L)
#else
Msg( "Warning: Constant not found: AnyPropertyType\n");
#endif

#ifdef AnyKey
	CompareConstant(AnyKey,0L)
#else
Msg( "Warning: Constant not found: AnyKey\n");
#endif

#ifdef AnyButton
	CompareConstant(AnyButton,0L)
#else
Msg( "Warning: Constant not found: AnyButton\n");
#endif

#ifdef AllTemporary
	CompareConstant(AllTemporary,0L)
#else
Msg( "Warning: Constant not found: AllTemporary\n");
#endif

#ifdef CurrentTime
	CompareConstant(CurrentTime,0L)
#else
Msg( "Warning: Constant not found: CurrentTime\n");
#endif

#ifdef NoSymbol
	CompareConstant(NoSymbol,0L)
#else
Msg( "Warning: Constant not found: NoSymbol\n");
#endif

#ifdef KeyPressMask
	CompareConstant(KeyPressMask,(1L<<0))
#else
Msg( "Warning: Constant not found: KeyPressMask\n");
#endif

#ifdef KeyReleaseMask
	CompareConstant(KeyReleaseMask,(1L<<1))
#else
Msg( "Warning: Constant not found: KeyReleaseMask\n");
#endif

#ifdef ButtonPressMask
	CompareConstant(ButtonPressMask,(1L<<2))
#else
Msg( "Warning: Constant not found: ButtonPressMask\n");
#endif

#ifdef ButtonReleaseMask
	CompareConstant(ButtonReleaseMask,(1L<<3))
#else
Msg( "Warning: Constant not found: ButtonReleaseMask\n");
#endif

#ifdef EnterWindowMask
	CompareConstant(EnterWindowMask,(1L<<4))
#else
Msg( "Warning: Constant not found: EnterWindowMask\n");
#endif

#ifdef LeaveWindowMask
	CompareConstant(LeaveWindowMask,(1L<<5))
#else
Msg( "Warning: Constant not found: LeaveWindowMask\n");
#endif

#ifdef PointerMotionMask
	CompareConstant(PointerMotionMask,(1L<<6))
#else
Msg( "Warning: Constant not found: PointerMotionMask\n");
#endif

#ifdef PointerMotionHintMask
	CompareConstant(PointerMotionHintMask,(1L<<7))
#else
Msg( "Warning: Constant not found: PointerMotionHintMask\n");
#endif

#ifdef Button1MotionMask
	CompareConstant(Button1MotionMask,(1L<<8))
#else
Msg( "Warning: Constant not found: Button1MotionMask\n");
#endif

#ifdef Button2MotionMask
	CompareConstant(Button2MotionMask,(1L<<9))
#else
Msg( "Warning: Constant not found: Button2MotionMask\n");
#endif

#ifdef Button3MotionMask
	CompareConstant(Button3MotionMask,(1L<<10))
#else
Msg( "Warning: Constant not found: Button3MotionMask\n");
#endif

#ifdef Button4MotionMask
	CompareConstant(Button4MotionMask,(1L<<11))
#else
Msg( "Warning: Constant not found: Button4MotionMask\n");
#endif

#ifdef Button5MotionMask
	CompareConstant(Button5MotionMask,(1L<<12))
#else
Msg( "Warning: Constant not found: Button5MotionMask\n");
#endif

#ifdef ButtonMotionMask
	CompareConstant(ButtonMotionMask,(1L<<13))
#else
Msg( "Warning: Constant not found: ButtonMotionMask\n");
#endif

#ifdef KeymapStateMask
	CompareConstant(KeymapStateMask,(1L<<14))
#else
Msg( "Warning: Constant not found: KeymapStateMask\n");
#endif

#ifdef ExposureMask
	CompareConstant(ExposureMask,(1L<<15))
#else
Msg( "Warning: Constant not found: ExposureMask\n");
#endif

#ifdef VisibilityChangeMask
	CompareConstant(VisibilityChangeMask,(1L<<16))
#else
Msg( "Warning: Constant not found: VisibilityChangeMask\n");
#endif

#ifdef StructureNotifyMask
	CompareConstant(StructureNotifyMask,(1L<<17))
#else
Msg( "Warning: Constant not found: StructureNotifyMask\n");
#endif

#ifdef ResizeRedirectMask
	CompareConstant(ResizeRedirectMask,(1L<<18))
#else
Msg( "Warning: Constant not found: ResizeRedirectMask\n");
#endif

#ifdef SubstructureNotifyMask
	CompareConstant(SubstructureNotifyMask,(1L<<19))
#else
Msg( "Warning: Constant not found: SubstructureNotifyMask\n");
#endif

#ifdef SubstructureRedirectMask
	CompareConstant(SubstructureRedirectMask,(1L<<20))
#else
Msg( "Warning: Constant not found: SubstructureRedirectMask\n");
#endif

#ifdef FocusChangeMask
	CompareConstant(FocusChangeMask,(1L<<21))
#else
Msg( "Warning: Constant not found: FocusChangeMask\n");
#endif

#ifdef PropertyChangeMask
	CompareConstant(PropertyChangeMask,(1L<<22))
#else
Msg( "Warning: Constant not found: PropertyChangeMask\n");
#endif

#ifdef ColormapChangeMask
	CompareConstant(ColormapChangeMask,(1L<<23))
#else
Msg( "Warning: Constant not found: ColormapChangeMask\n");
#endif

#ifdef OwnerGrabButtonMask
	CompareConstant(OwnerGrabButtonMask,(1L<<24))
#else
Msg( "Warning: Constant not found: OwnerGrabButtonMask\n");
#endif

#ifdef NoEventMask
	CompareConstant(NoEventMask,0L)
#else
Msg( "Warning: Constant not found: NoEventMask\n");
#endif

#ifdef KeyPress
	CompareConstant(KeyPress,2)
#else
Msg( "Warning: Constant not found: KeyPress\n");
#endif

#ifdef KeyRelease
	CompareConstant(KeyRelease,3)
#else
Msg( "Warning: Constant not found: KeyRelease\n");
#endif

#ifdef ButtonPress
	CompareConstant(ButtonPress,4)
#else
Msg( "Warning: Constant not found: ButtonPress\n");
#endif

#ifdef ButtonRelease
	CompareConstant(ButtonRelease,5)
#else
Msg( "Warning: Constant not found: ButtonRelease\n");
#endif

#ifdef MotionNotify
	CompareConstant(MotionNotify,6)
#else
Msg( "Warning: Constant not found: MotionNotify\n");
#endif

#ifdef EnterNotify
	CompareConstant(EnterNotify,7)
#else
Msg( "Warning: Constant not found: EnterNotify\n");
#endif

#ifdef LeaveNotify
	CompareConstant(LeaveNotify,8)
#else
Msg( "Warning: Constant not found: LeaveNotify\n");
#endif

#ifdef FocusIn
	CompareConstant(FocusIn,9)
#else
Msg( "Warning: Constant not found: FocusIn\n");
#endif

#ifdef FocusOut
	CompareConstant(FocusOut,10)
#else
Msg( "Warning: Constant not found: FocusOut\n");
#endif

#ifdef KeymapNotify
	CompareConstant(KeymapNotify,11)
#else
Msg( "Warning: Constant not found: KeymapNotify\n");
#endif

#ifdef Expose
	CompareConstant(Expose,12)
#else
Msg( "Warning: Constant not found: Expose\n");
#endif

#ifdef GraphicsExpose
	CompareConstant(GraphicsExpose,13)
#else
Msg( "Warning: Constant not found: GraphicsExpose\n");
#endif

#ifdef NoExpose
	CompareConstant(NoExpose,14)
#else
Msg( "Warning: Constant not found: NoExpose\n");
#endif

#ifdef VisibilityNotify
	CompareConstant(VisibilityNotify,15)
#else
Msg( "Warning: Constant not found: VisibilityNotify\n");
#endif

#ifdef CreateNotify
	CompareConstant(CreateNotify,16)
#else
Msg( "Warning: Constant not found: CreateNotify\n");
#endif

#ifdef DestroyNotify
	CompareConstant(DestroyNotify,17)
#else
Msg( "Warning: Constant not found: DestroyNotify\n");
#endif

#ifdef UnmapNotify
	CompareConstant(UnmapNotify,18)
#else
Msg( "Warning: Constant not found: UnmapNotify\n");
#endif

#ifdef MapNotify
	CompareConstant(MapNotify,19)
#else
Msg( "Warning: Constant not found: MapNotify\n");
#endif

#ifdef MapRequest
	CompareConstant(MapRequest,20)
#else
Msg( "Warning: Constant not found: MapRequest\n");
#endif

#ifdef ReparentNotify
	CompareConstant(ReparentNotify,21)
#else
Msg( "Warning: Constant not found: ReparentNotify\n");
#endif

#ifdef ConfigureNotify
	CompareConstant(ConfigureNotify,22)
#else
Msg( "Warning: Constant not found: ConfigureNotify\n");
#endif

#ifdef ConfigureRequest
	CompareConstant(ConfigureRequest,23)
#else
Msg( "Warning: Constant not found: ConfigureRequest\n");
#endif

#ifdef GravityNotify
	CompareConstant(GravityNotify,24)
#else
Msg( "Warning: Constant not found: GravityNotify\n");
#endif

#ifdef ResizeRequest
	CompareConstant(ResizeRequest,25)
#else
Msg( "Warning: Constant not found: ResizeRequest\n");
#endif

#ifdef CirculateNotify
	CompareConstant(CirculateNotify,26)
#else
Msg( "Warning: Constant not found: CirculateNotify\n");
#endif

#ifdef CirculateRequest
	CompareConstant(CirculateRequest,27)
#else
Msg( "Warning: Constant not found: CirculateRequest\n");
#endif

#ifdef PropertyNotify
	CompareConstant(PropertyNotify,28)
#else
Msg( "Warning: Constant not found: PropertyNotify\n");
#endif

#ifdef SelectionClear
	CompareConstant(SelectionClear,29)
#else
Msg( "Warning: Constant not found: SelectionClear\n");
#endif

#ifdef SelectionRequest
	CompareConstant(SelectionRequest,30)
#else
Msg( "Warning: Constant not found: SelectionRequest\n");
#endif

#ifdef SelectionNotify
	CompareConstant(SelectionNotify,31)
#else
Msg( "Warning: Constant not found: SelectionNotify\n");
#endif

#ifdef ColormapNotify
	CompareConstant(ColormapNotify,32)
#else
Msg( "Warning: Constant not found: ColormapNotify\n");
#endif

#ifdef ClientMessage
	CompareConstant(ClientMessage,33)
#else
Msg( "Warning: Constant not found: ClientMessage\n");
#endif

#ifdef MappingNotify
	CompareConstant(MappingNotify,34)
#else
Msg( "Warning: Constant not found: MappingNotify\n");
#endif

#ifdef LASTEvent
	CompareConstant(LASTEvent,35)
#else
Msg( "Warning: Constant not found: LASTEvent\n");
#endif

#ifdef ShiftMask
	CompareConstant(ShiftMask,(1<<0))
#else
Msg( "Warning: Constant not found: ShiftMask\n");
#endif

#ifdef LockMask
	CompareConstant(LockMask,(1<<1))
#else
Msg( "Warning: Constant not found: LockMask\n");
#endif

#ifdef ControlMask
	CompareConstant(ControlMask,(1<<2))
#else
Msg( "Warning: Constant not found: ControlMask\n");
#endif

#ifdef Mod1Mask
	CompareConstant(Mod1Mask,(1<<3))
#else
Msg( "Warning: Constant not found: Mod1Mask\n");
#endif

#ifdef Mod2Mask
	CompareConstant(Mod2Mask,(1<<4))
#else
Msg( "Warning: Constant not found: Mod2Mask\n");
#endif

#ifdef Mod3Mask
	CompareConstant(Mod3Mask,(1<<5))
#else
Msg( "Warning: Constant not found: Mod3Mask\n");
#endif

#ifdef Mod4Mask
	CompareConstant(Mod4Mask,(1<<6))
#else
Msg( "Warning: Constant not found: Mod4Mask\n");
#endif

#ifdef Mod5Mask
	CompareConstant(Mod5Mask,(1<<7))
#else
Msg( "Warning: Constant not found: Mod5Mask\n");
#endif

#ifdef ShiftMapIndex
	CompareConstant(ShiftMapIndex,0)
#else
Msg( "Warning: Constant not found: ShiftMapIndex\n");
#endif

#ifdef LockMapIndex
	CompareConstant(LockMapIndex,1)
#else
Msg( "Warning: Constant not found: LockMapIndex\n");
#endif

#ifdef ControlMapIndex
	CompareConstant(ControlMapIndex,2)
#else
Msg( "Warning: Constant not found: ControlMapIndex\n");
#endif

#ifdef Mod1MapIndex
	CompareConstant(Mod1MapIndex,3)
#else
Msg( "Warning: Constant not found: Mod1MapIndex\n");
#endif

#ifdef Mod2MapIndex
	CompareConstant(Mod2MapIndex,4)
#else
Msg( "Warning: Constant not found: Mod2MapIndex\n");
#endif

#ifdef Mod3MapIndex
	CompareConstant(Mod3MapIndex,5)
#else
Msg( "Warning: Constant not found: Mod3MapIndex\n");
#endif

#ifdef Mod4MapIndex
	CompareConstant(Mod4MapIndex,6)
#else
Msg( "Warning: Constant not found: Mod4MapIndex\n");
#endif

#ifdef Mod5MapIndex
	CompareConstant(Mod5MapIndex,7)
#else
Msg( "Warning: Constant not found: Mod5MapIndex\n");
#endif

#ifdef Button1Mask
	CompareConstant(Button1Mask,(1<<8))
#else
Msg( "Warning: Constant not found: Button1Mask\n");
#endif

#ifdef Button2Mask
	CompareConstant(Button2Mask,(1<<9))
#else
Msg( "Warning: Constant not found: Button2Mask\n");
#endif

#ifdef Button3Mask
	CompareConstant(Button3Mask,(1<<10))
#else
Msg( "Warning: Constant not found: Button3Mask\n");
#endif

#ifdef Button4Mask
	CompareConstant(Button4Mask,(1<<11))
#else
Msg( "Warning: Constant not found: Button4Mask\n");
#endif

#ifdef Button5Mask
	CompareConstant(Button5Mask,(1<<12))
#else
Msg( "Warning: Constant not found: Button5Mask\n");
#endif

#ifdef AnyModifier
	CompareConstant(AnyModifier,(1<<15))
#else
Msg( "Warning: Constant not found: AnyModifier\n");
#endif

#ifdef Button1
	CompareConstant(Button1,1)
#else
Msg( "Warning: Constant not found: Button1\n");
#endif

#ifdef Button2
	CompareConstant(Button2,2)
#else
Msg( "Warning: Constant not found: Button2\n");
#endif

#ifdef Button3
	CompareConstant(Button3,3)
#else
Msg( "Warning: Constant not found: Button3\n");
#endif

#ifdef Button4
	CompareConstant(Button4,4)
#else
Msg( "Warning: Constant not found: Button4\n");
#endif

#ifdef Button5
	CompareConstant(Button5,5)
#else
Msg( "Warning: Constant not found: Button5\n");
#endif

#ifdef NotifyNormal
	CompareConstant(NotifyNormal,0)
#else
Msg( "Warning: Constant not found: NotifyNormal\n");
#endif

#ifdef NotifyGrab
	CompareConstant(NotifyGrab,1)
#else
Msg( "Warning: Constant not found: NotifyGrab\n");
#endif

#ifdef NotifyUngrab
	CompareConstant(NotifyUngrab,2)
#else
Msg( "Warning: Constant not found: NotifyUngrab\n");
#endif

#ifdef NotifyWhileGrabbed
	CompareConstant(NotifyWhileGrabbed,3)
#else
Msg( "Warning: Constant not found: NotifyWhileGrabbed\n");
#endif

#ifdef NotifyHint
	CompareConstant(NotifyHint,1)
#else
Msg( "Warning: Constant not found: NotifyHint\n");
#endif

#ifdef NotifyAncestor
	CompareConstant(NotifyAncestor,0)
#else
Msg( "Warning: Constant not found: NotifyAncestor\n");
#endif

#ifdef NotifyVirtual
	CompareConstant(NotifyVirtual,1)
#else
Msg( "Warning: Constant not found: NotifyVirtual\n");
#endif

#ifdef NotifyInferior
	CompareConstant(NotifyInferior,2)
#else
Msg( "Warning: Constant not found: NotifyInferior\n");
#endif

#ifdef NotifyNonlinear
	CompareConstant(NotifyNonlinear,3)
#else
Msg( "Warning: Constant not found: NotifyNonlinear\n");
#endif

#ifdef NotifyNonlinearVirtual
	CompareConstant(NotifyNonlinearVirtual,4)
#else
Msg( "Warning: Constant not found: NotifyNonlinearVirtual\n");
#endif

#ifdef NotifyPointer
	CompareConstant(NotifyPointer,5)
#else
Msg( "Warning: Constant not found: NotifyPointer\n");
#endif

#ifdef NotifyPointerRoot
	CompareConstant(NotifyPointerRoot,6)
#else
Msg( "Warning: Constant not found: NotifyPointerRoot\n");
#endif

#ifdef NotifyDetailNone
	CompareConstant(NotifyDetailNone,7)
#else
Msg( "Warning: Constant not found: NotifyDetailNone\n");
#endif

#ifdef VisibilityUnobscured
	CompareConstant(VisibilityUnobscured,0)
#else
Msg( "Warning: Constant not found: VisibilityUnobscured\n");
#endif

#ifdef VisibilityPartiallyObscured
	CompareConstant(VisibilityPartiallyObscured,1)
#else
Msg( "Warning: Constant not found: VisibilityPartiallyObscured\n");
#endif

#ifdef VisibilityFullyObscured
	CompareConstant(VisibilityFullyObscured,2)
#else
Msg( "Warning: Constant not found: VisibilityFullyObscured\n");
#endif

#ifdef PlaceOnTop
	CompareConstant(PlaceOnTop,0)
#else
Msg( "Warning: Constant not found: PlaceOnTop\n");
#endif

#ifdef PlaceOnBottom
	CompareConstant(PlaceOnBottom,1)
#else
Msg( "Warning: Constant not found: PlaceOnBottom\n");
#endif

#ifdef FamilyInternet
	CompareConstant(FamilyInternet,0)
#else
Msg( "Warning: Constant not found: FamilyInternet\n");
#endif

#ifdef FamilyDECnet
	CompareConstant(FamilyDECnet,1)
#else
Msg( "Warning: Constant not found: FamilyDECnet\n");
#endif

#ifdef FamilyChaos
	CompareConstant(FamilyChaos,2)
#else
Msg( "Warning: Constant not found: FamilyChaos\n");
#endif

#ifdef PropertyNewValue
	CompareConstant(PropertyNewValue,0)
#else
Msg( "Warning: Constant not found: PropertyNewValue\n");
#endif

#ifdef PropertyDelete
	CompareConstant(PropertyDelete,1)
#else
Msg( "Warning: Constant not found: PropertyDelete\n");
#endif

#ifdef PropModeReplace
	CompareConstant(PropModeReplace,0)
#else
Msg( "Warning: Constant not found: PropModeReplace\n");
#endif

#ifdef ColormapUninstalled
	CompareConstant(ColormapUninstalled,0)
#else
Msg( "Warning: Constant not found: ColormapUninstalled\n");
#endif

#ifdef ColormapInstalled
	CompareConstant(ColormapInstalled,1)
#else
Msg( "Warning: Constant not found: ColormapInstalled\n");
#endif

#ifdef GrabModeSync
	CompareConstant(GrabModeSync,0)
#else
Msg( "Warning: Constant not found: GrabModeSync\n");
#endif

#ifdef GrabModeAsync
	CompareConstant(GrabModeAsync,1)
#else
Msg( "Warning: Constant not found: GrabModeAsync\n");
#endif

#ifdef GrabSuccess
	CompareConstant(GrabSuccess,0)
#else
Msg( "Warning: Constant not found: GrabSuccess\n");
#endif

#ifdef AlreadyGrabbed
	CompareConstant(AlreadyGrabbed,1)
#else
Msg( "Warning: Constant not found: AlreadyGrabbed\n");
#endif

#ifdef GrabInvalidTime
	CompareConstant(GrabInvalidTime,2)
#else
Msg( "Warning: Constant not found: GrabInvalidTime\n");
#endif

#ifdef GrabNotViewable
	CompareConstant(GrabNotViewable,3)
#else
Msg( "Warning: Constant not found: GrabNotViewable\n");
#endif

#ifdef GrabFrozen
	CompareConstant(GrabFrozen,4)
#else
Msg( "Warning: Constant not found: GrabFrozen\n");
#endif

#ifdef AsyncPointer
	CompareConstant(AsyncPointer,0)
#else
Msg( "Warning: Constant not found: AsyncPointer\n");
#endif

#ifdef SyncPointer
	CompareConstant(SyncPointer,1)
#else
Msg( "Warning: Constant not found: SyncPointer\n");
#endif

#ifdef ReplayPointer
	CompareConstant(ReplayPointer,2)
#else
Msg( "Warning: Constant not found: ReplayPointer\n");
#endif

#ifdef AsyncKeyboard
	CompareConstant(AsyncKeyboard,3)
#else
Msg( "Warning: Constant not found: AsyncKeyboard\n");
#endif

#ifdef SyncKeyboard
	CompareConstant(SyncKeyboard,4)
#else
Msg( "Warning: Constant not found: SyncKeyboard\n");
#endif

#ifdef ReplayKeyboard
	CompareConstant(ReplayKeyboard,5)
#else
Msg( "Warning: Constant not found: ReplayKeyboard\n");
#endif

#ifdef AsyncBoth
	CompareConstant(AsyncBoth,6)
#else
Msg( "Warning: Constant not found: AsyncBoth\n");
#endif

#ifdef SyncBoth
	CompareConstant(SyncBoth,7)
#else
Msg( "Warning: Constant not found: SyncBoth\n");
#endif

#ifdef RevertToNone
	CompareConstant(RevertToNone,(int)None)
#else
Msg( "Warning: Constant not found: RevertToNone\n");
#endif

#ifdef RevertToPointerRoot
	CompareConstant(RevertToPointerRoot,(int)PointerRoot)
#else
Msg( "Warning: Constant not found: RevertToPointerRoot\n");
#endif

#ifdef RevertToParent
	CompareConstant(RevertToParent,2)
#else
Msg( "Warning: Constant not found: RevertToParent\n");
#endif

#ifdef Success
	CompareConstant(Success,0)
#else
Msg( "Warning: Constant not found: Success\n");
#endif

#ifdef BadRequest
	CompareConstant(BadRequest,1)
#else
Msg( "Warning: Constant not found: BadRequest\n");
#endif

#ifdef BadValue
	CompareConstant(BadValue,2)
#else
Msg( "Warning: Constant not found: BadValue\n");
#endif

#ifdef BadWindow
	CompareConstant(BadWindow,3)
#else
Msg( "Warning: Constant not found: BadWindow\n");
#endif

#ifdef BadPixmap
	CompareConstant(BadPixmap,4)
#else
Msg( "Warning: Constant not found: BadPixmap\n");
#endif

#ifdef BadAtom
	CompareConstant(BadAtom,5)
#else
Msg( "Warning: Constant not found: BadAtom\n");
#endif

#ifdef BadCursor
	CompareConstant(BadCursor,6)
#else
Msg( "Warning: Constant not found: BadCursor\n");
#endif

#ifdef BadFont
	CompareConstant(BadFont,7)
#else
Msg( "Warning: Constant not found: BadFont\n");
#endif

#ifdef BadMatch
	CompareConstant(BadMatch,8)
#else
Msg( "Warning: Constant not found: BadMatch\n");
#endif

#ifdef BadDrawable
	CompareConstant(BadDrawable,9)
#else
Msg( "Warning: Constant not found: BadDrawable\n");
#endif

#ifdef BadAccess
	CompareConstant(BadAccess,10)
#else
Msg( "Warning: Constant not found: BadAccess\n");
#endif

#ifdef BadAlloc
	CompareConstant(BadAlloc,11)
#else
Msg( "Warning: Constant not found: BadAlloc\n");
#endif

#ifdef BadColor
	CompareConstant(BadColor,12)
#else
Msg( "Warning: Constant not found: BadColor\n");
#endif

#ifdef BadGC
	CompareConstant(BadGC,13)
#else
Msg( "Warning: Constant not found: BadGC\n");
#endif

#ifdef BadIDChoice
	CompareConstant(BadIDChoice,14)
#else
Msg( "Warning: Constant not found: BadIDChoice\n");
#endif

#ifdef BadName
	CompareConstant(BadName,15)
#else
Msg( "Warning: Constant not found: BadName\n");
#endif

#ifdef BadLength
	CompareConstant(BadLength,16)
#else
Msg( "Warning: Constant not found: BadLength\n");
#endif

#ifdef BadImplementation
	CompareConstant(BadImplementation,17)
#else
Msg( "Warning: Constant not found: BadImplementation\n");
#endif

#ifdef FirstExtensionError
	CompareConstant(FirstExtensionError,128)
#else
Msg( "Warning: Constant not found: FirstExtensionError\n");
#endif

#ifdef LastExtensionError
	CompareConstant(LastExtensionError,255)
#else
Msg( "Warning: Constant not found: LastExtensionError\n");
#endif

#ifdef InputOutput
	CompareConstant(InputOutput,1)
#else
Msg( "Warning: Constant not found: InputOutput\n");
#endif

#ifdef InputOnly
	CompareConstant(InputOnly,2)
#else
Msg( "Warning: Constant not found: InputOnly\n");
#endif

#ifdef CWX
	CompareConstant(CWX,(1<<0))
#else
Msg( "Warning: Constant not found: CWX\n");
#endif

#ifdef CWBackPixmap
	CompareConstant(CWBackPixmap,(1L<<0))
#else
Msg( "Warning: Constant not found: CWBackPixmap\n");
#endif

#ifdef CWBackPixel
	CompareConstant(CWBackPixel,(1L<<1))
#else
Msg( "Warning: Constant not found: CWBackPixel\n");
#endif

#ifdef CWBorderPixmap
	CompareConstant(CWBorderPixmap,(1L<<2))
#else
Msg( "Warning: Constant not found: CWBorderPixmap\n");
#endif

#ifdef CWBorderPixel
	CompareConstant(CWBorderPixel,(1L<<3))
#else
Msg( "Warning: Constant not found: CWBorderPixel\n");
#endif

#ifdef CWBitGravity
	CompareConstant(CWBitGravity,(1L<<4))
#else
Msg( "Warning: Constant not found: CWBitGravity\n");
#endif

#ifdef CWWinGravity
	CompareConstant(CWWinGravity,(1L<<5))
#else
Msg( "Warning: Constant not found: CWWinGravity\n");
#endif

#ifdef CWBackingStore
	CompareConstant(CWBackingStore,(1L<<6))
#else
Msg( "Warning: Constant not found: CWBackingStore\n");
#endif

#ifdef CWBackingPlanes
	CompareConstant(CWBackingPlanes,(1L<<7))
#else
Msg( "Warning: Constant not found: CWBackingPlanes\n");
#endif

#ifdef CWBackingPixel
	CompareConstant(CWBackingPixel,(1L<<8))
#else
Msg( "Warning: Constant not found: CWBackingPixel\n");
#endif

#ifdef CWOverrideRedirect
	CompareConstant(CWOverrideRedirect,(1L<<9))
#else
Msg( "Warning: Constant not found: CWOverrideRedirect\n");
#endif

#ifdef CWSaveUnder
	CompareConstant(CWSaveUnder,(1L<<10))
#else
Msg( "Warning: Constant not found: CWSaveUnder\n");
#endif

#ifdef CWEventMask
	CompareConstant(CWEventMask,(1L<<11))
#else
Msg( "Warning: Constant not found: CWEventMask\n");
#endif

#ifdef CWDontPropagate
	CompareConstant(CWDontPropagate,(1L<<12))
#else
Msg( "Warning: Constant not found: CWDontPropagate\n");
#endif

#ifdef CWColormap
	CompareConstant(CWColormap,(1L<<13))
#else
Msg( "Warning: Constant not found: CWColormap\n");
#endif

#ifdef CWCursor
	CompareConstant(CWCursor,(1L<<14))
#else
Msg( "Warning: Constant not found: CWCursor\n");
#endif

#ifdef CWY
	CompareConstant(CWY,(1<<1))
#else
Msg( "Warning: Constant not found: CWY\n");
#endif

#ifdef CWWidth
	CompareConstant(CWWidth,(1<<2))
#else
Msg( "Warning: Constant not found: CWWidth\n");
#endif

#ifdef CWHeight
	CompareConstant(CWHeight,(1<<3))
#else
Msg( "Warning: Constant not found: CWHeight\n");
#endif

#ifdef CWBorderWidth
	CompareConstant(CWBorderWidth,(1<<4))
#else
Msg( "Warning: Constant not found: CWBorderWidth\n");
#endif

#ifdef CWSibling
	CompareConstant(CWSibling,(1<<5))
#else
Msg( "Warning: Constant not found: CWSibling\n");
#endif

#ifdef CWStackMode
	CompareConstant(CWStackMode,(1<<6))
#else
Msg( "Warning: Constant not found: CWStackMode\n");
#endif

#ifdef ForgetGravity
	CompareConstant(ForgetGravity,0)
#else
Msg( "Warning: Constant not found: ForgetGravity\n");
#endif

#ifdef NorthWestGravity
	CompareConstant(NorthWestGravity,1)
#else
Msg( "Warning: Constant not found: NorthWestGravity\n");
#endif

#ifdef NorthGravity
	CompareConstant(NorthGravity,2)
#else
Msg( "Warning: Constant not found: NorthGravity\n");
#endif

#ifdef NorthEastGravity
	CompareConstant(NorthEastGravity,3)
#else
Msg( "Warning: Constant not found: NorthEastGravity\n");
#endif

#ifdef WestGravity
	CompareConstant(WestGravity,4)
#else
Msg( "Warning: Constant not found: WestGravity\n");
#endif

#ifdef CenterGravity
	CompareConstant(CenterGravity,5)
#else
Msg( "Warning: Constant not found: CenterGravity\n");
#endif

#ifdef EastGravity
	CompareConstant(EastGravity,6)
#else
Msg( "Warning: Constant not found: EastGravity\n");
#endif

#ifdef SouthWestGravity
	CompareConstant(SouthWestGravity,7)
#else
Msg( "Warning: Constant not found: SouthWestGravity\n");
#endif

#ifdef SouthGravity
	CompareConstant(SouthGravity,8)
#else
Msg( "Warning: Constant not found: SouthGravity\n");
#endif

#ifdef SouthEastGravity
	CompareConstant(SouthEastGravity,9)
#else
Msg( "Warning: Constant not found: SouthEastGravity\n");
#endif

#ifdef StaticGravity
	CompareConstant(StaticGravity,10)
#else
Msg( "Warning: Constant not found: StaticGravity\n");
#endif

#ifdef UnmapGravity
	CompareConstant(UnmapGravity,0)
#else
Msg( "Warning: Constant not found: UnmapGravity\n");
#endif

#ifdef NotUseful
	CompareConstant(NotUseful,0)
#else
Msg( "Warning: Constant not found: NotUseful\n");
#endif

#ifdef WhenMapped
	CompareConstant(WhenMapped,1)
#else
Msg( "Warning: Constant not found: WhenMapped\n");
#endif

#ifdef Always
	CompareConstant(Always,2)
#else
Msg( "Warning: Constant not found: Always\n");
#endif

#ifdef IsUnmapped
	CompareConstant(IsUnmapped,0)
#else
Msg( "Warning: Constant not found: IsUnmapped\n");
#endif

#ifdef IsUnviewable
	CompareConstant(IsUnviewable,1)
#else
Msg( "Warning: Constant not found: IsUnviewable\n");
#endif

#ifdef IsViewable
	CompareConstant(IsViewable,2)
#else
Msg( "Warning: Constant not found: IsViewable\n");
#endif

#ifdef SetModeInsert
	CompareConstant(SetModeInsert,0)
#else
Msg( "Warning: Constant not found: SetModeInsert\n");
#endif

#ifdef SetModeDelete
	CompareConstant(SetModeDelete,1)
#else
Msg( "Warning: Constant not found: SetModeDelete\n");
#endif

#ifdef DestroyAll
	CompareConstant(DestroyAll,0)
#else
Msg( "Warning: Constant not found: DestroyAll\n");
#endif

#ifdef RetainPermanent
	CompareConstant(RetainPermanent,1)
#else
Msg( "Warning: Constant not found: RetainPermanent\n");
#endif

#ifdef RetainTemporary
	CompareConstant(RetainTemporary,2)
#else
Msg( "Warning: Constant not found: RetainTemporary\n");
#endif

#ifdef Above
	CompareConstant(Above,0)
#else
Msg( "Warning: Constant not found: Above\n");
#endif

#ifdef Below
	CompareConstant(Below,1)
#else
Msg( "Warning: Constant not found: Below\n");
#endif

#ifdef TopIf
	CompareConstant(TopIf,2)
#else
Msg( "Warning: Constant not found: TopIf\n");
#endif

#ifdef BottomIf
	CompareConstant(BottomIf,3)
#else
Msg( "Warning: Constant not found: BottomIf\n");
#endif

#ifdef Opposite
	CompareConstant(Opposite,4)
#else
Msg( "Warning: Constant not found: Opposite\n");
#endif

#ifdef RaiseLowest
	CompareConstant(RaiseLowest,0)
#else
Msg( "Warning: Constant not found: RaiseLowest\n");
#endif

#ifdef LowerHighest
	CompareConstant(LowerHighest,1)
#else
Msg( "Warning: Constant not found: LowerHighest\n");
#endif

#ifdef PropModePrepend
	CompareConstant(PropModePrepend,1)
#else
Msg( "Warning: Constant not found: PropModePrepend\n");
#endif

#ifdef PropModeAppend
	CompareConstant(PropModeAppend,2)
#else
Msg( "Warning: Constant not found: PropModeAppend\n");
#endif

#ifdef GXclear
	CompareConstant(GXclear,0x0)
#else
Msg( "Warning: Constant not found: GXclear\n");
#endif

#ifdef GXand
	CompareConstant(GXand,0x1)
#else
Msg( "Warning: Constant not found: GXand\n");
#endif

#ifdef GXandReverse
	CompareConstant(GXandReverse,0x2)
#else
Msg( "Warning: Constant not found: GXandReverse\n");
#endif

#ifdef GXcopy
	CompareConstant(GXcopy,0x3)
#else
Msg( "Warning: Constant not found: GXcopy\n");
#endif

#ifdef GXandInverted
	CompareConstant(GXandInverted,0x4)
#else
Msg( "Warning: Constant not found: GXandInverted\n");
#endif

#ifdef GXnoop
	CompareConstant(GXnoop,0x5)
#else
Msg( "Warning: Constant not found: GXnoop\n");
#endif

#ifdef GXxor
	CompareConstant(GXxor,0x6)
#else
Msg( "Warning: Constant not found: GXxor\n");
#endif

#ifdef GXor
	CompareConstant(GXor,0x7)
#else
Msg( "Warning: Constant not found: GXor\n");
#endif

#ifdef GXnor
	CompareConstant(GXnor,0x8)
#else
Msg( "Warning: Constant not found: GXnor\n");
#endif

#ifdef GXequiv
	CompareConstant(GXequiv,0x9)
#else
Msg( "Warning: Constant not found: GXequiv\n");
#endif

#ifdef GXinvert
	CompareConstant(GXinvert,0xa)
#else
Msg( "Warning: Constant not found: GXinvert\n");
#endif

#ifdef GXorReverse
	CompareConstant(GXorReverse,0xb)
#else
Msg( "Warning: Constant not found: GXorReverse\n");
#endif

#ifdef GXcopyInverted
	CompareConstant(GXcopyInverted,0xc)
#else
Msg( "Warning: Constant not found: GXcopyInverted\n");
#endif

#ifdef GXorInverted
	CompareConstant(GXorInverted,0xd)
#else
Msg( "Warning: Constant not found: GXorInverted\n");
#endif

#ifdef GXnand
	CompareConstant(GXnand,0xe)
#else
Msg( "Warning: Constant not found: GXnand\n");
#endif

#ifdef GXset
	CompareConstant(GXset,0xf)
#else
Msg( "Warning: Constant not found: GXset\n");
#endif

#ifdef LineSolid
	CompareConstant(LineSolid,0)
#else
Msg( "Warning: Constant not found: LineSolid\n");
#endif

#ifdef LineOnOffDash
	CompareConstant(LineOnOffDash,1)
#else
Msg( "Warning: Constant not found: LineOnOffDash\n");
#endif

#ifdef LineDoubleDash
	CompareConstant(LineDoubleDash,2)
#else
Msg( "Warning: Constant not found: LineDoubleDash\n");
#endif

#ifdef CapNotLast
	CompareConstant(CapNotLast,0)
#else
Msg( "Warning: Constant not found: CapNotLast\n");
#endif

#ifdef CapButt
	CompareConstant(CapButt,1)
#else
Msg( "Warning: Constant not found: CapButt\n");
#endif

#ifdef CapRound
	CompareConstant(CapRound,2)
#else
Msg( "Warning: Constant not found: CapRound\n");
#endif

#ifdef CapProjecting
	CompareConstant(CapProjecting,3)
#else
Msg( "Warning: Constant not found: CapProjecting\n");
#endif

#ifdef JoinMiter
	CompareConstant(JoinMiter,0)
#else
Msg( "Warning: Constant not found: JoinMiter\n");
#endif

#ifdef JoinRound
	CompareConstant(JoinRound,1)
#else
Msg( "Warning: Constant not found: JoinRound\n");
#endif

#ifdef JoinBevel
	CompareConstant(JoinBevel,2)
#else
Msg( "Warning: Constant not found: JoinBevel\n");
#endif

#ifdef FillSolid
	CompareConstant(FillSolid,0)
#else
Msg( "Warning: Constant not found: FillSolid\n");
#endif

#ifdef FillTiled
	CompareConstant(FillTiled,1)
#else
Msg( "Warning: Constant not found: FillTiled\n");
#endif

#ifdef FillStippled
	CompareConstant(FillStippled,2)
#else
Msg( "Warning: Constant not found: FillStippled\n");
#endif

#ifdef FillOpaqueStippled
	CompareConstant(FillOpaqueStippled,3)
#else
Msg( "Warning: Constant not found: FillOpaqueStippled\n");
#endif

#ifdef EvenOddRule
	CompareConstant(EvenOddRule,0)
#else
Msg( "Warning: Constant not found: EvenOddRule\n");
#endif

#ifdef WindingRule
	CompareConstant(WindingRule,1)
#else
Msg( "Warning: Constant not found: WindingRule\n");
#endif

#ifdef ClipByChildren
	CompareConstant(ClipByChildren,0)
#else
Msg( "Warning: Constant not found: ClipByChildren\n");
#endif

#ifdef IncludeInferiors
	CompareConstant(IncludeInferiors,1)
#else
Msg( "Warning: Constant not found: IncludeInferiors\n");
#endif

#ifdef Unsorted
	CompareConstant(Unsorted,0)
#else
Msg( "Warning: Constant not found: Unsorted\n");
#endif

#ifdef YSorted
	CompareConstant(YSorted,1)
#else
Msg( "Warning: Constant not found: YSorted\n");
#endif

#ifdef YXSorted
	CompareConstant(YXSorted,2)
#else
Msg( "Warning: Constant not found: YXSorted\n");
#endif

#ifdef YXBanded
	CompareConstant(YXBanded,3)
#else
Msg( "Warning: Constant not found: YXBanded\n");
#endif

#ifdef XYBitmap
	CompareConstant(XYBitmap,0)
#else
Msg( "Warning: Constant not found: XYBitmap\n");
#endif

#ifdef CoordModeOrigin
	CompareConstant(CoordModeOrigin,0)
#else
Msg( "Warning: Constant not found: CoordModeOrigin\n");
#endif

#ifdef CoordModePrevious
	CompareConstant(CoordModePrevious,1)
#else
Msg( "Warning: Constant not found: CoordModePrevious\n");
#endif

#ifdef Complex
	CompareConstant(Complex,0)
#else
Msg( "Warning: Constant not found: Complex\n");
#endif

#ifdef Nonconvex
	CompareConstant(Nonconvex,1)
#else
Msg( "Warning: Constant not found: Nonconvex\n");
#endif

#ifdef Convex
	CompareConstant(Convex,2)
#else
Msg( "Warning: Constant not found: Convex\n");
#endif

#ifdef ArcChord
	CompareConstant(ArcChord,0)
#else
Msg( "Warning: Constant not found: ArcChord\n");
#endif

#ifdef ArcPieSlice
	CompareConstant(ArcPieSlice,1)
#else
Msg( "Warning: Constant not found: ArcPieSlice\n");
#endif

#ifdef GCFunction
	CompareConstant(GCFunction,(1L<<0))
#else
Msg( "Warning: Constant not found: GCFunction\n");
#endif

#ifdef GCPlaneMask
	CompareConstant(GCPlaneMask,(1L<<1))
#else
Msg( "Warning: Constant not found: GCPlaneMask\n");
#endif

#ifdef GCForeground
	CompareConstant(GCForeground,(1L<<2))
#else
Msg( "Warning: Constant not found: GCForeground\n");
#endif

#ifdef GCBackground
	CompareConstant(GCBackground,(1L<<3))
#else
Msg( "Warning: Constant not found: GCBackground\n");
#endif

#ifdef GCLineWidth
	CompareConstant(GCLineWidth,(1L<<4))
#else
Msg( "Warning: Constant not found: GCLineWidth\n");
#endif

#ifdef GCLineStyle
	CompareConstant(GCLineStyle,(1L<<5))
#else
Msg( "Warning: Constant not found: GCLineStyle\n");
#endif

#ifdef GCCapStyle
	CompareConstant(GCCapStyle,(1L<<6))
#else
Msg( "Warning: Constant not found: GCCapStyle\n");
#endif

#ifdef GCJoinStyle
	CompareConstant(GCJoinStyle,(1L<<7))
#else
Msg( "Warning: Constant not found: GCJoinStyle\n");
#endif

#ifdef GCFillStyle
	CompareConstant(GCFillStyle,(1L<<8))
#else
Msg( "Warning: Constant not found: GCFillStyle\n");
#endif

#ifdef GCFillRule
	CompareConstant(GCFillRule,(1L<<9))
#else
Msg( "Warning: Constant not found: GCFillRule\n");
#endif

#ifdef GCTile
	CompareConstant(GCTile,(1L<<10))
#else
Msg( "Warning: Constant not found: GCTile\n");
#endif

#ifdef GCStipple
	CompareConstant(GCStipple,(1L<<11))
#else
Msg( "Warning: Constant not found: GCStipple\n");
#endif

#ifdef GCTileStipXOrigin
	CompareConstant(GCTileStipXOrigin,(1L<<12))
#else
Msg( "Warning: Constant not found: GCTileStipXOrigin\n");
#endif

#ifdef GCTileStipYOrigin
	CompareConstant(GCTileStipYOrigin,(1L<<13))
#else
Msg( "Warning: Constant not found: GCTileStipYOrigin\n");
#endif

#ifdef GCFont
	CompareConstant(GCFont,(1L<<14))
#else
Msg( "Warning: Constant not found: GCFont\n");
#endif

#ifdef GCSubwindowMode
	CompareConstant(GCSubwindowMode,(1L<<15))
#else
Msg( "Warning: Constant not found: GCSubwindowMode\n");
#endif

#ifdef GCGraphicsExposures
	CompareConstant(GCGraphicsExposures,(1L<<16))
#else
Msg( "Warning: Constant not found: GCGraphicsExposures\n");
#endif

#ifdef GCClipXOrigin
	CompareConstant(GCClipXOrigin,(1L<<17))
#else
Msg( "Warning: Constant not found: GCClipXOrigin\n");
#endif

#ifdef GCClipYOrigin
	CompareConstant(GCClipYOrigin,(1L<<18))
#else
Msg( "Warning: Constant not found: GCClipYOrigin\n");
#endif

#ifdef GCClipMask
	CompareConstant(GCClipMask,(1L<<19))
#else
Msg( "Warning: Constant not found: GCClipMask\n");
#endif

#ifdef GCDashOffset
	CompareConstant(GCDashOffset,(1L<<20))
#else
Msg( "Warning: Constant not found: GCDashOffset\n");
#endif

#ifdef GCDashList
	CompareConstant(GCDashList,(1L<<21))
#else
Msg( "Warning: Constant not found: GCDashList\n");
#endif

#ifdef GCArcMode
	CompareConstant(GCArcMode,(1L<<22))
#else
Msg( "Warning: Constant not found: GCArcMode\n");
#endif

#ifdef GCLastBit
	CompareConstant(GCLastBit,22)
#else
Msg( "Warning: Constant not found: GCLastBit\n");
#endif

#ifdef FontChange
	CompareConstant(FontChange,255)
#else
Msg( "Warning: Constant not found: FontChange\n");
#endif

#ifdef FontLeftToRight
	CompareConstant(FontLeftToRight,0)
#else
Msg( "Warning: Constant not found: FontLeftToRight\n");
#endif

#ifdef FontRightToLeft
	CompareConstant(FontRightToLeft,1)
#else
Msg( "Warning: Constant not found: FontRightToLeft\n");
#endif

#ifdef XYPixmap
	CompareConstant(XYPixmap,1)
#else
Msg( "Warning: Constant not found: XYPixmap\n");
#endif

#ifdef ZPixmap
	CompareConstant(ZPixmap,2)
#else
Msg( "Warning: Constant not found: ZPixmap\n");
#endif

#ifdef AllocNone
	CompareConstant(AllocNone,0)
#else
Msg( "Warning: Constant not found: AllocNone\n");
#endif

#ifdef AllocAll
	CompareConstant(AllocAll,1)
#else
Msg( "Warning: Constant not found: AllocAll\n");
#endif

#ifdef DoRed
	CompareConstant(DoRed,(1<<0))
#else
Msg( "Warning: Constant not found: DoRed\n");
#endif

#ifdef DoGreen
	CompareConstant(DoGreen,(1<<1))
#else
Msg( "Warning: Constant not found: DoGreen\n");
#endif

#ifdef DoBlue
	CompareConstant(DoBlue,(1<<2))
#else
Msg( "Warning: Constant not found: DoBlue\n");
#endif

#ifdef CursorShape
	CompareConstant(CursorShape,0)
#else
Msg( "Warning: Constant not found: CursorShape\n");
#endif

#ifdef TileShape
	CompareConstant(TileShape,1)
#else
Msg( "Warning: Constant not found: TileShape\n");
#endif

#ifdef StippleShape
	CompareConstant(StippleShape,2)
#else
Msg( "Warning: Constant not found: StippleShape\n");
#endif

#ifdef AutoRepeatModeOff
	CompareConstant(AutoRepeatModeOff,0)
#else
Msg( "Warning: Constant not found: AutoRepeatModeOff\n");
#endif

#ifdef AutoRepeatModeOn
	CompareConstant(AutoRepeatModeOn,1)
#else
Msg( "Warning: Constant not found: AutoRepeatModeOn\n");
#endif

#ifdef AutoRepeatModeDefault
	CompareConstant(AutoRepeatModeDefault,2)
#else
Msg( "Warning: Constant not found: AutoRepeatModeDefault\n");
#endif

#ifdef LedModeOff
	CompareConstant(LedModeOff,0)
#else
Msg( "Warning: Constant not found: LedModeOff\n");
#endif

#ifdef LedModeOn
	CompareConstant(LedModeOn,1)
#else
Msg( "Warning: Constant not found: LedModeOn\n");
#endif

#ifdef KBKeyClickPercent
	CompareConstant(KBKeyClickPercent,(1L<<0))
#else
Msg( "Warning: Constant not found: KBKeyClickPercent\n");
#endif

#ifdef KBBellPercent
	CompareConstant(KBBellPercent,(1L<<1))
#else
Msg( "Warning: Constant not found: KBBellPercent\n");
#endif

#ifdef KBBellPitch
	CompareConstant(KBBellPitch,(1L<<2))
#else
Msg( "Warning: Constant not found: KBBellPitch\n");
#endif

#ifdef KBBellDuration
	CompareConstant(KBBellDuration,(1L<<3))
#else
Msg( "Warning: Constant not found: KBBellDuration\n");
#endif

#ifdef KBLed
	CompareConstant(KBLed,(1L<<4))
#else
Msg( "Warning: Constant not found: KBLed\n");
#endif

#ifdef KBLedMode
	CompareConstant(KBLedMode,(1L<<5))
#else
Msg( "Warning: Constant not found: KBLedMode\n");
#endif

#ifdef KBKey
	CompareConstant(KBKey,(1L<<6))
#else
Msg( "Warning: Constant not found: KBKey\n");
#endif

#ifdef KBAutoRepeatMode
	CompareConstant(KBAutoRepeatMode,(1L<<7))
#else
Msg( "Warning: Constant not found: KBAutoRepeatMode\n");
#endif

#ifdef MappingSuccess
	CompareConstant(MappingSuccess,0)
#else
Msg( "Warning: Constant not found: MappingSuccess\n");
#endif

#ifdef MappingBusy
	CompareConstant(MappingBusy,1)
#else
Msg( "Warning: Constant not found: MappingBusy\n");
#endif

#ifdef MappingFailed
	CompareConstant(MappingFailed,2)
#else
Msg( "Warning: Constant not found: MappingFailed\n");
#endif

#ifdef MappingModifier
	CompareConstant(MappingModifier,0)
#else
Msg( "Warning: Constant not found: MappingModifier\n");
#endif

#ifdef MappingKeyboard
	CompareConstant(MappingKeyboard,1)
#else
Msg( "Warning: Constant not found: MappingKeyboard\n");
#endif

#ifdef MappingPointer
	CompareConstant(MappingPointer,2)
#else
Msg( "Warning: Constant not found: MappingPointer\n");
#endif

#ifdef DontPreferBlanking
	CompareConstant(DontPreferBlanking,0)
#else
Msg( "Warning: Constant not found: DontPreferBlanking\n");
#endif

#ifdef PreferBlanking
	CompareConstant(PreferBlanking,1)
#else
Msg( "Warning: Constant not found: PreferBlanking\n");
#endif

#ifdef DefaultBlanking
	CompareConstant(DefaultBlanking,2)
#else
Msg( "Warning: Constant not found: DefaultBlanking\n");
#endif

#ifdef DisableScreenSaver
	CompareConstant(DisableScreenSaver,0)
#else
Msg( "Warning: Constant not found: DisableScreenSaver\n");
#endif

#ifdef DisableScreenInterval
	CompareConstant(DisableScreenInterval,0)
#else
Msg( "Warning: Constant not found: DisableScreenInterval\n");
#endif

#ifdef DontAllowExposures
	CompareConstant(DontAllowExposures,0)
#else
Msg( "Warning: Constant not found: DontAllowExposures\n");
#endif

#ifdef AllowExposures
	CompareConstant(AllowExposures,1)
#else
Msg( "Warning: Constant not found: AllowExposures\n");
#endif

#ifdef DefaultExposures
	CompareConstant(DefaultExposures,2)
#else
Msg( "Warning: Constant not found: DefaultExposures\n");
#endif

#ifdef ScreenSaverReset
	CompareConstant(ScreenSaverReset,0)
#else
Msg( "Warning: Constant not found: ScreenSaverReset\n");
#endif

#ifdef ScreenSaverActive
	CompareConstant(ScreenSaverActive,1)
#else
Msg( "Warning: Constant not found: ScreenSaverActive\n");
#endif

#ifdef HostInsert
	CompareConstant(HostInsert,0)
#else
Msg( "Warning: Constant not found: HostInsert\n");
#endif

#ifdef HostDelete
	CompareConstant(HostDelete,1)
#else
Msg( "Warning: Constant not found: HostDelete\n");
#endif

#ifdef EnableAccess
	CompareConstant(EnableAccess,1)
#else
Msg( "Warning: Constant not found: EnableAccess\n");
#endif

#ifdef DisableAccess
	CompareConstant(DisableAccess,0)
#else
Msg( "Warning: Constant not found: DisableAccess\n");
#endif

#ifdef StaticGray
	CompareConstant(StaticGray,0)
#else
Msg( "Warning: Constant not found: StaticGray\n");
#endif

#ifdef GrayScale
	CompareConstant(GrayScale,1)
#else
Msg( "Warning: Constant not found: GrayScale\n");
#endif

#ifdef StaticColor
	CompareConstant(StaticColor,2)
#else
Msg( "Warning: Constant not found: StaticColor\n");
#endif

#ifdef PseudoColor
	CompareConstant(PseudoColor,3)
#else
Msg( "Warning: Constant not found: PseudoColor\n");
#endif

#ifdef TrueColor
	CompareConstant(TrueColor,4)
#else
Msg( "Warning: Constant not found: TrueColor\n");
#endif

#ifdef DirectColor
	CompareConstant(DirectColor,5)
#else
Msg( "Warning: Constant not found: DirectColor\n");
#endif

#ifdef LSBFirst
	CompareConstant(LSBFirst,0)
#else
Msg( "Warning: Constant not found: LSBFirst\n");
#endif

#ifdef MSBFirst
	CompareConstant(MSBFirst,1)
#else
Msg( "Warning: Constant not found: MSBFirst\n");
#endif

#ifdef __i386__
CheckTypeSize(Atom,4, 8173, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8173,0);
#endif

#ifdef __i386__
CheckTypeSize(Time,4, 8175, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8175,0);
#endif

#ifdef __i386__
CheckTypeSize(Window,4, 8176, 2)
#elif __ia64__
CheckTypeSize(Window,8, 8176, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8176,0);
#endif

#ifdef __i386__
CheckTypeSize(Font,4, 8177, 2)
#elif __ia64__
CheckTypeSize(Font,8, 8177, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8177,0);
#endif

#ifdef __i386__
CheckTypeSize(Pixmap,4, 8178, 2)
#elif __ia64__
CheckTypeSize(Pixmap,8, 8178, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8178,0);
#endif

#ifdef __i386__
CheckTypeSize(Drawable,4, 8727, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8727,0);
#endif

#ifdef __i386__
CheckTypeSize(Cursor,4, 8728, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8728,0);
#endif

#ifdef __i386__
CheckTypeSize(KeySym,4, 8731, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8731,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/X.h\n",cnt);
return cnt;
#endif

}
