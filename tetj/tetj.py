#!/usr/bin/python
# -*- coding: utf-8 -*-
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
# Python module originally converted from C version (tetj.c 1.3)
# Author: Mats Wichmann, Intel Corporation on behalf of the LSB project
#
# Copyright (C) 2002-2009 The Linux Foundation
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

import sys
import os
import pwd
import time
import cStringIO

TETJ_PASS = 0
TETJ_FAIL = 1
TETJ_UNRESOLVED = 2
TETJ_NOTINUSE = 3
TETJ_UNSUPPORTED = 4
TETJ_UNTESTED = 5
TETJ_UNINITIATED = 6
TETJ_UNREPORTED = 7
TETJ_WARNING = 101
TETJ_FIP = 102
TETJ_NOTIMP = 103
TETJ_UNAPPROVE = 104

RESULT_CODES = {
    TETJ_PASS: 'PASS',
    TETJ_FAIL: 'FAIL',
    TETJ_UNRESOLVED: 'UNRESOLVED',
    TETJ_NOTINUSE: 'NOTINUSE',
    TETJ_UNSUPPORTED: 'UNSUPPORTED',
    TETJ_UNTESTED: 'UNTESTED',
    TETJ_UNINITIATED: 'UNITIATED',
    TETJ_UNREPORTED: 'UNREPORTED',
    TETJ_WARNING: 'WARNING',
    TETJ_FIP: 'FIP',
    TETJ_NOTIMP: 'NOTIMP',
    TETJ_UNAPPROVE: 'UNAPPROVE',
}


def timestr():
    """format current time as needed for tet journal"""
    return time.strftime('%H:%M:%S')


class Journal:
    """ test journal class, implements tetj toolkit"""
    tetj_vers = 'tetj.py-1.1'

    def __init__(self, pathname, command_run):
        """starts a new journal file"""

        try:
            self.journalfile = open(pathname, 'w')
        except IOError:
            raise
        self.journal = []
        self.activity = -1  # count will start at 0
        self.testcase = 0
        self.block = 0
        self.context = 0
        self.sequence = 0
        self.rescode = -1

        (sysname, nodename, release, version, machine) = os.uname()
        self.machine = machine  # in case the test needs it
        datetime = time.strftime('%H:%M:%S %Y%m%d')
        uid = os.getuid()
        try:
            pwent = pwd.getpwuid(uid)
        except KeyError:
            pwent = 'Unknown'

        
        self.__log(0, '%s %s' % (self.tetj_vers, datetime), 
                   'User: %s (%i) TCC Start, Command line: %s' % 
                   (pwent[0], uid, command_run))

        self.__log(5, '%s %s %s %s %s' % (sysname, nodename, release, 
                   version, machine), 'System Information')

    # private methods
    def __log(self, linetype, info, msg):
        """write message to journal with bounds checking"""
        # historically, tet lines limited to 512 bytes, be compatible
        # 3 delimiter chars, as in:  linetype|info|msg\n
        maxlen = 512 - len(str(linetype)) - len(info) - len(msg) -3
        if len(msg) > maxlen:
            self.journal.append("%d|%s|%s\n" % (linetype, info, msg[:maxlen]))
            self.journal.append('510||warning: results file line truncated\n')
        else:
            self.journal.append("%d|%s|%s\n" % (linetype, info, msg))

    def __setcontext(self):
        """update execution context for journals"""
        if self.context != os.getpid():
            self.context = os.getpid()
        self.block = 1
        self.sequence = 1

    def __setblock(self):
        """update execution block for journals"""
        self.block += 1
        self.sequence = 1

    def __error(self, message):
        """log an internal error message"""
        self.__log(510, '', message)

    def close(self):
        """closes a journal file and finishes all processing"""
        self.__log(900, timestr(), 'TCC End')
        self.journalfile.writelines(self.journal)
        self.journalfile.close()

    def config_start(self):
        """log a config-start event"""
        self.__log(20, '', 'Config Start')

    def add_config(self, message):
        """log a configuration description line"""
        self.__log(30, '', message)

    def config_end(self):
        """log a config-end event"""
        self.__log(40, '', 'Config End')

    def scenario_info(self, message):
        """log a scenario info message"""
        self.__log(70, '', message)

    def add_controller_error(self, message):
        """log a (pseudo) controller error event"""
        self.__log(50, '', message)

    def testcase_start(self, testpath, message=""):
        """log a testcase start event"""
        self.activity += 1
        self.testcase = 0
        self.__log(10, '%u %s %s' % (self.activity, testpath, timestr()),
                   'TC Start %s' % message)
        self.__log(15, '%u %s 1' % (self.activity, self.tetj_vers),
                   'TCM Start')

    def testcase_end(self, message=""):
        """log a testcase end event"""
        self.__log(80, '%u 0 %s' % (self.activity, timestr()), 
                   'TC End %s' % message)

    def purpose_start(self, message=""):
        """log a test purpose start event"""
        # This is a shortcut.  It assumes that every invocable component
        # has a single test purpose, instead of potentially multiple ones.
        # The wrapping should be: 400 (200 220) (200 220) ... 410
        # Instead we make the call purpose_start mean 400 200,
        # and predict the tp count within that ic as (hardwired) 1
        self.testcase += 1
        self.__log(400, 
                   '%u %u 1 %s' % (self.activity, self.testcase, timestr()),
                   'IC Start')
        self.__log(200, '%u %u %s' % (self.activity, self.testcase, timestr()),
                   'TP Start %s' %message)

    def purpose_end(self):
        """log a test purpose end event"""
        # log the previously saved result
        # if no result recorded, add a UNREPORTED one
        if self.rescode == -1:
            self.rescode = 7
        res = RESULT_CODES.get(self.rescode, 'UNREPORTED')
        self.__log(220, '%u %u %u %s' % (self.activity, self.testcase, 
                                         self.rescode, timestr()), res)
        self.rescode = -1
        # Now log the test purpose end
        # see note above: the hardwired '1' shouldn't be
        self.__log(410, '%u %u 1 %s' % 
                        (self.activity, self.testcase, timestr()),
                   'IC End')

    def result(self, rescode):
        """log a test result"""
        self.rescode = rescode

    def testcase_info(self, context, block, sequence, message):
        """log a test information line"""
        # note context/block/sequence are now ignored, left in as they
        # were part of the "api"
        if self.context == 0:
            self.__setcontext()
        # in case we got a multi-line info message, split it up
        for line in cStringIO.StringIO(str(message)):
            self.__log(520, 
                       '%u %u %u %u %u' % (self.activity, self.testcase, 
                       self.context, self.block, self.sequence),
                       line.strip())
            self.sequence += 1

    # add convenience methods for results

    def result_pass(self):
        self.result(TETJ_PASS)

    def result_fail(self):
        self.result(TETJ_FAIL)

    def result_unresolved(self):
        self.result(TETJ_UNRESOLVED)

    def result_notinuse(self):
        self.result(TETJ_NOTINUSE)

    def result_unsupported(self):
        self.result(TETJ_UNSUPPORTED)

    def result_untested(self):
        self.result(TETJ_UNTESTED)

    def result_uninitiated(self):
        self.result(TETJ_UNINITIATED)

    def result_unreported(self):
        self.result(TETJ_UNREPORTED)

    def result_warning(self):
        self.result(TETJ_WARNING)

    def result_fip(self):
        self.result(TETJ_FIP)

    def result_notimp(self):
        self.result(TETJ_NOTIMP)

    def result_unapprove(self):
        self.result(TETJ_UNAPPROVE)


#====================================================================
# example tetj-using program, used as a primitive self-test
# (Python version)

def _test():
    """exercise tetj.py code. not a formal selftest but should help"""
    teststuff = [
        ('red', TETJ_PASS),
        ('green', TETJ_FAIL),
        ('blue', TETJ_UNRESOLVED),
        ('white', TETJ_NOTINUSE),
        ('black', TETJ_UNSUPPORTED),
        ('purple', TETJ_UNTESTED),
        ('teal', TETJ_UNINITIATED),
        ('yellow', TETJ_UNREPORTED),
        ('orange', TETJ_WARNING),
        ('plum', TETJ_FIP),
        ('foxglove', TETJ_NOTIMP),
        ('alabaster', TETJ_UNAPPROVE),
    ]

    info = """This should be information about
why the test case did not succeed"""

    try:
        journal = Journal('journal.tetjtest-py', 'tetj.py')
    except IOError:
        print 'Cannot create journal.tetjtest.py'
        sys.exit(1)
    except:
        raise
    print 'tetj.py: writing journal to journal.tetjtest-py'

    journal.add_config('VSX_NAME=tetjtest-py 0.1 (%s)' % journal.machine)
    journal.config_end()
    journal.scenario_info('"total tests in tetjtest 24"')

    journal.testcase_start('foo')
    for (purpose, tpresult) in teststuff:
        journal.purpose_start(purpose)
        if tpresult != TETJ_PASS:
            journal.testcase_info(0, 0, 0, info)
        journal.result(tpresult)
        journal.purpose_end()
    journal.testcase_end('foo')

    journal.testcase_start('bar')
    for (purpose, tpresult) in teststuff:
        journal.purpose_start(purpose)
        if tpresult != TETJ_PASS:
            journal.testcase_info(0, 0, 0, info)
        journal.result(tpresult)
        journal.purpose_end()
    journal.testcase_end('bar')

    journal.close()


if __name__ == '__main__':
    _test()
