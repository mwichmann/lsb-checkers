/*
 * Test of X11/X.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "X11/X.h"



int X11_X_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(Window,4,8176)
#elif __ia64__
CheckTypeSize(Window,8,8176)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8176,0);
#endif
#ifdef __i386__
CheckTypeSize(Font,4,8177)
#elif __ia64__
CheckTypeSize(Font,8,8177)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8177,0);
#endif
#ifdef __i386__
CheckTypeSize(Pixmap,4,8178)
#elif __ia64__
CheckTypeSize(Pixmap,8,8178)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8178,0);
#endif
printf("%d tests in X11/X.h\n",cnt);
return cnt;
}
