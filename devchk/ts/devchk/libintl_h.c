/*
 * Test of libintl.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "libintl.h"



#ifdef TET_TEST
void libintl_h()
{
#else
int libintl_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in libintl.h\n");
#endif

printf("Checking data structures in libintl.h\n");
extern char * bindtextdomain_db(const char *, const char *);
CheckInterfacedef(bindtextdomain,bindtextdomain_db);
extern char * dcgettext_db(const char *, const char *, int);
CheckInterfacedef(dcgettext,dcgettext_db);
extern char * dgettext_db(const char *, const char *);
CheckInterfacedef(dgettext,dgettext_db);
extern char * gettext_db(const char *);
CheckInterfacedef(gettext,gettext_db);
extern char * textdomain_db(const char *);
CheckInterfacedef(textdomain,textdomain_db);
extern char * bind_textdomain_codeset_db(const char *, const char *);
CheckInterfacedef(bind_textdomain_codeset,bind_textdomain_codeset_db);
extern char * dcngettext_db(const char *, const char *, const char *, unsigned long int, int);
CheckInterfacedef(dcngettext,dcngettext_db);
extern char * dngettext_db(const char *, const char *, const char *, unsigned long int);
CheckInterfacedef(dngettext,dngettext_db);
extern char * ngettext_db(const char *, const char *, unsigned long int);
CheckInterfacedef(ngettext,ngettext_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libintl.h\n\n",pcnt,cnt);
return cnt;
#endif

}
