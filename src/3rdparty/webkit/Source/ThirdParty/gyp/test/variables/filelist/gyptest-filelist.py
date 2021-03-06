#!/usr/bin/env python

# Copyright (c) 2009 Google Inc. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

"""
Test variable expansion of '<|(list.txt ...)' syntax commands.
"""

import os
import sys

import TestGyp

test = TestGyp.TestGyp(format='gypd')

expect = test.read('filelist.gyp.stdout')
if sys.platform == 'win32':
  expect = expect.replace('/', r'\\').replace('\r', '')

# Set $HOME so that gyp doesn't read the user's actual
# ~/.gyp/include.gypi file, which may contain variables
# and other settings that would change the output.
os.environ['HOME'] = test.workpath()

test.run_gyp('src/filelist.gyp',
             '--debug', 'variables', '--debug', 'general',
             stdout=expect)

# Verify the filelist.gypd against the checked-in expected contents.
#
# Normally, we should canonicalize line endings in the expected
# contents file setting the Subversion svn:eol-style to native,
# but that would still fail if multiple systems are sharing a single
# workspace on a network-mounted file system.  Consequently, we
# massage the Windows line endings ('\r\n') in the output to the
# checked-in UNIX endings ('\n').

contents = test.read('src/filelist.gypd').replace(
    '\r', '').replace('\\\\', '/')
expect = test.read('filelist.gypd.golden').replace('\r', '')
if not test.match(contents, expect):
  print "Unexpected contents of `src/filelist.gypd'"
  test.diff(expect, contents, 'src/filelist.gypd ')
  test.fail_test()

contents = test.read('src/names.txt')
expect = 'John\nJacob\nJingleheimer\nSchmidt\n'
if not test.match(contents, expect):
  print "Unexpected contents of `src/names.txt'"
  test.diff(expect, contents, 'src/names.txt ')
  test.fail_test()

test.pass_test()
