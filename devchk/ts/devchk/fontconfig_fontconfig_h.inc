struct _FcPattern {};
struct _FcCharSet {};
struct _FcLangSet {};
struct _FcStrList {};
struct _FcStrSet {};
struct _FcConfig {};
struct _FcBlanks {};
struct _FcAtomic {};
struct _FcGlobalCache {};
struct FT_FaceRec_ {};
#define FcGlobalCache FcFileCache
#ifndef LSBCC_MODE
#define _FCINT_H_
#include "fontconfig/fontconfig.h"
#if (FC_MINOR >= 5) || (FC_MAJOR > 2)
extern int FcConfigGetRescanInverval(FcConfig *);
extern FcBool FcConfigSetRescanInverval(FcConfig *, int);
#endif
#endif /* LSBCC_MODE */
