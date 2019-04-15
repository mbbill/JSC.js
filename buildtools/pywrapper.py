#!/usr/bin/env python

import sys, os
from subprocess import Popen, PIPE, STDOUT

if os.name == 'nt':
    use_shell = True
else:
    use_shell = False

proc = Popen(sys.argv[1:], stdin=None , stdout=PIPE, stderr=PIPE, shell=use_shell)
ret = proc.communicate()

sys.stdout.write(ret[0])
sys.stderr.write(ret[1])

sys.exit(proc.returncode)
