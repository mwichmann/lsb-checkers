/* Interface for generating TET like report journals
 *
 * This intended to be a simple way of creating journals which
 * can be analysed using standard TET journal tools without
 * having to compile or link against the TET libraries.
 * 
 * (C) Copyright 2002 The Free Standards Group Inc
 *
 * 2002/03/19 Chris Yeoh, IBM
 *
 * This is $Revision: 1.7 $
 * 
 * $Log: tetj.c,v $
 * Revision 1.7  2006/01/14 14:09:33  mats
 * Provide support for VSX_NAME standard (bug 986)
 *
 * Revision 1.6  2005/12/15 15:07:05  mats
 * Assorted cleanups: tetjtest and python self test pretty much match now
 * in journal format (python selftest presents tests in different order)
 *
 * Revision 1.5  2005/06/10 18:17:20  mats
 * Add support for 40 (config end) and 70 (scenario info) lines.
 * Update README to reflect what's supported and what isn't.
 *
 * Revision 1.4  2005/05/04 00:07:03  mats
 * Some formatting cleanup to make tet journal tools happier on this
 * emulated journal stuff
 *
 * Revision 1.3  2002/04/29 04:39:06  cyeoh
 * Adds support for 'IC Start' and 'IC End' markers in
 * the journal file
 *
 * Revision 1.2  2002/04/29 04:12:05  cyeoh
 * Adds tetj_purpose_end
 * Adds IC Start markers
 *
 * Revision 1.1  2002/03/19 06:07:49  cyeoh
 * Adds simple interface for generating TET journals
 *
 *
 */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/utsname.h>
#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <pwd.h>
#include <errno.h>

#include "tetj.h"

struct tetj_handle
{
  FILE *journal;
};

int tetj_activity_count = 0;
int tetj_tp_count = 0;
char *tetj_vers = "tetj-1.0";
char *tetj_arch = "(noarch)";

static char *get_current_time_string()
{
  static char time_string[20];
  time_t current_time;

  current_time = time(NULL);
  strftime(time_string, 20, "%H:%M:%S", localtime(&current_time));
  return time_string;
}

static char *get_result_string(enum testcase_results result)
{
  switch (result)
  {
  case TETJ_PASS: 
    return "PASS";
  case TETJ_FAIL:
    return "FAIL";
  case TETJ_UNRESOLVED:
    return "UNRESOLVED";
  case TETJ_NOTINUSE:
    return "NOTINUSE";
  case TETJ_UNSUPPORTED:
    return "UNSUPPORTED";
  case TETJ_UNTESTED:
    return "UNTESTED";
  case TETJ_UNINITIATED:
    return "UNITIATED";
  case TETJ_UNREPORTED:
    return "UNREPORTED";
  case TETJ_WARNING:
    return "WARNING";
  case TETJ_FIP:
    return "FIP";
  case TETJ_NOTIMP:
    return "NOTIMP";
  case TETJ_UNAPPROVE:
    return "UNAPPROVE";
  default:
    return "UNKNOWN";
  }
}

int tetj_start_journal(const char *pathname, struct tetj_handle **handle,
                       char *command_run)
{
  static struct utsname uname_info;
  char datetime[20];
  time_t current_time;
  uid_t uid;
  struct passwd *pwent;

  *handle = malloc(sizeof(struct tetj_handle));

  if ( ((*handle)->journal = fopen(pathname, "w")) == NULL ) {
    return errno;
  }
  
  if (uname(&uname_info)!=0) {
    return errno;
  }    
  tetj_arch = uname_info.machine;

  current_time = time(NULL);
  strftime(datetime, 20, "%H:%M:%S %Y%m%d", localtime(&current_time));
  uid = getuid();
  pwent = getpwuid(uid);
  
  fprintf((*handle)->journal, 
          "0|%s %s|User: %s (%i) TCC Start, Command line: %s\n",
          tetj_vers, datetime, pwent ? pwent->pw_name : "", uid, command_run);

  fprintf((*handle)->journal, "5|%s %s %s %s %s|System Information\n",
          uname_info.sysname, uname_info.nodename, uname_info.release,
          uname_info.version, uname_info.machine);
          
  return 0;
}

int tetj_close_journal(struct tetj_handle *handle)
{
  if (handle) {
    fprintf(handle->journal, "900|%s|TCC End\n", get_current_time_string());
    return fclose(handle->journal);
  } else {
    return 0;
  }
}

void tetj_config_start(struct tetj_handle *handle)
{
  if (handle) {
    fprintf(handle->journal, "20||Config Start\n");
  }
}

void tetj_add_config(struct tetj_handle *handle, char *message)
{
  if (handle) {
    fprintf(handle->journal, "30||%s\n", message);
  }
}

void tetj_config_end(struct tetj_handle *handle)
{
  if (handle) {
    fprintf(handle->journal, "40||Config End\n");
  }
}

void tetj_scenario_info(struct tetj_handle *handle, char *message)
{
  if (handle) {
    fprintf(handle->journal, "70||%s\n", message);
  }
}

void tetj_add_controller_error(struct tetj_handle *handle, char *message)
{
  if (handle) {
    fprintf(handle->journal, "50||%s\n", message);
  }
}

void tetj_testcase_start(struct tetj_handle *handle, 
                         unsigned int activity, char *testcase, 
                         char *message)
{
  if (handle) {
    fprintf(handle->journal, "10|%u %s %s|TC Start %s\n",
            activity, testcase, get_current_time_string(), message);
    fprintf(handle->journal, "15|%u %s 1|TCM Start %s\n", activity, 
	    tetj_vers, message);
  }
}

void tetj_testcase_end(struct tetj_handle *handle, 
                       unsigned int activity, unsigned int status,
                       char *message)
{
  if (handle) {
    fprintf(handle->journal, "80|%u %u %s|TC End %s\n",
            activity, status, get_current_time_string(), message);
  }
}

void tetj_purpose_start(struct tetj_handle *handle,
                        unsigned int activity, unsigned int tpnumber, 
                        char *message)
{
  if (handle) {
    fprintf(handle->journal, "400|%u %u 1 %s|IC Start\n",
            activity, tpnumber, get_current_time_string());
    fprintf(handle->journal, "200|%u %u %s|%s\n",
            activity, tpnumber, get_current_time_string(), message);
  }
}

void tetj_purpose_end(struct tetj_handle *handle,
                      unsigned int activity, unsigned int tpnumber)
{
  if (handle) {
    fprintf(handle->journal, "410|%u %u 1 %s|IC End\n",
            activity, tpnumber, get_current_time_string());
  }
}

void tetj_result(struct tetj_handle *handle, 
                 unsigned int activity, unsigned int tpnumber, 
                 enum testcase_results result)
{
  if (handle) {
    fprintf(handle->journal, "220|%u %u %i %s|%s\n",
            activity, tpnumber, result, get_current_time_string(),
            get_result_string(result));
  }
}

void tetj_testcase_info(struct tetj_handle *handle,
                        unsigned int activity, unsigned int tpnumber,
                        unsigned int context, unsigned int block,
                        unsigned int sequence, char *message)
{
  if (handle) {
    fprintf(handle->journal, "520|%u %u %u %u %u|%s\n",
            activity, tpnumber, context, block, sequence, message);
  }
}
