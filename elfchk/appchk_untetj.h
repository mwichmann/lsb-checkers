#ifndef __APPCHK_UNTETJ_H
#define __APPCHK_UNTETJ_H

#include "../appchk/output.h"

/* Redefining the tetj function calls to use appchk's output.c report
   when appropriate.  This is a hack, but necessary to prevent the new
   appchk report from touching the entire misc-test source tree.  In
   the future, a refactor of all of misc-test would be a good idea. */

#define tetj_testcase_start(j, a, t, m) TESTCASE_START(a, t, m)
#define tetj_purpose_start(j, a, t, m) PURPOSE_START(a, t, m)
#define tetj_purpose_end(j, a, t) PURPOSE_END(a, t)
#define tetj_testcase_end(j, a, s, m) TESTCASE_END(a, s, m)
#define tetj_testcase_info(j, a, t, c, b, s, m) TESTCASE_INFO(a, t, c, b, s, m)
#define tetj_result(j, a, t, r) RESULT(a, t, r)

#endif
