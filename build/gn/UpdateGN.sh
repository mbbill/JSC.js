#!/bin/bash
set -euo pipefail

cd "$( dirname "${BASH_SOURCE[0]}" )"

PYTHON="python"
if which python2 >/dev/null; then
    PYTHON="python2"
fi

if [ "$(uname -s)" = "Darwin" ]; then
    "$PYTHON" gsutil.py cp gs://chromium-gn/d43122f6140d0711518aa909980cb009c4fbce3d mac/gn
    chmod +x mac/gn
elif [ "$(uname -s)" = "Linux" ]; then
    "$PYTHON" gsutil.py cp gs://chromium-gn/3523d50538357829725d4ed74b777a572ce0ac74 linux/gn
    chmod +x linux/gn
else
    echo "Unknown OS" >&2
    exit 2
fi
