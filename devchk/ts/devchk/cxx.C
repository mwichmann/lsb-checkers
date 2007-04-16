/*
 * Test of intrinsic types
 */
#include <fstream>
#include <ios>
#include <istream>
#include <iterator>
#include <limits>
#include <locale>
#include <numeric>
#include <stdexcept>
#include <string>
#include <sstream>
#include <valarray>
#include <vector>
#include <backward/strstream>
#include <ext/stdio_filebuf.h>
#include <cxxabi.h>
#include "hdrchk.h"



extern "C" {
#ifdef TET_TEST
void cxx();
#else
int cxx();
#endif
}

#ifdef TET_TEST
void cxx()
{
#else
int cxx()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
#endif

printf("Checking C++ types\n");
#if 1
#define TYPE QBoxLayout
CheckTypeSize(TYPE,0,16285,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16285,0);
#endif

#if 1
#define TYPE QClipboard
CheckTypeSize(TYPE,0,16388,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16388,0);
#endif

#if 1
#define TYPE QColorDrag
CheckTypeSize(TYPE,0,16329,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16329,0);
#endif

#if 1
#define TYPE QDataTable
CheckTypeSize(TYPE,0,16400,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16400,0);
#endif

#if 1
#define TYPE QDomEntity
CheckTypeSize(TYPE,0,16363,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16363,0);
#endif

#if 1
#define TYPE QDropEvent
CheckTypeSize(TYPE,0,16403,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16403,0);
#endif

#if 1
#define TYPE QEventLoop
CheckTypeSize(TYPE,0,16415,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16415,0);
#endif

#if 1
#define TYPE QHGroupBox
CheckTypeSize(TYPE,0,16314,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16314,0);
#endif

#if 1
#define TYPE QHideEvent
CheckTypeSize(TYPE,0,16428,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16428,0);
#endif

#if 1
#define TYPE QImageDrag
CheckTypeSize(TYPE,0,16270,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16270,0);
#endif

#if 1
#define TYPE QLCDNumber
CheckTypeSize(TYPE,0,16281,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16281,0);
#endif

#if 1
#define TYPE QMoveEvent
CheckTypeSize(TYPE,0,16538,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16538,0);
#endif

#if 1
#define TYPE QPopupMenu
CheckTypeSize(TYPE,0,16269,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16269,0);
#endif

#if 1
#define TYPE QScrollBar
CheckTypeSize(TYPE,0,16341,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16341,0);
#endif

#if 1
#define TYPE QSemaphore
CheckTypeSize(TYPE,0,16384,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16384,0);
#endif

#if 1
#define TYPE QSemiModal
CheckTypeSize(TYPE,0,16308,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16308,0);
#endif

#if 1
#define TYPE QShowEvent
CheckTypeSize(TYPE,0,16511,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16511,0);
#endif

#if 1
#define TYPE QSignalVec
CheckTypeSize(TYPE,0,16461,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16461,0);
#endif

#if 1
#define TYPE QSjisCodec
CheckTypeSize(TYPE,0,16411,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16411,0);
#endif

#if 1
#define TYPE QSqlCursor
CheckTypeSize(TYPE,0,16528,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16528,0);
#endif

#if 1
#define TYPE QSqlDriver
CheckTypeSize(TYPE,0,16296,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16296,0);
#endif

#if 1
#define TYPE QSqlRecord
CheckTypeSize(TYPE,0,16382,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16382,0);
#endif

#if 1
#define TYPE QSqlResult
CheckTypeSize(TYPE,0,16277,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16277,0);
#endif

#if 1
#define TYPE QStatusBar
CheckTypeSize(TYPE,0,16405,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16405,0);
#endif

#if 1
#define TYPE QTabDialog
CheckTypeSize(TYPE,0,16505,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16505,0);
#endif

#if 1
#define TYPE QTabWidget
CheckTypeSize(TYPE,0,16294,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16294,0);
#endif

#if 1
#define TYPE QTableItem
CheckTypeSize(TYPE,0,16297,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16297,0);
#endif

#if 1
#define TYPE QTextCodec
CheckTypeSize(TYPE,0,16475,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16475,0);
#endif

#if 1
#define TYPE QUtf8Codec
CheckTypeSize(TYPE,0,16246,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16246,0);
#endif

#if 1
#define TYPE QVGroupBox
CheckTypeSize(TYPE,0,16543,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16543,0);
#endif

#if 1
#define TYPE QValidator
CheckTypeSize(TYPE,0,16462,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16462,0);
#endif

#if 1
#define TYPE QWhatsThis
CheckTypeSize(TYPE,0,16354,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16354,0);
#endif

#if 1
#define TYPE QWorkspace
CheckTypeSize(TYPE,0,16504,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16504,0);
#endif

#if 1
#define TYPE QXmlReader
CheckTypeSize(TYPE,0,16362,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16362,0);
#endif

#if 1
#define TYPE QCanvasItem
CheckTypeSize(TYPE,0,16255,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16255,0);
#endif

#if 1
#define TYPE QCanvasLine
CheckTypeSize(TYPE,0,16432,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16432,0);
#endif

#if 1
#define TYPE QCanvasText
CheckTypeSize(TYPE,0,16497,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16497,0);
#endif

#if 1
#define TYPE QCanvasView
CheckTypeSize(TYPE,0,16390,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16390,0);
#endif

#if 1
#define TYPE QChildEvent
CheckTypeSize(TYPE,0,16459,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16459,0);
#endif

#if 1
#define TYPE QCloseEvent
CheckTypeSize(TYPE,0,16544,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16544,0);
#endif

#if 1
#define TYPE QDataSource
CheckTypeSize(TYPE,0,16254,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16254,0);
#endif

#if 1
#define TYPE QDataStream
CheckTypeSize(TYPE,0,16520,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16520,0);
#endif

#if 1
#define TYPE QDockWindow
CheckTypeSize(TYPE,0,16445,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16445,0);
#endif

#if 1
#define TYPE QDomComment
CheckTypeSize(TYPE,0,16419,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16419,0);
#endif

#if 1
#define TYPE QDomElement
CheckTypeSize(TYPE,0,16295,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16295,0);
#endif

#if 1
#define TYPE QDragObject
CheckTypeSize(TYPE,0,16507,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16507,0);
#endif

#if 1
#define TYPE QEucJpCodec
CheckTypeSize(TYPE,0,16447,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16447,0);
#endif

#if 1
#define TYPE QEucKrCodec
CheckTypeSize(TYPE,0,16346,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16346,0);
#endif

#if 1
#define TYPE QFileDialog
CheckTypeSize(TYPE,0,16327,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16327,0);
#endif

#if 1
#define TYPE QFocusEvent
CheckTypeSize(TYPE,0,16453,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16453,0);
#endif

#if 1
#define TYPE QFontDialog
CheckTypeSize(TYPE,0,16441,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16441,0);
#endif

#if 1
#define TYPE QGridLayout
CheckTypeSize(TYPE,0,16463,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16463,0);
#endif

#if 1
#define TYPE QHBoxLayout
CheckTypeSize(TYPE,0,16360,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16360,0);
#endif

#if 1
#define TYPE QHttpHeader
CheckTypeSize(TYPE,0,16510,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16510,0);
#endif

#if 1
#define TYPE QLayoutItem
CheckTypeSize(TYPE,0,16537,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16537,0);
#endif

#if 1
#define TYPE QMainWindow
CheckTypeSize(TYPE,0,16404,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16404,0);
#endif

#if 1
#define TYPE QMessageBox
CheckTypeSize(TYPE,0,16412,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16412,0);
#endif

#if 1
#define TYPE QMetaObject
CheckTypeSize(TYPE,0,16364,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16364,0);
#endif

#if 1
#define TYPE QMimeSource
CheckTypeSize(TYPE,0,16470,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16470,0);
#endif

#if 1
#define TYPE QMouseEvent
CheckTypeSize(TYPE,0,16454,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16454,0);
#endif

#if 1
#define TYPE QObjectList
CheckTypeSize(TYPE,0,16418,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16418,0);
#endif

#if 1
#define TYPE QPaintEvent
CheckTypeSize(TYPE,0,16516,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16516,0);
#endif

#if 1
#define TYPE QPointArray
CheckTypeSize(TYPE,0,16357,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16357,0);
#endif

#if 1
#define TYPE QPushButton
CheckTypeSize(TYPE,0,16522,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16522,0);
#endif

#if 1
#define TYPE QScrollView
CheckTypeSize(TYPE,0,16258,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16258,0);
#endif

#if 1
#define TYPE QSpacerItem
CheckTypeSize(TYPE,0,16476,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16476,0);
#endif

#if 1
#define TYPE QSpinWidget
CheckTypeSize(TYPE,0,16458,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16458,0);
#endif

#if 1
#define TYPE QStoredDrag
CheckTypeSize(TYPE,0,16378,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16378,0);
#endif

#if 1
#define TYPE QStyleSheet
CheckTypeSize(TYPE,0,16349,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16349,0);
#endif

#if 1
#define TYPE QTextStream
CheckTypeSize(TYPE,0,16481,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16481,0);
#endif

#if 1
#define TYPE QTimerEvent
CheckTypeSize(TYPE,0,16315,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16315,0);
#endif

#if 1
#define TYPE QToolButton
CheckTypeSize(TYPE,0,16423,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16423,0);
#endif

#if 1
#define TYPE QTranslator
CheckTypeSize(TYPE,0,16267,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16267,0);
#endif

#if 1
#define TYPE QTsciiCodec
CheckTypeSize(TYPE,0,16407,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16407,0);
#endif

#if 1
#define TYPE QUtf16Codec
CheckTypeSize(TYPE,0,16332,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16332,0);
#endif

#if 1
#define TYPE QVBoxLayout
CheckTypeSize(TYPE,0,16371,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16371,0);
#endif

#if 1
#define TYPE QWheelEvent
CheckTypeSize(TYPE,0,16531,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16531,0);
#endif

#if 1
#define TYPE QWidgetItem
CheckTypeSize(TYPE,0,16437,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16437,0);
#endif

#if 1
#define TYPE QWidgetList
CheckTypeSize(TYPE,0,16523,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16523,0);
#endif

#if 1
#define TYPE QXmlLocator
CheckTypeSize(TYPE,0,16268,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16268,0);
#endif

#if 1
#define TYPE QActionGroup
CheckTypeSize(TYPE,0,16399,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16399,0);
#endif

#if 1
#define TYPE QApplication
CheckTypeSize(TYPE,0,16490,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16490,0);
#endif

#if 1
#define TYPE QButtonGroup
CheckTypeSize(TYPE,0,16381,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16381,0);
#endif

#if 1
#define TYPE QColorDialog
CheckTypeSize(TYPE,0,16488,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16488,0);
#endif

#if 1
#define TYPE QCommonStyle
CheckTypeSize(TYPE,0,16305,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16305,0);
#endif

#if 1
#define TYPE QCustomEvent
CheckTypeSize(TYPE,0,16350,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16350,0);
#endif

#if 1
#define TYPE QDataBrowser
CheckTypeSize(TYPE,0,16532,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16532,0);
#endif

#if 1
#define TYPE QDomDocument
CheckTypeSize(TYPE,0,16338,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16338,0);
#endif

#if 1
#define TYPE QDomNodeList
CheckTypeSize(TYPE,0,16355,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16355,0);
#endif

#if 1
#define TYPE QDomNotation
CheckTypeSize(TYPE,0,16426,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16426,0);
#endif

#if 1
#define TYPE QDragManager
CheckTypeSize(TYPE,0,16352,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16352,0);
#endif

#if 1
#define TYPE QFilePreview
CheckTypeSize(TYPE,0,16380,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16380,0);
#endif

#if 1
#define TYPE QGb2312Codec
CheckTypeSize(TYPE,0,16452,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16452,0);
#endif

#if 1
#define TYPE QHebrewCodec
CheckTypeSize(TYPE,0,16464,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16464,0);
#endif

#if 1
#define TYPE QHostAddress
CheckTypeSize(TYPE,0,16530,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16530,0);
#endif

#if 1
#define TYPE QIconFactory
CheckTypeSize(TYPE,0,16343,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16343,0);
#endif

#if 1
#define TYPE QImageFormat
CheckTypeSize(TYPE,0,16266,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16266,0);
#endif

#if 1
#define TYPE QInputDialog
CheckTypeSize(TYPE,0,16501,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16501,0);
#endif

#if 1
#define TYPE QListBoxItem
CheckTypeSize(TYPE,0,16336,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16336,0);
#endif

#if 1
#define TYPE QListBoxText
CheckTypeSize(TYPE,0,16272,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16272,0);
#endif

#if 1
#define TYPE QPaintDevice
CheckTypeSize(TYPE,0,16303,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16303,0);
#endif

#if 1
#define TYPE QPrintDialog
CheckTypeSize(TYPE,0,16477,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16477,0);
#endif

#if 1
#define TYPE QProgressBar
CheckTypeSize(TYPE,0,16478,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16478,0);
#endif

#if 1
#define TYPE QRadioButton
CheckTypeSize(TYPE,0,16393,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16393,0);
#endif

#if 1
#define TYPE QResizeEvent
CheckTypeSize(TYPE,0,16430,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16430,0);
#endif

#if 1
#define TYPE QSqlDatabase
CheckTypeSize(TYPE,0,16408,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16408,0);
#endif

#if 1
#define TYPE QStylePlugin
CheckTypeSize(TYPE,0,16326,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16326,0);
#endif

#if 1
#define TYPE QTabletEvent
CheckTypeSize(TYPE,0,16436,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16436,0);
#endif

#if 1
#define TYPE QTextBrowser
CheckTypeSize(TYPE,0,16259,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16259,0);
#endif

#if 1
#define TYPE QTextDecoder
CheckTypeSize(TYPE,0,16472,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16472,0);
#endif

#if 1
#define TYPE QTextEncoder
CheckTypeSize(TYPE,0,16389,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16389,0);
#endif

#if 1
#define TYPE QTextOStream
CheckTypeSize(TYPE,0,16460,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16460,0);
#endif

#if 1
#define TYPE QUrlOperator
CheckTypeSize(TYPE,0,16282,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16282,0);
#endif

#if 1
#define TYPE QWidgetStack
CheckTypeSize(TYPE,0,16347,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16347,0);
#endif

#if 1
#define TYPE QCanvasPixmap
CheckTypeSize(TYPE,0,16409,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16409,0);
#endif

#if 1
#define TYPE QCanvasSpline
CheckTypeSize(TYPE,0,16440,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16440,0);
#endif

#if 1
#define TYPE QCanvasSprite
CheckTypeSize(TYPE,0,16260,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16260,0);
#endif

#if 1
#define TYPE QDateTimeEdit
CheckTypeSize(TYPE,0,16276,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16276,0);
#endif

#if 1
#define TYPE QErrorMessage
CheckTypeSize(TYPE,0,16365,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16365,0);
#endif

#if 1
#define TYPE QGb18030Codec
CheckTypeSize(TYPE,0,16300,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16300,0);
#endif

#if 1
#define TYPE QHButtonGroup
CheckTypeSize(TYPE,0,16328,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16328,0);
#endif

#if 1
#define TYPE QIconDragItem
CheckTypeSize(TYPE,0,16534,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16534,0);
#endif

#if 1
#define TYPE QIconViewItem
CheckTypeSize(TYPE,0,16479,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16479,0);
#endif

#if 1
#define TYPE QIntValidator
CheckTypeSize(TYPE,0,16290,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16290,0);
#endif

#if 1
#define TYPE QListViewItem
CheckTypeSize(TYPE,0,16491,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16491,0);
#endif

#if 1
#define TYPE QRangeControl
CheckTypeSize(TYPE,0,16313,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16313,0);
#endif

#if 1
#define TYPE QServerSocket
CheckTypeSize(TYPE,0,16450,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16450,0);
#endif

#if 1
#define TYPE QSignalMapper
CheckTypeSize(TYPE,0,16483,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16483,0);
#endif

#if 1
#define TYPE QSocketDevice
CheckTypeSize(TYPE,0,16361,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16361,0);
#endif

#if 1
#define TYPE QSplashScreen
CheckTypeSize(TYPE,0,16318,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16318,0);
#endif

#if 1
#define TYPE QSqlFieldInfo
CheckTypeSize(TYPE,0,16535,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16535,0);
#endif

#if 1
#define TYPE QToolTipGroup
CheckTypeSize(TYPE,0,16508,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16508,0);
#endif

#if 1
#define TYPE QVButtonGroup
CheckTypeSize(TYPE,0,16387,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16387,0);
#endif

#if 1
#define TYPE QWidgetPlugin
CheckTypeSize(TYPE,0,16340,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16340,0);
#endif

#if 1
#define TYPE QCanvasEllipse
CheckTypeSize(TYPE,0,16402,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16402,0);
#endif

#if 1
#define TYPE QCanvasPolygon
CheckTypeSize(TYPE,0,16514,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16514,0);
#endif

#if 1
#define TYPE QCheckListItem
CheckTypeSize(TYPE,0,16482,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16482,0);
#endif

#if 1
#define TYPE QDesktopWidget
CheckTypeSize(TYPE,0,16330,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16330,0);
#endif

#if 1
#define TYPE QDragMoveEvent
CheckTypeSize(TYPE,0,16401,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16401,0);
#endif

#if 1
#define TYPE QEditorFactory
CheckTypeSize(TYPE,0,16414,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16414,0);
#endif

#if 1
#define TYPE QImageConsumer
CheckTypeSize(TYPE,0,16456,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16456,0);
#endif

#if 1
#define TYPE QJpUnicodeConv
CheckTypeSize(TYPE,0,16521,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16521,0);
#endif

#if 1
#define TYPE QListBoxPixmap
CheckTypeSize(TYPE,0,16351,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16351,0);
#endif

#if 1
#define TYPE QMultiLineEdit
CheckTypeSize(TYPE,0,16358,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16358,0);
#endif

#if 1
#define TYPE QPtrCollection
CheckTypeSize(TYPE,0,16250,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16250,0);
#endif

#if 1
#define TYPE QWaitCondition
CheckTypeSize(TYPE,0,16256,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16256,0);
#endif

#if 1
#define TYPE QWidgetIntDict
CheckTypeSize(TYPE,0,16424,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16424,0);
#endif

#if 1
#define TYPE QXmlAttributes
CheckTypeSize(TYPE,0,16433,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16433,0);
#endif

#if 1
#define TYPE QXmlDTDHandler
CheckTypeSize(TYPE,0,16487,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16487,0);
#endif

#if 1
#define TYPE QCheckTableItem
CheckTypeSize(TYPE,0,16304,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16304,0);
#endif

#if 1
#define TYPE QComboTableItem
CheckTypeSize(TYPE,0,16493,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16493,0);
#endif

#if 1
#define TYPE QConnectionList
CheckTypeSize(TYPE,0,16527,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16527,0);
#endif

#if 1
#define TYPE QCustomMenuItem
CheckTypeSize(TYPE,0,16367,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16367,0);
#endif

#if 1
#define TYPE QDockAreaLayout
CheckTypeSize(TYPE,0,16279,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16279,0);
#endif

#if 1
#define TYPE QDragEnterEvent
CheckTypeSize(TYPE,0,16398,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16398,0);
#endif

#if 1
#define TYPE QDragLeaveEvent
CheckTypeSize(TYPE,0,16280,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16280,0);
#endif

#if 1
#define TYPE QIMComposeEvent
CheckTypeSize(TYPE,0,16471,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16471,0);
#endif

#if 1
#define TYPE QIODeviceSource
CheckTypeSize(TYPE,0,16496,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16496,0);
#endif

#if 1
#define TYPE QObjectUserData
CheckTypeSize(TYPE,0,16312,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16312,0);
#endif

#if 1
#define TYPE QPolygonScanner
CheckTypeSize(TYPE,0,16310,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16310,0);
#endif

#if 1
#define TYPE QProgressDialog
CheckTypeSize(TYPE,0,16275,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16275,0);
#endif

#if 1
#define TYPE QSessionManager
CheckTypeSize(TYPE,0,16473,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16473,0);
#endif

#if 1
#define TYPE QSocketNotifier
CheckTypeSize(TYPE,0,16288,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16288,0);
#endif

#if 1
#define TYPE QSqlPropertyMap
CheckTypeSize(TYPE,0,16320,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16320,0);
#endif

#if 1
#define TYPE QXmlDeclHandler
CheckTypeSize(TYPE,0,16370,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16370,0);
#endif

#if 1
#define TYPE QXmlInputSource
CheckTypeSize(TYPE,0,16498,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16498,0);
#endif

#if 1
#define TYPE QCanvasRectangle
CheckTypeSize(TYPE,0,16374,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16374,0);
#endif

#if 1
#define TYPE QDomCDATASection
CheckTypeSize(TYPE,0,16480,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16480,0);
#endif

#if 1
#define TYPE QDomDocumentType
CheckTypeSize(TYPE,0,16335,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16335,0);
#endif

#if 1
#define TYPE QDoubleValidator
CheckTypeSize(TYPE,0,16499,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16499,0);
#endif

#if 1
#define TYPE QGLayoutIterator
CheckTypeSize(TYPE,0,16435,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16435,0);
#endif

#if 1
#define TYPE QImageFormatType
CheckTypeSize(TYPE,0,16474,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16474,0);
#endif

#if 1
#define TYPE QNetworkProtocol
CheckTypeSize(TYPE,0,16311,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16311,0);
#endif

#if 1
#define TYPE QRegExpValidator
CheckTypeSize(TYPE,0,16278,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16278,0);
#endif

#if 1
#define TYPE QSqlDriverPlugin
CheckTypeSize(TYPE,0,16422,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16422,0);
#endif

#if 1
#define TYPE QSqlResultShared
CheckTypeSize(TYPE,0,16448,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16448,0);
#endif

#if 1
#define TYPE QSqlSelectCursor
CheckTypeSize(TYPE,0,16293,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16293,0);
#endif

#if 1
#define TYPE QTextCodecPlugin
CheckTypeSize(TYPE,0,16339,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16339,0);
#endif

#if 1
#define TYPE QXmlErrorHandler
CheckTypeSize(TYPE,0,16503,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16503,0);
#endif

#if 1
#define TYPE QXmlSimpleReader
CheckTypeSize(TYPE,0,16427,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16427,0);
#endif

#if 1
#define TYPE QContextMenuEvent
CheckTypeSize(TYPE,0,16264,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16264,0);
#endif

#if 1
#define TYPE QDateTimeEditBase
CheckTypeSize(TYPE,0,16509,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16509,0);
#endif

#if 1
#define TYPE QDomCharacterData
CheckTypeSize(TYPE,0,16397,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16397,0);
#endif

#if 1
#define TYPE QFileIconProvider
CheckTypeSize(TYPE,0,16540,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16540,0);
#endif

#if 1
#define TYPE QNetworkOperation
CheckTypeSize(TYPE,0,16466,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16466,0);
#endif

#if 1
#define TYPE QSqlEditorFactory
CheckTypeSize(TYPE,0,16526,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16526,0);
#endif

#if 1
#define TYPE QDomImplementation
CheckTypeSize(TYPE,0,16298,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16298,0);
#endif

#if 1
#define TYPE QDragResponseEvent
CheckTypeSize(TYPE,0,16337,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16337,0);
#endif

#if 1
#define TYPE QGuardedPtrPrivate
CheckTypeSize(TYPE,0,16489,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16489,0);
#endif

#if 1
#define TYPE QHttpRequestHeader
CheckTypeSize(TYPE,0,16506,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16506,0);
#endif

#if 1
#define TYPE QImageFormatPlugin
CheckTypeSize(TYPE,0,16446,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16446,0);
#endif

#if 1
#define TYPE QMimeSourceFactory
CheckTypeSize(TYPE,0,16271,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16271,0);
#endif

#if 1
#define TYPE QSyntaxHighlighter
CheckTypeSize(TYPE,0,16307,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16307,0);
#endif

#if 1
#define TYPE QXmlContentHandler
CheckTypeSize(TYPE,0,16451,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16451,0);
#endif

#if 1
#define TYPE QXmlDefaultHandler
CheckTypeSize(TYPE,0,16420,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16420,0);
#endif

#if 1
#define TYPE QXmlEntityResolver
CheckTypeSize(TYPE,0,16248,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16248,0);
#endif

#if 1
#define TYPE QXmlLexicalHandler
CheckTypeSize(TYPE,0,16431,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16431,0);
#endif

#if 1
#define TYPE QDomEntityReference
CheckTypeSize(TYPE,0,16457,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16457,0);
#endif

#if 1
#define TYPE QHttpResponseHeader
CheckTypeSize(TYPE,0,16396,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16396,0);
#endif

#if 1
#define TYPE QCanvasPolygonalItem
CheckTypeSize(TYPE,0,16292,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16292,0);
#endif

#if 1
#define TYPE QDomDocumentFragment
CheckTypeSize(TYPE,0,16519,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16519,0);
#endif

#if 1
#define TYPE QObjectCleanupHandler
CheckTypeSize(TYPE,0,16249,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16249,0);
#endif

#if 1
#define TYPE QDomProcessingInstruction
CheckTypeSize(TYPE,0,16439,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16439,0);
#endif

#if 1
#define TYPE QNetworkProtocolFactoryBase
CheckTypeSize(TYPE,0,16359,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16359,0);
#endif

#if 1
#define TYPE QDir
CheckTypeSize(TYPE,0,16438,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16438,0);
#endif

#if 1
#define TYPE QDns
CheckTypeSize(TYPE,0,16495,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16495,0);
#endif

#if 1
#define TYPE QFtp
CheckTypeSize(TYPE,0,16536,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16536,0);
#endif

#if 1
#define TYPE QTab
CheckTypeSize(TYPE,0,16309,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16309,0);
#endif

#if 1
#define TYPE QUrl
CheckTypeSize(TYPE,0,16324,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16324,0);
#endif

#if 1
#define TYPE QDial
CheckTypeSize(TYPE,0,16323,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16323,0);
#endif

#if 1
#define TYPE QFile
CheckTypeSize(TYPE,0,16334,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16334,0);
#endif

#if 1
#define TYPE QGrid
CheckTypeSize(TYPE,0,16392,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16392,0);
#endif

#if 1
#define TYPE QHBox
CheckTypeSize(TYPE,0,16251,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16251,0);
#endif

#if 1
#define TYPE QHttp
CheckTypeSize(TYPE,0,16467,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16467,0);
#endif

#if 1
#define TYPE QVBox
CheckTypeSize(TYPE,0,16263,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16263,0);
#endif

#if 1
#define TYPE QAccel
CheckTypeSize(TYPE,0,16517,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16517,0);
#endif

#if 1
#define TYPE QEvent
CheckTypeSize(TYPE,0,16469,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16469,0);
#endif

#if 1
#define TYPE QFrame
CheckTypeSize(TYPE,0,16257,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16257,0);
#endif

#if 1
#define TYPE QGDict
CheckTypeSize(TYPE,0,16502,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16502,0);
#endif

#if 1
#define TYPE QGList
CheckTypeSize(TYPE,0,16301,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16301,0);
#endif

#if 1
#define TYPE QLabel
CheckTypeSize(TYPE,0,16348,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16348,0);
#endif

#if 1
#define TYPE QMutex
CheckTypeSize(TYPE,0,16319,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16319,0);
#endif

#if 1
#define TYPE QSound
CheckTypeSize(TYPE,0,16413,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16413,0);
#endif

#if 1
#define TYPE QStyle
CheckTypeSize(TYPE,0,16486,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16486,0);
#endif

#if 1
#define TYPE QTable
CheckTypeSize(TYPE,0,16512,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16512,0);
#endif

#if 1
#define TYPE QTimer
CheckTypeSize(TYPE,0,16247,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16247,0);
#endif

#if 1
#define TYPE QAction
CheckTypeSize(TYPE,0,16529,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16529,0);
#endif

#if 1
#define TYPE QBitmap
CheckTypeSize(TYPE,0,16342,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16342,0);
#endif

#if 1
#define TYPE QBuffer
CheckTypeSize(TYPE,0,16373,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16373,0);
#endif

#if 1
#define TYPE QButton
CheckTypeSize(TYPE,0,16289,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16289,0);
#endif

#if 1
#define TYPE QCanvas
CheckTypeSize(TYPE,0,16518,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16518,0);
#endif

#if 1
#define TYPE QDialog
CheckTypeSize(TYPE,0,16434,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16434,0);
#endif

#if 1
#define TYPE QGArray
CheckTypeSize(TYPE,0,16442,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16442,0);
#endif

#if 1
#define TYPE QGCache
CheckTypeSize(TYPE,0,16322,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16322,0);
#endif

#if 1
#define TYPE QHeader
CheckTypeSize(TYPE,0,16316,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16316,0);
#endif

#if 1
#define TYPE QLayout
CheckTypeSize(TYPE,0,16287,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16287,0);
#endif

#if 1
#define TYPE QObject
CheckTypeSize(TYPE,0,16333,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16333,0);
#endif

#if 1
#define TYPE QPixmap
CheckTypeSize(TYPE,0,16391,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16391,0);
#endif

#if 1
#define TYPE QSignal
CheckTypeSize(TYPE,0,16416,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16416,0);
#endif

#if 1
#define TYPE QSlider
CheckTypeSize(TYPE,0,16395,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16395,0);
#endif

#if 1
#define TYPE QSocket
CheckTypeSize(TYPE,0,16283,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16283,0);
#endif

#if 1
#define TYPE QTabBar
CheckTypeSize(TYPE,0,16425,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16425,0);
#endif

#if 1
#define TYPE QThread
CheckTypeSize(TYPE,0,16377,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16377,0);
#endif

#if 1
#define TYPE QWidget
CheckTypeSize(TYPE,0,16494,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16494,0);
#endif

#if 1
#define TYPE QWizard
CheckTypeSize(TYPE,0,16291,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16291,0);
#endif

#if 1
#define TYPE QAsyncIO
CheckTypeSize(TYPE,0,16394,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16394,0);
#endif

#if 1
#define TYPE QCString
CheckTypeSize(TYPE,0,16485,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16485,0);
#endif

#if 1
#define TYPE QDomAttr
CheckTypeSize(TYPE,0,16353,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16353,0);
#endif

#if 1
#define TYPE QDomNode
CheckTypeSize(TYPE,0,16372,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16372,0);
#endif

#if 1
#define TYPE QDomText
CheckTypeSize(TYPE,0,16386,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16386,0);
#endif

#if 1
#define TYPE QGPlugin
CheckTypeSize(TYPE,0,16299,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16299,0);
#endif

#if 1
#define TYPE QGVector
CheckTypeSize(TYPE,0,16252,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16252,0);
#endif

#if 1
#define TYPE QIMEvent
CheckTypeSize(TYPE,0,16286,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16286,0);
#endif

#if 1
#define TYPE QIconSet
CheckTypeSize(TYPE,0,16375,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16375,0);
#endif

#if 1
#define TYPE QLibrary
CheckTypeSize(TYPE,0,16345,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16345,0);
#endif

#if 1
#define TYPE QListBox
CheckTypeSize(TYPE,0,16366,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16366,0);
#endif

#if 1
#define TYPE QLocalFs
CheckTypeSize(TYPE,0,16513,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16513,0);
#endif

#if 1
#define TYPE QMenuBar
CheckTypeSize(TYPE,0,16274,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16274,0);
#endif

#if 1
#define TYPE QPicture
CheckTypeSize(TYPE,0,16383,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16383,0);
#endif

#if 1
#define TYPE QPrinter
CheckTypeSize(TYPE,0,16410,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16410,0);
#endif

#if 1
#define TYPE QProcess
CheckTypeSize(TYPE,0,16265,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16265,0);
#endif

#if 1
#define TYPE QSpinBox
CheckTypeSize(TYPE,0,16344,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16344,0);
#endif

#if 1
#define TYPE QSqlForm
CheckTypeSize(TYPE,0,16468,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16468,0);
#endif

#if 1
#define TYPE QStrList
CheckTypeSize(TYPE,0,16406,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16406,0);
#endif

#if 1
#define TYPE QToolBar
CheckTypeSize(TYPE,0,16253,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16253,0);
#endif

#if 1
#define TYPE QToolBox
CheckTypeSize(TYPE,0,16465,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16465,0);
#endif

#if 1
#define TYPE QToolTip
CheckTypeSize(TYPE,0,16429,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16429,0);
#endif

#if 1
#define TYPE QUriDrag
CheckTypeSize(TYPE,0,16369,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16369,0);
#endif

#if 1
#define TYPE QUrlInfo
CheckTypeSize(TYPE,0,16455,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16455,0);
#endif

#if 1
#define TYPE QBitArray
CheckTypeSize(TYPE,0,16443,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16443,0);
#endif

#if 1
#define TYPE QCheckBox
CheckTypeSize(TYPE,0,16444,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16444,0);
#endif

#if 1
#define TYPE QComboBox
CheckTypeSize(TYPE,0,16385,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16385,0);
#endif

#if 1
#define TYPE QDataPump
CheckTypeSize(TYPE,0,16302,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16302,0);
#endif

#if 1
#define TYPE QDataSink
CheckTypeSize(TYPE,0,16421,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16421,0);
#endif

#if 1
#define TYPE QDataView
CheckTypeSize(TYPE,0,16525,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16525,0);
#endif

#if 1
#define TYPE QDateEdit
CheckTypeSize(TYPE,0,16515,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16515,0);
#endif

#if 1
#define TYPE QDockArea
CheckTypeSize(TYPE,0,16484,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16484,0);
#endif

#if 1
#define TYPE QDropSite
CheckTypeSize(TYPE,0,16376,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16376,0);
#endif

#if 1
#define TYPE QGbkCodec
CheckTypeSize(TYPE,0,16317,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16317,0);
#endif

#if 1
#define TYPE QGridView
CheckTypeSize(TYPE,0,16284,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16284,0);
#endif

#if 1
#define TYPE QGroupBox
CheckTypeSize(TYPE,0,16273,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16273,0);
#endif

#if 1
#define TYPE QIODevice
CheckTypeSize(TYPE,0,16500,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16500,0);
#endif

#if 1
#define TYPE QIconDrag
CheckTypeSize(TYPE,0,16368,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16368,0);
#endif

#if 1
#define TYPE QIconView
CheckTypeSize(TYPE,0,16492,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16492,0);
#endif

#if 1
#define TYPE QJisCodec
CheckTypeSize(TYPE,0,16356,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16356,0);
#endif

#if 1
#define TYPE QKeyEvent
CheckTypeSize(TYPE,0,16321,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16321,0);
#endif

#if 1
#define TYPE QLineEdit
CheckTypeSize(TYPE,0,16262,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16262,0);
#endif

#if 1
#define TYPE QListView
CheckTypeSize(TYPE,0,16325,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16325,0);
#endif

#if 1
#define TYPE QMenuData
CheckTypeSize(TYPE,0,16524,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16524,0);
#endif

#if 1
#define TYPE QSizeGrip
CheckTypeSize(TYPE,0,16417,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16417,0);
#endif

#if 1
#define TYPE QSplitter
CheckTypeSize(TYPE,0,16261,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16261,0);
#endif

#if 1
#define TYPE QSqlError
CheckTypeSize(TYPE,0,16449,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16449,0);
#endif

#if 1
#define TYPE QSqlField
CheckTypeSize(TYPE,0,16542,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16542,0);
#endif

#if 1
#define TYPE QSqlIndex
CheckTypeSize(TYPE,0,16541,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16541,0);
#endif

#if 1
#define TYPE QSqlQuery
CheckTypeSize(TYPE,0,16331,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16331,0);
#endif

#if 1
#define TYPE QTextDrag
CheckTypeSize(TYPE,0,16379,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16379,0);
#endif

#if 1
#define TYPE QTextEdit
CheckTypeSize(TYPE,0,16539,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16539,0);
#endif

#if 1
#define TYPE QTextView
CheckTypeSize(TYPE,0,16306,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16306,0);
#endif

#if 1
#define TYPE QTimeEdit
CheckTypeSize(TYPE,0,16533,1);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16533,0);
#endif

#if 1
#define TYPE __cxxabiv1::__enum_type_info
CheckTypeSize(TYPE,0,10708,1);
#undef TYPE
#elif __i386__
#define TYPE __cxxabiv1::__enum_type_info
CheckTypeSize(TYPE,8,10708,2);
#undef TYPE
#elif __ia64__
#define TYPE __cxxabiv1::__enum_type_info
CheckTypeSize(TYPE,16,10708,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __cxxabiv1::__enum_type_info
CheckTypeSize(TYPE,8,10708,6);
#undef TYPE
#elif __powerpc64__
#define TYPE __cxxabiv1::__enum_type_info
CheckTypeSize(TYPE,16,10708,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __cxxabiv1::__enum_type_info
CheckTypeSize(TYPE,8,10708,10);
#undef TYPE
#elif __x86_64__
#define TYPE __cxxabiv1::__enum_type_info
CheckTypeSize(TYPE,16,10708,11);
#undef TYPE
#elif __s390x__
#define TYPE __cxxabiv1::__enum_type_info
CheckTypeSize(TYPE,16,10708,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10708,0);
#endif

#if 1
#define TYPE __cxxabiv1::__array_type_info
CheckTypeSize(TYPE,0,10706,1);
#undef TYPE
#elif __i386__
#define TYPE __cxxabiv1::__array_type_info
CheckTypeSize(TYPE,8,10706,2);
#undef TYPE
#elif __ia64__
#define TYPE __cxxabiv1::__array_type_info
CheckTypeSize(TYPE,16,10706,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __cxxabiv1::__array_type_info
CheckTypeSize(TYPE,8,10706,6);
#undef TYPE
#elif __powerpc64__
#define TYPE __cxxabiv1::__array_type_info
CheckTypeSize(TYPE,16,10706,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __cxxabiv1::__array_type_info
CheckTypeSize(TYPE,8,10706,10);
#undef TYPE
#elif __x86_64__
#define TYPE __cxxabiv1::__array_type_info
CheckTypeSize(TYPE,16,10706,11);
#undef TYPE
#elif __s390x__
#define TYPE __cxxabiv1::__array_type_info
CheckTypeSize(TYPE,16,10706,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10706,0);
#endif

#if 1
#define TYPE __cxxabiv1::__class_type_info
CheckTypeSize(TYPE,0,10702,1);
#undef TYPE
#elif __i386__
#define TYPE __cxxabiv1::__class_type_info
CheckTypeSize(TYPE,8,10702,2);
#undef TYPE
#elif __ia64__
#define TYPE __cxxabiv1::__class_type_info
CheckTypeSize(TYPE,16,10702,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __cxxabiv1::__class_type_info
CheckTypeSize(TYPE,8,10702,6);
#undef TYPE
#elif __powerpc64__
#define TYPE __cxxabiv1::__class_type_info
CheckTypeSize(TYPE,16,10702,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __cxxabiv1::__class_type_info
CheckTypeSize(TYPE,8,10702,10);
#undef TYPE
#elif __x86_64__
#define TYPE __cxxabiv1::__class_type_info
CheckTypeSize(TYPE,16,10702,11);
#undef TYPE
#elif __s390x__
#define TYPE __cxxabiv1::__class_type_info
CheckTypeSize(TYPE,16,10702,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10702,0);
#endif

#if 1
#define TYPE __cxxabiv1::__pbase_type_info
CheckTypeSize(TYPE,0,10709,1);
#undef TYPE
#elif __i386__
#define TYPE __cxxabiv1::__pbase_type_info
CheckTypeSize(TYPE,16,10709,2);
#undef TYPE
#elif __ia64__
#define TYPE __cxxabiv1::__pbase_type_info
CheckTypeSize(TYPE,32,10709,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __cxxabiv1::__pbase_type_info
CheckTypeSize(TYPE,16,10709,6);
#undef TYPE
#elif __powerpc64__
#define TYPE __cxxabiv1::__pbase_type_info
CheckTypeSize(TYPE,32,10709,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __cxxabiv1::__pbase_type_info
CheckTypeSize(TYPE,16,10709,10);
#undef TYPE
#elif __x86_64__
#define TYPE __cxxabiv1::__pbase_type_info
CheckTypeSize(TYPE,32,10709,11);
#undef TYPE
#elif __s390x__
#define TYPE __cxxabiv1::__pbase_type_info
CheckTypeSize(TYPE,32,10709,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10709,0);
#endif

#if 1
#define TYPE __cxxabiv1::__pointer_type_info
CheckTypeSize(TYPE,0,10710,1);
#undef TYPE
#elif __i386__
#define TYPE __cxxabiv1::__pointer_type_info
CheckTypeSize(TYPE,16,10710,2);
#undef TYPE
#elif __ia64__
#define TYPE __cxxabiv1::__pointer_type_info
CheckTypeSize(TYPE,32,10710,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __cxxabiv1::__pointer_type_info
CheckTypeSize(TYPE,16,10710,6);
#undef TYPE
#elif __powerpc64__
#define TYPE __cxxabiv1::__pointer_type_info
CheckTypeSize(TYPE,32,10710,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __cxxabiv1::__pointer_type_info
CheckTypeSize(TYPE,16,10710,10);
#undef TYPE
#elif __x86_64__
#define TYPE __cxxabiv1::__pointer_type_info
CheckTypeSize(TYPE,32,10710,11);
#undef TYPE
#elif __s390x__
#define TYPE __cxxabiv1::__pointer_type_info
CheckTypeSize(TYPE,32,10710,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10710,0);
#endif

#if 1
#define TYPE __cxxabiv1::__function_type_info
CheckTypeSize(TYPE,0,10707,1);
#undef TYPE
#elif __i386__
#define TYPE __cxxabiv1::__function_type_info
CheckTypeSize(TYPE,8,10707,2);
#undef TYPE
#elif __ia64__
#define TYPE __cxxabiv1::__function_type_info
CheckTypeSize(TYPE,16,10707,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __cxxabiv1::__function_type_info
CheckTypeSize(TYPE,8,10707,6);
#undef TYPE
#elif __powerpc64__
#define TYPE __cxxabiv1::__function_type_info
CheckTypeSize(TYPE,16,10707,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __cxxabiv1::__function_type_info
CheckTypeSize(TYPE,8,10707,10);
#undef TYPE
#elif __x86_64__
#define TYPE __cxxabiv1::__function_type_info
CheckTypeSize(TYPE,16,10707,11);
#undef TYPE
#elif __s390x__
#define TYPE __cxxabiv1::__function_type_info
CheckTypeSize(TYPE,16,10707,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10707,0);
#endif

#if 1
#define TYPE __cxxabiv1::__si_class_type_info
CheckTypeSize(TYPE,0,10703,1);
#undef TYPE
#elif __i386__
#define TYPE __cxxabiv1::__si_class_type_info
CheckTypeSize(TYPE,12,10703,2);
#undef TYPE
#elif __ia64__
#define TYPE __cxxabiv1::__si_class_type_info
CheckTypeSize(TYPE,24,10703,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __cxxabiv1::__si_class_type_info
CheckTypeSize(TYPE,12,10703,6);
#undef TYPE
#elif __powerpc64__
#define TYPE __cxxabiv1::__si_class_type_info
CheckTypeSize(TYPE,24,10703,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __cxxabiv1::__si_class_type_info
CheckTypeSize(TYPE,12,10703,10);
#undef TYPE
#elif __x86_64__
#define TYPE __cxxabiv1::__si_class_type_info
CheckTypeSize(TYPE,24,10703,11);
#undef TYPE
#elif __s390x__
#define TYPE __cxxabiv1::__si_class_type_info
CheckTypeSize(TYPE,24,10703,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10703,0);
#endif

#if 1
#define TYPE __cxxabiv1::__vmi_class_type_info
CheckTypeSize(TYPE,0,10704,1);
#undef TYPE
#elif __i386__
#define TYPE __cxxabiv1::__vmi_class_type_info
CheckTypeSize(TYPE,24,10704,2);
#undef TYPE
#elif __ia64__
#define TYPE __cxxabiv1::__vmi_class_type_info
CheckTypeSize(TYPE,40,10704,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __cxxabiv1::__vmi_class_type_info
CheckTypeSize(TYPE,24,10704,6);
#undef TYPE
#elif __powerpc64__
#define TYPE __cxxabiv1::__vmi_class_type_info
CheckTypeSize(TYPE,40,10704,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __cxxabiv1::__vmi_class_type_info
CheckTypeSize(TYPE,24,10704,10);
#undef TYPE
#elif __x86_64__
#define TYPE __cxxabiv1::__vmi_class_type_info
CheckTypeSize(TYPE,40,10704,11);
#undef TYPE
#elif __s390x__
#define TYPE __cxxabiv1::__vmi_class_type_info
CheckTypeSize(TYPE,40,10704,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10704,0);
#endif

#if 1
#define TYPE __cxxabiv1::__fundamental_type_info
CheckTypeSize(TYPE,0,10705,1);
#undef TYPE
#elif __i386__
#define TYPE __cxxabiv1::__fundamental_type_info
CheckTypeSize(TYPE,8,10705,2);
#undef TYPE
#elif __ia64__
#define TYPE __cxxabiv1::__fundamental_type_info
CheckTypeSize(TYPE,16,10705,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __cxxabiv1::__fundamental_type_info
CheckTypeSize(TYPE,8,10705,6);
#undef TYPE
#elif __powerpc64__
#define TYPE __cxxabiv1::__fundamental_type_info
CheckTypeSize(TYPE,16,10705,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __cxxabiv1::__fundamental_type_info
CheckTypeSize(TYPE,8,10705,10);
#undef TYPE
#elif __x86_64__
#define TYPE __cxxabiv1::__fundamental_type_info
CheckTypeSize(TYPE,16,10705,11);
#undef TYPE
#elif __s390x__
#define TYPE __cxxabiv1::__fundamental_type_info
CheckTypeSize(TYPE,16,10705,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10705,0);
#endif

#if 1
#define TYPE __cxxabiv1::__pointer_to_member_type_info
CheckTypeSize(TYPE,0,10711,1);
#undef TYPE
#elif __i386__
#define TYPE __cxxabiv1::__pointer_to_member_type_info
CheckTypeSize(TYPE,20,10711,2);
#undef TYPE
#elif __ia64__
#define TYPE __cxxabiv1::__pointer_to_member_type_info
CheckTypeSize(TYPE,40,10711,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __cxxabiv1::__pointer_to_member_type_info
CheckTypeSize(TYPE,20,10711,6);
#undef TYPE
#elif __powerpc64__
#define TYPE __cxxabiv1::__pointer_to_member_type_info
CheckTypeSize(TYPE,40,10711,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __cxxabiv1::__pointer_to_member_type_info
CheckTypeSize(TYPE,20,10711,10);
#undef TYPE
#elif __x86_64__
#define TYPE __cxxabiv1::__pointer_to_member_type_info
CheckTypeSize(TYPE,40,10711,11);
#undef TYPE
#elif __s390x__
#define TYPE __cxxabiv1::__pointer_to_member_type_info
CheckTypeSize(TYPE,40,10711,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10711,0);
#endif

#if 1
#define TYPE __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,0,10600,1);
#undef TYPE
#elif __i386__
#define TYPE __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,136,10600,2);
#undef TYPE
#elif __ia64__
#define TYPE __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,240,10600,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,136,10600,6);
#undef TYPE
#elif __powerpc64__
#define TYPE __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,240,10600,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,136,10600,10);
#undef TYPE
#elif __x86_64__
#define TYPE __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,240,10600,11);
#undef TYPE
#elif __s390x__
#define TYPE __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,240,10600,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10600,0);
#endif

#if 1
#define TYPE __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,0,10601,1);
#undef TYPE
#elif __i386__
#define TYPE __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,140,10601,2);
#undef TYPE
#elif __ia64__
#define TYPE __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,240,10601,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,140,10601,6);
#undef TYPE
#elif __powerpc64__
#define TYPE __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,240,10601,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,140,10601,10);
#undef TYPE
#elif __x86_64__
#define TYPE __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,240,10601,11);
#undef TYPE
#elif __s390x__
#define TYPE __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,240,10601,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10601,0);
#endif

#if 1
#define TYPE std::locale::facet
CheckTypeSize(TYPE,0,10625,1);
#undef TYPE
#elif __i386__
#define TYPE std::locale::facet
CheckTypeSize(TYPE,8,10625,2);
#undef TYPE
#elif __ia64__
#define TYPE std::locale::facet
CheckTypeSize(TYPE,16,10625,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::locale::facet
CheckTypeSize(TYPE,8,10625,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::locale::facet
CheckTypeSize(TYPE,16,10625,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::locale::facet
CheckTypeSize(TYPE,8,10625,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::locale::facet
CheckTypeSize(TYPE,16,10625,11);
#undef TYPE
#elif __s390x__
#define TYPE std::locale::facet
CheckTypeSize(TYPE,16,10625,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10625,0);
#endif

#if 1
#define TYPE std::ios_base::failure
CheckTypeSize(TYPE,0,10622,1);
#undef TYPE
#elif __i386__
#define TYPE std::ios_base::failure
CheckTypeSize(TYPE,8,10622,2);
#undef TYPE
#elif __ia64__
#define TYPE std::ios_base::failure
CheckTypeSize(TYPE,16,10622,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::ios_base::failure
CheckTypeSize(TYPE,8,10622,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::ios_base::failure
CheckTypeSize(TYPE,16,10622,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::ios_base::failure
CheckTypeSize(TYPE,8,10622,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::ios_base::failure
CheckTypeSize(TYPE,16,10622,11);
#undef TYPE
#elif __s390x__
#define TYPE std::ios_base::failure
CheckTypeSize(TYPE,16,10622,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10622,0);
#endif

#if __i386__
#define TYPE std::valarray<unsigned int>
CheckTypeSize(TYPE,8,10849,2);
#undef TYPE
#elif __ia64__
#define TYPE std::valarray<unsigned int>
CheckTypeSize(TYPE,16,10849,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::valarray<unsigned int>
CheckTypeSize(TYPE,8,10849,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::valarray<unsigned int>
CheckTypeSize(TYPE,16,10849,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::valarray<unsigned int>
CheckTypeSize(TYPE,8,10849,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::valarray<unsigned int>
CheckTypeSize(TYPE,16,10849,11);
#undef TYPE
#elif __s390x__
#define TYPE std::valarray<unsigned int>
CheckTypeSize(TYPE,16,10849,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10849,0);
#endif

#if 1
#define TYPE std::basic_iostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,0,10619,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_iostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,148,10619,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_iostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,288,10619,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_iostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,148,10619,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_iostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,288,10619,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_iostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,148,10619,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_iostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,288,10619,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_iostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,288,10619,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10619,0);
#endif

#if 1
#define TYPE std::basic_istream<char, std::char_traits<char> >
CheckTypeSize(TYPE,0,10623,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_istream<char, std::char_traits<char> >
CheckTypeSize(TYPE,144,10623,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_istream<char, std::char_traits<char> >
CheckTypeSize(TYPE,280,10623,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_istream<char, std::char_traits<char> >
CheckTypeSize(TYPE,144,10623,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_istream<char, std::char_traits<char> >
CheckTypeSize(TYPE,280,10623,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_istream<char, std::char_traits<char> >
CheckTypeSize(TYPE,144,10623,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_istream<char, std::char_traits<char> >
CheckTypeSize(TYPE,280,10623,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_istream<char, std::char_traits<char> >
CheckTypeSize(TYPE,280,10623,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10623,0);
#endif

#if 1
#define TYPE std::basic_ostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,0,10678,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_ostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,140,10678,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_ostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,272,10678,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_ostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,140,10678,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_ostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,272,10678,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_ostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,140,10678,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,272,10678,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ostream<char, std::char_traits<char> >
CheckTypeSize(TYPE,272,10678,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10678,0);
#endif

#if 1
#define TYPE std::__num_base
CheckTypeSize(TYPE,0,10673,1);
#undef TYPE
#elif __i386__
#define TYPE std::__num_base
CheckTypeSize(TYPE,1,10673,2);
#undef TYPE
#elif __ia64__
#define TYPE std::__num_base
CheckTypeSize(TYPE,1,10673,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::__num_base
CheckTypeSize(TYPE,1,10673,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::__num_base
CheckTypeSize(TYPE,1,10673,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::__num_base
CheckTypeSize(TYPE,1,10673,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::__num_base
CheckTypeSize(TYPE,1,10673,11);
#undef TYPE
#elif __s390x__
#define TYPE std::__num_base
CheckTypeSize(TYPE,1,10673,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10673,0);
#endif

#if 1
#define TYPE std::bad_typeid
CheckTypeSize(TYPE,0,10701,1);
#undef TYPE
#elif __i386__
#define TYPE std::bad_typeid
CheckTypeSize(TYPE,4,10701,2);
#undef TYPE
#elif __ia64__
#define TYPE std::bad_typeid
CheckTypeSize(TYPE,8,10701,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::bad_typeid
CheckTypeSize(TYPE,4,10701,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::bad_typeid
CheckTypeSize(TYPE,8,10701,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::bad_typeid
CheckTypeSize(TYPE,4,10701,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::bad_typeid
CheckTypeSize(TYPE,8,10701,11);
#undef TYPE
#elif __s390x__
#define TYPE std::bad_typeid
CheckTypeSize(TYPE,8,10701,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10701,0);
#endif

#if 1
#define TYPE std::ctype_base
CheckTypeSize(TYPE,0,10677,1);
#undef TYPE
#elif __i386__
#define TYPE std::ctype_base
CheckTypeSize(TYPE,1,10677,2);
#undef TYPE
#elif __ia64__
#define TYPE std::ctype_base
CheckTypeSize(TYPE,1,10677,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::ctype_base
CheckTypeSize(TYPE,1,10677,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::ctype_base
CheckTypeSize(TYPE,1,10677,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::ctype_base
CheckTypeSize(TYPE,1,10677,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::ctype_base
CheckTypeSize(TYPE,1,10677,11);
#undef TYPE
#elif __s390x__
#define TYPE std::ctype_base
CheckTypeSize(TYPE,1,10677,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10677,0);
#endif

#if 1
#define TYPE std::istrstream
CheckTypeSize(TYPE,0,10693,1);
#undef TYPE
#elif __i386__
#define TYPE std::istrstream
CheckTypeSize(TYPE,188,10693,2);
#undef TYPE
#elif __ia64__
#define TYPE std::istrstream
CheckTypeSize(TYPE,368,10693,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::istrstream
CheckTypeSize(TYPE,188,10693,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::istrstream
CheckTypeSize(TYPE,368,10693,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::istrstream
CheckTypeSize(TYPE,188,10693,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::istrstream
CheckTypeSize(TYPE,368,10693,11);
#undef TYPE
#elif __s390x__
#define TYPE std::istrstream
CheckTypeSize(TYPE,368,10693,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10693,0);
#endif

#if 1
#define TYPE std::money_base
CheckTypeSize(TYPE,0,10675,1);
#undef TYPE
#elif __i386__
#define TYPE std::money_base
CheckTypeSize(TYPE,1,10675,2);
#undef TYPE
#elif __ia64__
#define TYPE std::money_base
CheckTypeSize(TYPE,1,10675,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::money_base
CheckTypeSize(TYPE,1,10675,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::money_base
CheckTypeSize(TYPE,1,10675,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::money_base
CheckTypeSize(TYPE,1,10675,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::money_base
CheckTypeSize(TYPE,1,10675,11);
#undef TYPE
#elif __s390x__
#define TYPE std::money_base
CheckTypeSize(TYPE,1,10675,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10675,0);
#endif

#if 1
#define TYPE std::moneypunct<char, false>
CheckTypeSize(TYPE,0,10639,1);
#undef TYPE
#elif __i386__
#define TYPE std::moneypunct<char, false>
CheckTypeSize(TYPE,12,10639,2);
#undef TYPE
#elif __ia64__
#define TYPE std::moneypunct<char, false>
CheckTypeSize(TYPE,24,10639,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::moneypunct<char, false>
CheckTypeSize(TYPE,12,10639,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::moneypunct<char, false>
CheckTypeSize(TYPE,24,10639,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::moneypunct<char, false>
CheckTypeSize(TYPE,12,10639,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct<char, false>
CheckTypeSize(TYPE,24,10639,11);
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct<char, false>
CheckTypeSize(TYPE,24,10639,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10639,0);
#endif

#if 1
#define TYPE std::moneypunct<char, true>
CheckTypeSize(TYPE,0,10638,1);
#undef TYPE
#elif __i386__
#define TYPE std::moneypunct<char, true>
CheckTypeSize(TYPE,12,10638,2);
#undef TYPE
#elif __ia64__
#define TYPE std::moneypunct<char, true>
CheckTypeSize(TYPE,24,10638,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::moneypunct<char, true>
CheckTypeSize(TYPE,12,10638,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::moneypunct<char, true>
CheckTypeSize(TYPE,24,10638,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::moneypunct<char, true>
CheckTypeSize(TYPE,12,10638,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct<char, true>
CheckTypeSize(TYPE,24,10638,11);
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct<char, true>
CheckTypeSize(TYPE,24,10638,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10638,0);
#endif

#if 1
#define TYPE std::moneypunct<wchar_t, false>
CheckTypeSize(TYPE,0,10641,1);
#undef TYPE
#elif __i386__
#define TYPE std::moneypunct<wchar_t, false>
CheckTypeSize(TYPE,12,10641,2);
#undef TYPE
#elif __ia64__
#define TYPE std::moneypunct<wchar_t, false>
CheckTypeSize(TYPE,24,10641,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::moneypunct<wchar_t, false>
CheckTypeSize(TYPE,12,10641,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::moneypunct<wchar_t, false>
CheckTypeSize(TYPE,24,10641,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::moneypunct<wchar_t, false>
CheckTypeSize(TYPE,12,10641,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct<wchar_t, false>
CheckTypeSize(TYPE,24,10641,11);
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct<wchar_t, false>
CheckTypeSize(TYPE,24,10641,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10641,0);
#endif

#if 1
#define TYPE std::moneypunct<wchar_t, true>
CheckTypeSize(TYPE,0,10640,1);
#undef TYPE
#elif __i386__
#define TYPE std::moneypunct<wchar_t, true>
CheckTypeSize(TYPE,12,10640,2);
#undef TYPE
#elif __ia64__
#define TYPE std::moneypunct<wchar_t, true>
CheckTypeSize(TYPE,24,10640,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::moneypunct<wchar_t, true>
CheckTypeSize(TYPE,12,10640,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::moneypunct<wchar_t, true>
CheckTypeSize(TYPE,24,10640,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::moneypunct<wchar_t, true>
CheckTypeSize(TYPE,12,10640,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct<wchar_t, true>
CheckTypeSize(TYPE,24,10640,11);
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct<wchar_t, true>
CheckTypeSize(TYPE,24,10640,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10640,0);
#endif

#if 1
#define TYPE std::ostrstream
CheckTypeSize(TYPE,0,10694,1);
#undef TYPE
#elif __i386__
#define TYPE std::ostrstream
CheckTypeSize(TYPE,184,10694,2);
#undef TYPE
#elif __ia64__
#define TYPE std::ostrstream
CheckTypeSize(TYPE,360,10694,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::ostrstream
CheckTypeSize(TYPE,184,10694,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::ostrstream
CheckTypeSize(TYPE,360,10694,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::ostrstream
CheckTypeSize(TYPE,184,10694,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::ostrstream
CheckTypeSize(TYPE,360,10694,11);
#undef TYPE
#elif __s390x__
#define TYPE std::ostrstream
CheckTypeSize(TYPE,360,10694,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10694,0);
#endif

#if 1
#define TYPE std::__timepunct<char>
CheckTypeSize(TYPE,0,10636,1);
#undef TYPE
#elif __i386__
#define TYPE std::__timepunct<char>
CheckTypeSize(TYPE,20,10636,2);
#undef TYPE
#elif __ia64__
#define TYPE std::__timepunct<char>
CheckTypeSize(TYPE,40,10636,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::__timepunct<char>
CheckTypeSize(TYPE,20,10636,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::__timepunct<char>
CheckTypeSize(TYPE,40,10636,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::__timepunct<char>
CheckTypeSize(TYPE,20,10636,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::__timepunct<char>
CheckTypeSize(TYPE,40,10636,11);
#undef TYPE
#elif __s390x__
#define TYPE std::__timepunct<char>
CheckTypeSize(TYPE,40,10636,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10636,0);
#endif

#if 1
#define TYPE std::__timepunct<wchar_t>
CheckTypeSize(TYPE,0,10637,1);
#undef TYPE
#elif __i386__
#define TYPE std::__timepunct<wchar_t>
CheckTypeSize(TYPE,20,10637,2);
#undef TYPE
#elif __ia64__
#define TYPE std::__timepunct<wchar_t>
CheckTypeSize(TYPE,40,10637,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::__timepunct<wchar_t>
CheckTypeSize(TYPE,20,10637,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::__timepunct<wchar_t>
CheckTypeSize(TYPE,40,10637,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::__timepunct<wchar_t>
CheckTypeSize(TYPE,20,10637,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::__timepunct<wchar_t>
CheckTypeSize(TYPE,40,10637,11);
#undef TYPE
#elif __s390x__
#define TYPE std::__timepunct<wchar_t>
CheckTypeSize(TYPE,40,10637,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10637,0);
#endif

#if 1
#define TYPE std::logic_error
CheckTypeSize(TYPE,0,10688,1);
#undef TYPE
#elif __i386__
#define TYPE std::logic_error
CheckTypeSize(TYPE,8,10688,2);
#undef TYPE
#elif __ia64__
#define TYPE std::logic_error
CheckTypeSize(TYPE,16,10688,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::logic_error
CheckTypeSize(TYPE,8,10688,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::logic_error
CheckTypeSize(TYPE,16,10688,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::logic_error
CheckTypeSize(TYPE,8,10688,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::logic_error
CheckTypeSize(TYPE,16,10688,11);
#undef TYPE
#elif __s390x__
#define TYPE std::logic_error
CheckTypeSize(TYPE,16,10688,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10688,0);
#endif

#if 1
#define TYPE std::range_error
CheckTypeSize(TYPE,0,10614,1);
#undef TYPE
#elif __i386__
#define TYPE std::range_error
CheckTypeSize(TYPE,8,10614,2);
#undef TYPE
#elif __ia64__
#define TYPE std::range_error
CheckTypeSize(TYPE,16,10614,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::range_error
CheckTypeSize(TYPE,8,10614,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::range_error
CheckTypeSize(TYPE,16,10614,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::range_error
CheckTypeSize(TYPE,8,10614,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::range_error
CheckTypeSize(TYPE,16,10614,11);
#undef TYPE
#elif __s390x__
#define TYPE std::range_error
CheckTypeSize(TYPE,16,10614,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10614,0);
#endif

#if 1
#define TYPE std::codecvt_base
CheckTypeSize(TYPE,0,10676,1);
#undef TYPE
#elif __i386__
#define TYPE std::codecvt_base
CheckTypeSize(TYPE,1,10676,2);
#undef TYPE
#elif __ia64__
#define TYPE std::codecvt_base
CheckTypeSize(TYPE,1,10676,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::codecvt_base
CheckTypeSize(TYPE,1,10676,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::codecvt_base
CheckTypeSize(TYPE,1,10676,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::codecvt_base
CheckTypeSize(TYPE,1,10676,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::codecvt_base
CheckTypeSize(TYPE,1,10676,11);
#undef TYPE
#elif __s390x__
#define TYPE std::codecvt_base
CheckTypeSize(TYPE,1,10676,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10676,0);
#endif

#if 1
#define TYPE std::ctype_byname<char>
CheckTypeSize(TYPE,0,10628,1);
#undef TYPE
#elif __i386__
#define TYPE std::ctype_byname<char>
CheckTypeSize(TYPE,544,10628,2);
#undef TYPE
#elif __ia64__
#define TYPE std::ctype_byname<char>
CheckTypeSize(TYPE,576,10628,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::ctype_byname<char>
CheckTypeSize(TYPE,544,10628,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::ctype_byname<char>
CheckTypeSize(TYPE,576,10628,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::ctype_byname<char>
CheckTypeSize(TYPE,544,10628,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::ctype_byname<char>
CheckTypeSize(TYPE,576,10628,11);
#undef TYPE
#elif __s390x__
#define TYPE std::ctype_byname<char>
CheckTypeSize(TYPE,576,10628,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10628,0);
#endif

#if 1
#define TYPE std::ctype_byname<wchar_t>
CheckTypeSize(TYPE,0,10629,1);
#undef TYPE
#elif __i386__
#define TYPE std::ctype_byname<wchar_t>
CheckTypeSize(TYPE,1264,10629,2);
#undef TYPE
#elif __ia64__
#define TYPE std::ctype_byname<wchar_t>
CheckTypeSize(TYPE,1344,10629,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::ctype_byname<wchar_t>
CheckTypeSize(TYPE,1264,10629,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::ctype_byname<wchar_t>
CheckTypeSize(TYPE,1344,10629,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::ctype_byname<wchar_t>
CheckTypeSize(TYPE,1264,10629,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::ctype_byname<wchar_t>
CheckTypeSize(TYPE,1344,10629,11);
#undef TYPE
#elif __s390x__
#define TYPE std::ctype_byname<wchar_t>
CheckTypeSize(TYPE,1344,10629,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10629,0);
#endif

#if 1
#define TYPE std::domain_error
CheckTypeSize(TYPE,0,10610,1);
#undef TYPE
#elif __i386__
#define TYPE std::domain_error
CheckTypeSize(TYPE,8,10610,2);
#undef TYPE
#elif __ia64__
#define TYPE std::domain_error
CheckTypeSize(TYPE,16,10610,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::domain_error
CheckTypeSize(TYPE,8,10610,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::domain_error
CheckTypeSize(TYPE,16,10610,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::domain_error
CheckTypeSize(TYPE,8,10610,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::domain_error
CheckTypeSize(TYPE,16,10610,11);
#undef TYPE
#elif __s390x__
#define TYPE std::domain_error
CheckTypeSize(TYPE,16,10610,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10610,0);
#endif

#if 1
#define TYPE std::length_error
CheckTypeSize(TYPE,0,10612,1);
#undef TYPE
#elif __i386__
#define TYPE std::length_error
CheckTypeSize(TYPE,8,10612,2);
#undef TYPE
#elif __ia64__
#define TYPE std::length_error
CheckTypeSize(TYPE,16,10612,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::length_error
CheckTypeSize(TYPE,8,10612,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::length_error
CheckTypeSize(TYPE,16,10612,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::length_error
CheckTypeSize(TYPE,8,10612,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::length_error
CheckTypeSize(TYPE,16,10612,11);
#undef TYPE
#elif __s390x__
#define TYPE std::length_error
CheckTypeSize(TYPE,16,10612,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10612,0);
#endif

#if 1
#define TYPE std::out_of_range
CheckTypeSize(TYPE,0,10613,1);
#undef TYPE
#elif __i386__
#define TYPE std::out_of_range
CheckTypeSize(TYPE,8,10613,2);
#undef TYPE
#elif __ia64__
#define TYPE std::out_of_range
CheckTypeSize(TYPE,16,10613,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::out_of_range
CheckTypeSize(TYPE,8,10613,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::out_of_range
CheckTypeSize(TYPE,16,10613,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::out_of_range
CheckTypeSize(TYPE,8,10613,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::out_of_range
CheckTypeSize(TYPE,16,10613,11);
#undef TYPE
#elif __s390x__
#define TYPE std::out_of_range
CheckTypeSize(TYPE,16,10613,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10613,0);
#endif

#if 1
#define TYPE std::strstreambuf
CheckTypeSize(TYPE,0,10692,1);
#undef TYPE
#elif __i386__
#define TYPE std::strstreambuf
CheckTypeSize(TYPE,44,10692,2);
#undef TYPE
#elif __ia64__
#define TYPE std::strstreambuf
CheckTypeSize(TYPE,88,10692,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::strstreambuf
CheckTypeSize(TYPE,44,10692,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::strstreambuf
CheckTypeSize(TYPE,88,10692,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::strstreambuf
CheckTypeSize(TYPE,44,10692,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::strstreambuf
CheckTypeSize(TYPE,88,10692,11);
#undef TYPE
#elif __s390x__
#define TYPE std::strstreambuf
CheckTypeSize(TYPE,88,10692,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10692,0);
#endif

#if 1
#define TYPE std::bad_exception
CheckTypeSize(TYPE,0,10697,1);
#undef TYPE
#elif __i386__
#define TYPE std::bad_exception
CheckTypeSize(TYPE,4,10697,2);
#undef TYPE
#elif __ia64__
#define TYPE std::bad_exception
CheckTypeSize(TYPE,8,10697,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::bad_exception
CheckTypeSize(TYPE,4,10697,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::bad_exception
CheckTypeSize(TYPE,8,10697,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::bad_exception
CheckTypeSize(TYPE,4,10697,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::bad_exception
CheckTypeSize(TYPE,8,10697,11);
#undef TYPE
#elif __s390x__
#define TYPE std::bad_exception
CheckTypeSize(TYPE,8,10697,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10697,0);
#endif

#if 1
#define TYPE std::basic_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,0,10602,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,136,10602,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,240,10602,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,136,10602,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,240,10602,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,136,10602,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,240,10602,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_filebuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,240,10602,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10602,0);
#endif

#if 1
#define TYPE std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,0,10603,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,140,10603,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,240,10603,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,140,10603,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,240,10603,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,140,10603,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,240,10603,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,240,10603,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10603,0);
#endif

#if 1
#define TYPE std::basic_fstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,0,10606,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_fstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,284,10606,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_fstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,528,10606,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_fstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,284,10606,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_fstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,528,10606,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_fstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,284,10606,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_fstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,528,10606,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_fstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,528,10606,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10606,0);
#endif

#if 1
#define TYPE std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,0,10609,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,292,10609,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,528,10609,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,292,10609,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,528,10609,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,292,10609,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,528,10609,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,528,10609,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10609,0);
#endif

#if 1
#define TYPE std::basic_istream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,0,10624,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_istream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,148,10624,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_istream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,280,10624,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_istream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,148,10624,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_istream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,280,10624,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_istream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,148,10624,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_istream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,280,10624,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_istream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,280,10624,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10624,0);
#endif

#if 1
#define TYPE std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,0,10679,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,144,10679,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,272,10679,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,144,10679,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,272,10679,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,144,10679,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,272,10679,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,272,10679,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10679,0);
#endif

#if 1
#define TYPE std::messages_base
CheckTypeSize(TYPE,0,10674,1);
#undef TYPE
#elif __i386__
#define TYPE std::messages_base
CheckTypeSize(TYPE,1,10674,2);
#undef TYPE
#elif __ia64__
#define TYPE std::messages_base
CheckTypeSize(TYPE,1,10674,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::messages_base
CheckTypeSize(TYPE,1,10674,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::messages_base
CheckTypeSize(TYPE,1,10674,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::messages_base
CheckTypeSize(TYPE,1,10674,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::messages_base
CheckTypeSize(TYPE,1,10674,11);
#undef TYPE
#elif __s390x__
#define TYPE std::messages_base
CheckTypeSize(TYPE,1,10674,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10674,0);
#endif

#if 1
#define TYPE std::runtime_error
CheckTypeSize(TYPE,0,10689,1);
#undef TYPE
#elif __i386__
#define TYPE std::runtime_error
CheckTypeSize(TYPE,8,10689,2);
#undef TYPE
#elif __ia64__
#define TYPE std::runtime_error
CheckTypeSize(TYPE,16,10689,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::runtime_error
CheckTypeSize(TYPE,8,10689,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::runtime_error
CheckTypeSize(TYPE,16,10689,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::runtime_error
CheckTypeSize(TYPE,8,10689,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::runtime_error
CheckTypeSize(TYPE,16,10689,11);
#undef TYPE
#elif __s390x__
#define TYPE std::runtime_error
CheckTypeSize(TYPE,16,10689,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10689,0);
#endif

#if 1
#define TYPE std::basic_ifstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,0,10604,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_ifstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,280,10604,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_ifstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,520,10604,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_ifstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,280,10604,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_ifstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,520,10604,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_ifstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,280,10604,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ifstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,520,10604,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ifstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,520,10604,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10604,0);
#endif

#if 1
#define TYPE std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,0,10607,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,288,10607,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,520,10607,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,288,10607,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,520,10607,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,288,10607,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,520,10607,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,520,10607,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10607,0);
#endif

#if 1
#define TYPE std::basic_iostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,0,10620,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_iostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,152,10620,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_iostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,288,10620,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_iostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,152,10620,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_iostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,288,10620,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_iostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,152,10620,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_iostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,288,10620,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_iostream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,288,10620,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10620,0);
#endif

#if 1
#define TYPE std::basic_ofstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,0,10605,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_ofstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,276,10605,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_ofstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,512,10605,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_ofstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,276,10605,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_ofstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,512,10605,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_ofstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,276,10605,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ofstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,512,10605,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ofstream<char, std::char_traits<char> >
CheckTypeSize(TYPE,512,10605,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10605,0);
#endif

#if 1
#define TYPE std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,0,10608,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,284,10608,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,512,10608,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,284,10608,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,512,10608,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,284,10608,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,512,10608,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,512,10608,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10608,0);
#endif

#if 1
#define TYPE std::codecvt_byname<char, char, __mbstate_t>
CheckTypeSize(TYPE,0,10656,1);
#undef TYPE
#elif __i386__
#define TYPE std::codecvt_byname<char, char, __mbstate_t>
CheckTypeSize(TYPE,12,10656,2);
#undef TYPE
#elif __ia64__
#define TYPE std::codecvt_byname<char, char, __mbstate_t>
CheckTypeSize(TYPE,24,10656,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::codecvt_byname<char, char, __mbstate_t>
CheckTypeSize(TYPE,12,10656,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::codecvt_byname<char, char, __mbstate_t>
CheckTypeSize(TYPE,24,10656,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::codecvt_byname<char, char, __mbstate_t>
CheckTypeSize(TYPE,12,10656,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::codecvt_byname<char, char, __mbstate_t>
CheckTypeSize(TYPE,24,10656,11);
#undef TYPE
#elif __s390x__
#define TYPE std::codecvt_byname<char, char, __mbstate_t>
CheckTypeSize(TYPE,24,10656,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10656,0);
#endif

#if 1
#define TYPE std::codecvt_byname<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,0,10670,1);
#undef TYPE
#elif __i386__
#define TYPE std::codecvt_byname<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,12,10670,2);
#undef TYPE
#elif __ia64__
#define TYPE std::codecvt_byname<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,24,10670,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::codecvt_byname<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,12,10670,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::codecvt_byname<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,24,10670,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::codecvt_byname<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,12,10670,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::codecvt_byname<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,24,10670,11);
#undef TYPE
#elif __s390x__
#define TYPE std::codecvt_byname<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,24,10670,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10670,0);
#endif

#if 1
#define TYPE std::collate_byname<char>
CheckTypeSize(TYPE,0,10657,1);
#undef TYPE
#elif __i386__
#define TYPE std::collate_byname<char>
CheckTypeSize(TYPE,12,10657,2);
#undef TYPE
#elif __ia64__
#define TYPE std::collate_byname<char>
CheckTypeSize(TYPE,24,10657,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::collate_byname<char>
CheckTypeSize(TYPE,12,10657,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::collate_byname<char>
CheckTypeSize(TYPE,24,10657,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::collate_byname<char>
CheckTypeSize(TYPE,12,10657,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::collate_byname<char>
CheckTypeSize(TYPE,24,10657,11);
#undef TYPE
#elif __s390x__
#define TYPE std::collate_byname<char>
CheckTypeSize(TYPE,24,10657,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10657,0);
#endif

#if 1
#define TYPE std::collate_byname<wchar_t>
CheckTypeSize(TYPE,0,10671,1);
#undef TYPE
#elif __i386__
#define TYPE std::collate_byname<wchar_t>
CheckTypeSize(TYPE,12,10671,2);
#undef TYPE
#elif __ia64__
#define TYPE std::collate_byname<wchar_t>
CheckTypeSize(TYPE,24,10671,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::collate_byname<wchar_t>
CheckTypeSize(TYPE,12,10671,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::collate_byname<wchar_t>
CheckTypeSize(TYPE,24,10671,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::collate_byname<wchar_t>
CheckTypeSize(TYPE,12,10671,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::collate_byname<wchar_t>
CheckTypeSize(TYPE,24,10671,11);
#undef TYPE
#elif __s390x__
#define TYPE std::collate_byname<wchar_t>
CheckTypeSize(TYPE,24,10671,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10671,0);
#endif

#if 1
#define TYPE std::overflow_error
CheckTypeSize(TYPE,0,10615,1);
#undef TYPE
#elif __i386__
#define TYPE std::overflow_error
CheckTypeSize(TYPE,8,10615,2);
#undef TYPE
#elif __ia64__
#define TYPE std::overflow_error
CheckTypeSize(TYPE,16,10615,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::overflow_error
CheckTypeSize(TYPE,8,10615,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::overflow_error
CheckTypeSize(TYPE,16,10615,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::overflow_error
CheckTypeSize(TYPE,8,10615,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::overflow_error
CheckTypeSize(TYPE,16,10615,11);
#undef TYPE
#elif __s390x__
#define TYPE std::overflow_error
CheckTypeSize(TYPE,16,10615,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10615,0);
#endif

#if 1
#define TYPE std::basic_streambuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,0,10690,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_streambuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,32,10690,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_streambuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,64,10690,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_streambuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,32,10690,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_streambuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,64,10690,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_streambuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,32,10690,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_streambuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,64,10690,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_streambuf<char, std::char_traits<char> >
CheckTypeSize(TYPE,64,10690,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10690,0);
#endif

#if 1
#define TYPE std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,0,10691,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,32,10691,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,64,10691,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,32,10691,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,64,10691,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,32,10691,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,64,10691,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,64,10691,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10691,0);
#endif

#if 1
#define TYPE std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,0,10680,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,40,10680,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,80,10680,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,40,10680,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,80,10680,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,40,10680,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,80,10680,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,80,10680,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10680,0);
#endif

#if 1
#define TYPE std::basic_stringbuf<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,0,10684,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_stringbuf<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,40,10684,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_stringbuf<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,80,10684,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_stringbuf<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,40,10684,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_stringbuf<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,80,10684,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_stringbuf<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,40,10684,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_stringbuf<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,80,10684,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_stringbuf<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,80,10684,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10684,0);
#endif

#if 1
#define TYPE std::messages_byname<char>
CheckTypeSize(TYPE,0,10655,1);
#undef TYPE
#elif __i386__
#define TYPE std::messages_byname<char>
CheckTypeSize(TYPE,16,10655,2);
#undef TYPE
#elif __ia64__
#define TYPE std::messages_byname<char>
CheckTypeSize(TYPE,32,10655,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::messages_byname<char>
CheckTypeSize(TYPE,16,10655,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::messages_byname<char>
CheckTypeSize(TYPE,32,10655,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::messages_byname<char>
CheckTypeSize(TYPE,16,10655,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::messages_byname<char>
CheckTypeSize(TYPE,32,10655,11);
#undef TYPE
#elif __s390x__
#define TYPE std::messages_byname<char>
CheckTypeSize(TYPE,32,10655,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10655,0);
#endif

#if 1
#define TYPE std::messages_byname<wchar_t>
CheckTypeSize(TYPE,0,10669,1);
#undef TYPE
#elif __i386__
#define TYPE std::messages_byname<wchar_t>
CheckTypeSize(TYPE,16,10669,2);
#undef TYPE
#elif __ia64__
#define TYPE std::messages_byname<wchar_t>
CheckTypeSize(TYPE,32,10669,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::messages_byname<wchar_t>
CheckTypeSize(TYPE,16,10669,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::messages_byname<wchar_t>
CheckTypeSize(TYPE,32,10669,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::messages_byname<wchar_t>
CheckTypeSize(TYPE,16,10669,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::messages_byname<wchar_t>
CheckTypeSize(TYPE,32,10669,11);
#undef TYPE
#elif __s390x__
#define TYPE std::messages_byname<wchar_t>
CheckTypeSize(TYPE,32,10669,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10669,0);
#endif

#if 1
#define TYPE std::numpunct_byname<char>
CheckTypeSize(TYPE,0,10648,1);
#undef TYPE
#elif __i386__
#define TYPE std::numpunct_byname<char>
CheckTypeSize(TYPE,12,10648,2);
#undef TYPE
#elif __ia64__
#define TYPE std::numpunct_byname<char>
CheckTypeSize(TYPE,24,10648,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::numpunct_byname<char>
CheckTypeSize(TYPE,12,10648,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::numpunct_byname<char>
CheckTypeSize(TYPE,24,10648,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::numpunct_byname<char>
CheckTypeSize(TYPE,12,10648,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::numpunct_byname<char>
CheckTypeSize(TYPE,24,10648,11);
#undef TYPE
#elif __s390x__
#define TYPE std::numpunct_byname<char>
CheckTypeSize(TYPE,24,10648,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10648,0);
#endif

#if 1
#define TYPE std::numpunct_byname<wchar_t>
CheckTypeSize(TYPE,0,10662,1);
#undef TYPE
#elif __i386__
#define TYPE std::numpunct_byname<wchar_t>
CheckTypeSize(TYPE,12,10662,2);
#undef TYPE
#elif __ia64__
#define TYPE std::numpunct_byname<wchar_t>
CheckTypeSize(TYPE,24,10662,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::numpunct_byname<wchar_t>
CheckTypeSize(TYPE,12,10662,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::numpunct_byname<wchar_t>
CheckTypeSize(TYPE,24,10662,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::numpunct_byname<wchar_t>
CheckTypeSize(TYPE,12,10662,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::numpunct_byname<wchar_t>
CheckTypeSize(TYPE,24,10662,11);
#undef TYPE
#elif __s390x__
#define TYPE std::numpunct_byname<wchar_t>
CheckTypeSize(TYPE,24,10662,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10662,0);
#endif

#if 1
#define TYPE std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,0,10764,1);
#undef TYPE
#elif __i386__
#define TYPE std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10764,2);
#undef TYPE
#elif __ia64__
#define TYPE std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10764,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10764,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10764,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10764,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10764,11);
#undef TYPE
#elif __s390x__
#define TYPE std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10764,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10764,0);
#endif

#if 1
#define TYPE std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,0,10766,1);
#undef TYPE
#elif __i386__
#define TYPE std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10766,2);
#undef TYPE
#elif __ia64__
#define TYPE std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10766,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10766,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10766,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10766,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10766,11);
#undef TYPE
#elif __s390x__
#define TYPE std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10766,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10766,0);
#endif

#if 1
#define TYPE std::time_put_byname<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,0,10763,1);
#undef TYPE
#elif __i386__
#define TYPE std::time_put_byname<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10763,2);
#undef TYPE
#elif __ia64__
#define TYPE std::time_put_byname<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10763,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::time_put_byname<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10763,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::time_put_byname<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10763,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::time_put_byname<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10763,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::time_put_byname<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10763,11);
#undef TYPE
#elif __s390x__
#define TYPE std::time_put_byname<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10763,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10763,0);
#endif

#if 1
#define TYPE std::time_put_byname<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,0,10765,1);
#undef TYPE
#elif __i386__
#define TYPE std::time_put_byname<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10765,2);
#undef TYPE
#elif __ia64__
#define TYPE std::time_put_byname<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10765,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::time_put_byname<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10765,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::time_put_byname<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10765,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::time_put_byname<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10765,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::time_put_byname<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10765,11);
#undef TYPE
#elif __s390x__
#define TYPE std::time_put_byname<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10765,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10765,0);
#endif

#if 1
#define TYPE std::underflow_error
CheckTypeSize(TYPE,0,10616,1);
#undef TYPE
#elif __i386__
#define TYPE std::underflow_error
CheckTypeSize(TYPE,8,10616,2);
#undef TYPE
#elif __ia64__
#define TYPE std::underflow_error
CheckTypeSize(TYPE,16,10616,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::underflow_error
CheckTypeSize(TYPE,8,10616,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::underflow_error
CheckTypeSize(TYPE,16,10616,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::underflow_error
CheckTypeSize(TYPE,8,10616,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::underflow_error
CheckTypeSize(TYPE,16,10616,11);
#undef TYPE
#elif __s390x__
#define TYPE std::underflow_error
CheckTypeSize(TYPE,16,10616,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10616,0);
#endif

#if 1
#define TYPE std::invalid_argument
CheckTypeSize(TYPE,0,10611,1);
#undef TYPE
#elif __i386__
#define TYPE std::invalid_argument
CheckTypeSize(TYPE,8,10611,2);
#undef TYPE
#elif __ia64__
#define TYPE std::invalid_argument
CheckTypeSize(TYPE,16,10611,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::invalid_argument
CheckTypeSize(TYPE,8,10611,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::invalid_argument
CheckTypeSize(TYPE,16,10611,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::invalid_argument
CheckTypeSize(TYPE,8,10611,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::invalid_argument
CheckTypeSize(TYPE,16,10611,11);
#undef TYPE
#elif __s390x__
#define TYPE std::invalid_argument
CheckTypeSize(TYPE,16,10611,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10611,0);
#endif

#if 1
#define TYPE std::moneypunct_byname<char, false>
CheckTypeSize(TYPE,0,10644,1);
#undef TYPE
#elif __i386__
#define TYPE std::moneypunct_byname<char, false>
CheckTypeSize(TYPE,12,10644,2);
#undef TYPE
#elif __ia64__
#define TYPE std::moneypunct_byname<char, false>
CheckTypeSize(TYPE,24,10644,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::moneypunct_byname<char, false>
CheckTypeSize(TYPE,12,10644,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::moneypunct_byname<char, false>
CheckTypeSize(TYPE,24,10644,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::moneypunct_byname<char, false>
CheckTypeSize(TYPE,12,10644,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct_byname<char, false>
CheckTypeSize(TYPE,24,10644,11);
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct_byname<char, false>
CheckTypeSize(TYPE,24,10644,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10644,0);
#endif

#if 1
#define TYPE std::moneypunct_byname<char, true>
CheckTypeSize(TYPE,0,10645,1);
#undef TYPE
#elif __i386__
#define TYPE std::moneypunct_byname<char, true>
CheckTypeSize(TYPE,12,10645,2);
#undef TYPE
#elif __ia64__
#define TYPE std::moneypunct_byname<char, true>
CheckTypeSize(TYPE,24,10645,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::moneypunct_byname<char, true>
CheckTypeSize(TYPE,12,10645,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::moneypunct_byname<char, true>
CheckTypeSize(TYPE,24,10645,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::moneypunct_byname<char, true>
CheckTypeSize(TYPE,12,10645,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct_byname<char, true>
CheckTypeSize(TYPE,24,10645,11);
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct_byname<char, true>
CheckTypeSize(TYPE,24,10645,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10645,0);
#endif

#if 1
#define TYPE std::moneypunct_byname<wchar_t, false>
CheckTypeSize(TYPE,0,10658,1);
#undef TYPE
#elif __i386__
#define TYPE std::moneypunct_byname<wchar_t, false>
CheckTypeSize(TYPE,12,10658,2);
#undef TYPE
#elif __ia64__
#define TYPE std::moneypunct_byname<wchar_t, false>
CheckTypeSize(TYPE,24,10658,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::moneypunct_byname<wchar_t, false>
CheckTypeSize(TYPE,12,10658,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::moneypunct_byname<wchar_t, false>
CheckTypeSize(TYPE,24,10658,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::moneypunct_byname<wchar_t, false>
CheckTypeSize(TYPE,12,10658,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct_byname<wchar_t, false>
CheckTypeSize(TYPE,24,10658,11);
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct_byname<wchar_t, false>
CheckTypeSize(TYPE,24,10658,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10658,0);
#endif

#if 1
#define TYPE std::moneypunct_byname<wchar_t, true>
CheckTypeSize(TYPE,0,10659,1);
#undef TYPE
#elif __i386__
#define TYPE std::moneypunct_byname<wchar_t, true>
CheckTypeSize(TYPE,12,10659,2);
#undef TYPE
#elif __ia64__
#define TYPE std::moneypunct_byname<wchar_t, true>
CheckTypeSize(TYPE,24,10659,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::moneypunct_byname<wchar_t, true>
CheckTypeSize(TYPE,12,10659,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::moneypunct_byname<wchar_t, true>
CheckTypeSize(TYPE,24,10659,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::moneypunct_byname<wchar_t, true>
CheckTypeSize(TYPE,12,10659,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::moneypunct_byname<wchar_t, true>
CheckTypeSize(TYPE,24,10659,11);
#undef TYPE
#elif __s390x__
#define TYPE std::moneypunct_byname<wchar_t, true>
CheckTypeSize(TYPE,24,10659,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10659,0);
#endif

#if 1
#define TYPE std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,0,10683,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,188,10683,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,368,10683,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,188,10683,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,368,10683,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,188,10683,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,368,10683,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,368,10683,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10683,0);
#endif

#if 1
#define TYPE std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,0,10687,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,192,10687,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,368,10687,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,192,10687,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,368,10687,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,192,10687,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,368,10687,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,368,10687,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10687,0);
#endif

#if 1
#define TYPE std::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,0,10681,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,184,10681,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,360,10681,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,184,10681,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,360,10681,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,184,10681,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,360,10681,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,360,10681,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10681,0);
#endif

#if 1
#define TYPE std::basic_istringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,0,10685,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_istringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,188,10685,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_istringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,360,10685,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_istringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,188,10685,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_istringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,360,10685,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_istringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,188,10685,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_istringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,360,10685,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_istringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,360,10685,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10685,0);
#endif

#if 1
#define TYPE std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,0,10682,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,180,10682,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,352,10682,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,180,10682,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,352,10682,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,180,10682,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,352,10682,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >
CheckTypeSize(TYPE,352,10682,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10682,0);
#endif

#if 1
#define TYPE std::basic_ostringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,0,10686,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_ostringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,184,10686,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_ostringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,352,10686,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_ostringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,184,10686,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_ostringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,352,10686,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_ostringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,184,10686,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ostringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,352,10686,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ostringstream<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >
CheckTypeSize(TYPE,352,10686,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10686,0);
#endif

#if 1
#define TYPE std::__ctype_abstract_base<char>
CheckTypeSize(TYPE,0,10626,1);
#undef TYPE
#elif __i386__
#define TYPE std::__ctype_abstract_base<char>
CheckTypeSize(TYPE,8,10626,2);
#undef TYPE
#elif __ia64__
#define TYPE std::__ctype_abstract_base<char>
CheckTypeSize(TYPE,16,10626,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::__ctype_abstract_base<char>
CheckTypeSize(TYPE,8,10626,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::__ctype_abstract_base<char>
CheckTypeSize(TYPE,16,10626,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::__ctype_abstract_base<char>
CheckTypeSize(TYPE,8,10626,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::__ctype_abstract_base<char>
CheckTypeSize(TYPE,16,10626,11);
#undef TYPE
#elif __s390x__
#define TYPE std::__ctype_abstract_base<char>
CheckTypeSize(TYPE,16,10626,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10626,0);
#endif

#if 1
#define TYPE std::__ctype_abstract_base<wchar_t>
CheckTypeSize(TYPE,0,10627,1);
#undef TYPE
#elif __i386__
#define TYPE std::__ctype_abstract_base<wchar_t>
CheckTypeSize(TYPE,8,10627,2);
#undef TYPE
#elif __ia64__
#define TYPE std::__ctype_abstract_base<wchar_t>
CheckTypeSize(TYPE,16,10627,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::__ctype_abstract_base<wchar_t>
CheckTypeSize(TYPE,8,10627,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::__ctype_abstract_base<wchar_t>
CheckTypeSize(TYPE,16,10627,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::__ctype_abstract_base<wchar_t>
CheckTypeSize(TYPE,8,10627,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::__ctype_abstract_base<wchar_t>
CheckTypeSize(TYPE,16,10627,11);
#undef TYPE
#elif __s390x__
#define TYPE std::__ctype_abstract_base<wchar_t>
CheckTypeSize(TYPE,16,10627,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10627,0);
#endif

#if 1
#define TYPE std::__codecvt_abstract_base<char, char, __mbstate_t>
CheckTypeSize(TYPE,0,10630,1);
#undef TYPE
#elif __i386__
#define TYPE std::__codecvt_abstract_base<char, char, __mbstate_t>
CheckTypeSize(TYPE,8,10630,2);
#undef TYPE
#elif __ia64__
#define TYPE std::__codecvt_abstract_base<char, char, __mbstate_t>
CheckTypeSize(TYPE,16,10630,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::__codecvt_abstract_base<char, char, __mbstate_t>
CheckTypeSize(TYPE,8,10630,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::__codecvt_abstract_base<char, char, __mbstate_t>
CheckTypeSize(TYPE,16,10630,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::__codecvt_abstract_base<char, char, __mbstate_t>
CheckTypeSize(TYPE,8,10630,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::__codecvt_abstract_base<char, char, __mbstate_t>
CheckTypeSize(TYPE,16,10630,11);
#undef TYPE
#elif __s390x__
#define TYPE std::__codecvt_abstract_base<char, char, __mbstate_t>
CheckTypeSize(TYPE,16,10630,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10630,0);
#endif

#if 1
#define TYPE std::__codecvt_abstract_base<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,0,10631,1);
#undef TYPE
#elif __i386__
#define TYPE std::__codecvt_abstract_base<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,8,10631,2);
#undef TYPE
#elif __ia64__
#define TYPE std::__codecvt_abstract_base<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,16,10631,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::__codecvt_abstract_base<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,8,10631,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::__codecvt_abstract_base<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,16,10631,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::__codecvt_abstract_base<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,8,10631,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::__codecvt_abstract_base<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,16,10631,11);
#undef TYPE
#elif __s390x__
#define TYPE std::__codecvt_abstract_base<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,16,10631,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10631,0);
#endif

#if 1
#define TYPE std::ctype<char>
CheckTypeSize(TYPE,0,10598,1);
#undef TYPE
#elif __i386__
#define TYPE std::ctype<char>
CheckTypeSize(TYPE,544,10598,2);
#undef TYPE
#elif __ia64__
#define TYPE std::ctype<char>
CheckTypeSize(TYPE,576,10598,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::ctype<char>
CheckTypeSize(TYPE,544,10598,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::ctype<char>
CheckTypeSize(TYPE,576,10598,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::ctype<char>
CheckTypeSize(TYPE,544,10598,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::ctype<char>
CheckTypeSize(TYPE,576,10598,11);
#undef TYPE
#elif __s390x__
#define TYPE std::ctype<char>
CheckTypeSize(TYPE,576,10598,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10598,0);
#endif

#if 1
#define TYPE std::ctype<wchar_t>
CheckTypeSize(TYPE,0,10599,1);
#undef TYPE
#elif __i386__
#define TYPE std::ctype<wchar_t>
CheckTypeSize(TYPE,1264,10599,2);
#undef TYPE
#elif __ia64__
#define TYPE std::ctype<wchar_t>
CheckTypeSize(TYPE,1344,10599,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::ctype<wchar_t>
CheckTypeSize(TYPE,1264,10599,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::ctype<wchar_t>
CheckTypeSize(TYPE,1344,10599,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::ctype<wchar_t>
CheckTypeSize(TYPE,1264,10599,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::ctype<wchar_t>
CheckTypeSize(TYPE,1344,10599,11);
#undef TYPE
#elif __s390x__
#define TYPE std::ctype<wchar_t>
CheckTypeSize(TYPE,1344,10599,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10599,0);
#endif

#if 1
#define TYPE std::codecvt<char, char, __mbstate_t>
CheckTypeSize(TYPE,0,10596,1);
#undef TYPE
#elif __i386__
#define TYPE std::codecvt<char, char, __mbstate_t>
CheckTypeSize(TYPE,12,10596,2);
#undef TYPE
#elif __ia64__
#define TYPE std::codecvt<char, char, __mbstate_t>
CheckTypeSize(TYPE,24,10596,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::codecvt<char, char, __mbstate_t>
CheckTypeSize(TYPE,12,10596,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::codecvt<char, char, __mbstate_t>
CheckTypeSize(TYPE,24,10596,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::codecvt<char, char, __mbstate_t>
CheckTypeSize(TYPE,12,10596,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::codecvt<char, char, __mbstate_t>
CheckTypeSize(TYPE,24,10596,11);
#undef TYPE
#elif __s390x__
#define TYPE std::codecvt<char, char, __mbstate_t>
CheckTypeSize(TYPE,24,10596,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10596,0);
#endif

#if 1
#define TYPE std::codecvt<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,0,10597,1);
#undef TYPE
#elif __i386__
#define TYPE std::codecvt<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,12,10597,2);
#undef TYPE
#elif __ia64__
#define TYPE std::codecvt<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,24,10597,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::codecvt<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,12,10597,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::codecvt<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,24,10597,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::codecvt<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,12,10597,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::codecvt<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,24,10597,11);
#undef TYPE
#elif __s390x__
#define TYPE std::codecvt<wchar_t, char, __mbstate_t>
CheckTypeSize(TYPE,24,10597,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10597,0);
#endif

#if 1
#define TYPE std::collate<char>
CheckTypeSize(TYPE,0,10634,1);
#undef TYPE
#elif __i386__
#define TYPE std::collate<char>
CheckTypeSize(TYPE,12,10634,2);
#undef TYPE
#elif __ia64__
#define TYPE std::collate<char>
CheckTypeSize(TYPE,24,10634,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::collate<char>
CheckTypeSize(TYPE,12,10634,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::collate<char>
CheckTypeSize(TYPE,24,10634,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::collate<char>
CheckTypeSize(TYPE,12,10634,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::collate<char>
CheckTypeSize(TYPE,24,10634,11);
#undef TYPE
#elif __s390x__
#define TYPE std::collate<char>
CheckTypeSize(TYPE,24,10634,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10634,0);
#endif

#if 1
#define TYPE std::collate<wchar_t>
CheckTypeSize(TYPE,0,10635,1);
#undef TYPE
#elif __i386__
#define TYPE std::collate<wchar_t>
CheckTypeSize(TYPE,12,10635,2);
#undef TYPE
#elif __ia64__
#define TYPE std::collate<wchar_t>
CheckTypeSize(TYPE,24,10635,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::collate<wchar_t>
CheckTypeSize(TYPE,12,10635,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::collate<wchar_t>
CheckTypeSize(TYPE,24,10635,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::collate<wchar_t>
CheckTypeSize(TYPE,12,10635,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::collate<wchar_t>
CheckTypeSize(TYPE,24,10635,11);
#undef TYPE
#elif __s390x__
#define TYPE std::collate<wchar_t>
CheckTypeSize(TYPE,24,10635,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10635,0);
#endif

#if 1
#define TYPE std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,0,10649,1);
#undef TYPE
#elif __i386__
#define TYPE std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10649,2);
#undef TYPE
#elif __ia64__
#define TYPE std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10649,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10649,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10649,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10649,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10649,11);
#undef TYPE
#elif __s390x__
#define TYPE std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10649,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10649,0);
#endif

#if 1
#define TYPE std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,0,10663,1);
#undef TYPE
#elif __i386__
#define TYPE std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10663,2);
#undef TYPE
#elif __ia64__
#define TYPE std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10663,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10663,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10663,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10663,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10663,11);
#undef TYPE
#elif __s390x__
#define TYPE std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10663,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10663,0);
#endif

#if 1
#define TYPE std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,0,10650,1);
#undef TYPE
#elif __i386__
#define TYPE std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10650,2);
#undef TYPE
#elif __ia64__
#define TYPE std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10650,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10650,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10650,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10650,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10650,11);
#undef TYPE
#elif __s390x__
#define TYPE std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10650,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10650,0);
#endif

#if 1
#define TYPE std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,0,10664,1);
#undef TYPE
#elif __i386__
#define TYPE std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10664,2);
#undef TYPE
#elif __ia64__
#define TYPE std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10664,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10664,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10664,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10664,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10664,11);
#undef TYPE
#elif __s390x__
#define TYPE std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10664,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10664,0);
#endif

#if 1
#define TYPE std::bad_cast
CheckTypeSize(TYPE,0,10700,1);
#undef TYPE
#elif __i386__
#define TYPE std::bad_cast
CheckTypeSize(TYPE,4,10700,2);
#undef TYPE
#elif __ia64__
#define TYPE std::bad_cast
CheckTypeSize(TYPE,8,10700,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::bad_cast
CheckTypeSize(TYPE,4,10700,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::bad_cast
CheckTypeSize(TYPE,8,10700,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::bad_cast
CheckTypeSize(TYPE,4,10700,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::bad_cast
CheckTypeSize(TYPE,8,10700,11);
#undef TYPE
#elif __s390x__
#define TYPE std::bad_cast
CheckTypeSize(TYPE,8,10700,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10700,0);
#endif

#if 1
#define TYPE std::ios_base
CheckTypeSize(TYPE,0,10621,1);
#undef TYPE
#elif __i386__
#define TYPE std::ios_base
CheckTypeSize(TYPE,112,10621,2);
#undef TYPE
#elif __ia64__
#define TYPE std::ios_base
CheckTypeSize(TYPE,216,10621,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::ios_base
CheckTypeSize(TYPE,112,10621,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::ios_base
CheckTypeSize(TYPE,216,10621,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::ios_base
CheckTypeSize(TYPE,112,10621,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::ios_base
CheckTypeSize(TYPE,216,10621,11);
#undef TYPE
#elif __s390x__
#define TYPE std::ios_base
CheckTypeSize(TYPE,216,10621,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10621,0);
#endif

#if 1
#define TYPE std::messages<char>
CheckTypeSize(TYPE,0,10642,1);
#undef TYPE
#elif __i386__
#define TYPE std::messages<char>
CheckTypeSize(TYPE,16,10642,2);
#undef TYPE
#elif __ia64__
#define TYPE std::messages<char>
CheckTypeSize(TYPE,32,10642,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::messages<char>
CheckTypeSize(TYPE,16,10642,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::messages<char>
CheckTypeSize(TYPE,32,10642,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::messages<char>
CheckTypeSize(TYPE,16,10642,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::messages<char>
CheckTypeSize(TYPE,32,10642,11);
#undef TYPE
#elif __s390x__
#define TYPE std::messages<char>
CheckTypeSize(TYPE,32,10642,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10642,0);
#endif

#if 1
#define TYPE std::messages<wchar_t>
CheckTypeSize(TYPE,0,10643,1);
#undef TYPE
#elif __i386__
#define TYPE std::messages<wchar_t>
CheckTypeSize(TYPE,16,10643,2);
#undef TYPE
#elif __ia64__
#define TYPE std::messages<wchar_t>
CheckTypeSize(TYPE,32,10643,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::messages<wchar_t>
CheckTypeSize(TYPE,16,10643,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::messages<wchar_t>
CheckTypeSize(TYPE,32,10643,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::messages<wchar_t>
CheckTypeSize(TYPE,16,10643,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::messages<wchar_t>
CheckTypeSize(TYPE,32,10643,11);
#undef TYPE
#elif __s390x__
#define TYPE std::messages<wchar_t>
CheckTypeSize(TYPE,32,10643,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10643,0);
#endif

#if 1
#define TYPE std::numpunct<char>
CheckTypeSize(TYPE,0,10632,1);
#undef TYPE
#elif __i386__
#define TYPE std::numpunct<char>
CheckTypeSize(TYPE,12,10632,2);
#undef TYPE
#elif __ia64__
#define TYPE std::numpunct<char>
CheckTypeSize(TYPE,24,10632,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::numpunct<char>
CheckTypeSize(TYPE,12,10632,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::numpunct<char>
CheckTypeSize(TYPE,24,10632,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::numpunct<char>
CheckTypeSize(TYPE,12,10632,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::numpunct<char>
CheckTypeSize(TYPE,24,10632,11);
#undef TYPE
#elif __s390x__
#define TYPE std::numpunct<char>
CheckTypeSize(TYPE,24,10632,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10632,0);
#endif

#if 1
#define TYPE std::numpunct<wchar_t>
CheckTypeSize(TYPE,0,10633,1);
#undef TYPE
#elif __i386__
#define TYPE std::numpunct<wchar_t>
CheckTypeSize(TYPE,12,10633,2);
#undef TYPE
#elif __ia64__
#define TYPE std::numpunct<wchar_t>
CheckTypeSize(TYPE,24,10633,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::numpunct<wchar_t>
CheckTypeSize(TYPE,12,10633,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::numpunct<wchar_t>
CheckTypeSize(TYPE,24,10633,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::numpunct<wchar_t>
CheckTypeSize(TYPE,12,10633,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::numpunct<wchar_t>
CheckTypeSize(TYPE,24,10633,11);
#undef TYPE
#elif __s390x__
#define TYPE std::numpunct<wchar_t>
CheckTypeSize(TYPE,24,10633,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10633,0);
#endif

#if 1
#define TYPE std::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,0,10653,1);
#undef TYPE
#elif __i386__
#define TYPE std::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10653,2);
#undef TYPE
#elif __ia64__
#define TYPE std::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10653,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10653,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10653,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10653,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10653,11);
#undef TYPE
#elif __s390x__
#define TYPE std::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10653,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10653,0);
#endif

#if 1
#define TYPE std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,0,10667,1);
#undef TYPE
#elif __i386__
#define TYPE std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10667,2);
#undef TYPE
#elif __ia64__
#define TYPE std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10667,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10667,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10667,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10667,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10667,11);
#undef TYPE
#elif __s390x__
#define TYPE std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10667,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10667,0);
#endif

#if 1
#define TYPE std::time_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,0,10651,1);
#undef TYPE
#elif __i386__
#define TYPE std::time_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10651,2);
#undef TYPE
#elif __ia64__
#define TYPE std::time_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10651,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::time_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10651,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::time_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10651,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::time_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10651,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::time_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10651,11);
#undef TYPE
#elif __s390x__
#define TYPE std::time_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10651,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10651,0);
#endif

#if 1
#define TYPE std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,0,10665,1);
#undef TYPE
#elif __i386__
#define TYPE std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10665,2);
#undef TYPE
#elif __ia64__
#define TYPE std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10665,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10665,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10665,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10665,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10665,11);
#undef TYPE
#elif __s390x__
#define TYPE std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10665,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10665,0);
#endif

#if 1
#define TYPE std::bad_alloc
CheckTypeSize(TYPE,0,10698,1);
#undef TYPE
#elif __i386__
#define TYPE std::bad_alloc
CheckTypeSize(TYPE,4,10698,2);
#undef TYPE
#elif __ia64__
#define TYPE std::bad_alloc
CheckTypeSize(TYPE,8,10698,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::bad_alloc
CheckTypeSize(TYPE,4,10698,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::bad_alloc
CheckTypeSize(TYPE,8,10698,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::bad_alloc
CheckTypeSize(TYPE,4,10698,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::bad_alloc
CheckTypeSize(TYPE,8,10698,11);
#undef TYPE
#elif __s390x__
#define TYPE std::bad_alloc
CheckTypeSize(TYPE,8,10698,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10698,0);
#endif

#if 1
#define TYPE std::basic_ios<char, std::char_traits<char> >
CheckTypeSize(TYPE,0,10617,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_ios<char, std::char_traits<char> >
CheckTypeSize(TYPE,136,10617,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_ios<char, std::char_traits<char> >
CheckTypeSize(TYPE,264,10617,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_ios<char, std::char_traits<char> >
CheckTypeSize(TYPE,136,10617,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_ios<char, std::char_traits<char> >
CheckTypeSize(TYPE,264,10617,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_ios<char, std::char_traits<char> >
CheckTypeSize(TYPE,136,10617,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ios<char, std::char_traits<char> >
CheckTypeSize(TYPE,264,10617,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ios<char, std::char_traits<char> >
CheckTypeSize(TYPE,264,10617,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10617,0);
#endif

#if 1
#define TYPE std::basic_ios<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,0,10618,1);
#undef TYPE
#elif __i386__
#define TYPE std::basic_ios<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,140,10618,2);
#undef TYPE
#elif __ia64__
#define TYPE std::basic_ios<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,264,10618,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::basic_ios<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,140,10618,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::basic_ios<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,264,10618,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::basic_ios<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,140,10618,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::basic_ios<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,264,10618,11);
#undef TYPE
#elif __s390x__
#define TYPE std::basic_ios<wchar_t, std::char_traits<wchar_t> >
CheckTypeSize(TYPE,264,10618,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10618,0);
#endif

#if 1
#define TYPE std::exception
CheckTypeSize(TYPE,0,10696,1);
#undef TYPE
#elif __i386__
#define TYPE std::exception
CheckTypeSize(TYPE,4,10696,2);
#undef TYPE
#elif __ia64__
#define TYPE std::exception
CheckTypeSize(TYPE,8,10696,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::exception
CheckTypeSize(TYPE,4,10696,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::exception
CheckTypeSize(TYPE,8,10696,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::exception
CheckTypeSize(TYPE,4,10696,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::exception
CheckTypeSize(TYPE,8,10696,11);
#undef TYPE
#elif __s390x__
#define TYPE std::exception
CheckTypeSize(TYPE,8,10696,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10696,0);
#endif

#if 1
#define TYPE std::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,0,10646,1);
#undef TYPE
#elif __i386__
#define TYPE std::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10646,2);
#undef TYPE
#elif __ia64__
#define TYPE std::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10646,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10646,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10646,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10646,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10646,11);
#undef TYPE
#elif __s390x__
#define TYPE std::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10646,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10646,0);
#endif

#if 1
#define TYPE std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,0,10660,1);
#undef TYPE
#elif __i386__
#define TYPE std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10660,2);
#undef TYPE
#elif __ia64__
#define TYPE std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10660,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10660,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10660,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10660,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10660,11);
#undef TYPE
#elif __s390x__
#define TYPE std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10660,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10660,0);
#endif

#if 1
#define TYPE std::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,0,10647,1);
#undef TYPE
#elif __i386__
#define TYPE std::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10647,2);
#undef TYPE
#elif __ia64__
#define TYPE std::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10647,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10647,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10647,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,8,10647,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10647,11);
#undef TYPE
#elif __s390x__
#define TYPE std::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
CheckTypeSize(TYPE,16,10647,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10647,0);
#endif

#if 1
#define TYPE std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,0,10661,1);
#undef TYPE
#elif __i386__
#define TYPE std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10661,2);
#undef TYPE
#elif __ia64__
#define TYPE std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10661,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10661,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10661,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,8,10661,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10661,11);
#undef TYPE
#elif __s390x__
#define TYPE std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
CheckTypeSize(TYPE,16,10661,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10661,0);
#endif

#if 1
#define TYPE std::strstream
CheckTypeSize(TYPE,0,10695,1);
#undef TYPE
#elif __i386__
#define TYPE std::strstream
CheckTypeSize(TYPE,192,10695,2);
#undef TYPE
#elif __ia64__
#define TYPE std::strstream
CheckTypeSize(TYPE,376,10695,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::strstream
CheckTypeSize(TYPE,192,10695,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::strstream
CheckTypeSize(TYPE,376,10695,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::strstream
CheckTypeSize(TYPE,192,10695,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::strstream
CheckTypeSize(TYPE,376,10695,11);
#undef TYPE
#elif __s390x__
#define TYPE std::strstream
CheckTypeSize(TYPE,376,10695,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10695,0);
#endif

#if 1
#define TYPE std::time_base
CheckTypeSize(TYPE,0,10672,1);
#undef TYPE
#elif __i386__
#define TYPE std::time_base
CheckTypeSize(TYPE,1,10672,2);
#undef TYPE
#elif __ia64__
#define TYPE std::time_base
CheckTypeSize(TYPE,1,10672,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::time_base
CheckTypeSize(TYPE,1,10672,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::time_base
CheckTypeSize(TYPE,1,10672,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::time_base
CheckTypeSize(TYPE,1,10672,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::time_base
CheckTypeSize(TYPE,1,10672,11);
#undef TYPE
#elif __s390x__
#define TYPE std::time_base
CheckTypeSize(TYPE,1,10672,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10672,0);
#endif

#if 1
#define TYPE std::type_info
CheckTypeSize(TYPE,0,10699,1);
#undef TYPE
#elif __i386__
#define TYPE std::type_info
CheckTypeSize(TYPE,8,10699,2);
#undef TYPE
#elif __ia64__
#define TYPE std::type_info
CheckTypeSize(TYPE,16,10699,3);
#undef TYPE
#elif __powerpc__ && !__powerpc64__
#define TYPE std::type_info
CheckTypeSize(TYPE,8,10699,6);
#undef TYPE
#elif __powerpc64__
#define TYPE std::type_info
CheckTypeSize(TYPE,16,10699,9);
#undef TYPE
#elif __s390__ && !__s390x__
#define TYPE std::type_info
CheckTypeSize(TYPE,8,10699,10);
#undef TYPE
#elif __x86_64__
#define TYPE std::type_info
CheckTypeSize(TYPE,16,10699,11);
#undef TYPE
#elif __s390x__
#define TYPE std::type_info
CheckTypeSize(TYPE,16,10699,12);
#undef TYPE
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10699,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in C++ types\n\n",pcnt,cnt);
return cnt;
#endif

}
