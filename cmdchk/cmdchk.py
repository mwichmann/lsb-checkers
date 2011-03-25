#!/usr/bin/python
#
# This is a generated file, edit cmdchk.py.sed instead
#
# Copyright (C) 2002-2007 Linux Foundation
#
# cmdchk, python version
# Author: Mats Wichmann, Intel Corporation
#

"""
Test for presence of LSB required commands
Commands are stored in the file cmdlist, generated from LSB specdb

Usage: cmdchk [options]
Prefix, if supplied, is a prefix to prepend to all paths for
examining something other than the running system such as a
mounted filesystem image
"""

import os
import sys
from stat import ST_MODE, S_IXUSR
from optparse import OptionParser
import tetj

# note LSB_VERSIONS is generated, don't hand-edit
# modified from defaults for 4.0 target
LSBCMDCHK_VERSION = '4.0'
LSB_VERSIONS = ['3.0', '3.1', '3.2', '4.0', '4.1']
LSB_DEFAULT_VERSION = LSB_VERSIONS[-2]


class Path:
    """class describing valid paths"""

    def __init__(self, name):
        self.name = name
        self.cmds = []

    def dump(self, tag):
        """emit found paths"""
        sys.stderr.write('%s from %s:\n' % (tag, self.name))
        for cmd in self.cmds:
            sys.stderr.write('   %s\n' % cmd)

    def addcmd (self, name, path):
        """store found path"""
        self.cmds.append([name, path])


def check_cmd(journal, command):
    """check if a command name is found in any of the BINPATHS"""

    (cmdname, cmdpath) = command
    journal.testcase_start(cmdname)

    # Check each of the directories in BINPATHS for the command
    # if cmdpath is set is set, use it in preference to searching for
    # the cmdname name in BINPATHS

    if cmdpath == 'None':
        journal.purpose_start('Looking for command %s' % cmdname)
        for path in BINPATHS:
            if OPTS.prefix:
                path = OPTS.prefix + path
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
        if OPTS.prefix:
            path = OPTS.prefix + cmdpath
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


def check_extras(database):
    """collect all the commands in BINPATHS. Strike them off if they match
    ones in the command list from the LSB database. Report the extras."""

    for path in BINPATHS:
        if OPTS.prefix:
            path = OPTS.prefix + path
        location = Path(path)
        location.cmds = os.listdir(path)

        # buggy: misses the fullpath ones, and doesn't work with prefix

        for command in location.cmds[:]:  # examine a copy
            if command in database.cmds:
                location.cmds.remove(command)  # so we can remove from orig
        if len(location.cmds):
            location.dump('Extra commands')


def parse_cmds(cmdfile):
    """pull in the required-command list generated from the LSB database"""

    database = Path('database')
    for line in open(cmdfile).readlines():
        if line[0] == '#':
            continue
        (cmdname, cmdpath, appearedin, withdrawnin) = line.split()
        if LSBVERSION >= appearedin and (withdrawnin == 'NULL'
                or withdrawnin > LSBVERSION):
            database.addcmd(cmdname, cmdpath)
        # else:  # turn on for debugging (it's not a "real" assert)
        #    print "%s: assert fail (%s >= %s and (%s == 'NULL' or %s < %s)" % (cmdname, LSBVERSION, appearedin, withdrawnin, withdrawnin, LSBVERSION)

    return database


# main

if __name__ == '__main__':
    ARGV = sys.argv

    # initialize option parsing

    USAGE = 'usage: %prog [options] [lsbversion]'
    PARSER = OptionParser(USAGE)
    PARSER.add_option(
        '-e',
        '--extras',
        action='store_true',
        dest='extras',
        default=False,
        help='check for extra files in target directories',
        )
    PARSER.add_option(
        '-v',
        '--version',
        action='store_true',
        dest='version',
        default=False,
        help='show program and LSB version',
        )
    PARSER.add_option(
        '-n',
        '--nojournal',
        action='store_true',
        dest='nojournal',
        default=False,
        help='do not write a journal file',
        )
    PARSER.add_option('-j', '--journal', action='store', dest='journal',
                      help='use JOURNAL as file/path for journal file')
    PARSER.add_option('-p', '--prefix', action='store', dest='prefix',
                      help='prefix to prepend to all paths')
    (OPTS, ARGS) = PARSER.parse_args()
    if len(ARGS) > 1:
        PARSER.error('incorrect number of arguments')
    if len(ARGS):
        if ARGV[1] in LSB_VERSIONS:
            LSBVERSION = ARGV[1]
        else:
            print 'Unsupported LSB version: ' + ARGV[1]
            exit(1)
    else:
        LSBVERSION = LSB_DEFAULT_VERSION

    if OPTS.version:
        print 'lsbcmdchk.py %s for LSB Specification %s' \
            % (LSBCMDCHK_VERSION, ', '.join(LSB_VERSIONS))

    # setup journal file for certification, if needed

    JOURNAL = 'journal.lsbcmdchk'
    if OPTS.nojournal:
        JOURNAL = '/dev/null'
    if OPTS.journal:
        JOURNAL = OPTS.journal
    JOURNAL = tetj.Journal(JOURNAL, 'lsbcmdchk.py')
    if not JOURNAL.journal:
        sys.stderr.write('Could not open journal file')
        sys.exit(1)
    JOURNAL.add_config('VSX_NAME=lsbcmdchk.py %s (%s)'
                       % (LSBCMDCHK_VERSION, JOURNAL.machine))
    JOURNAL.add_config('LSB_VERSION=%s' % LSBVERSION)
    JOURNAL.add_config('search prefix is [%s]' % OPTS.prefix)
    JOURNAL.config_end()

    # Look in POSIX-standard path, but also add paths for sysadmin utilities

    BINPATHS = os.confstr('CS_PATH').split(os.pathsep)
    BINPATHS = BINPATHS + ['/sbin', '/usr/sbin']

    DB = parse_cmds('cmdlist')
    JOURNAL.scenario_info('"total tests in cmdchk %d"'
                          % len(DB.cmds))
    for CMD in DB.cmds:
        check_cmd(JOURNAL, CMD)
    if OPTS.extras:
        check_extras(DB)
    JOURNAL.close()
    sys.exit(0)

