#!/usr/bin/env python
'''
Test for presence of LSB required commands
Commands are stored in the file cmdlist

Usage: cmdchk [options]
Prefix, if supplied, is a prefix to prepend to all paths
'''

# (C) Copyright 2002-2005 The Free Standards Group
#
# Python version
# Author: Mats Wichmann, Intel Corporation
#
# This is $Revision: 1.8 $
#
# $Log: cmdchk.py,v $
# Revision 1.8  2005/07/02 14:11:47  mats
# Add option parsing; use stat for second-chance check; check-extras
# is now activated by command-line option, not default
#
# Revision 1.7  2005/06/12 16:06:32  mats
# Revamp cmdchk for counting testcases easily; emit test count to journal
#
# Revision 1.6  2004/10/31 14:51:29  mats
# Use new convenience methods for results
#
# Revision 1.5  2004/01/29 23:43:12  mats
# Fix up the report-extras code. Can't remove elements from the same
# list you're stepping through, so step through a temporary copy.
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

import os, sys, stat
from stat import ST_MODE, S_IXUSR
from optparse import OptionParser
import tetj

class Path:
    def __init__(self, name):
        self.name = name
    
    def dump(self, tag):
        sys.stderr.write("%s from %s:\n" % (tag, self.name))
        for cmd in self.cmds:
            sys.stderr.write("   %s\n" % cmd)


def check_cmd(journal, command):
    """check if a command name is found in any of the binpaths"""
    (cmdname, cmdpath) = command
    journal.testcase_start(cmdname)
    journal.purpose_start("Looking for command %s" % cmdname)

    # Check each of the directories in binpaths for the command

    # TODO: LSB bug 1006 - once command paths are cleaned out in DB,
    # if cmdpath is set is set, use it in preference to searching for
    # the cmdname name in binpaths
    # basically, this becomes:
    ##if cmdpath == "None":
    # ... below chunk ...
    ##else:
    ##    # check for the required absolute path */
    ##    if opts.prefix:
    ##        path = opts.prefix + cmdpath
    ##    if os.access(cmdpath, os.X_OK):
    ##        journal.result_pass()
    ##    else:
    ##        sys.stderr.write("Couldn't find %s\n" % cmdpath)
    ##        journal.result_fail()
    for path in binpaths:
        if opts.prefix:
            path = opts.prefix + path
        filename = path + os.sep + cmdname
        if os.access(filename, os.X_OK):
            journal.result_pass()
            break

        if os.path.exists(filename):
            stbuf = os.stat(filename)
            if stbuf[ST_MODE] & S_IXUSR:
                journal.result_pass()
                break

    else: 
        # fallthrough: not found at all
        sys.stderr.write("Couldn't find %s\n" % cmdname)
        journal.result_fail()

    journal.purpose_end()
    journal.testcase_end()


def check_extras(journal, database):
    """collect all the commands in binpaths. Strike them off if they match
    ones in the command list from the LSB database. Report the extras."""
    for path in binpaths:
        if opts.prefix:
            path = opts.prefix + path
        location = Path(path)
        location.cmds = os.listdir(path)
        ## location.dump("DEBUG: initial list")
        #XXX buggy: misses the fullpath ones, and doesn't work with prefix
        for command in location.cmds[:]:        # examine a copy
            if command in database.cmds:
                location.cmds.remove(command)   # so we can remove from orig
        if len(location.cmds):
            location.dump("Extra commands")


def parse_cmds(cmdfile):
    """pull in the required-command list generated from the LSB database"""
    database = Path("database")
    cmds = []
    for line in open(cmdfile).readlines():
        if line[0] == '#': continue
        cmds.append(line.split())       # two elements per line
    database.cmds = cmds
    ## database.dump("DEBUG: initial list")
    return database


## main
if __name__ == '__main__':

    # initialize option parsing
    usage="usage: %prog [options]"
    parser = OptionParser(usage)
    parser.add_option("-e", "--extras",
                      action="store_true", dest="extras", default=False,
                      help="check for extra files in target directories")
    parser.add_option("-p", "--prefix", action="store", dest="prefix",
                      help="prefix to prepend to all paths")
    (opts, args) = parser.parse_args()
    if len(args):
        parser.error("incorrect number of arguments")

    # setup journal file for certification
    journal = tetj.Journal("journal.lsbcmdchk", "lsbcmdchk")
    if not journal.journal:
        sys.stderr.write("Could not open journal file")
        sys.exit(1)
    journal.add_config("VSX_NAME=lsbcmdchk")
    journal.add_config("search prefix is [%s]" % opts.prefix)
    journal.config_end()

    # Look in POSIX-standard path, but also add paths for sysadmin utilities
    binpaths = os.confstr('CS_PATH').split(os.pathsep)
    binpaths = binpaths + '/sbin:/usr/sbin'.split(os.pathsep)
    # XXX until bug 1006 work is done
    binpaths = binpaths + ['/usr/lib/lsb']

    database = parse_cmds("cmdlist")
    journal.scenario_info("\"total tests in cmdchk %d\"" % len(database.cmds))
    for command in database.cmds:
        check_cmd(journal, command)
    if opts.extras:
        check_extras(journal, database)
    journal.close()
    sys.exit(0)
