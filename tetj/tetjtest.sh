#!/bin/sh
#
# example tetj-using program, used as a primitive self-test
# (POSIX shell version)
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

. tetj.sh

info="This should be information about why the test case did not succeed"

tetj_init "journal.tetjtest-sh" "$0"
echo "tetjtest.sh: writing journal to $tetj_journal"
tetj_add_config "VSX_NAME=tetjtest-sh 0.1 (`uname -m`)"
tetj_config_end
tetj_scenario_info "total tests in tetjtest 24"

tetj_testcase_start "foo"
while read purpose tpresult
do
    tetj_purpose_start $purpose
    if [ $tpresult != "PASS" ]
    then
	tetj_testcase_info "$info"
    fi
    tetj_result $tpresult
    tetj_purpose_end
done <<FOOFOO
red PASS
green FAIL
blue UNRESOLVED
white NOTINUSE
black UNSUPPORTED
purple UNTESTED
teal UNINITIATED
yellow UNREPORTED
orange WARNING
plum FIP
foxglove NOTIMP
alabaster UNAPPROVE
FOOFOO
tetj_testcase_end "foo"

tetj_testcase_start "bar"
while read purpose tpresult
do
    tetj_purpose_start $purpose
    if [ $tpresult != "PASS" ]
    then
	tetj_testcase_info "$info"
    fi
    tetj_result $tpresult
    tetj_purpose_end
done <<FOOFOO
red PASS
green FAIL
blue UNRESOLVED
white NOTINUSE
black UNSUPPORTED
purple UNTESTED
teal UNINITIATED
yellow UNREPORTED
orange WARNING
plum FIP
foxglove NOTIMP
alabaster UNAPPROVE
FOOFOO
tetj_testcase_end "bar"

tetj_close
