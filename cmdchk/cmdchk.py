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
# This is $Revision: 1.2 $
#
# $Log: cmdchk.py,v $
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
        "/bin/",
        "/sbin/",
        "/usr/bin/",
        "/usr/sbin/",
        "/usr/X11R6/bin/"
]

prefix = ""


def check_cmd(journal, cmdname, cmdpath):
    journal.testcase_start(cmdname)
    tmp_string = "Looking for command %s" % cmdname
    journal.purpose_start(tmp_string)

    if cmdname[0] != '/':
        # Check each of the directories in binpaths for the command
        for i in binpaths:
            filename = prefix + i + cmdname
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
            # not found at all
            sys.stderr.write("Couldn't find %s\n" % cmdname)
            journal.result(tetj.TETJ_FAIL)
    # else:     # duplicate most of the above logic to seach full paths
                # (not used currently). no need to loop through binpaths

    journal.purpose_end()
    journal.testcase_end()

def parse_cmds(cmdfile):
    cmds = []
    for line in open(cmdfile).readlines():
        if line[0] == '#': continue
        items = line.split()         # two elements per line
        cmds.append(items)
    return cmds


if len(sys.argv) > 1:
        prefix = sys.argv[1]
journal = tetj.Journal("journal.lsbcmdchk", "lsbcmdchk")
if not journal.journal:
    sys.stderr.write("Could not open journal file")
    sys.exit(1)

tmp_string = "VSX_NAME=lsbcmdchk experimental"
journal.add_config(tmp_string)
tmp_string = "search prefix is [%s]" % prefix
journal.add_config(tmp_string)
items = parse_cmds("cmdlist")
for (command, cmdpath) in items:
    check_cmd(journal, command, cmdpath)
journal.close()
sys.exit(0)
