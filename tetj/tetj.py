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
# This is $Revision: 1.3 $
#
# $Log: tetj.py,v $
# Revision 1.3  2003/11/12 17:17:12  mats
# Add in missing field for 400/410 lines (for now, just hardcode it as '1')
#
# Revision 1.2  2003/11/12 00:46:08  mats
# Revision pass to make a "Journal" a class so it can hold state and
# simplify a lot of the passing around of variables.
#
# Revision 1.1  2002/09/20 15:12:24  mwichmann
# Initial converted version.  Includes a self-test harness.
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
    def __init__(self, pathname, command_run):
	"""starts a new journal file"""
	try:
	    self.journal = open(pathname, 'w')
	except IOerror:
	    self.journal = None
	self.activity = -1	# count will start at 0
	self.testcase = 0

	(sysname, nodename, release, version, machine) = os.uname()
	datetime = time.strftime("%H:%M:%S %Y%m%d")
	uid = os.getuid();
	try:
	    pwent = pwd.getpwuid(uid);
	except KeyError:
	    pwent = ""
  
	self.journal.write("0|lsb-0.2 %s|User: %s (%i) TCC Start, Command line: %s\n" %
	      (datetime, pwent[0], uid, command_run))

	self.journal.write("5|%s %s %s %s %s|System Information\n" %
	      (sysname, nodename, release, version, machine))

    def close(self):
	"""closes a journal file and finishes all processing"""
	#XXX todo: flush all the stuff
	if self.journal:
	    self.journal.write("900|%s|TCC End\n" % get_current_time_string())

    def add_config(self, message):
	if self.journal:
	    self.journal.write("30||%s\n" % message)

    def add_controller_error(self, message):
	if self.journal:
	    self.journal.write("50||%s\n" % message)

    def testcase_start(self, message=None):
	self.activity += 1
	self.testcase = 0
	if self.journal:
	    self.journal.write("10|%u %s %s|TC Start" %
		(self.activity, self.testcase, get_current_time_string()))
	    if message: 
		self.journal.write(", %s\n" % message)
	    else:
		self.journal.write("\n")

    def testcase_end(self, message=None):
	if self.journal:
	    self.journal.write("80|%u %s %s|TC End" %
		(self.activity, self.testcase, get_current_time_string()))
	    if message: 
		self.journal.write(", %s\n" % message)
	    else:
		self.journal.write("\n")

    def purpose_start(self, message=None):
	self.testcase += 1
	if self.journal:
	    # This is a shortcut.  It assumes that every invocable component
	    # has a single test purpose, instead of potentially multiple ones.
	    # The wrapping should be: 400 (200 220) (200 220) ... 410
	    # Instead we make the call purpose_start mean 400 200,
	    # and predict the tp count within that ic as (hardwired) 1
	    self.journal.write("400|%u %u 1 %s|IC Start\n" %
		(self.activity, self.testcase, get_current_time_string()))
	    self.journal.write("200|%u %u %s|TP Start" %
		(self.activity, self.testcase, get_current_time_string()))
	    if message: 
		self.journal.write(", %s\n" % message)
	    else:
		self.journal.write("\n")

    def purpose_end(self):
	if self.journal:
	    # see note above: the hardwired '1' should be a actual count
	    self.journal.write("410|%u %u 1 %s|IC End\n" %
		(self.activity, self.testcase, get_current_time_string()))

    def result(self, result):
	if self.journal:
	    code = result_codes.get(result, "UNKNOWN")
	    self.journal.write("220|%u %u %i %s|%s\n" %
		(self.activity, self.testcase, result,
		 get_current_time_string(), code))

    def testcase_info(self, context, block, sequence, message):
	if self.journal:
	    self.journal.write("520|%u %u %u %u %u|%s\n" %
		(self.activity,self.testcase,context,block,sequence,message))


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
    print "tetj.py: writing journal to journal.tetjtest"
    journal = Journal("journal.tetjtest", "tetjtest")
    journal.add_config("VSX_NAME=tetjtest unofficial")
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
