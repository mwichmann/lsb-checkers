#!/usr/bin/python
# -*- coding: utf-8 -*-

# Copyright (C) 2002-2007 Linux Foundation
#
# Python version
# Author: Mats Wichmann, Intel Corporation
#

"""
Test for presence of LSB required commands
Commands are stored in the file cmdlist

Usage: cmdchk [options]
Prefix, if supplied, is a prefix to prepend to all paths
"""

import os
import sys
import stat
from stat import ST_MODE, S_IXUSR
from optparse import OptionParser
import tetj

# these are phony, can't fill in these the normal way

LSBCMDCHK_VERSION = '4.1'
LSB_VERSIONS = @VERSIONS@
LSB_DEFAULT_VERSION = LSB_VERSIONS[-1]

class Path:
    def __init__(self, name):
        self.name = name

    def dump(self, tag):
        sys.stderr.write('%s from %s:\n' % (tag, self.name))
        for cmd in self.cmds:
            sys.stderr.write('   %s\n' % cmd)


def check_cmd(journal, command):
    """check if a command name is found in any of the binpaths"""

    (cmdname, cmdpath) = command
    journal.testcase_start(cmdname)

    # Check each of the directories in binpaths for the command
    # if cmdpath is set is set, use it in preference to searching for
    # the cmdname name in binpaths

    if cmdpath == 'None':
        journal.purpose_start('Looking for command %s' % cmdname)
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
    else:
        # check for the required absolute path */
        journal.purpose_start('Looking for command %s' % cmdpath)
        if opts.prefix:
            path = opts.prefix + cmdpath
        if os.access(cmdpath, os.X_OK):
            journal.result_pass()
        elif os.path.exists(cmdpath):
            stbuf = os.stat(cmdpath)
            if stbuf[ST_MODE] & S_IXUSR:
                journal.result_pass()
        else:
            sys.stderr.write("Couldn't find %s\n" % cmdpath)
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

        # XXX buggy: misses the fullpath ones, and doesn't work with prefix

        for command in location.cmds[:]:  # examine a copy
            if command in database.cmds:
                location.cmds.remove(command)  # so we can remove from orig
        if len(location.cmds):
            location.dump('Extra commands')


def parse_cmds(cmdfile):
    """pull in the required-command list generated from the LSB database"""

    database = Path('database')
    cmds = []
    for line in open(cmdfile).readlines():
        if line[0] == '#':
            continue
        cmdname, cmdpath, appearedin, withdrawnin = line.split()
        if LSBVERSION >= appearedin and (withdrawnin == 'NULL' or withdrawnin > LSBVERSION):
            cmds.append([cmdname,cmdpath])
        #else:                #XXX debug
        #    print "%s: assert fail (%s >= %s and (%s == 'NULL' or %s < %s)" % (cmdname, LSBVERSION, appearedin, withdrawnin, withdrawnin, LSBVERSION)

    database.cmds = cmds
    return database


# main

if __name__ == '__main__':
    argv = sys.argv
    # initialize option parsing

    usage = 'usage: %prog [options] [lsbversion]'
    parser = OptionParser(usage)
    parser.add_option('-e', '--extras', action='store_true', dest='extras',
                      default=False,
                      help='check for extra files in target directories')
    parser.add_option('-v', '--version', action='store_true', dest='version',
                      default=False, help='show program and LSB version')
    parser.add_option( '-n', '--nojournal', action='store_true',
                      dest='nojournal', default=False,
                      help='do not write a journal file')
    parser.add_option('-j', '--journal', action='store', dest='journal',
                      help='use JOURNAL as file/path for journal file')
    parser.add_option('-p', '--prefix', action='store', dest='prefix',
                      help='prefix to prepend to all paths')
    (opts, args) = parser.parse_args()
    if len(args) > 1:
        parser.error('incorrect number of arguments')
    if len(args):
        if argv[1] in LSB_VERSIONS:
            LSBVERSION = argv[1]
        else:
            print "Unsupported LSB version: " + argv[1]
            exit(1)
    else:
        LSBVERSION = LSB_DEFAULT_VERSION

    if opts.version:
        print 'lsbcmdchk.py %s for LSB Specification %s'\
             % (LSBCMDCHK_VERSION, ', '.join(LSB_VERSIONS))

    # setup journal file for certification, if needed

    journal_file = 'journal.lsbcmdchk'
    if opts.nojournal:
        journal_file = '/dev/null'
    if opts.journal:
        journal_file = opts.journal
    journal = tetj.Journal(journal_file, 'lsbcmdchk.py')
    if not journal.journal:
        sys.stderr.write('Could not open journal file')
        sys.exit(1)
    journal.add_config('VSX_NAME=lsbcmdchk.py %s (%s)'
                        % (LSBCMDCHK_VERSION, journal.machine))
    journal.add_config('LSB_VERSION=%s' % LSBVERSION)
    journal.add_config('search prefix is [%s]' % opts.prefix)
    journal.config_end()

    # Look in POSIX-standard path, but also add paths for sysadmin utilities

    binpaths = os.confstr('CS_PATH').split(os.pathsep)
    binpaths = binpaths + ['/sbin', '/usr/sbin']

    database = parse_cmds('cmdlist')
    journal.scenario_info('"total tests in cmdchk %d"' % len(database.cmds))
    for command in database.cmds:
        check_cmd(journal, command)
    if opts.extras:
        check_extras(journal, database)
    journal.close()
    sys.exit(0)

