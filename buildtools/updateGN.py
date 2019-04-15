#!/usr/bin/env python
# Copyright 2019 The Chromium Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.
"""Ensure that CIPD fetched the right GN version.
Due to crbug.com/944367, using cipd in gclient to fetch GN binaries
may not always work right. This is a script that can be used as
a backup method to force-install GN at the right revision, just in case.
It should be used as a gclient hook alongside fetching GN via CIPD
until we have a proper fix in place.
TODO(crbug.com/944667): remove this script when it is no longer needed.
"""
from __future__ import print_function
import argparse
import io
import os
import re
import stat
import subprocess
import sys
import urllib2
import zipfile
BUILDTOOLS_DIR = os.path.abspath(os.path.dirname(__file__))
SRC_DIR = os.path.dirname(BUILDTOOLS_DIR)
def main():
  parser = argparse.ArgumentParser()
  parser.add_argument('version',
          help='CIPD "git_revision:XYZ" label for GN to sync to')
  args = parser.parse_args()
  if not args.version.startswith('git_revision:'):
    print('Unknown version format: %s' % args.version)
    return 2
  desired_revision = args.version[len('git_revision:'):]
  if sys.platform == 'darwin':
    platform, member, dest_dir = ('mac-amd64', 'gn', 'mac')
  elif sys.platform == 'win32':
    platform, member, dest_dir = ('windows-amd64', 'gn.exe', 'win')
  else:
    platform, member, dest_dir = ('linux-amd64', 'gn', 'linux64')
  path_to_exe = os.path.join(BUILDTOOLS_DIR, dest_dir, member)
  cmd = [path_to_exe, '--version']
  cmd_str = ' '.join(cmd)

  url = 'https://chrome-infra-packages.appspot.com/dl/gn/gn/%s/+/%s' % (
      platform, args.version)
  try:
    zipdata = urllib2.urlopen(url).read()
  except urllib2.HTTPError as e:
    print('Failed to download the package from %s: %d %s' % (
        url, e.code, e.reason))
    return 1
  except Exception as e:
    print('Failed to download the package from %s:\n%s' % (url, e.message))
    return 1
  try:
    zf = zipfile.ZipFile(io.BytesIO(zipdata))
    zf.extract(member, os.path.join(BUILDTOOLS_DIR, dest_dir))
  except Exception as e:
    print('Failed to extract the binary:\n%s\n' % e.msg)
    return 1
  try:
    os.chmod(path_to_exe,
             stat.S_IRUSR | stat.S_IWUSR | stat.S_IXUSR |  # This is 0o755.
             stat.S_IRGRP | stat.S_IXGRP |
             stat.S_IROTH | stat.S_IXOTH)
  except Exception as e:
    print('Failed to make the binary executable:\n%s\n' %
            e.message)
    return 1
  return 0
if __name__ == '__main__':
  sys.exit(main())
