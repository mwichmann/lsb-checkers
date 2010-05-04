/*
 * Test of gtk-unix-print-2.0/gtk/gtkunixprint.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "gtk-unix-print-2.0/gtk/gtkunixprint.h"



#ifdef TET_TEST
void gtk_unix_print_2_0_gtk_gtkunixprint_h()
{
#else
int gtk_unix_print_2_0_gtk_gtkunixprint_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in gtk-unix-print-2.0/gtk/gtkunixprint.h\n");
#endif

printf("Checking data structures in gtk-unix-print-2.0/gtk/gtkunixprint.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef __GTK_UNIX_PRINT_H__
Msg( "Error: Constant not found: __GTK_UNIX_PRINT_H__\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef __GTK_UNIX_PRINT_H_INSIDE__
Msg( "Error: Constant not found: __GTK_UNIX_PRINT_H_INSIDE__\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for gtk-unix-print-2.0/gtk/gtkunixprint.h depends on gtkpagesetupunixdialog.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for gtk-unix-print-2.0/gtk/gtkunixprint.h depends on gtkprinter.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for gtk-unix-print-2.0/gtk/gtkunixprint.h depends on gtkprintjob.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for gtk-unix-print-2.0/gtk/gtkunixprint.h depends on gtkprintunixdialog.h */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in gtk-unix-print-2.0/gtk/gtkunixprint.h\n\n",pcnt,cnt);
return cnt;
#endif

}
