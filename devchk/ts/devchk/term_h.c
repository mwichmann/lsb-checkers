/*
 * Test of term.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "term.h"



#ifdef TET_TEST
void term_h()
{
#else
int term_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in term.h\n");
#endif

printf("Checking data structures in term.h\n");
extern int putp_db(const char *);
CheckInterfacedef(putp,putp_db);
extern int tigetflag_db(const char *);
CheckInterfacedef(tigetflag,tigetflag_db);
extern int tigetnum_db(const char *);
CheckInterfacedef(tigetnum,tigetnum_db);
extern char * tigetstr_db(const char *);
CheckInterfacedef(tigetstr,tigetstr_db);
extern char * tparm_db(const char *, ...);
CheckInterfacedef(tparm,tparm_db);
extern TERMINAL * set_curterm_db(TERMINAL *);
CheckInterfacedef(set_curterm,set_curterm_db);
extern int del_curterm_db(TERMINAL *);
CheckInterfacedef(del_curterm,del_curterm_db);
extern int restartterm_db(char *, int, int *);
CheckInterfacedef(restartterm,restartterm_db);
extern int setupterm_db(char *, int, int *);
CheckInterfacedef(setupterm,setupterm_db);
extern char * tgetstr_db(char *, char * *);
CheckInterfacedef(tgetstr,tgetstr_db);
extern char * tgoto_db(const char *, int, int);
CheckInterfacedef(tgoto,tgoto_db);
extern int tgetent_db(char *, const char *);
CheckInterfacedef(tgetent,tgetent_db);
extern int tgetflag_db(char *);
CheckInterfacedef(tgetflag,tgetflag_db);
extern int tgetnum_db(char *);
CheckInterfacedef(tgetnum,tgetnum_db);
extern int tputs_db(const char *, int, int(*fptr0)(int)
);
CheckInterfacedef(tputs,tputs_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in term.h\n\n",pcnt,cnt);
return cnt;
#endif

}
