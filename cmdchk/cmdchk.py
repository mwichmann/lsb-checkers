#!/usr/bin/env python
'''
Test for presence of LSB required commands
Commands are stored in the file cmdlist

Usage: cmdchk [prefix]
Prefix, if supplied, is a prefix to prepend to all paths
'''

# (C) Copyright 2002, 2003 The Free Standards Group, Inc.
#
# Python version
# Author: Mats Wichmann, Intel Corporation
#
# This is $Revision: 1.4 $
#
# $Log: cmdchk.py,v $
# Revision 1.4  2004/01/29 23:03:15  mats
# Check in a version that includes a "reverse check" (mainly for the si).
# Needs more work so this check can be optional and results logged.
#
# Revision 1.3  2003/11/18 16:44:35  mats
# minor simplification
#
# Revision 1.2  2003/11/12 00:46:08  mats
# Revision pass to make a "Journal" a class so it can hold state and
# simplify a lot of the passing around of variables.
#
# Revision 1.1  2002/09/20 15:52:48  mwichmann
# Added Python version of cmdchk.  This is an experiment to further test out
# the Python tetj, it's not proposed to add to the lsbcmdchk pkg at this time
#
#

import os, sys
from os import R_OK, X_OK
import tetj

binpaths = [
        "/bin",
        "/sbin",
        "/usr/bin",
        "/usr/sbin",
        "/usr/X11R6/bin"
]

prefix = ""

class Path:
    def __init__(self, name):
	self.name = name


def check_cmd(journal, cmdname):
    """check if a command name is found in any of the binpaths"""
    journal.testcase_start(cmdname)
    tmp_string = "Looking for command %s" % cmdname
    journal.purpose_start(tmp_string)

    # Check each of the directories in binpaths for the command
    for path in binpaths:
	if prefix:
	    path = prefix + path
	filename = path + os.sep + cmdname
	if os.access(filename,R_OK|X_OK):
	    journal.result(tetj.TETJ_PASS)
	    break

	if os.path.exists(filename):
	    # access() failed but it exists: issue a FIP
	    # (probably need to be running as root)
	    sys.stderr.write("Couldn't access %s\n" % cmdname)
	    tmp_string = "File found cannot be accessed: " + filename
	    journal.testcase_info(0, 1, 1, tmp_string)
	    journal.result(tetj.TETJ_FIP)
	    break

    else: 
        # no breaks: not found at all
	sys.stderr.write("Couldn't find %s\n" % cmdname)
	journal.result(tetj.TETJ_FAIL)

    journal.purpose_end()
    journal.testcase_end()


def check_extras(journal, database):
    """collect all the commands in binpaths. Strike them off if they
    match ones in the command list. Print the rest"""
    pathvec = []
    for path in binpaths:
	if prefix:
	    path = prefix + path
	i = Path(path)
	i.cmds = os.listdir(path)
	for command in i.cmds:
	    if command in database.cmds:
		i.cmds.remove(command)
	pathvec.append(i)

    for i in pathvec:
	if len(i.cmds):
	    sys.stderr.write("Extra commands in %s:\n" % i.name)
	    for cmd in i.cmds:
		sys.stderr.write("   " + cmd + "\n")


def parse_cmds(cmdfile):
    i = Path("database")
    cmds = []
    for line in open(cmdfile).readlines():
        if line[0] == '#': continue
        cmds.append(line.split()[0])	# two elements per line
    i.cmds = cmds
    return i


if len(sys.argv) > 1:
    prefix = sys.argv[1]

journal = tetj.Journal("journal.lsbcmdchk", "lsbcmdchk")
if not journal.journal:
    sys.stderr.write("Could not open journal file")
    sys.exit(1)

journal.add_config("VSX_NAME=lsbcmdchk experimental")
journal.add_config("search prefix is [%s]" % prefix)
database = parse_cmds("cmdlist")
for command in database.cmds:
    check_cmd(journal, command)
check_extras(journal, database)
journal.close()
sys.exit(0)
