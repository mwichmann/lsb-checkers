/*
 * Test of QtGui/qevent
 */
#include "hdrchk.h"
#include "QtGui/qevent.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qevent();
#else
int QtGui_qevent();
#endif
}


#ifdef TET_TEST
void QtGui_qevent()
{
#else
int QtGui_qevent()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qevent types\n");
#define TYPE QInputEvent
#undef TYPE

#define TYPE QMouseEvent
#undef TYPE

#define TYPE QHoverEvent
#undef TYPE

#define TYPE QWheelEvent
#undef TYPE

#define TYPE QTabletEvent
#undef TYPE

#define TYPE QKeyEvent
#undef TYPE

#define TYPE QFocusEvent
#undef TYPE

#define TYPE QPaintEvent
#undef TYPE

#define TYPE QMoveEvent
#undef TYPE

#define TYPE QResizeEvent
#undef TYPE

#define TYPE QCloseEvent
#undef TYPE

#define TYPE QIconDragEvent
#undef TYPE

#define TYPE QShowEvent
#undef TYPE

#define TYPE QHideEvent
#undef TYPE

#define TYPE QContextMenuEvent
#undef TYPE

#define TYPE QInputMethodEvent
#undef TYPE

#define TYPE QInputMethodEvent::Attribute
#undef TYPE

#define TYPE QDropEvent
#undef TYPE

#define TYPE QDragMoveEvent
#undef TYPE

#define TYPE QDragEnterEvent
#undef TYPE

#define TYPE QDragResponseEvent
#undef TYPE

#define TYPE QDragLeaveEvent
#undef TYPE

#define TYPE QHelpEvent
#undef TYPE

#define TYPE QStatusTipEvent
#undef TYPE

#define TYPE QWhatsThisClickedEvent
#undef TYPE

#define TYPE QActionEvent
#undef TYPE

#define TYPE QFileOpenEvent
#undef TYPE

#define TYPE QToolBarChangeEvent
#undef TYPE

#define TYPE QShortcutEvent
#undef TYPE

#define TYPE QClipboardEvent
#undef TYPE

#define TYPE QWindowStateChangeEvent
#undef TYPE

#define TYPE QMenubarUpdatedEvent
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qevent types\n\n",pcnt,cnt);
return cnt;
#endif

}
