#ifndef __TETJ_H
#define __TETJ_H

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
 */

/* Handle for journal functions */
struct tetj_handle;

enum testcase_results
{
  TETJ_PASS,
  TETJ_FAIL,
  TETJ_UNRESOLVED,
  TETJ_NOTINUSE,
  TETJ_UNSUPPORTED,
  TETJ_UNTESTED,
  TETJ_UNINITIATED,
  TETJ_UNREPORTED,
  TETJ_WARNING = 101,
  TETJ_FIP,
  TETJ_NOTIMP,
  TETJ_UNAPPROVE
};

/* Open journal */
int tetj_start_journal(const char *pathname, struct tetj_handle **handle,
                       char *command_run);
/* Close journal */
int tetj_close_journal(struct tetj_handle *handle);

/* Start of config information */
void tetj_config_start(struct tetj_handle *handle);

/* Add Config information */
void tetj_add_config(struct tetj_handle *handle, char *message);

/* End of config information */
void tetj_config_end(struct tetj_handle *handle);

/* Scenarion information */
void tetj_scenario_info(struct tetj_handle *handle, char *message);

/* Add controller error message */
void tetj_add_controller_error(struct tetj_handle *handle, char *message);

/* test case start */
void tetj_testcase_start(struct tetj_handle *handle, 
                         unsigned int activity, char *testcase, char *message);

/* test case end */
void tetj_testcase_end(struct tetj_handle *handle, 
                       unsigned int activity, unsigned int status, char *message);

/* test purpose start */
void tetj_purpose_start(struct tetj_handle *handle,
                        unsigned int activity, unsigned int tpnumber, 
                        char *message);

/* test purpose end */
void tetj_purpose_end(struct tetj_handle *handle,
                      unsigned int activity, unsigned int tpnumber);

/* Set testcase result */
void tetj_result(struct tetj_handle *handle,
                 unsigned int activity, unsigned int tpnumber, 
                 enum testcase_results result);

/* testcase info */
void tetj_testcase_info(struct tetj_handle *handle,
                        unsigned int activity, unsigned int tpnumber,
                        unsigned int context, unsigned int block,
                        unsigned int sequence, char *message);

extern int tetj_activity_count;
extern int tetj_tp_count;
extern char *tetj_arch;

#endif
