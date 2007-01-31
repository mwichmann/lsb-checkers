#!/usr/bin/env python
#
# Interface for generating TET like report journals
#
# This intended to be a simple way of creating journals which
# can be analysed using standard TET journal tools without
# having to compile or link against the TET libraries.
#
# (C) Copyright 2002,2003 The Free Standards Group, Inc.
#
# Python module originally converted from C version (tetj.c 1.3)
# Author: Mats Wichmann, Intel Corporation
#
# This is $Revision: 1.11 $
#
#
#
import sys, os, pwd, time

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

result_codes = {
    TETJ_PASS: "PASS",
    TETJ_FAIL: "FAIL",
    TETJ_UNRESOLVED: "UNRESOLVED",
    TETJ_NOTINUSE: "NOTINUSE",
    TETJ_UNSUPPORTED: "UNSUPPORTED",
    TETJ_UNTESTED: "UNTESTED",
    TETJ_UNINITIATED: "UNITIATED",
    TETJ_UNREPORTED: "UNREPORTED",
    TETJ_WARNING: "WARNING",
    TETJ_FIP: "FIP",
    TETJ_NOTIMP: "NOTIMP",
    TETJ_UNAPPROVE: "UNAPPROVE",
}


def get_current_time_string():
    return time.strftime("%H:%M:%S")

class Journal:
    tetj_vers = "tetj.py-1.0"

    def __init__(self, pathname, command_run):
        """starts a new journal file"""
        try:
            self.journalfile = open(pathname, 'w')
        except IOerror:
            raise
        self.journal = []
        self.activity = -1	# count will start at 0
        self.testcase = 0

        (sysname, nodename, release, version, machine) = os.uname()
	self.machine = machine		# in case the test needs it
        datetime = time.strftime("%H:%M:%S %Y%m%d")
        uid = os.getuid();
        try:
            pwent = pwd.getpwuid(uid);
        except KeyError:
            pwent = "Unknown"
  
        tmpl = "0|%s %s|User: %s (%i) TCC Start, Command line: %s\n"
        self.journal.append(tmpl % (self.tetj_vers, datetime, pwent[0],
		                    uid, command_run))

        tmpl= "5|%s %s %s %s %s|System Information\n"
        self.journal.append(tmpl % (sysname, nodename, release, version,
		                    machine))

    def close(self):
        """closes a journal file and finishes all processing"""
        self.journal.append("900|%s|TCC End\n" % get_current_time_string())
        self.journalfile.writelines(self.journal)
        self.journalfile.close()

    def config_start(self):
        self.journal.append("20||Config Start\n")

    def add_config(self, message):
        self.journal.append("30||%s\n" % message)

    def config_end(self):
        self.journal.append("40||Config End\n")

    def scenario_info(self, message):
        self.journal.append("70||%s\n" % message)

    def add_controller_error(self, message):
        self.journal.append("50||%s\n" % message)

    def testcase_start(self, testpath, message=None):
        self.activity += 1
        self.testcase = 0
        self.journal.append("10|%u %s %s|TC Start" %
            (self.activity, testpath, get_current_time_string()))
        if message: 
            self.journal.append(", %s\n" % message)
        else:
            self.journal.append("\n")
        self.journal.append("15|%u %s 1|TCM Start\n" % (self.activity, self.tetj_vers))

    def testcase_end(self, message=None):
        self.journal.append("80|%u 0 %s|TC End" %
            (self.activity, get_current_time_string()))
        if message: 
            self.journal.append(", %s\n" % message)
        else:
            self.journal.append("\n")

    def purpose_start(self, message=None):
        # This is a shortcut.  It assumes that every invocable component
        # has a single test purpose, instead of potentially multiple ones.
        # The wrapping should be: 400 (200 220) (200 220) ... 410
        # Instead we make the call purpose_start mean 400 200,
        # and predict the tp count within that ic as (hardwired) 1
        self.testcase += 1
        self.journal.append("400|%u %u 1 %s|IC Start\n" %
            (self.activity, self.testcase, get_current_time_string()))
        self.journal.append("200|%u %u %s|TP Start" %
            (self.activity, self.testcase, get_current_time_string()))
        if message: 
            self.journal.append(", %s\n" % message)
        else:
            self.journal.append("\n")

    def purpose_end(self):
        # see note above: the hardwired '1' shouldn't be
        self.journal.append("410|%u %u 1 %s|IC End\n" %
            (self.activity, self.testcase, get_current_time_string()))

    def result(self, result):
        code = result_codes.get(result, "UNKNOWN")
        self.journal.append("220|%u %u %i %s|%s\n" %
            (self.activity, self.testcase, result,
             get_current_time_string(), code))

    def testcase_info(self, context, block, sequence, message):
        self.journal.append("520|%u %u %u %u %u|%s\n" %
            (self.activity,self.testcase,context,block,sequence,message))

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

    def result_notinuse(self):
        self.result(TETJ_NOTINUSE)

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



def _test():
    # self-test code: exercise a bunch of the stuff,
    # for now there's no feedback as to whether it came out right -
    # just manually scan the journal.tetjtest file
    teststuff = {
        "red": TETJ_PASS,
        "green": TETJ_FAIL,
        "blue": TETJ_UNRESOLVED,
        "white": TETJ_NOTINUSE,
        "black": TETJ_UNSUPPORTED,
        "purple": TETJ_UNTESTED,
        "teal": TETJ_UNINITIATED,
        "yellow": TETJ_UNREPORTED,
        "orange": TETJ_WARNING,
        "plum": TETJ_FIP,
        "foxglove": TETJ_NOTIMP,
        "alabaster": TETJ_UNAPPROVE
    }
    try:
        journal = Journal("journal.tetjtest", "tetjtest")
    except:
        print "Cannot create journal.tetjtest"
        sys.exit(1)
    print "tetj.py: writing journal to journal.tetjtest"

    journal.add_config("VSX_NAME=lsb-tetjtest.py 0.1 (%s)" % journal.machine)
    journal.config_end()
    journal.scenario_info("\"total tests in tetjtest 24\"")

    journal.testcase_start("foo")
    for (purpose, tpresult) in teststuff.items():
        journal.purpose_start(purpose)
        journal.result(tpresult)
        journal.purpose_end()
    journal.testcase_end("foo")

    journal.testcase_start("bar")
    for (purpose, tpresult) in teststuff.items():
        journal.purpose_start(purpose)
        journal.result(tpresult)
        journal.purpose_end()
    journal.testcase_end("bar")

    journal.close()

if __name__ == "__main__":
    _test()
