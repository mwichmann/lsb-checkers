#!/usr/bin/env python
'''
Test for presence of LSB required commands
Commands are stored in the file cmdlist

Usage: cmdchk [prefix]
Prefix, if supplied, is a prefix to prepend to all paths
'''

# (C) Copyright 2002 The Free Standards Group, Inc.
#
# Python version
# 2002/09/20 Mats Wichmann, Intel
#
# This is $Revision: 1.1 $
#
# $Log: cmdchk.py,v $
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


def check_cmd(cmdname, cmdpath, journal):
    tetj.testcase_start(journal, tetj.activity_count, cmdname, "")
    tetj.tp_count = 0

    tetj.tp_count += 1
    tmp_string = "Looking for command %s" % cmdname
    tetj.purpose_start(journal, tetj.activity_count, tetj.tp_count, tmp_string)

    if cmdname[0] != '/':
        # Check each of the directories in binpaths for the command
        for i in binpaths:
            filename = prefix + i + cmdname
            if os.access(filename,R_OK|X_OK):
                tetj.result(journal, tetj.activity_count, tetj.tp_count,
                            tetj.TETJ_PASS)
                break
            if os.path.exists(filename):
                # access() failed but it exists: issue a FIP
                # (probably need to be running as root)
                sys.stderr.write("Couldn't access %s\n" % cmdname)
                tmp_string = "File found cannot be accessed: " + filename
                tetj.testcase_info(journal, tetj.activity_count, tetj.tp_count,
                                   0, 1, 1, tmp_string)
                tetj.result(journal, tetj.activity_count, tetj.tp_count,
                            tetj.TETJ_FIP)
                break
        else:
            # not found at all
            sys.stderr.write("Couldn't find %s\n" % cmdname)
            tetj.result(journal, tetj.activity_count, tetj.tp_count, 
                        tetj.TETJ_FAIL)
    # else:     # duplicate most of the above logic to seach full paths
                # (not used currently). no need to loop through binpaths

    tetj.purpose_end(journal, tetj.activity_count, tetj.tp_count)
    tetj.testcase_end(journal, tetj.activity_count, cmdname, "")
    tetj.activity_count += 1

def parse_cmds(cmdfile):
    cmds = []
    for line in open(cmdfile).readlines():
        if line[0] == '#': continue
        items = line.split()         # two elements per line
        cmds.append(items)
    return cmds


if len(sys.argv) > 1:
        prefix = sys.argv[1]
journal = tetj.start_journal("journal.lsbcmdchk", "lsbcmdchk")
if not journal:
    sys.stderr.write("Could not open journal file")
    sys.exit(1)

tmp_string = "VSX_NAME=lsbcmdchk experimental"
tetj.add_config(journal, tmp_string)
tmp_string = "search prefix is [%s]" % prefix
tetj.add_config(journal, tmp_string)
items = parse_cmds("cmdlist")
for (command, cmdpath) in items:
    check_cmd(command, cmdpath, journal)
tetj.close_journal(journal)
sys.exit(0)
