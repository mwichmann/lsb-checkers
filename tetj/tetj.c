/* Interface for generating TET like report journals
 *
 * tetj provides a way of creating test execution logs (jourals) in a format
 * which can be analysed using standard TET journal tools without having to
 * compile or link against the TET libraries.  It does not intend to be a
 * full working TET implementation
 * 
 * Author: 2002/03/19 Chris Yeoh, IBM on behalf of the LSB project
 *
 * Copyright (c) 2002-2009, Linux Foundation
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Linux Foundation nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 * TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
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
