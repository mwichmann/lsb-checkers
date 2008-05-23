#ifndef LSBCC_MODE
#ifdef __USE_FORTIFY_LEVEL
#undef __USE_FORTIFY_LEVEL
#endif
#define __USE_FORTIFY_LEVEL 2
#endif
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
