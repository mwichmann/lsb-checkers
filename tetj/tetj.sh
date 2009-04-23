#!/bin/sh
#
# Interface for generating TET like report journals
#
# tetj provides a way of creating test execution logs (jourals) in a format
# which can be analysed using standard TET journal tools without having to
# compile or link against the TET libraries.  It does not intend to be a
# full working TET implementation
#
# Over time there's been an effort to add a few minimal smarts
# to avoid it being so easy to make invalid journals, but
# this is still mostly passive code: you have to take
# care of proper usage yourself
#
# The is the POSIX Shell version
# Author: Mats Wichmann, Intel Corporation on behalf of the LSB project
#
# Copyright (C) 2009 The Linux Foundation
# All rights reserved.
# 
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 
#     * Redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer.
#     * Redistributions in binary form must reproduce the above copyright
# notice, this list of conditions and the following disclaimer in the
# documentation and/or other materials provided with the distribution.
#     * Neither the name of the Linux Foundation nor the names of its
# contributors may be used to endorse or promote products derived from
# this software without specific prior written permission.
# 
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
# TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
# PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
# LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
# NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
# SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

# Internal variables

tetj_vers="tetj.sh-0.1"
tetj_block=0
tetj_context=0
tetj_sequence=0
tetj_activity=-1
tetj_testcase=0
tetj_rescode=999
tetj_resname=
tetj_journal=
export tetj_vers tetj_block tetj_context tetj_sequence tetj_activity
export tetj_testcase tetj_rescode tetj_resname tetj_journal

# Internal functions

# tetj_setcontext - set current context and reset block and sequence
tetj_setcontext()
{
    if test $$ -ne $tetj_context
    then
	tetj_context=$$
    fi
    tetj_block=1
    tetj_sequence=1
}

# tetj_setblock - increment the current block, reset sequence to 1
tetj_setblock()
{
    : $((tetj_block += 1))
    tetj_sequence=1
}

# tetj_log - print a line to the execution results file (journal)
# usage: tetj_log line-type fld2 msg ...
tetj_log()
{
    ltype=${1:?}
    fld2="$2"
    shift 2
    msg="$*"
    msgmax=0

    # determine how much of the message we can print
    # the maximum length of a journal line is 512 bytes
    # here, the magic 509 = 512 - 2 field separators - 1 newline
    msgmax=$((509 - ${#ltype} - ${#fld2}))

    # print the line to the journal file
    printf "%d|%s|%.${msgmax}s\n" $ltype "$fld2" "$msg" >> $tetj_journal
    if test ${#msg} -gt $msgmax
    then
        # note: can't call tetj_error here, since it calls this function...
	printf "510||warning: results file line truncated" >> $tetj_journal
    fi
}

# tetj_error - print an (internal) error message to the journal
# usage: tetj_error error_text
tetj_error()
{
    arg="${1:?}"
    tetj_log 510 "" "$arg"
}

# tetj_getcode - look up a result code name in the builtin table
# return 0 if successful with the result number in tetj_rescode
# otherwise return 1 if the code could not be found
# usage: tetj_getcode result_name
tetj_getcode()
{
    resname="${1:?}"
    line=

    while read line
    do
	test $# -gt 0 && shift $#
	eval set -- $line
	if test $# -ge 1 -a "X$2" = "X$resname"
	then
	    tetj_rescode=$1
            tetj_resname=$resname
	    break
	fi
    done <<FOOFOO
0 PASS
1 FAIL
2 UNRESOLVED
3 NOTINUSE
4 UNSUPPORTED
5 UNTESTED
6 UNINITIATED
7 UNREPORTED
101 WARNING
102 FIP
103 NOTIMP
104 UNAPPROVE
FOOFOO
    #done < ${tetj_rescodes:?}

    if test $tetj_rescode -eq 999
    then
	return 1
    fi

    return 0
}

# format current time as needed for tet journal
# usage: timestr
timestr()
{
    date "+%H:%M:%S"
}

#
#===================================================================
# these functions form the tetj API:

# tetj_infoline - print an information line to the execution results file
# usage: tetj_infoline info_message
tetj_infoline()
{
    arg="${1:?}"
    if test $tetj_context -eq 0
    then
	tetj_setcontext
    fi

    tetj_log 520 "$tetj_testnum $tetj_context $tetj_block $tetj_sequence" $arg
    : $((tetj_sequence += 1))
}

# tetj_result - record a test purpose result, to be used at the end of
# the purpose.  done this way so we can detect if we hit end without
# having recorded a result, then we can put something in the journal
# usage: tetj_result result_name
tetj_result()
{
    arg="${1:?}"
    if ! tetj_getcode "$arg"
    then
	tetj_error "invalid result name \"$arg\" passed to tetj_result"
    fi
}

# initialize toolkit and journal file
# usage: tetj_init journal_name command_line
tetj_init()
{
    tetj_journal="${1:?}"
    cmdline="${2:?}"
    > $tetj_journal 2> /dev/null
    if  [ $? -ne 0 ]
    then
        echo "Error: cannot write to $tetj_journal"
        exit 1
    fi
    tetj_rundate="`date '+%H:%M:%S %Y%m%d'`"
    tetj_log 0 "$tetj_vers $tetj_rundate" \
        "User: $LOGNAME ($UID) TCC Start, Command line $cmdline"
    tetj_log 5 "`uname -s` `uname -n` `uname -r` `uname -v` `uname -m`" \
        "System Information"
}

# write closing entry to journal
# usage: tetj_close
tetj_close()
{
    tetj_log 900 "`timestr`" "TCC End"
}

# log a config-start event
# usage: tetj_config_start
tetj_config_start()
{
    tetj_log 20 "" "Config Start"
}

# log a configuration description line
# usage: tetj_add_config config_message
tetj_add_config()
{
    arg="${1:?}"
    tetj_log 30 "" $arg
}

# log a config-end event
# usage: tetj_config_end
tetj_config_end()
{
    tetj_log 40 "" "Config End"
}

# log a scenario info message
# usage: tetj_scenario_info scenario_message
tetj_scenario_info()
{
    arg="${1:?}"
    tetj_log 70 "" "$arg"
}

# log a (pseudo) controller error event
# usage: tetj_add_controller_error error_message
tetj_add_controller_error()
{
    arg="${1:?}"
    tetj_log 50 "" "$arg"
}

# log a testcase start event
# usage: tetj_testcase_start testpath [message]
tetj_testcase_start()
{
    arg="${1:?}"
    : $((tetj_activity += 1))
    tetj_testcase=0
    msg="${2:+}"
    tetj_log 10 "$tetj_activity $arg `timestr`" "$msg"
    tetj_log 15 "$tetj_activity $tetj_vers 1" "TCM Start"
}

# log a testcase end event
# usage: tetj_testcase_end [message]
tetj_testcase_end()
{
    msg="TC End ${1:+}"
    tetj_log 80 "$tetj_activity 0 `timestr`" "$msg"
}

# log a test purpose start event
# usage: tetj_purpose_start [message]
tetj_purpose_start()
{
    # This is a shortcut.  It assumes that every invocable component
    # has a single test purpose, instead of potentially multiple ones.
    # The wrapping should be: 400 (200 220) (200 220) ... 410
    # Instead we make the call purpose_start mean 400 200,
    # and predict the tp count within that ic as (hardwired) 1
    : $((tetj_testcase += 1))
    msg="TP Start ${1:+}"
    tetj_log 400 "$tetj_activity $tetj_testcase 1 `timestr`" "IC Start"
    tetj_log 200 "$tetj_activity $tetj_testcase `timestr`" "$msg"
}

# log a test purpose end event
# usage: tetj_purpose_end
tetj_purpose_end()
{
    # log the previously saved result
    # if no result recorded, add an UNREPORTED one
echo "purpose_end: seeing ($tetj_rescode, $tetj_resname)"
    if test $tetj_rescode -eq 999
    then
	tetj_rescode=7
        tetj_resname="UNREPORTED"
    fi
    tetj_log 220 "$tetj_activity $tetj_testcase $tetj_rescode `timestr`" \
                 "$tetj_resname"
    tetj_rescode=999
    # Now log the test purpose end
    # see note above: the hardwired '1' shouldn't be
    tetj_log 410 "$tetj_activity $tetj_testcase `timestr`" "IC End"
}

# log a test information line
# usage: tetj_testcase_info info_message
tetj_testcase_info()
{
    arg="${1:?}"
    if [ $tetj_context -eq 0 ]
    then
	tetj_setcontext
    fi
    # Python versions splits multi-line info message - TODO
    tetj_log 520 \
    "$tetj_activity $tetj_testcase $tetj_context $tetj_block $tetj_sequence" \
    "$arg"
    : $((tetj_sequence += 1))
}

# convenience functions for results
tetj_result_pass() {
    tetj_result "PASS" 
} 
tetj_result_fail() {
    tetj_result "FAIL" 
} 
tetj_result_unresolved() {
    tetj_result "UNRESOLVED" 
} 
tetj_result_notinuse() {
    tetj_result "NOTINUSE" 
} 
tetj_result_unsupported() {
    tetj_result "UNSUPPORTED" 
} 
tetj_result_untested() {
    tetj_result "UNTESTED" 
} 
tetj_result_uninitiated() {
    tetj_result "UNINITIATED" 
} 
tetj_result_unreported() {
    tetj_result "UNREPORTED" 
} 
tetj_result_warning() {
    tetj_result "WARNING" 
} 
tetj_result_fip() {
    tetj_result "FIP" 
} 
tetj_result_notimp() {
    tetj_result "NOTIMP" 
} 
tetj_result_unapprove() {
    tetj_result "UNAPPROVE" 
} 

# end of tetj API
#===================================================================
